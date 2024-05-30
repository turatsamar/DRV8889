/*********************************************************************************************************************/
/*著作所有権 ：                                                             */
/*テーマ名   ：STEP3                                                                            */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：spi_glob.h                                                                                                */
/*仕様       ：グローバル変数宣言ファイル                                                                            */
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
#ifndef spi_glob
#define spi_glob




GLOBAL volatile Spi_int *spi_rx_address;               /* SPI receive buffer address */
GLOBAL volatile Spi_int  spi_rx_length;                /* SPI receive data length */
GLOBAL volatile Spi_int  spi_rx_count;                 /* SPI receive data count */
GLOBAL volatile Spi_int *spi_tx_address;               /* SPI send buffer address */
GLOBAL volatile Spi_int  spi_send_length;              /* SPI send data length */
GLOBAL volatile Spi_int  spi_tx_count;                 /* SPI send data count */
 

#endif
