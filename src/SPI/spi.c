/*********************************************************************************************************************/
/*著作所有権 ：小島プレス工業(株) 電子技術部 電子設計課                                                             */
/*テーマ名   ：STEP3                                                                                                */
/*メーカ     ：ルネサスエレクトロニクス                                                                             */
/*デバイス   ：R5F10PPJ(RL78/F13)                                                                                   */
/*ファイル名 ：spi.c                                                                                                */
/*仕様       ：SPI通信処理                                                                                          */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.**.**：新規作成                                                                                   トラベック */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*                                                                                                                   */
/*********************************************************************************************************************/
#include "prag.h"
#include "./spi_univ.h"


/*********************************************************************************************************************/
/*    関数名          : Reg_SPI_Set()                                                                                */
/*    機能            : SPIの初期設定                                                                                */
/*    引数            : なし                                                                                         */
/*    戻り値          :                                                                                              */
/*    呼び出し関数名  : hdwinit()                                                                                    */
/*********************************************************************************************************************/


void Reg_SPI_Set(void)
{
    SAU0EN = 1U;    /* supply SAU0 clock */
    NOP();
    NOP();
    NOP();
    NOP();
    SPS0 = _0001_SAU_CK00_FCLK_1 | _0000_SAU_CK01_FCLK_0;
    
    ST0 |= _0001_SAU_CH0_STOP_TRG_ON;    /* disable CSI00 */
    CSIMK00 = 1U;    /* disable INTCSI00 interrupt */
    CSIIF00 = 0U;    /* clear INTCSI00 interrupt flag */
    /* Set INTCSI00 low priority */
    CSIPR100 = 1U;
    CSIPR000 = 1U;
    SIR00 = _0004_SAU_SIRMN_FECTMN | _0002_SAU_SIRMN_PECTMN | _0001_SAU_SIRMN_OVCTMN;    /* clear error flag */
    SMR00 = _0020_SAU_SMRMN_INITIALVALUE | _0000_SAU_CLOCK_SELECT_CK00 | _0000_SAU_CLOCK_MODE_CKS |
            _0000_SAU_TRIGGER_SOFTWARE | _0000_SAU_MODE_CSI | _0000_SAU_TRANSFER_END;
    SCR00 = _C000_SAU_RECEPTION_TRANSMISSION | _1000_SAU_TIMING_2 | _0000_SAU_MSB | _000F_SAU_LENGTH_16;
    SDR00 = _CE00_CSI00_DIVISOR;
    SO0 &= ~_0100_SAU_CH0_CLOCK_OUTPUT_1;    /* CSI00 clock initial level */
    SO0 &= ~_0001_SAU_CH0_DATA_OUTPUT_1;    /* CSI00 SO initial level */
    SOE0 |= _0001_SAU_CH0_OUTPUT_ENABLE;    /* enable CSI00 output */
    SSE0 |= _01_SAU_CH0_SSI00_USED;
    
    /* Set SI00 pin */
    PM1 |= 0x40U;
    /* Set SO00 pin */
    P1 |= 0x20U;
    PM1 &= 0xDFU;
    /* Set SCK00 pin */
    P1 |= 0x80U;
    PM1 &= 0x7FU;
   
    /* Set SSI00 pin */  

}

/*********************************************************************************************************************/
/*    関数名          : Reg_SPI_Set()                                                                                */
/*    機能            : SPIのread and write                                                                          */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char                                                                                */
/*    呼び出し関数名  : main()                                                                                       */
/*********************************************************************************************************************/

Spi_char SPI_Send_Receive(Spi_int * const tx_buf, Spi_int tx_num, Spi_int * const rx_buf)
{  
        spi_tx_count = tx_num;        /* send data count */
        spi_tx_address = tx_buf;     /* send buffer pointer */
        spi_rx_address = rx_buf;     /* receive buffer pointer */
        CSIMK00 = 1U;    /* disable INTCSI00 interrupt */

        if (0U != spi_tx_address)
        {
         	   
	    SDR00 = *spi_tx_address;
	    spi_tx_address ++;	   		             
        }
        else
        {
            SDR00 = 0xFFFFU;
        }
        spi_tx_count --;
	
	 CSIMK00 = 0U;   /*  enable INTCSI00 interrupt*/

    return 0;
}


/*********************************************************************************************************************/
/*    関数名          : SPI_Start()                                                                                  */
/*    機能            : SPI通信開始                                                                                  */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char                                                                                */
/*    呼び出し関数名  : main()                                                                                       */
/*********************************************************************************************************************/
void SPI_Start(void)
{
	
	P3 = 0x00;
    SCR00 |= _C000_SAU_RECEPTION_TRANSMISSION ;
    SO0 &= ~_0100_SAU_CH0_CLOCK_OUTPUT_1;   /* CSI00 clock initial level */
    SO0 &= ~_0001_SAU_CH0_DATA_OUTPUT_1;           /* CSI00 SO initial level */
    SOE0 |= _0001_SAU_CH0_OUTPUT_ENABLE;           /* enable CSI00 output */
    SS0 |= _0001_SAU_CH0_START_TRG_ON;             /* enable CSI00 */
    CSIIF00 = 0U;    /* clear INTCSI00 interrupt flag */
    CSIMK00 = 0U;    /* enable INTCSI00 */
}


/*********************************************************************************************************************/
/*    関数名          : SPI_Stop()                                                                                   */
/*    機能            : SPI通信停止                                                                                  */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char                                                                                */
/*    呼び出し関数名  : main()                                                                                       */
/*********************************************************************************************************************/
void SPI_Stop(void)
{
    CSIMK00 = 1U;    /* disable INTCSI00 interrupt */
    ST0 |= _0001_SAU_CH0_STOP_TRG_ON;        /* disable CSI00 */
    SOE0 &= ~_0001_SAU_CH0_OUTPUT_ENABLE;    /* disable CSI00 output */
    SCR00 &= ~ RECEPTION_TRANSMISSION_STOP; 
    CSIIF00 = 0U;    /* clear INTCSI00 interrupt flag */
    P3 = 0x01; 
}



/*********************************************************************************************************************/
/*    関数名          : SPI_SendEnd()                                                                               */
/*    機能            : SPIデータ送信完了イベント                                                        　　　　　　*/
/*    引数            : なし                                                                                         */
/*    戻り値          :                                                                     　　　　　　　　　　　 　 */
/*    呼び出し関数名  : SPI_interrupt()                                                                 　　　　　　 */
/*********************************************************************************************************************/

void SPI_SendEnd(void)
{
   
    SPI_Stop();
     
      
}

/*********************************************************************************************************************/
/*    関数名          : SPI_ReceiveEnd()                                                                               */
/*    機能            : SPIデータ受信完了イベント                                                        　　　　　　　*/
/*    引数            : なし                                                                                         */
/*    戻り値          : なし                                                                       　　　　　　　　　 */
/*                      関数の正常終了で1を返す                                                                      */
/*    呼び出し関数名  : SPI_interrupt()                                                               　　　　　　　　 */
/*********************************************************************************************************************/

void SPI_ReceiveEnd(void)
{

}






