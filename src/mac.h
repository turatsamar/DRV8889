/*********************************************************************************************************************/
/*著作所有権 ：小島プレス工業(株) 電子技術部 電子設計課                                                              */
/*テーマ名   ：CXPI RRCN向け疑似負荷開発                                                                             */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：mac.h                                                                                                 */
/*仕様       ：汎用マクロ定義                                                                                        */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.**.**：新規作成                                                                                         松川 */
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
#ifndef rl_mac
#define rl_mac

/* 汎用マクロ定義 */
#define LO            (0u)
#define HI            (1u)
#define CLEAR         (0u)
#define SET           (1u)
#define NG            (0u)
#define OK            (1u)


/* 汎用定数定義 */
/* 整数定数 */
#define CONST_0       (   0u)
#define CONST_1       (   1u)
#define CONST_2       (   2u)
#define CONST_3       (   3u)
#define CONST_4       (   4u)
#define CONST_5       (   5u)
#define CONST_6       (   6u)
#define CONST_7       (   7u)
#define CONST_8       (   8u)
#define CONST_9       (   9u)
#define CONST_10      (  10u)
#define CONST_24      (  24u)
#define CONST_40      (  40u)
#define CONST_255     ( 255u)
#define CONST_2016    (2016u)

/* 16進定数 */
#define CONST_00H     (0x00u)
#define CONST_01H     (0x01u)
#define CONST_02H     (0x02u)
#define CONST_05H     (0x05u)
#define CONST_0AH     (0x0Au)
#define CONST_0FH     (0x0Fu)
#define CONST_10H     (0x10u)
#define CONST_55H     (0x55u)
#define CONST_0EH     (0x0Eu)
#define CONST_AAH     (0xAAu)
#define CONST_F0H     (0xF0u)
#define CONST_FFH     (0xFFu)

#define VAL_0000H     (0x0000u)
#define VAL_00FFH     (0x00FFu)
#define VAL_FFFFH     (0xFFFFu)
#define VAL_0         (0u)
#define VAL_1         (1u)

/* ウォッチドッグタイマ制御用マクロ定義 */
#define WDTE_RESET    (0x00u)    /* ウォッチドッグタイマによるマイコンリセット */
#define WDTE_CLEAR    (0xACu)    /* ウォッチドッグタイマのクリア */

/* RAMチェックアドレスのマクロ定義 */
#define EXP_RAM_ST_ADR    (0xFF700u)    /* R5F10BLCKFBのRAMスタートアドレス */


/* hdwinit() ハードウェアのレジスタ設定内で使用するマクロ定義 */
/* 動作クロックの設定 */
/* クロック動作モード制御レジスタ */
#define SET_CMC      (0x40u)     /* メインシステムクロックのモードをX1発振モードに設定 */

/* 発振安定時間選択レジスタ */
#define SET_OSTS     (0x03u)     /* 発振安定時間に2^11/8MHz=256usecを選択 */

/*  発振安定時間カウンタ状態レジスタ */
#define READ_OSTC    (0xF0u)     /* 発振安定時間2^11/8MHz=256usec経過時のレジスタ値 */

/* fMPクロック分周レジスタ */
#define SET_MDIV     (0x00u)     /* fMPは分周しない */

/* 動作スピードモードレジスタ */
#define SET_OSMC     (0x80u)     /* 周辺機能への低速オンチップオシレータクロック供給停止 */

/* クロック選択レジスタ */
#define SET_CKSEL    (0x00u)     /* タイマRDはfMPクロック=24MHzを選択 */

/* 周辺イネーブルレジスタ */
#define SET_PER0     (0x04u)     /* SAU0へ入力クロック供給 */
#define SET_PER1     (0x00u)     /* 入力クロック供給無し */
#define SET_PER2     (0x00u)     /* LIN0、LIN1、CAN0への入力クロック供給停止 */


/* PLLクロック設定 */
/* STOPモード遷移前PLLクロック停止用 */
#define PLLSTS_START (0x88u)    /* PLLクロックが発振開始されている状態 */ 


/* 割り込みマスク･フラグ･レジスタ設定値 */
#define SET_MK0L      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK0H      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK1L      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK1H      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK2L      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK2H      (0xFFu)     /* 該当する割り込みすべて禁止 */
#define SET_MK3L      (0xFFu)     /* 該当する割り込みすべて禁止 */

/* 割り込み優先順位指定フラグ・レジスタ設定値 */
#define SET_PR00L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR10L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR00H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR10H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR01L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR11L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR01H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR11H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR02L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR12L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR02H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR12H     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR03L     (0xFFu)     /* 優先順位の指定無し */
#define SET_PR13L     (0xFFu)     /* 優先順位の指定無し */


/* アナログ入力/デジタル入出力の切り替え */
#define SET_ADPC      (0x01u)     /* 全ての端子をデジタル入出力端子に設定 */

/* 低電圧検出回路の設定 */
#define SET_LVIM      (0x00u)     /* 低電圧検出レベルレジスタの書き換え禁止 */

/* ポートモード初期値マクロ定義 */
/* 0:出力、1:入力 */
#define SET_PM0       (0xF0u)
#define SET_PM1       (0x00u)
#define SET_PM3       (0xE0u)
#define SET_PM4       (0x00u)
#define SET_PM5       (0x00u)
#define SET_PM6       (0x00u)
#define SET_PM7       (0x00u)
#define SET_PM8       (0x00u)
#define SET_PM9       (0x00u)
#define SET_PM12      (0x1Eu)
#define SET_PM14      (0xFEu)


/* プルアップ抵抗オプションの設定 */
#define SET_PU0       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU1       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU3       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU4       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU5       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU6       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU7       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU9       (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU10      (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU12      (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU14      (0x00u)     /* 内蔵プルアップ抵抗なし */
#define SET_PU15      (0x00u)     /* 内蔵プルアップ抵抗なし */

/* ポート出力ラッチの初期値 */
#define SET_P0        (0x00u)
#define SET_P1        (0xA0u)    /* P15とP17は1に設定 */
#define SET_P3        (0x01u)
#define SET_P4        (0x00u)
#define SET_P5        (0x00u)
#define SET_P6        (0x00u)
#define SET_P7        (0x00u)
#define SET_P8        (0x00u)
#define SET_P9        (0x00u)
#define SET_P12       (0x00u)
#define SET_P14       (0x00u)

/* ポート･入力・モード･レジスタ初期値マクロ定義 */
#define SET_PIM1      (0x00u)     /* 通常入力バッファとして使用 */
#define SET_PIM3      (0x00u)     /* 通常入力バッファとして使用 */
#define SET_PIM5      (0x00u)     /* 通常入力バッファとして使用 */
#define SET_PIM6      (0x00u)     /* 通常入力バッファとして使用 */
#define SET_PIM7      (0x00u)     /* 通常入力バッファとして使用 */
#define SET_PIM12     (0x00u)     /* 通常入力バッファとして使用 */

/* ポート･出力・モード･レジスタ初期値マクロ定義 */
#define SET_POM1      (0x00u)     /* 通常出力モードとして使用 */
#define SET_POM6      (0x00u)     /* 通常出力モードとして使用 */
#define SET_POM7      (0x00u)     /* 通常出力モードとして使用 */
#define SET_POM12     (0x00u)     /* 通常出力モードとして使用 */

/* ポート･モード･コントロール・レジスタ初期値マクロ定義 */
#define SET_PMC7      (0xE0u)     /* デジタル入出力として使用 */
#define SET_PMC12     (0xDEu)     /* デジタル入出力として使用 */

/* ポート入力閾値制御レジスタ初期値マクロ定義 */
#define SET_PITHL1    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL3    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL4    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL5    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL6    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL7    (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL10   (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL12   (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */
#define SET_PITHL15   (0x00u)     /* LOレベル閾値1.75V,HIレベル閾値3.25Vに設定 */

/* 周辺I/Oリダイレクションレジスタ初期値マクロ定義 */

/* タイマアレイユニット0出力端子設定 */
/* TO00:P17 TO01:P30 TO02:P16 TO03:P125 TO04:P13 TO05:P15 TO06:P14 TO07:P120 */
/* TO10:P41 TO11:P12 TO12:P11 TO13:P10  TO14:P31 TO15:P70 TO16:P32 TO17:P71  */
#define SET_PIOR0     (0x00u)
#define SET_PIOR1     (0x00u)
#define SET_PIOR2     (0x00u)
#define SET_PIOR3     (0x00u)

/* シリアル通信入出力端子設定 */
/* LRxD0:P14 LTxD0:P13 */
#define SET_PIOR4     (0x00u)

/* 外部割込み、キー割込み端子設定 */
/* 外部割込み、キー割込み機能は使用しないためデフォルト */
#define SET_PIOR5     (0x00u)

/* SNOOZEステータス出力端子設定 */
/* SNOOZEステータス機能は使用しないためデフォルト */
#define SET_PIOR6     (0x00u)

/* タイマRD入出力端子設定 */
/* タイマRD機能は使用しないためデフォルト */
#define SET_PIOR7     (0x00u)

/* リアルタイム・クロックの補正クロック出力端子設定 */
/* リアルタイム・クロックの補正クロック出力は使用しないためデフォルト */
#define SET_PIOR8     (0x00u)

/* ポートモード選択レジスタ初期値マクロ定義 */
#define SET_PMS       (0x00u)    /* 出力ラッチの出力レベルをリードする */

/* TAU0初期値マクロ定義 */
#define SET_TPS0      (0x3040u)  /* 動作クロックはCK00:fclk/2^0 CK01:fclk/2^4 CK02:fclk/2^0 CK03:fclk/2^3を選択 */
#define SET_TOE0L     (0x00u)    /* TAU0の出力禁止 */
#define SET_TS0L      (0x02u)    /* TAU01の動作開始 */

#define SET_TMR01     (0x8000u)  /* 動作クロックCK01 (24MHz/16) に設定 */ 
#define SET_TDR01     (0x1D4Bu)  /* 5ms = (24MHz/16) * (TDR +1) (10進:7499)*/ 

/* TAU1初期値マクロ定義 */
#define SET_TPS1      (0x3000u)  /* 動作クロックはCK10:fclk/2^0 CK11:fclk/2^0 CK12:fclk/2^0 CK13:fclk/2^3を選択 */





#endif  /* rl_mac */



