/*********************************************************************************************************************/
/*著作所有権 ：                                                             */
/*テーマ名   ：                                                                             */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：type.h                                                                                                */
/*仕様       ：汎用型定義ファイル                                                                                    */
/*********************************************************************************************************************/
/*履歴                                                                                                               */
/* 2024.**.**：新規作成                                                                                        */
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
#ifndef rl_type
#define rl_type

/* 汎用型宣言 */
typedef unsigned char Uchar;
typedef unsigned int  Uint;

/* ビットフィールド型 */
/*----8bit----*/
typedef struct{
    Uchar    bit0:1;
    Uchar    bit1:1;
    Uchar    bit2:1;
    Uchar    bit3:1;
    Uchar    bit4:1;
    Uchar    bit5:1;
    Uchar    bit6:1;
    Uchar    bit7:1;
} BITF8;

/*----16bit----*/
typedef struct{
    Uchar    bit0 :1;
    Uchar    bit1 :1;
    Uchar    bit2 :1;
    Uchar    bit3 :1;
    Uchar    bit4 :1;
    Uchar    bit5 :1;
    Uchar    bit6 :1;
    Uchar    bit7 :1;
    Uchar    bit8 :1;
    Uchar    bit9 :1;
    Uchar    bit10:1;
    Uchar    bit11:1;
    Uchar    bit12:1;
    Uchar    bit13:1;
    Uchar    bit14:1;
    Uchar    bit15:1;
} BITF16;


/* ビットアクセス用共用体宣言 */
/*----8bit用----*/
typedef union{
    BITF8    BIT;
    Uchar    ALL;
} RL_8BIT;

/*----16bit用----*/
typedef union{
    BITF16   BIT;
    Uint   ALL;
} RL_16BIT;



#endif /* rl_type */

