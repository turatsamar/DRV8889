/*********************************************************************************************************************/
/*著作所有権 ：                                                             */
/*テーマ名   ：                                                                             */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：prot.h                                                                                                */
/*仕様       ：関数プロトタイプ宣言ファイル                                                                          */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.**.**：新規作成                                                                                          */
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
#ifndef rl_prottype
#define rl_prottype

/* 関数プロトタイプ宣言 */
void ram_error(void);           /* RAMチェック時エラー発生時の処理 */
void hdwinit(void);             /* レジスタ初期設定 */
void main(void);                /* メイン処理 */

Uchar Reg_Port_Set(void);       /* ポートモードレジスタ、内蔵プルアップ抵抗の設定 */
Uchar Reg_Latch_Set(void);      /* ポートの出力ラッチの初期化処理 */
Uchar Reg_Func_Set(void);       /* 周辺I/Oリダイレクションレジスタの設定 */




#endif /* rl_prottype */

