/*********************************************************************************************************************/
/*著作所有権 ：   Zhamalbekov Turatbek                                                            */
/*テーマ名   ：STEP3                                                                           　　　　　　　　　　  */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：main.c                                                                                                */
/*仕様       ：システムメイン制御                                                                                    */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.５.5：新規作成                                                                                  　トラベック */
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
#define DEFINE_RL_GLOBAL
#define DEFINE_CXPI_GLOBAL
#define DEFINE_APRI_GLOBAL
#define DEFINE_SFR_GLOBAL

#pragma vect INTCSI00 SPI_interrupt


#include "./univ.h"

/*void Reg_SPI00_Set(void);*/

#if 0
/*********************************************************************************************************************/
/*    関数名          : ram_error()                                                                                  */
/*    機能            : RAMチェックの結果エラー発生時の処理                                                          */
/*    引数            : なし                                                                                         */
/*    戻り値          : なし                                                                                         */
/*    呼び出し関数名  : スタートアップルーチン                                                                       */
/*********************************************************************************************************************/
void ram_error(void){
    
    WDTE = WDTE_RESET;    /* RAMチェックにてエラー発生時はウォッチドッグタイマによるマイコンリセットを実施 */
    
}
#endif
/*********************************************************************************************************************/
/*    関数名          : hdwinit()                                                                                    */
/*    機能            : ハードウェアのレジスタ設定                                                                   */
/*    引数            : なし                                                                                         */
/*    戻り値          : なし                                                                                         */
/*    呼び出し関数名  : スタートアップルーチン                                                                       */
/*********************************************************************************************************************/
void hdwinit(void){
    
    Uchar  func_chk     = OK;          /* 関数の正常終了チェック用の宣言と初期化 */
#if 0    
    /* クロック発生回路の設定 */
    /* CPUクロックをX1発進の3逓倍 24MHzに設定する */
    CMC = SET_CMC;                     /* メインシステムクロックをX1発振モードを選択 */
    OSTS = SET_OSTS;                   /* X1発振安定時間256usecに設定 */
    MSTOP = CLEAR;                     /* X1発振開始 */
    /* X1発振安定待ち */
    while(OSTC < READ_OSTC){
        NOP();
    }                                  /* 256usec経過するまでwhile文とNOP命令にてウェイト時間を確保 */ 
    MCM0 = SET;                        /* PLLクロック周波数 fPLL≦32MHzに設定 */
    CSS = CLEAR;                       /* CPUクロック周波数fCLK = fMPメイン/PLLクロック周波数に設定 */

    /* PLLクロック安定時間を512/fMAIN = 64usecに設定 */
    LCKSEL1 = SET;
    LCKSEL0 = CLEAR;
    PLLDIV0 = SET;                     /* PLL分周を4分周に設定 */
    PLLMUL = CLEAR;                    /* PLL逓倍を12逓倍に設定 */ 
    
    /* 1usec経過を待つ (1/8MHz)×8命令 = 1usec */
    NOP();NOP();NOP();NOP();
    NOP();NOP();NOP();NOP();
    
    PLLON = SET;                       /* PLLクロック発振開始 */
    /* PLLクロック発振安定待ち */
    while(LOCK == CLEAR){
        NOP();
    }                                  /* 64usec経過するまでwhile文とNOP命令にてウェイト時間を確保 */      
    MDIV = SET_MDIV;                   /* fMPは分周なしに設定 */
    SELPLL = SET;                      /* fMP = fPLLに設定(fCLK = fPLL 24MHz) */
    HIOSTOP = SET;                     /* 高速オンチップオシレータ停止 */
    OSMC = SET_OSMC;                   /* 周辺機能への低速オンチップオシレータクロック供給停止に設定 */
#endif
    PER0 = SET_PER0;                   /* SAU0へクロック供給 */
    PER1 = SET_PER1;                   /* クロック供給無し */
    PER2 = SET_PER2;                   /* LIN0,LIN1,CAN0へクロック供給停止 */
    
    
    WDTE = WDTE_CLEAR;                 /* ウォッチドッグタイマをクリア */
    

    
    /* 割り込みマスクフラグの初期設定 hdw_initでは全て禁止 */
    MK0L = SET_MK0L;                   /* 0xFF MK0Lに紐付けられた割り込みを全て禁止に設定 */
    MK0H = SET_MK0H;                   /* 0xFF MK0Hに紐付けられた割り込みを全て禁止に設定 */
    MK1L = SET_MK1L;                   /* 0xFF MK1Hに紐付けられた割り込みを全て禁止に設定 */
    MK1H = SET_MK1H;                   /* 0xFF MK1Lに紐付けられた割り込みを全て禁止に設定 */
    MK2L = SET_MK2L;                   /* 0xFF MK2Lに紐付けられた割り込みを全て禁止に設定 */
    MK2H = SET_MK2H;                   /* 0xFF MK2Hに紐付けられた割り込みを全て禁止に設定 */
    
    /* アナログ入力/デジタル入出力の切り替え */
    ADPC = SET_ADPC;                   /* 全ての端子をデジタル入出力端子に設定 */
    
    /* ポート出力ラッチの初期化 */
    func_chk &= Reg_Latch_Set();       /* ポート出力ラッチの初期設定 */
    
    /* ポートモード、内蔵プルアップ抵抗の初期化 */
    func_chk &= Reg_Port_Set();        /* ポートモード、内蔵プルアップ抵抗の初期設定 */

    /* 周辺I/Oリダイレクションレジスタの初期化 */
    func_chk &= Reg_Func_Set();        /* 端子機能の初期設定 */
    
    
    

    /* 低電圧検出回路の設定 */
    LVIM = SET_LVIM;                   /* 電圧検出レベルレジスタは書き換え禁止（オプションバイト設定のまま）*/
    
    Reg_SPI_Set();
     
    DRV_wakeup();
    
      
    DRV_enable();



    /* 割り込み要求フラグのクリア */
    IF0L = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    IF0H = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    IF1L = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    IF1H = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    IF2L = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    IF2H = CLEAR;                      /* 0x00 通常動作開始前に割り込み要求フラグを全てクリアする */
    
    /* 割り込み優先順位の指示 */
    PR00L = SET_PR00L;                 /* 0xFF 優先順位の指定無し */
    PR10L = SET_PR10L;                 /* 0xFF 優先順位の指定無し */
    PR00H = SET_PR00H;                 /* 0xFF 優先順位の指定無し */
    PR10H = SET_PR10H;                 /* 0xFF 優先順位の指定無し */
    PR01L = SET_PR01L;                 /* 0xFC CXPI受信完了割込み、ステータス割り込みを高優先に設定 */
    PR11L = SET_PR11L;                 /* 0xFC CXPI受信完了割込み、ステータス割り込みを高優先に設定 */
    PR01H = SET_PR01H;                 /* 0xFF 優先順位の指定無し */
    PR11H = SET_PR11H;                 /* 0xFF 優先順位の指定無し */
    PR02L = SET_PR02L;                 /* 0xF7 CXPI外部割込みを高優先に設定 */
    PR12L = SET_PR12L;                 /* 0xF7 CXPI外部割込みを高優先に設定 */
    PR02H = SET_PR02H;                 /* 0xFF 優先順位の指定無し */
    PR12H = SET_PR12H;                 /* 0xFF 優先順位の指定無し */
       
    if(func_chk == OK){
        WDTE = WDTE_CLEAR;             /* 関数が正常終了時はウォッチドッグタイマのカウント値をクリア */
    }
    else{
        WDTE = WDTE_RESET;             /* 関数が異常終了時はウォッチドッグタイマによるマイコンリセット */
    }
    
    EI();                              /* 割り込み処理を許可 */
    
}





/*********************************************************************************************************************/
/*    関数名          : main()                                                                                       */
/*    機能            : メイン制御                                                                                   */
/*                      メイン周期:MAX 5msec以内                                                                     */
/*    引数            : なし                                                                                         */
/*    戻り値          : なし                                                                                         */
/*    呼び出し関数名  : スタートアップルーチン                                                                       */
/*********************************************************************************************************************/
 Uint loop = 1U;
 Uint step_num = 0x05;
 Uint freq = 0x0640;

 
void main(void){
	
	 Uint step_number = NG;        			/* ステップ数　変数初期化*/
	 Drv_long F_step = NG;				/* ステップ周波数　初期化*/
	 Uchar loop = NG;				/* ループ　初期化*/
	 Drv_long rpm = NG;
        
	 /* F_step(steps/second) =LOOP_COUNT * (v(rpm) * 360('/rot)) / (one_step_angle('/step) * microstep_mode(steps/microstep) *60(s/min));   */
	 /* 100 hz(F_step) =LOOP_COUNT(for loop) * (300rpm * 360') / (18('/step) * 1(full_steo) * 60(sec/min));   */
	 
          
	
	
	 loop = 0x01; 
	 step_number = 0x3e8;
	 rpm = 1500;  /* 300 rpm == 1000 pps)*/
	 F_step = DRV_Calculate_F_Step(rpm, MICROSTEP_1_2);
		
	 while(loop)
	   {	
		   if(F_step == 0)
		   {
			   DRV_one_step(DRV_STEP_BACK, DRV_SET_HALFSTEP); 
			   F_step = DRV_Calculate_F_Step(rpm, MICROSTEP_1_2);
			   
			   /*step_number--;*/
			   if(step_number == 0)
			   {				
				   loop = 0x00;
				  
			   }
			   else{
				   ;
			   }
			   
			   
		   }
		   else{
			   ;
		   }
				
		F_step--;
           }
	
		

}



/*********************************************************************************************************************/
/*    関数名          : SPI_interrupt()                                                                               */
/*    機能            : SPI バーファ空きの割込み発生時のイベント                                          　　　　     */
/*    引数            : なし                                                                                         */
/*    戻り値          :                                                                         　　　　　　　　　　　*/
/*                                                                                          　　　　　　　　　　　　　 */
/*    呼び出し関数名  :                                                                 　　　　　　　　　　　　　　　 */
/*********************************************************************************************************************/

__interrupt static void SPI_interrupt(void)
{
    volatile Uint sio_dummy;

    if (spi_tx_count > 0U)
        {
            if (0U != spi_rx_address)
            {
                sio_dummy = SDR00;
                spi_rx_address ++;
            }
            else
            {
                sio_dummy = SDR00;
            }

            if(0U != spi_tx_address)
            {
                SDR00 = *spi_tx_address;
                spi_tx_address ++;
            }
            else
            {
                SDR00 = 0xFFFFUL;
            }

            spi_tx_count --;
        }
        else 
        {
            if (0U == spi_tx_count)
            {
                if (0U != spi_rx_address)
                {
                    sio_dummy = SDR00;
                    *spi_rx_address = sio_dummy;
                  
                }
                else
                {
                    sio_dummy = SDR00;
                }
            }

            SPI_SendEnd();    /* complete send */
            SPI_ReceiveEnd();    /* complete receive */
        }
    
}




/*********************************************************************************************************************/
/*    関数名          : Reg_Port_Set()                                                                               */
/*    機能            : ポートモードレジスタ、内蔵プルアップ抵抗の設定                                               */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char result                                                                         */
/*                      関数の正常終了で1を返す                                                                      */
/*    呼び出し関数名  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Port_Set(void){
    
    Uchar result = NG;     /* 戻り値の初期化、正常終了で1にする */
    
    /* ポートモードの設定 */
    PM0  = SET_PM0;
    PM1  = SET_PM1;
    PM3  = SET_PM3;
    PM4  = SET_PM4;
    PM5  = SET_PM5;
    PM6  = SET_PM6;
    PM7  = SET_PM7;
    PM8  = SET_PM8;
    PM9  = SET_PM9;
    PM12 = SET_PM12;
    PM14 = SET_PM14;
    
   
    
    result = OK;         /* 関数の正常終了で戻り値を1に設定 */
    return result;
    
}

/*********************************************************************************************************************/
/*    関数名          : Reg_Latch_Set()                                                                              */
/*    機能            : ポートの出力ラッチの初期化処理                                                               */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char result                                                                         */
/*                      関数の正常終了で1を返す                                                                      */
/*    呼び出し関数名  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Latch_Set(void){
    
    Uchar result = NG;     /* 戻り値の初期化、正常終了で1にする */
    
    /* ポート出力ラッチの設定 */
    P0  = SET_P0;
    P1  = SET_P1;
    P3  = SET_P3;
    P4  = SET_P4;
    P5  = SET_P5;
    P6  = SET_P6;
    P7  = SET_P7;
    P8  = SET_P8;
    P9  = SET_P9;
    P12 = SET_P12;
    P14 = SET_P14;
    
    result = OK;          /* 関数の正常終了で戻り値を1に設定 */
    return result;
    
}

/*********************************************************************************************************************/
/*    関数名          : Reg_Func_Set()                                                                               */
/*    機能            : 周辺I/Oリダイレクションレジスタの設定                                                        */
/*    引数            : なし                                                                                         */
/*    戻り値          : unsigned char result                                                                         */
/*                      関数の正常終了で1を返す                                                                      */
/*    呼び出し関数名  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Func_Set(void){

    Uchar result = NG;     /* 戻り値の初期化、正常終了で1にする */
    
    PIOR0 = SET_PIOR0;
    PIOR1 = SET_PIOR1;
    PIOR2 = SET_PIOR2;
    PIOR3 = SET_PIOR3;
    PIOR4 = SET_PIOR4;
    PIOR5 = SET_PIOR5;
    PIOR6 = SET_PIOR6;
    PIOR7 = SET_PIOR7;
    
    result = OK;           /* 関数の正常終了で戻り値を1に設定 */
    return result;
    
}






