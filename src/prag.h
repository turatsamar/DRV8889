/*********************************************************************************************************************/
/*著作所有権 ：                                                             */
/*テーマ名   ：                                                                             */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：prag.h                                                                                                */
/*仕様       ：汎用プラグマ宣言                                                                                      */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.**.**：新規作成                                                                                         */
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
#ifndef  rl_pragma
#define  rl_pragma

/* 汎用プラグマ宣言 */
#pragma sfr
#pragma EI
#pragma DI
#pragma NOP
#pragma HALT
#pragma STOP


#include "./mac.h"        /* マクロ定義ファイル */
#include "./type.h"       /* 型定義ファイル */
#include "./glob.h"       /* グローバル変数宣言ファイル */
#include "./cnst.h"       /* const変数宣言ファイル */
#include "./stat.h"       /* static変数、関数プロトタイプ宣言ファイル */
#include "./prot.h"       /* 関数プロトタイプ宣言ファイル */



#endif /* rl_pragma */

