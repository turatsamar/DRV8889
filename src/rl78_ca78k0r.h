
/* 同一cファイル内での多重定義を防止する */
#ifndef	rl78_ca78k0r_h
#define	rl78_ca78k0r_h

/*****************************************************************************/
/*                 SFR変数を通常の変数に置換                                 */
/*****************************************************************************/

/* 各cファイルでの多重定義を防止する */
#if (defined DEFINE_SFR_GLOBAL)&&(!defined __RL78__)
	#define	SFR_GLOBAL
#else
	#define	SFR_GLOBAL		extern
#endif


/******************************************************************************/
/*                 型宣言                                                     */
/******************************************************************************/
typedef	unsigned char		SFR_UNSIGNED_CHAR;
typedef	unsigned int		SFR_UNSIGNED_INT;
typedef	unsigned short int	SFR_UNSIGNED_SHORT_INT;
typedef unsigned long int	SFR_UNSIGNED_LONG_INT;

/******************************************************************************/
/*                 追加予約語の型をunsigned charに置換                        */
/******************************************************************************/
#ifdef __RL78__
#else
	typedef	unsigned char	bit;
	typedef	unsigned char	boolean;
	typedef	unsigned char	__boolean;
#endif

/******************************************************************************/
/*                 拡張機能の追加予約語を空白に変換                           */
/******************************************************************************/
#ifdef __RL78__
#else
	#define	sreg
	#define	__sreg
	#define	callt
	#define	__callt
	#define	callf
	#define	__callf
	#define	norec
	#define	__leaf
	#define	noauto
	#define	__interrupt
	#define	__interrupt_brk
	#define	__asm
	#define	__rtos_interrupt
	#define	__pascal
	#define	__flash
	#define	__flashf
	#define	__directmap
	#define	__temp
	#define	__near
	#define	__far
	#define	__mxcall
#endif


/******************************************************************************/
/*                 SFRをビットアクセスする為の構造体                          */
/******************************************************************************/
typedef struct	{
	SFR_UNSIGNED_INT	bit0:1;
	SFR_UNSIGNED_INT	bit1:1;
	SFR_UNSIGNED_INT	bit2:1;
	SFR_UNSIGNED_INT	bit3:1;
	SFR_UNSIGNED_INT	bit4:1;
	SFR_UNSIGNED_INT	bit5:1;
	SFR_UNSIGNED_INT	bit6:1;
	SFR_UNSIGNED_INT	bit7:1;
} SFR_BIT8;

/* 150715 write nakagawa 16bitアクセス用構造体追加 */
typedef struct	{
	SFR_UNSIGNED_INT	bit0:1;
	SFR_UNSIGNED_INT	bit1:1;
	SFR_UNSIGNED_INT	bit2:1;
	SFR_UNSIGNED_INT	bit3:1;
	SFR_UNSIGNED_INT	bit4:1;
	SFR_UNSIGNED_INT	bit5:1;
	SFR_UNSIGNED_INT	bit6:1;
	SFR_UNSIGNED_INT	bit7:1;
	SFR_UNSIGNED_INT	bit8:1;
	SFR_UNSIGNED_INT	bit9:1;
	SFR_UNSIGNED_INT	bit10:1;
	SFR_UNSIGNED_INT	bit11:1;
	SFR_UNSIGNED_INT	bit12:1;
	SFR_UNSIGNED_INT	bit13:1;
	SFR_UNSIGNED_INT	bit14:1;
	SFR_UNSIGNED_INT	bit15:1;
} SFR_BIT16;
/* 150715 write end nakagawa 16bitアクセス用構造体追加 */


/******************************************************************************/
/*                       SFRの置換規則                                        */
/******************************************************************************/

/* P0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P0;

SFR_GLOBAL	SFR_P0	p0;

#ifdef __RL78__
	#define	P0_0	(P0.0)
	#define	P0_1	(P0.1)
	#define	P0_2	(P0.2)
	#define	P0_3	(P0.3)
	#define	P0_4	(P0.4)
	#define	P0_5	(P0.5)
	#define	P0_6	(P0.6)
	#define	P0_7	(P0.7)
#else
	#define	P0_0	(p0.BIT_NUMBER.bit0)
	#define	P0_1	(p0.BIT_NUMBER.bit1)
	#define	P0_2	(p0.BIT_NUMBER.bit2)
	#define	P0_3	(p0.BIT_NUMBER.bit3)
	#define	P0_4	(p0.BIT_NUMBER.bit4)
	#define	P0_5	(p0.BIT_NUMBER.bit5)
	#define	P0_6	(p0.BIT_NUMBER.bit6)
	#define	P0_7	(p0.BIT_NUMBER.bit7)
	#define	P0	(p0.ALL)
#endif

/* P1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P1;

SFR_GLOBAL	SFR_P1	p1;

#ifdef __RL78__
	#define	P1_0	(P1.0)
	#define	P1_1	(P1.1)
	#define	P1_2	(P1.2)
	#define	P1_3	(P1.3)
	#define	P1_4	(P1.4)
	#define	P1_5	(P1.5)
	#define	P1_6	(P1.6)
	#define	P1_7	(P1.7)
#else
	#define	P1_0	(p1.BIT_NUMBER.bit0)
	#define	P1_1	(p1.BIT_NUMBER.bit1)
	#define	P1_2	(p1.BIT_NUMBER.bit2)
	#define	P1_3	(p1.BIT_NUMBER.bit3)
	#define	P1_4	(p1.BIT_NUMBER.bit4)
	#define	P1_5	(p1.BIT_NUMBER.bit5)
	#define	P1_6	(p1.BIT_NUMBER.bit6)
	#define	P1_7	(p1.BIT_NUMBER.bit7)
	#define	P1	(p1.ALL)
#endif

/* P3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P3;

SFR_GLOBAL	SFR_P3	p3;

#ifdef __RL78__
	#define	P3_0	(P3.0)
	#define	P3_1	(P3.1)
	#define	P3_2	(P3.2)
	#define	P3_3	(P3.3)
	#define	P3_4	(P3.4)
	#define	P3_5	(P3.5)
	#define	P3_6	(P3.6)
	#define	P3_7	(P3.7)
#else
	#define	P3_0	(p3.BIT_NUMBER.bit0)
	#define	P3_1	(p3.BIT_NUMBER.bit1)
	#define	P3_2	(p3.BIT_NUMBER.bit2)
	#define	P3_3	(p3.BIT_NUMBER.bit3)
	#define	P3_4	(p3.BIT_NUMBER.bit4)
	#define	P3_5	(p3.BIT_NUMBER.bit5)
	#define	P3_6	(p3.BIT_NUMBER.bit6)
	#define	P3_7	(p3.BIT_NUMBER.bit7)
	#define	P3	(p3.ALL)
#endif

/* P4 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P4;

SFR_GLOBAL	SFR_P4	p4;

#ifdef __RL78__
	#define	P4_0	(P4.0)
	#define	P4_1	(P4.1)
	#define	P4_2	(P4.2)
	#define	P4_3	(P4.3)
	#define	P4_4	(P4.4)
	#define	P4_5	(P4.5)
	#define	P4_6	(P4.6)
	#define	P4_7	(P4.7)
#else
	#define	P4_0	(p4.BIT_NUMBER.bit0)
	#define	P4_1	(p4.BIT_NUMBER.bit1)
	#define	P4_2	(p4.BIT_NUMBER.bit2)
	#define	P4_3	(p4.BIT_NUMBER.bit3)
	#define	P4_4	(p4.BIT_NUMBER.bit4)
	#define	P4_5	(p4.BIT_NUMBER.bit5)
	#define	P4_6	(p4.BIT_NUMBER.bit6)
	#define	P4_7	(p4.BIT_NUMBER.bit7)
	#define	P4	(p4.ALL)
#endif

/* P5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P5;

SFR_GLOBAL	SFR_P5	p5;

#ifdef __RL78__
	#define	P5_0	(P5.0)
	#define	P5_1	(P5.1)
	#define	P5_2	(P5.2)
	#define	P5_3	(P5.3)
	#define	P5_4	(P5.4)
	#define	P5_5	(P5.5)
	#define	P5_6	(P5.6)
	#define	P5_7	(P5.7)
#else
	#define	P5_0	(p5.BIT_NUMBER.bit0)
	#define	P5_1	(p5.BIT_NUMBER.bit1)
	#define	P5_2	(p5.BIT_NUMBER.bit2)
	#define	P5_3	(p5.BIT_NUMBER.bit3)
	#define	P5_4	(p5.BIT_NUMBER.bit4)
	#define	P5_5	(p5.BIT_NUMBER.bit5)
	#define	P5_6	(p5.BIT_NUMBER.bit6)
	#define	P5_7	(p5.BIT_NUMBER.bit7)
	#define	P5	(p5.ALL)
#endif

/* P6 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P6;

SFR_GLOBAL	SFR_P6	p6;

#ifdef __RL78__
	#define	P6_0	(P6.0)
	#define	P6_1	(P6.1)
	#define	P6_2	(P6.2)
	#define	P6_3	(P6.3)
	#define	P6_4	(P6.4)
	#define	P6_5	(P6.5)
	#define	P6_6	(P6.6)
	#define	P6_7	(P6.7)
#else
	#define	P6_0	(p6.BIT_NUMBER.bit0)
	#define	P6_1	(p6.BIT_NUMBER.bit1)
	#define	P6_2	(p6.BIT_NUMBER.bit2)
	#define	P6_3	(p6.BIT_NUMBER.bit3)
	#define	P6_4	(p6.BIT_NUMBER.bit4)
	#define	P6_5	(p6.BIT_NUMBER.bit5)
	#define	P6_6	(p6.BIT_NUMBER.bit6)
	#define	P6_7	(p6.BIT_NUMBER.bit7)
	#define	P6	(p6.ALL)
#endif

/* P7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P7;

SFR_GLOBAL	SFR_P7	p7;

#ifdef __RL78__
	#define	P7_0	(P7.0)
	#define	P7_1	(P7.1)
	#define	P7_2	(P7.2)
	#define	P7_3	(P7.3)
	#define	P7_4	(P7.4)
	#define	P7_5	(P7.5)
	#define	P7_6	(P7.6)
	#define	P7_7	(P7.7)
#else
	#define	P7_0	(p7.BIT_NUMBER.bit0)
	#define	P7_1	(p7.BIT_NUMBER.bit1)
	#define	P7_2	(p7.BIT_NUMBER.bit2)
	#define	P7_3	(p7.BIT_NUMBER.bit3)
	#define	P7_4	(p7.BIT_NUMBER.bit4)
	#define	P7_5	(p7.BIT_NUMBER.bit5)
	#define	P7_6	(p7.BIT_NUMBER.bit6)
	#define	P7_7	(p7.BIT_NUMBER.bit7)
	#define	P7	(p7.ALL)
#endif

/* P8 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P8;

SFR_GLOBAL	SFR_P8	p8;

#ifdef __RL78__
	#define	P8_0	(P8.0)
	#define	P8_1	(P8.1)
	#define	P8_2	(P8.2)
	#define	P8_3	(P8.3)
	#define	P8_4	(P8.4)
	#define	P8_5	(P8.5)
	#define	P8_6	(P8.6)
	#define	P8_7	(P8.7)
#else
	#define	P8_0	(p8.BIT_NUMBER.bit0)
	#define	P8_1	(p8.BIT_NUMBER.bit1)
	#define	P8_2	(p8.BIT_NUMBER.bit2)
	#define	P8_3	(p8.BIT_NUMBER.bit3)
	#define	P8_4	(p8.BIT_NUMBER.bit4)
	#define	P8_5	(p8.BIT_NUMBER.bit5)
	#define	P8_6	(p8.BIT_NUMBER.bit6)
	#define	P8_7	(p8.BIT_NUMBER.bit7)
	#define	P8	(p8.ALL)
#endif

/* P9 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P9;

SFR_GLOBAL	SFR_P9	p9;

#ifdef __RL78__
	#define	P9_0	(P9.0)
	#define	P9_1	(P9.1)
	#define	P9_2	(P9.2)
	#define	P9_3	(P9.3)
	#define	P9_4	(P9.4)
	#define	P9_5	(P9.5)
	#define	P9_6	(P9.6)
	#define	P9_7	(P9.7)
#else
	#define	P9_0	(p9.BIT_NUMBER.bit0)
	#define	P9_1	(p9.BIT_NUMBER.bit1)
	#define	P9_2	(p9.BIT_NUMBER.bit2)
	#define	P9_3	(p9.BIT_NUMBER.bit3)
	#define	P9_4	(p9.BIT_NUMBER.bit4)
	#define	P9_5	(p9.BIT_NUMBER.bit5)
	#define	P9_6	(p9.BIT_NUMBER.bit6)
	#define	P9_7	(p9.BIT_NUMBER.bit7)
	#define	P9	(p9.ALL)
#endif

/* P10 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P10;

SFR_GLOBAL	SFR_P10	p10;

#ifdef __RL78__
	#define	P10_0	(P10.0)
	#define	P10_1	(P10.1)
	#define	P10_2	(P10.2)
	#define	P10_3	(P10.3)
	#define	P10_4	(P10.4)
	#define	P10_5	(P10.5)
	#define	P10_6	(P10.6)
	#define	P10_7	(P10.7)
#else
	#define	P10_0	(p10.BIT_NUMBER.bit0)
	#define	P10_1	(p10.BIT_NUMBER.bit1)
	#define	P10_2	(p10.BIT_NUMBER.bit2)
	#define	P10_3	(p10.BIT_NUMBER.bit3)
	#define	P10_4	(p10.BIT_NUMBER.bit4)
	#define	P10_5	(p10.BIT_NUMBER.bit5)
	#define	P10_6	(p10.BIT_NUMBER.bit6)
	#define	P10_7	(p10.BIT_NUMBER.bit7)
	#define	P10	(p10.ALL)
#endif

/* P12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P12;

SFR_GLOBAL	SFR_P12	p12;

#ifdef __RL78__
	#define	P12_0	(P12.0)
	#define	P12_1	(P12.1)
	#define	P12_2	(P12.2)
	#define	P12_3	(P12.3)
	#define	P12_4	(P12.4)
	#define	P12_5	(P12.5)
	#define	P12_6	(P12.6)
	#define	P12_7	(P12.7)
#else
	#define	P12_0	(p12.BIT_NUMBER.bit0)
	#define	P12_1	(p12.BIT_NUMBER.bit1)
	#define	P12_2	(p12.BIT_NUMBER.bit2)
	#define	P12_3	(p12.BIT_NUMBER.bit3)
	#define	P12_4	(p12.BIT_NUMBER.bit4)
	#define	P12_5	(p12.BIT_NUMBER.bit5)
	#define	P12_6	(p12.BIT_NUMBER.bit6)
	#define	P12_7	(p12.BIT_NUMBER.bit7)
	#define	P12	(p12.ALL)
#endif

/* P13 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P13;

SFR_GLOBAL	SFR_P13	p13;

#ifdef __RL78__
	#define	P13_0	(P13.0)
	#define	P13_1	(P13.1)
	#define	P13_2	(P13.2)
	#define	P13_3	(P13.3)
	#define	P13_4	(P13.4)
	#define	P13_5	(P13.5)
	#define	P13_6	(P13.6)
	#define	P13_7	(P13.7)
#else
	#define	P13_0	(p13.BIT_NUMBER.bit0)
	#define	P13_1	(p13.BIT_NUMBER.bit1)
	#define	P13_2	(p13.BIT_NUMBER.bit2)
	#define	P13_3	(p13.BIT_NUMBER.bit3)
	#define	P13_4	(p13.BIT_NUMBER.bit4)
	#define	P13_5	(p13.BIT_NUMBER.bit5)
	#define	P13_6	(p13.BIT_NUMBER.bit6)
	#define	P13_7	(p13.BIT_NUMBER.bit7)
	#define	P13	(p13.ALL)
#endif

/* P14 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P14;

SFR_GLOBAL	SFR_P14	p14;

#ifdef __RL78__
	#define	P14_0	(P14.0)
	#define	P14_1	(P14.1)
	#define	P14_2	(P14.2)
	#define	P14_3	(P14.3)
	#define	P14_4	(P14.4)
	#define	P14_5	(P14.5)
	#define	P14_6	(P14.6)
	#define	P14_7	(P14.7)
#else
	#define	P14_0	(p14.BIT_NUMBER.bit0)
	#define	P14_1	(p14.BIT_NUMBER.bit1)
	#define	P14_2	(p14.BIT_NUMBER.bit2)
	#define	P14_3	(p14.BIT_NUMBER.bit3)
	#define	P14_4	(p14.BIT_NUMBER.bit4)
	#define	P14_5	(p14.BIT_NUMBER.bit5)
	#define	P14_6	(p14.BIT_NUMBER.bit6)
	#define	P14_7	(p14.BIT_NUMBER.bit7)
	#define	P14	(p14.ALL)
#endif

/* P15 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_P15;

SFR_GLOBAL	SFR_P15	p15;

#ifdef __RL78__
	#define	P15_0	(P15.0)
	#define	P15_1	(P15.1)
	#define	P15_2	(P15.2)
	#define	P15_3	(P15.3)
	#define	P15_4	(P15.4)
	#define	P15_5	(P15.5)
	#define	P15_6	(P15.6)
	#define	P15_7	(P15.7)
#else
	#define	P15_0	(p15.BIT_NUMBER.bit0)
	#define	P15_1	(p15.BIT_NUMBER.bit1)
	#define	P15_2	(p15.BIT_NUMBER.bit2)
	#define	P15_3	(p15.BIT_NUMBER.bit3)
	#define	P15_4	(p15.BIT_NUMBER.bit4)
	#define	P15_5	(p15.BIT_NUMBER.bit5)
	#define	P15_6	(p15.BIT_NUMBER.bit6)
	#define	P15_7	(p15.BIT_NUMBER.bit7)
	#define	P15	(p15.ALL)
#endif

/* SDR00L */
#ifdef __RL78__
#else
	#define	SDR00L	(sdr00.BYTE.sdr00l)
#endif

/* SDR00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sdr00l;
	SFR_UNSIGNED_SHORT_INT	sdr00h;
}SFR_BYTE_SDR00;

typedef union{
	SFR_BYTE_SDR00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SDR00;

SFR_GLOBAL	SFR_SDR00	sdr00;

#ifdef __RL78__
#else
	#define	SDR00	(sdr00.ALL)
#endif

/* SDR01L */
#ifdef __RL78__
#else
	#define	SDR01L	(sdr01.BYTE.sdr01l)
#endif

/* SDR01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sdr01l;
	SFR_UNSIGNED_SHORT_INT	sdr01h;
}SFR_BYTE_SDR01;

typedef union{
	SFR_BYTE_SDR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SDR01;

SFR_GLOBAL	SFR_SDR01	sdr01;

#ifdef __RL78__
#else
	#define	SDR01	(sdr01.ALL)
#endif

/*TDR00*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr00;
#ifdef __RL78__
#else
	#define	TDR00	(tdr00)
#endif

/* TDR01L */
#ifdef __RL78__
#else
	#define	TDR01L	(tdr01.BYTE.tdr01l)
#endif

/* TDR01H */
#ifdef __RL78__
#else
	#define	TDR01H	(tdr01.BYTE.tdr01h)
#endif

/* TDR01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tdr01l;
	SFR_UNSIGNED_SHORT_INT	tdr01h;
}SFR_BYTE_TDR01;

typedef union{
	SFR_BYTE_TDR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TDR01;

SFR_GLOBAL	SFR_TDR01	tdr01;

#ifdef __RL78__
#else
	#define	TDR01	(tdr01.ALL)
#endif

/* ADCR */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT adcr;
#ifdef __RL78__
#else
	#define	ADCR	(adcr)
#endif

/* ADCRH */
SFR_GLOBAL SFR_UNSIGNED_CHAR adcrh;

#ifdef __RL78__
#else
    #define ADCRH (adcrh)
#endif

/* PM0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM0;

SFR_GLOBAL	SFR_PM0	pm0;

#ifdef __RL78__
	#define	PM0_0	(PM0.0)
	#define	PM0_1	(PM0.1)
	#define	PM0_2	(PM0.2)
	#define	PM0_3	(PM0.3)
	#define	PM0_4	(PM0.4)
	#define	PM0_5	(PM0.5)
	#define	PM0_6	(PM0.6)
	#define	PM0_7	(PM0.7)
#else
	#define	PM0_0	(pm0.BIT_NUMBER.bit0)
	#define	PM0_1	(pm0.BIT_NUMBER.bit1)
	#define	PM0_2	(pm0.BIT_NUMBER.bit2)
	#define	PM0_3	(pm0.BIT_NUMBER.bit3)
	#define	PM0_4	(pm0.BIT_NUMBER.bit4)
	#define	PM0_5	(pm0.BIT_NUMBER.bit5)
	#define	PM0_6	(pm0.BIT_NUMBER.bit6)
	#define	PM0_7	(pm0.BIT_NUMBER.bit7)
	#define	PM0	(pm0.ALL)
#endif

/* PM1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM1;

SFR_GLOBAL	SFR_PM1	pm1;

#ifdef __RL78__
	#define	PM1_0	(PM1.0)
	#define	PM1_1	(PM1.1)
	#define	PM1_2	(PM1.2)
	#define	PM1_3	(PM1.3)
	#define	PM1_4	(PM1.4)
	#define	PM1_5	(PM1.5)
	#define	PM1_6	(PM1.6)
	#define	PM1_7	(PM1.7)
#else
	#define	PM1_0	(pm1.BIT_NUMBER.bit0)
	#define	PM1_1	(pm1.BIT_NUMBER.bit1)
	#define	PM1_2	(pm1.BIT_NUMBER.bit2)
	#define	PM1_3	(pm1.BIT_NUMBER.bit3)
	#define	PM1_4	(pm1.BIT_NUMBER.bit4)
	#define	PM1_5	(pm1.BIT_NUMBER.bit5)
	#define	PM1_6	(pm1.BIT_NUMBER.bit6)
	#define	PM1_7	(pm1.BIT_NUMBER.bit7)
	#define	PM1	(pm1.ALL)
#endif

/* PM3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM3;

SFR_GLOBAL	SFR_PM3	pm3;

#ifdef __RL78__
	#define	PM3_0	(PM3.0)
	#define	PM3_1	(PM3.1)
	#define	PM3_2	(PM3.2)
	#define	PM3_3	(PM3.3)
	#define	PM3_4	(PM3.4)
	#define	PM3_5	(PM3.5)
	#define	PM3_6	(PM3.6)
	#define	PM3_7	(PM3.7)
#else
	#define	PM3_0	(pm3.BIT_NUMBER.bit0)
	#define	PM3_1	(pm3.BIT_NUMBER.bit1)
	#define	PM3_2	(pm3.BIT_NUMBER.bit2)
	#define	PM3_3	(pm3.BIT_NUMBER.bit3)
	#define	PM3_4	(pm3.BIT_NUMBER.bit4)
	#define	PM3_5	(pm3.BIT_NUMBER.bit5)
	#define	PM3_6	(pm3.BIT_NUMBER.bit6)
	#define	PM3_7	(pm3.BIT_NUMBER.bit7)
	#define	PM3	(pm3.ALL)
#endif

/* PM4 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM4;

SFR_GLOBAL	SFR_PM4	pm4;

#ifdef __RL78__
	#define	PM4_0	(PM4.0)
	#define	PM4_1	(PM4.1)
	#define	PM4_2	(PM4.2)
	#define	PM4_3	(PM4.3)
	#define	PM4_4	(PM4.4)
	#define	PM4_5	(PM4.5)
	#define	PM4_6	(PM4.6)
	#define	PM4_7	(PM4.7)
#else
	#define	PM4_0	(pm4.BIT_NUMBER.bit0)
	#define	PM4_1	(pm4.BIT_NUMBER.bit1)
	#define	PM4_2	(pm4.BIT_NUMBER.bit2)
	#define	PM4_3	(pm4.BIT_NUMBER.bit3)
	#define	PM4_4	(pm4.BIT_NUMBER.bit4)
	#define	PM4_5	(pm4.BIT_NUMBER.bit5)
	#define	PM4_6	(pm4.BIT_NUMBER.bit6)
	#define	PM4_7	(pm4.BIT_NUMBER.bit7)
	#define	PM4	(pm4.ALL)
#endif

/* PM5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM5;

SFR_GLOBAL	SFR_PM5	pm5;

#ifdef __RL78__
	#define	PM5_0	(PM5.0)
	#define	PM5_1	(PM5.1)
	#define	PM5_2	(PM5.2)
	#define	PM5_3	(PM5.3)
	#define	PM5_4	(PM5.4)
	#define	PM5_5	(PM5.5)
	#define	PM5_6	(PM5.6)
	#define	PM5_7	(PM5.7)
#else
	#define	PM5_0	(pm5.BIT_NUMBER.bit0)
	#define	PM5_1	(pm5.BIT_NUMBER.bit1)
	#define	PM5_2	(pm5.BIT_NUMBER.bit2)
	#define	PM5_3	(pm5.BIT_NUMBER.bit3)
	#define	PM5_4	(pm5.BIT_NUMBER.bit4)
	#define	PM5_5	(pm5.BIT_NUMBER.bit5)
	#define	PM5_6	(pm5.BIT_NUMBER.bit6)
	#define	PM5_7	(pm5.BIT_NUMBER.bit7)
	#define	PM5	(pm5.ALL)
#endif

/* PM6 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM6;

SFR_GLOBAL	SFR_PM6	pm6;

#ifdef __RL78__
	#define	PM6_0	(PM6.0)
	#define	PM6_1	(PM6.1)
	#define	PM6_2	(PM6.2)
	#define	PM6_3	(PM6.3)
	#define	PM6_4	(PM6.4)
	#define	PM6_5	(PM6.5)
	#define	PM6_6	(PM6.6)
	#define	PM6_7	(PM6.7)
#else
	#define	PM6_0	(pm6.BIT_NUMBER.bit0)
	#define	PM6_1	(pm6.BIT_NUMBER.bit1)
	#define	PM6_2	(pm6.BIT_NUMBER.bit2)
	#define	PM6_3	(pm6.BIT_NUMBER.bit3)
	#define	PM6_4	(pm6.BIT_NUMBER.bit4)
	#define	PM6_5	(pm6.BIT_NUMBER.bit5)
	#define	PM6_6	(pm6.BIT_NUMBER.bit6)
	#define	PM6_7	(pm6.BIT_NUMBER.bit7)
	#define	PM6	(pm6.ALL)
#endif

/* PM7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM7;

SFR_GLOBAL	SFR_PM7	pm7;

#ifdef __RL78__
	#define	PM7_0	(PM7.0)
	#define	PM7_1	(PM7.1)
	#define	PM7_2	(PM7.2)
	#define	PM7_3	(PM7.3)
	#define	PM7_4	(PM7.4)
	#define	PM7_5	(PM7.5)
	#define	PM7_6	(PM7.6)
	#define	PM7_7	(PM7.7)
#else
	#define	PM7_0	(pm7.BIT_NUMBER.bit0)
	#define	PM7_1	(pm7.BIT_NUMBER.bit1)
	#define	PM7_2	(pm7.BIT_NUMBER.bit2)
	#define	PM7_3	(pm7.BIT_NUMBER.bit3)
	#define	PM7_4	(pm7.BIT_NUMBER.bit4)
	#define	PM7_5	(pm7.BIT_NUMBER.bit5)
	#define	PM7_6	(pm7.BIT_NUMBER.bit6)
	#define	PM7_7	(pm7.BIT_NUMBER.bit7)
	#define	PM7	(pm7.ALL)
#endif

/* PM8 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM8;

SFR_GLOBAL	SFR_PM8	pm8;

#ifdef __RL78__
	#define	PM8_0	(PM8.0)
	#define	PM8_1	(PM8.1)
	#define	PM8_2	(PM8.2)
	#define	PM8_3	(PM8.3)
	#define	PM8_4	(PM8.4)
	#define	PM8_5	(PM8.5)
	#define	PM8_6	(PM8.6)
	#define	PM8_7	(PM8.7)
#else
	#define	PM8_0	(pm8.BIT_NUMBER.bit0)
	#define	PM8_1	(pm8.BIT_NUMBER.bit1)
	#define	PM8_2	(pm8.BIT_NUMBER.bit2)
	#define	PM8_3	(pm8.BIT_NUMBER.bit3)
	#define	PM8_4	(pm8.BIT_NUMBER.bit4)
	#define	PM8_5	(pm8.BIT_NUMBER.bit5)
	#define	PM8_6	(pm8.BIT_NUMBER.bit6)
	#define	PM8_7	(pm8.BIT_NUMBER.bit7)
	#define	PM8	(pm8.ALL)
#endif

/* PM9 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM9;

SFR_GLOBAL	SFR_PM9	pm9;

#ifdef __RL78__
	#define	PM9_0	(PM9.0)
	#define	PM9_1	(PM9.1)
	#define	PM9_2	(PM9.2)
	#define	PM9_3	(PM9.3)
	#define	PM9_4	(PM9.4)
	#define	PM9_5	(PM9.5)
	#define	PM9_6	(PM9.6)
	#define	PM9_7	(PM9.7)
#else
	#define	PM9_0	(pm9.BIT_NUMBER.bit0)
	#define	PM9_1	(pm9.BIT_NUMBER.bit1)
	#define	PM9_2	(pm9.BIT_NUMBER.bit2)
	#define	PM9_3	(pm9.BIT_NUMBER.bit3)
	#define	PM9_4	(pm9.BIT_NUMBER.bit4)
	#define	PM9_5	(pm9.BIT_NUMBER.bit5)
	#define	PM9_6	(pm9.BIT_NUMBER.bit6)
	#define	PM9_7	(pm9.BIT_NUMBER.bit7)
	#define	PM9	(pm9.ALL)
#endif

/* PM10 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM10;

SFR_GLOBAL	SFR_PM10	pm10;

#ifdef __RL78__
	#define	PM10_0	(PM10.0)
	#define	PM10_1	(PM10.1)
	#define	PM10_2	(PM10.2)
	#define	PM10_3	(PM10.3)
	#define	PM10_4	(PM10.4)
	#define	PM10_5	(PM10.5)
	#define	PM10_6	(PM10.6)
	#define	PM10_7	(PM10.7)
#else
	#define	PM10_0	(pm10.BIT_NUMBER.bit0)
	#define	PM10_1	(pm10.BIT_NUMBER.bit1)
	#define	PM10_2	(pm10.BIT_NUMBER.bit2)
	#define	PM10_3	(pm10.BIT_NUMBER.bit3)
	#define	PM10_4	(pm10.BIT_NUMBER.bit4)
	#define	PM10_5	(pm10.BIT_NUMBER.bit5)
	#define	PM10_6	(pm10.BIT_NUMBER.bit6)
	#define	PM10_7	(pm10.BIT_NUMBER.bit7)
	#define	PM10	(pm10.ALL)
#endif

/* PM12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM12;

SFR_GLOBAL	SFR_PM12	pm12;

#ifdef __RL78__
	#define	PM12_0	(PM12.0)
	#define	PM12_1	(PM12.1)
	#define	PM12_2	(PM12.2)
	#define	PM12_3	(PM12.3)
	#define	PM12_4	(PM12.4)
	#define	PM12_5	(PM12.5)
	#define	PM12_6	(PM12.6)
	#define	PM12_7	(PM12.7)
#else
	#define	PM12_0	(pm12.BIT_NUMBER.bit0)
	#define	PM12_1	(pm12.BIT_NUMBER.bit1)
	#define	PM12_2	(pm12.BIT_NUMBER.bit2)
	#define	PM12_3	(pm12.BIT_NUMBER.bit3)
	#define	PM12_4	(pm12.BIT_NUMBER.bit4)
	#define	PM12_5	(pm12.BIT_NUMBER.bit5)
	#define	PM12_6	(pm12.BIT_NUMBER.bit6)
	#define	PM12_7	(pm12.BIT_NUMBER.bit7)
	#define	PM12	(pm12.ALL)
#endif

/* PM14 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM14;

SFR_GLOBAL	SFR_PM14	pm14;

#ifdef __RL78__
	#define	PM14_0	(PM14.0)
	#define	PM14_1	(PM14.1)
	#define	PM14_2	(PM14.2)
	#define	PM14_3	(PM14.3)
	#define	PM14_4	(PM14.4)
	#define	PM14_5	(PM14.5)
	#define	PM14_6	(PM14.6)
	#define	PM14_7	(PM14.7)
#else
	#define	PM14_0	(pm14.BIT_NUMBER.bit0)
	#define	PM14_1	(pm14.BIT_NUMBER.bit1)
	#define	PM14_2	(pm14.BIT_NUMBER.bit2)
	#define	PM14_3	(pm14.BIT_NUMBER.bit3)
	#define	PM14_4	(pm14.BIT_NUMBER.bit4)
	#define	PM14_5	(pm14.BIT_NUMBER.bit5)
	#define	PM14_6	(pm14.BIT_NUMBER.bit6)
	#define	PM14_7	(pm14.BIT_NUMBER.bit7)
	#define	PM14	(pm14.ALL)
#endif

/* PM15 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PM15;

SFR_GLOBAL	SFR_PM15	pm15;

#ifdef __RL78__
	#define	PM15_0	(PM15.0)
	#define	PM15_1	(PM15.1)
	#define	PM15_2	(PM15.2)
	#define	PM15_3	(PM15.3)
	#define	PM15_4	(PM15.4)
	#define	PM15_5	(PM15.5)
	#define	PM15_6	(PM15.6)
	#define	PM15_7	(PM15.7)
#else
	#define	PM15_0	(pm15.BIT_NUMBER.bit0)
	#define	PM15_1	(pm15.BIT_NUMBER.bit1)
	#define	PM15_2	(pm15.BIT_NUMBER.bit2)
	#define	PM15_3	(pm15.BIT_NUMBER.bit3)
	#define	PM15_4	(pm15.BIT_NUMBER.bit4)
	#define	PM15_5	(pm15.BIT_NUMBER.bit5)
	#define	PM15_6	(pm15.BIT_NUMBER.bit6)
	#define	PM15_7	(pm15.BIT_NUMBER.bit7)
	#define	PM15	(pm15.ALL)
#endif

/* ADM0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADM0;

SFR_GLOBAL	SFR_ADM0	adm0;

#ifdef __RL78__
	#define	ADM0_0	(ADM0.0)
	#define	ADM0_1	(ADM0.1)
	#define	ADM0_2	(ADM0.2)
	#define	ADM0_3	(ADM0.3)
	#define	ADM0_4	(ADM0.4)
	#define	ADM0_5	(ADM0.5)
	#define	ADM0_6	(ADM0.6)
	#define	ADM0_7	(ADM0.7)
#else
	#define	ADCE	(adm0.BIT_NUMBER.bit0)
	#define	ADCS	(adm0.BIT_NUMBER.bit7)
	#define	ADM0_0	(adm0.BIT_NUMBER.bit0)
	#define	ADM0_1	(adm0.BIT_NUMBER.bit1)
	#define	ADM0_2	(adm0.BIT_NUMBER.bit2)
	#define	ADM0_3	(adm0.BIT_NUMBER.bit3)
	#define	ADM0_4	(adm0.BIT_NUMBER.bit4)
	#define	ADM0_5	(adm0.BIT_NUMBER.bit5)
	#define	ADM0_6	(adm0.BIT_NUMBER.bit6)
	#define	ADM0_7	(adm0.BIT_NUMBER.bit7)
	#define	ADM0	(adm0.ALL)
#endif

/* ADS */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADS;

SFR_GLOBAL	SFR_ADS	ads;

#ifdef __RL78__
	#define	ADS_0	(ADS.0)
	#define	ADS_1	(ADS.1)
	#define	ADS_2	(ADS.2)
	#define	ADS_3	(ADS.3)
	#define	ADS_4	(ADS.4)
	#define	ADS_5	(ADS.5)
	#define	ADS_6	(ADS.6)
	#define	ADS_7	(ADS.7)
#else
	#define	ADS_0	(ads.BIT_NUMBER.bit0)
	#define	ADS_1	(ads.BIT_NUMBER.bit1)
	#define	ADS_2	(ads.BIT_NUMBER.bit2)
	#define	ADS_3	(ads.BIT_NUMBER.bit3)
	#define	ADS_4	(ads.BIT_NUMBER.bit4)
	#define	ADS_5	(ads.BIT_NUMBER.bit5)
	#define	ADS_6	(ads.BIT_NUMBER.bit6)
	#define	ADS_7	(ads.BIT_NUMBER.bit7)
	#define	ADS	(ads.ALL)
#endif

/* ADM1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADM1;

SFR_GLOBAL	SFR_ADM1	adm1;

#ifdef __RL78__
	#define	ADM1_0	(ADM1.0)
	#define	ADM1_1	(ADM1.1)
	#define	ADM1_2	(ADM1.2)
	#define	ADM1_3	(ADM1.3)
	#define	ADM1_4	(ADM1.4)
	#define	ADM1_5	(ADM1.5)
	#define	ADM1_6	(ADM1.6)
	#define	ADM1_7	(ADM1.7)
#else
	#define	ADM1_0	(adm1.BIT_NUMBER.bit0)
	#define	ADM1_1	(adm1.BIT_NUMBER.bit1)
	#define	ADM1_2	(adm1.BIT_NUMBER.bit2)
	#define	ADM1_3	(adm1.BIT_NUMBER.bit3)
	#define	ADM1_4	(adm1.BIT_NUMBER.bit4)
	#define	ADM1_5	(adm1.BIT_NUMBER.bit5)
	#define	ADM1_6	(adm1.BIT_NUMBER.bit6)
	#define	ADM1_7	(adm1.BIT_NUMBER.bit7)
	#define	ADM1	(adm1.ALL)
#endif

/* DACS0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	dacs0;

#ifdef __RL78__
#else
	#define	DACS0	(dacs0)
#endif

/* DAM */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DAM;

SFR_GLOBAL	SFR_DAM	dam;

#ifdef __RL78__
	#define	DAM_0	(DAM.0)
	#define	DAM_1	(DAM.1)
	#define	DAM_2	(DAM.2)
	#define	DAM_3	(DAM.3)
	#define	DAM_4	(DAM.4)
	#define	DAM_5	(DAM.5)
	#define	DAM_6	(DAM.6)
	#define	DAM_7	(DAM.7)
#else
	#define	DACE0	(dam.BIT_NUMBER.bit4)
	#define	DAM_0	(dam.BIT_NUMBER.bit0)
	#define	DAM_1	(dam.BIT_NUMBER.bit1)
	#define	DAM_2	(dam.BIT_NUMBER.bit2)
	#define	DAM_3	(dam.BIT_NUMBER.bit3)
	#define	DAM_4	(dam.BIT_NUMBER.bit4)
	#define	DAM_5	(dam.BIT_NUMBER.bit5)
	#define	DAM_6	(dam.BIT_NUMBER.bit6)
	#define	DAM_7	(dam.BIT_NUMBER.bit7)
	#define	DAM	(dam.ALL)
#endif

/* KRM */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_KRM;

SFR_GLOBAL	SFR_KRM	krm;

#ifdef __RL78__
	#define	KRM_0	(KRM.0)
	#define	KRM_1	(KRM.1)
	#define	KRM_2	(KRM.2)
	#define	KRM_3	(KRM.3)
	#define	KRM_4	(KRM.4)
	#define	KRM_5	(KRM.5)
	#define	KRM_6	(KRM.6)
	#define	KRM_7	(KRM.7)
#else
	#define	KRM_0	(krm.BIT_NUMBER.bit0)
	#define	KRM_1	(krm.BIT_NUMBER.bit1)
	#define	KRM_2	(krm.BIT_NUMBER.bit2)
	#define	KRM_3	(krm.BIT_NUMBER.bit3)
	#define	KRM_4	(krm.BIT_NUMBER.bit4)
	#define	KRM_5	(krm.BIT_NUMBER.bit5)
	#define	KRM_6	(krm.BIT_NUMBER.bit6)
	#define	KRM_7	(krm.BIT_NUMBER.bit7)
	#define	KRM	(krm.ALL)
#endif

/* EGP0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_EGP;

SFR_GLOBAL	SFR_EGP	egp;

#ifdef __RL78__
	#define	EGP_0	(EGP.0)
	#define	EGP_1	(EGP.1)
	#define	EGP_2	(EGP.2)
	#define	EGP_3	(EGP.3)
	#define	EGP_4	(EGP.4)
	#define	EGP_5	(EGP.5)
	#define	EGP_6	(EGP.6)
	#define	EGP_7	(EGP.7)
#else
	#define	EGP_0	(egp.BIT_NUMBER.bit0)
	#define	EGP_1	(egp.BIT_NUMBER.bit1)
	#define	EGP_2	(egp.BIT_NUMBER.bit2)
	#define	EGP_3	(egp.BIT_NUMBER.bit3)
	#define	EGP_4	(egp.BIT_NUMBER.bit4)
	#define	EGP_5	(egp.BIT_NUMBER.bit5)
	#define	EGP_6	(egp.BIT_NUMBER.bit6)
	#define	EGP_7	(egp.BIT_NUMBER.bit7)
	#define	EGP	(egp.ALL)
#endif

/* EGN0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_EGN;

SFR_GLOBAL	SFR_EGN	egn;

#ifdef __RL78__
	#define	EGN_0	(EGN.0)
	#define	EGN_1	(EGN.1)
	#define	EGN_2	(EGN.2)
	#define	EGN_3	(EGN.3)
	#define	EGN_4	(EGN.4)
	#define	EGN_5	(EGN.5)
	#define	EGN_6	(EGN.6)
	#define	EGN_7	(EGN.7)
#else
	#define	EGN_0	(egn.BIT_NUMBER.bit0)
	#define	EGN_1	(egn.BIT_NUMBER.bit1)
	#define	EGN_2	(egn.BIT_NUMBER.bit2)
	#define	EGN_3	(egn.BIT_NUMBER.bit3)
	#define	EGN_4	(egn.BIT_NUMBER.bit4)
	#define	EGN_5	(egn.BIT_NUMBER.bit5)
	#define	EGN_6	(egn.BIT_NUMBER.bit6)
	#define	EGN_7	(egn.BIT_NUMBER.bit7)
	#define	EGN	(egn.ALL)
#endif

/* EGP1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_EGP1;

SFR_GLOBAL	SFR_EGP1	egp1;

#ifdef __RL78__
	#define	EGP1_0	(EGP1.0)
	#define	EGP1_1	(EGP1.1)
	#define	EGP1_2	(EGP1.2)
	#define	EGP1_3	(EGP1.3)
	#define	EGP1_4	(EGP1.4)
	#define	EGP1_5	(EGP1.5)
	#define	EGP1_6	(EGP1.6)
	#define	EGP1_7	(EGP1.7)
#else
	#define	EGP1_0	(egp1.BIT_NUMBER.bit0)
	#define	EGP1_1	(egp1.BIT_NUMBER.bit1)
	#define	EGP1_2	(egp1.BIT_NUMBER.bit2)
	#define	EGP1_3	(egp1.BIT_NUMBER.bit3)
	#define	EGP1_4	(egp1.BIT_NUMBER.bit4)
	#define	EGP1_5	(egp1.BIT_NUMBER.bit5)
	#define	EGP1_6	(egp1.BIT_NUMBER.bit6)
	#define	EGP1_7	(egp1.BIT_NUMBER.bit7)
	#define	EGP1	(egp1.ALL)
#endif

/* EGN1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_EGN1;

SFR_GLOBAL	SFR_EGN	egn1;

#ifdef __RL78__
	#define	EGN1_0	(EGN1.0)
	#define	EGN1_1	(EGN1.1)
	#define	EGN1_2	(EGN1.2)
	#define	EGN1_3	(EGN1.3)
	#define	EGN1_4	(EGN1.4)
	#define	EGN1_5	(EGN1.5)
	#define	EGN1_6	(EGN1.6)
	#define	EGN1_7	(EGN1.7)
#else
	#define	EGN1_0	(egn1.BIT_NUMBER.bit0)
	#define	EGN1_1	(egn1.BIT_NUMBER.bit1)
	#define	EGN1_2	(egn1.BIT_NUMBER.bit2)
	#define	EGN1_3	(egn1.BIT_NUMBER.bit3)
	#define	EGN1_4	(egn1.BIT_NUMBER.bit4)
	#define	EGN1_5	(egn1.BIT_NUMBER.bit5)
	#define	EGN1_6	(egn1.BIT_NUMBER.bit6)
	#define	EGN1_7	(egn1.BIT_NUMBER.bit7)
	#define	EGN1	(egn1.ALL)
#endif

/* SDR10L */
#ifdef __RL78__
#else
	#define	SDR10L	(sdr10.BYTE.sdr10l)
#endif

/* SDR10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sdr10l;
	SFR_UNSIGNED_SHORT_INT	sdr10h;
}SFR_BYTE_SDR10;

typedef union{
	SFR_BYTE_SDR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SDR10;

SFR_GLOBAL	SFR_SDR10	sdr10;

#ifdef __RL78__
#else
	#define	SDR10	(sdr10.ALL)
#endif

/* SDR11L */
#ifdef __RL78__
#else
	#define	SDR11L	(sdr11.BYTE.sdr11l)
#endif

/* SDR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sdr11l;
	SFR_UNSIGNED_SHORT_INT	sdr11h;
}SFR_BYTE_SDR11;

typedef union{
	SFR_BYTE_SDR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SDR11;

SFR_GLOBAL	SFR_SDR11	sdr11;

#ifdef __RL78__
#else
	#define	SDR11	(sdr11.ALL)
#endif

/* IICA0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	iica0;

#ifdef __RL78__
#else
	#define	IICA0	(iica0)
#endif

/* IICS0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_IICS0;

SFR_GLOBAL	SFR_IICS0	iics0;

#ifdef __RL78__
	#define	IICS0_0	(IICS0.0)
	#define	IICS0_1	(IICS0.1)
	#define	IICS0_2	(IICS0.2)
	#define	IICS0_3	(IICS0.3)
	#define	IICS0_4	(IICS0.4)
	#define	IICS0_5	(IICS0.5)
	#define	IICS0_6	(IICS0.6)
	#define	IICS0_7	(IICS0.7)
#else
	#define	SPD0		(iics0.BIT_NUMBER.bit0)
	#define	STD0		(iics0.BIT_NUMBER.bit1)
	#define	ACKD0		(iics0.BIT_NUMBER.bit2)
	#define	TRC0		(iics0.BIT_NUMBER.bit3)
	#define	COI0		(iics0.BIT_NUMBER.bit4)
	#define	EXC0		(iics0.BIT_NUMBER.bit5)
	#define	ALD0		(iics0.BIT_NUMBER.bit6)
	#define	MSTS0		(iics0.BIT_NUMBER.bit7)
	#define	IICS0_0		(iics0.BIT_NUMBER.bit0)
	#define	IICS0_1		(iics0.BIT_NUMBER.bit1)
	#define	IICS0_2		(iics0.BIT_NUMBER.bit2)
	#define	IICS0_3		(iics0.BIT_NUMBER.bit3)
	#define	IICS0_4		(iics0.BIT_NUMBER.bit4)
	#define	IICS0_5		(iics0.BIT_NUMBER.bit5)
	#define	IICS0_6		(iics0.BIT_NUMBER.bit6)
	#define	IICS0_7		(iics0.BIT_NUMBER.bit7)
	#define	IICS0		(iics0.ALL)
#endif

/* IICF0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_IICF0;

SFR_GLOBAL	SFR_IICF0	iicf0;

#ifdef __RL78__
	#define	IICF0_0	(IICF0.0)
	#define	IICF0_1	(IICF0.1)
	#define	IICF0_2	(IICF0.2)
	#define	IICF0_3	(IICF0.3)
	#define	IICF0_4	(IICF0.4)
	#define	IICF0_5	(IICF0.5)
	#define	IICF0_6	(IICF0.6)
	#define	IICF0_7	(IICF0.7)
#else
	#define	IICRSV0		(iicf0.BIT_NUMBER.bit0)
	#define	STCEN0		(iicf0.BIT_NUMBER.bit1)
	#define	IICBSY0		(iicf0.BIT_NUMBER.bit6)
	#define	STCF0		(iicf0.BIT_NUMBER.bit7)
	#define	IICF0_0		(iicf0.BIT_NUMBER.bit0)
	#define	IICF0_1		(iicf0.BIT_NUMBER.bit1)
	#define	IICF0_2		(iicf0.BIT_NUMBER.bit2)
	#define	IICF0_3		(iicf0.BIT_NUMBER.bit3)
	#define	IICF0_4		(iicf0.BIT_NUMBER.bit4)
	#define	IICF0_5		(iicf0.BIT_NUMBER.bit5)
	#define	IICF0_6		(iicf0.BIT_NUMBER.bit6)
	#define	IICF0_7		(iicf0.BIT_NUMBER.bit7)
	#define	IICF0		(iicf0.ALL)
#endif

/*SUBCUDW*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT subsudw;
#ifdef __RL78__
#else
	#define	SUBCUDW	(subsudw)
#endif

/*TRDGRC0*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrc0;
#ifdef __RL78__
#else
	#define	TRDGRC0	(trdgrc0)
#endif

/*TRDGRD0*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrd0;
#ifdef __RL78__
#else
	#define	TRDGRD0	(trdgrd0)
#endif

/*TRDGRC1*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrc1;
#ifdef __RL78__
#else
	#define	TRDGRC1	(trdgrc1)
#endif

/*TRDGRD1*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrd1;
#ifdef __RL78__
#else
	#define	TRDGRD1	(trdgrd1)
#endif

/*TDR02*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr02;
#ifdef __RL78__
#else
	#define	TDR02	(tdr02)
#endif

/* TDR03L */
#ifdef __RL78__
#else
	#define	TDR03L	(tdr03.BYTE.tdr03l)
#endif

/* TDR03H */
#ifdef __RL78__
#else
	#define	TDR03H	(tdr03.BYTE.tdr03h)
#endif

/* TDR03 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tdr03l;
	SFR_UNSIGNED_SHORT_INT	tdr03h;
}SFR_BYTE_TDR03;

typedef union{
	SFR_BYTE_TDR03	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TDR03;

SFR_GLOBAL	SFR_TDR03	tdr03;

#ifdef __RL78__
#else
	#define	TDR03	(tdr03.ALL)
#endif

/*TDR04*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr04;
#ifdef __RL78__
#else
	#define	TDR04	(tdr04)
#endif

/*TDR05*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr05;
#ifdef __RL78__
#else
	#define	TDR05	(tdr05)
#endif

/*TDR06*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr06;
#ifdef __RL78__
#else
	#define	TDR06	(tdr06)
#endif

/*TDR07*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr07;
#ifdef __RL78__
#else
	#define	TDR07	(tdr07)
#endif

/*TDR10*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr10;
#ifdef __RL78__
#else
	#define	TDR10	(tdr10)
#endif

/* TDR11L */
#ifdef __RL78__
#else
	#define	TDR11L	(tdr11.BYTE.tdr11l)
#endif

/* TDR11H */
#ifdef __RL78__
#else
	#define	TDR11H	(tdr11.BYTE.tdr11h)
#endif

/* TDR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tdr11l;
	SFR_UNSIGNED_SHORT_INT	tdr11h;
}SFR_BYTE_TDR11;

typedef union{
	SFR_BYTE_TDR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TDR11;

SFR_GLOBAL	SFR_TDR11	tdr11;

#ifdef __RL78__
#else
	#define	TDR11	(tdr11.ALL)
#endif

/*TDR12*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr12;
#ifdef __RL78__
#else
	#define	TDR12	(tdr12)
#endif

/* TDR13L */
#ifdef __RL78__
#else
	#define	TDR13L	(tdr13.BYTE.tdr13l)
#endif

/* TDR13H */
#ifdef __RL78__
#else
	#define	TDR13H	(tdr13.BYTE.tdr13h)
#endif

/* TDR13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tdr13l;
	SFR_UNSIGNED_SHORT_INT	tdr13h;
}SFR_BYTE_TDR13;

typedef union{
	SFR_BYTE_TDR13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TDR13;

SFR_GLOBAL	SFR_TDR13	tdr13;

#ifdef __RL78__
#else
	#define	TDR13	(tdr13.ALL)
#endif

/*TDR14*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr14;
#ifdef __RL78__
#else
	#define	TDR14	(tdr14)
#endif

/*TDR15*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr15;
#ifdef __RL78__
#else
	#define	TDR15	(tdr15)
#endif

/*TDR16*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr16;
#ifdef __RL78__
#else
	#define	TDR16	(tdr16)
#endif

/*TDR17*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tdr17;
#ifdef __RL78__
#else
	#define	TDR17	(tdr17)
#endif

/* SEC */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	sec;

#ifdef __RL78__
#else
	#define	SEC	(sec)
#endif

/* MIN */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	min;

#ifdef __RL78__
#else
	#define	MIN	(min)
#endif

/* HOUR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	hour;

#ifdef __RL78__
#else
	#define	HOUR	(hour)
#endif

/* WEEK */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	week;

#ifdef __RL78__
#else
	#define	WEEK	(week)
#endif

/* DAY */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	day;

#ifdef __RL78__
#else
	#define	DAY	(day)
#endif

/* MONTH */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	month;

#ifdef __RL78__
#else
	#define	MONTH	(month)
#endif

/* YEAR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	year;

#ifdef __RL78__
#else
	#define	YEAR	(year)
#endif

/* SUBCUD */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	subcud;

#ifdef __RL78__
#else
	#define	SUBCUD	(subcud)
#endif

/* ALARMWM */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	alarmwm;

#ifdef __RL78__
#else
	#define	ALARMWM	(alarmwm)
#endif

/* ALARMWH */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	alarmwh;

#ifdef __RL78__
#else
	#define	ALARMWH	(alarmwh)
#endif

/* ALARMWW */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	alarmww;

#ifdef __RL78__
#else
	#define	ALARMWW	(alarmww)
#endif

/* RTCC0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_RTCC0;

SFR_GLOBAL	SFR_RTCC0	rtcc0;

#ifdef __RL78__
	#define	RTCC0_0	(RTCC0.0)
	#define	RTCC0_1	(RTCC0.1)
	#define	RTCC0_2	(RTCC0.2)
	#define	RTCC0_3	(RTCC0.3)
	#define	RTCC0_4	(RTCC0.4)
	#define	RTCC0_5	(RTCC0.5)
	#define	RTCC0_6	(RTCC0.6)
	#define	RTCC0_7	(RTCC0.7)
#else
	#define	RCLOE1		(rtcc0.BIT_NUMBER.bit5)
	#define	RTCE		(rtcc0.BIT_NUMBER.bit7)
	#define	RTCC0_0		(rtcc0.BIT_NUMBER.bit0)
	#define	RTCC0_1		(rtcc0.BIT_NUMBER.bit1)
	#define	RTCC0_2		(rtcc0.BIT_NUMBER.bit2)
	#define	RTCC0_3		(rtcc0.BIT_NUMBER.bit3)
	#define	RTCC0_4		(rtcc0.BIT_NUMBER.bit4)
	#define	RTCC0_5		(rtcc0.BIT_NUMBER.bit5)
	#define	RTCC0_6		(rtcc0.BIT_NUMBER.bit6)
	#define	RTCC0_7		(rtcc0.BIT_NUMBER.bit7)
	#define	RTCC0		(rtcc0.ALL)
#endif

/* RTCC1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_RTCC1;

SFR_GLOBAL	SFR_RTCC1	rtcc1;

#ifdef __RL78__
	#define	RTCC1_0	(RTCC1.0)
	#define	RTCC1_1	(RTCC1.1)
	#define	RTCC1_2	(RTCC1.2)
	#define	RTCC1_3	(RTCC1.3)
	#define	RTCC1_4	(RTCC1.4)
	#define	RTCC1_5	(RTCC1.5)
	#define	RTCC1_6	(RTCC1.6)
	#define	RTCC1_7	(RTCC1.7)
#else
	#define	RWAIT		(rtcc1.BIT_NUMBER.bit0)
	#define	RWST		(rtcc1.BIT_NUMBER.bit1)
	#define	RIFG		(rtcc1.BIT_NUMBER.bit3)
	#define	WAFG		(rtcc1.BIT_NUMBER.bit4)
	#define	WALIE		(rtcc1.BIT_NUMBER.bit6)
	#define	WALE		(rtcc1.BIT_NUMBER.bit7)
	#define	RTCC1_0		(rtcc1.BIT_NUMBER.bit0)
	#define	RTCC1_1		(rtcc1.BIT_NUMBER.bit1)
	#define	RTCC1_2		(rtcc1.BIT_NUMBER.bit2)
	#define	RTCC1_3		(rtcc1.BIT_NUMBER.bit3)
	#define	RTCC1_4		(rtcc1.BIT_NUMBER.bit4)
	#define	RTCC1_5		(rtcc1.BIT_NUMBER.bit5)
	#define	RTCC1_6		(rtcc1.BIT_NUMBER.bit6)
	#define	RTCC1_7		(rtcc1.BIT_NUMBER.bit7)
	#define	RTCC1		(rtcc1.ALL)
#endif

/* CMC */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	cmc;

#ifdef __RL78__
#else
	#define	CMC	(cmc)
#endif

/* CSC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CSC;

SFR_GLOBAL	SFR_CSC	csc;

#ifdef __RL78__
	#define	CSC_0	(CSC.0)
	#define	CSC_1	(CSC.1)
	#define	CSC_2	(CSC.2)
	#define	CSC_3	(CSC.3)
	#define	CSC_4	(CSC.4)
	#define	CSC_5	(CSC.5)
	#define	CSC_6	(CSC.6)
	#define	CSC_7	(CSC.7)
#else
	#define	HIOSTOP		(csc.BIT_NUMBER.bit0)
	#define	XTSTOP		(csc.BIT_NUMBER.bit6)
	#define	MSTOP		(csc.BIT_NUMBER.bit7)
	#define	CSC_0		(csc.BIT_NUMBER.bit0)
	#define	CSC_1		(csc.BIT_NUMBER.bit1)
	#define	CSC_2		(csc.BIT_NUMBER.bit2)
	#define	CSC_3		(csc.BIT_NUMBER.bit3)
	#define	CSC_4		(csc.BIT_NUMBER.bit4)
	#define	CSC_5		(csc.BIT_NUMBER.bit5)
	#define	CSC_6		(csc.BIT_NUMBER.bit6)
	#define	CSC_7		(csc.BIT_NUMBER.bit7)
	#define	CSC		(csc.ALL)
#endif

/* OSTC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_OSTC;

SFR_GLOBAL	SFR_OSTC	ostc;

#ifdef __RL78__
	#define	OSTC_0	(OSTC.0)
	#define	OSTC_1	(OSTC.1)
	#define	OSTC_2	(OSTC.2)
	#define	OSTC_3	(OSTC.3)
	#define	OSTC_4	(OSTC.4)
	#define	OSTC_5	(OSTC.5)
	#define	OSTC_6	(OSTC.6)
	#define	OSTC_7	(OSTC.7)
#else
	#define	OSTC_0	(ostc.BIT_NUMBER.bit0)
	#define	OSTC_1	(ostc.BIT_NUMBER.bit1)
	#define	OSTC_2	(ostc.BIT_NUMBER.bit2)
	#define	OSTC_3	(ostc.BIT_NUMBER.bit3)
	#define	OSTC_4	(ostc.BIT_NUMBER.bit4)
	#define	OSTC_5	(ostc.BIT_NUMBER.bit5)
	#define	OSTC_6	(ostc.BIT_NUMBER.bit6)
	#define	OSTC_7	(ostc.BIT_NUMBER.bit7)
	#define	OSTC	(ostc.ALL)
#endif

/* OSTS */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	osts;

#ifdef __RL78__
#else
	#define	OSTS	(osts)
#endif

/* CKC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CKC;

SFR_GLOBAL	SFR_CKC	ckc;

#ifdef __RL78__
	#define	CKC_0	(CKC.0)
	#define	CKC_1	(CKC.1)
	#define	CKC_2	(CKC.2)
	#define	CKC_3	(CKC.3)
	#define	CKC_4	(CKC.4)
	#define	CKC_5	(CKC.5)
	#define	CKC_6	(CKC.6)
	#define	CKC_7	(CKC.7)
#else
	#define	MCM0		(ckc.BIT_NUMBER.bit4)
	#define	MCS			(ckc.BIT_NUMBER.bit5)
	#define	CSS			(ckc.BIT_NUMBER.bit6)
	#define	CLS			(ckc.BIT_NUMBER.bit7)
	#define	CKC_0		(ckc.BIT_NUMBER.bit0)
	#define	CKC_1		(ckc.BIT_NUMBER.bit1)
	#define	CKC_2		(ckc.BIT_NUMBER.bit2)
	#define	CKC_3		(ckc.BIT_NUMBER.bit3)
	#define	CKC_4		(ckc.BIT_NUMBER.bit4)
	#define	CKC_5		(ckc.BIT_NUMBER.bit5)
	#define	CKC_6		(ckc.BIT_NUMBER.bit6)
	#define	CKC_7		(ckc.BIT_NUMBER.bit7)
	#define	CKC			(ckc.ALL)
#endif

/* CKS0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CKS0;

SFR_GLOBAL	SFR_CKS0	cks0;

#ifdef __RL78__
	#define	CKS0_0	(CKS0.0)
	#define	CKS0_1	(CKS0.1)
	#define	CKS0_2	(CKS0.2)
	#define	CKS0_3	(CKS0.3)
	#define	CKS0_4	(CKS0.4)
	#define	CKS0_5	(CKS0.5)
	#define	CKS0_6	(CKS0.6)
	#define	CKS0_7	(CKS0.7)
#else
	#define	PCLOE0		(cks0.BIT_NUMBER.bit7)
	#define	CKS0_0		(cks0.BIT_NUMBER.bit0)
	#define	CKS0_1		(cks0.BIT_NUMBER.bit1)
	#define	CKS0_2		(cks0.BIT_NUMBER.bit2)
	#define	CKS0_3		(cks0.BIT_NUMBER.bit3)
	#define	CKS0_4		(cks0.BIT_NUMBER.bit4)
	#define	CKS0_5		(cks0.BIT_NUMBER.bit5)
	#define	CKS0_6		(cks0.BIT_NUMBER.bit6)
	#define	CKS0_7		(cks0.BIT_NUMBER.bit7)
	#define	CKS0		(cks0.ALL)
#endif

/* RESF */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	resf;

#ifdef __RL78__
#else
	#define	RESF	(resf)
#endif

/* LVIM */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_LVIM;

SFR_GLOBAL	SFR_LVIM	lvim;

#ifdef __RL78__
	#define	LVIM_0	(LVIM.0)
	#define	LVIM_1	(LVIM.1)
	#define	LVIM_2	(LVIM.2)
	#define	LVIM_3	(LVIM.3)
	#define	LVIM_4	(LVIM.4)
	#define	LVIM_5	(LVIM.5)
	#define	LVIM_6	(LVIM.6)
	#define	LVIM_7	(LVIM.7)
#else
	#define	LVIF	(lvim.BIT_NUMBER.bit0)
	#define	LVIOMSK	(lvim.BIT_NUMBER.bit1)
	#define	LVISEN	(lvim.BIT_NUMBER.bit7)
	#define	LVIM_1	(lvim.BIT_NUMBER.bit1)
	#define	LVIM_2	(lvim.BIT_NUMBER.bit2)
	#define	LVIM_3	(lvim.BIT_NUMBER.bit3)
	#define	LVIM_4	(lvim.BIT_NUMBER.bit4)
	#define	LVIM_5	(lvim.BIT_NUMBER.bit5)
	#define	LVIM_6	(lvim.BIT_NUMBER.bit6)
	#define	LVIM_7	(lvim.BIT_NUMBER.bit7)
	#define	LVIM	(lvim.ALL)
#endif

/* LVIS */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_LVIS;

SFR_GLOBAL	SFR_LVIS	lvis;

#ifdef __RL78__
	#define	LVIS_0	(LVIS.0)
	#define	LVIS_1	(LVIS.1)
	#define	LVIS_2	(LVIS.2)
	#define	LVIS_3	(LVIS.3)
	#define	LVIS_4	(LVIS.4)
	#define	LVIS_5	(LVIS.5)
	#define	LVIS_6	(LVIS.6)
	#define	LVIS_7	(LVIS.7)
#else
	#define	LVILV	(lvis.BIT_NUMBER.bit0)
	#define	LVIMD	(lvis.BIT_NUMBER.bit7)
	#define	LVIS_1	(lvis.BIT_NUMBER.bit1)
	#define	LVIS_2	(lvis.BIT_NUMBER.bit2)
	#define	LVIS_3	(lvis.BIT_NUMBER.bit3)
	#define	LVIS_4	(lvis.BIT_NUMBER.bit4)
	#define	LVIS_5	(lvis.BIT_NUMBER.bit5)
	#define	LVIS_6	(lvis.BIT_NUMBER.bit6)
	#define	LVIS_7	(lvis.BIT_NUMBER.bit7)
	#define	LVIS	(lvis.ALL)
#endif

/* WDTE */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	wdte;

#ifdef __RL78__
#else
	#define	WDTE	(wdte)
#endif

/* CRCIN */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	crcin;

#ifdef __RL78__
#else
	#define	CRCIN	(crcin)
#endif

/* IF2L */
#ifdef __RL78__
	#define	IF2L_0	(IF2L.0)
	#define	IF2L_1	(IF2L.1)
	#define	IF2L_2	(IF2L.2)
	#define	IF2L_3	(IF2L.3)
	#define	IF2L_4	(IF2L.4)
	#define	IF2L_5	(IF2L.5)
	#define	IF2L_6	(IF2L.6)
	#define	IF2L_7	(IF2L.7)
#else
	#define	TMIF05		(if2.BIT_NUMBER_16.bit0)
	#define	TMIF06		(if2.BIT_NUMBER_16.bit1)
	#define	TMIF07		(if2.BIT_NUMBER_16.bit2)
	#define	PIF11		(if2.BIT_NUMBER_16.bit3)
	#define	LIN0WUPIF	(if2.BIT_NUMBER_16.bit3)
	#define	KRIF		(if2.BIT_NUMBER_16.bit4)
	#define	CAN0ERRIF	(if2.BIT_NUMBER_16.bit5)
	#define	CAN0WUPIF	(if2.BIT_NUMBER_16.bit6)
	#define	CAN0CFRIF	(if2.BIT_NUMBER_16.bit7)
	#define	IF2L_0		(if2.BIT_NUMBER_16.bit0)
	#define	IF2L_1		(if2.BIT_NUMBER_16.bit1)
	#define	IF2L_2		(if2.BIT_NUMBER_16.bit2)
	#define	IF2L_3		(if2.BIT_NUMBER_16.bit3)
	#define	IF2L_4		(if2.BIT_NUMBER_16.bit4)
	#define	IF2L_5		(if2.BIT_NUMBER_16.bit5)
	#define	IF2L_6		(if2.BIT_NUMBER_16.bit6)
	#define	IF2L_7		(if2.BIT_NUMBER_16.bit7)
	#define	IF2L		(if2.BYTE.if2l)
#endif

/* IF2H */
#ifdef __RL78__
	#define	IF2H_0	(IF2H.0)
	#define	IF2H_1	(IF2H.1)
	#define	IF2H_2	(IF2H.2)
	#define	IF2H_3	(IF2H.3)
	#define	IF2H_4	(IF2H.4)
	#define	IF2H_5	(IF2H.5)
	#define	IF2H_6	(IF2H.6)
	#define	IF2H_7	(IF2H.7)
#else
	#define	CAN0TRMIF	(if2.BIT_NUMBER_16.bit8)
	#define	CANGRFRIF	(if2.BIT_NUMBER_16.bit9)
	#define	CANGERRIF	(if2.BIT_NUMBER_16.bit10)
	#define	TMIF10		(if2.BIT_NUMBER_16.bit11)
	#define	TMIF11		(if2.BIT_NUMBER_16.bit12)
	#define	TMIF12		(if2.BIT_NUMBER_16.bit13)
	#define	TMIF13		(if2.BIT_NUMBER_16.bit14)
	#define	FLIF		(if2.BIT_NUMBER_16.bit15)
	#define	IF2H_0		(if2.BIT_NUMBER_16.bit8)
	#define	IF2H_1		(if2.BIT_NUMBER_16.bit9)
	#define	IF2H_2		(if2.BIT_NUMBER_16.bit10)
	#define	IF2H_3		(if2.BIT_NUMBER_16.bit11)
	#define	IF2H_4		(if2.BIT_NUMBER_16.bit12)
	#define	IF2H_5		(if2.BIT_NUMBER_16.bit13)
	#define	IF2H_6		(if2.BIT_NUMBER_16.bit14)
	#define	IF2H_7		(if2.BIT_NUMBER_16.bit15)
	#define	IF2H		(if2.BYTE.if2h)
#endif

/* IF2 */
typedef struct{
	SFR_UNSIGNED_CHAR	if2l;
	SFR_UNSIGNED_CHAR	if2h;
}SFR_BYTE_IF2;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_IF2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_IF2;

SFR_GLOBAL	SFR_IF2	if2;

#ifdef __RL78__
#else
	#define	IF2	(if2.ALL)
#endif

/* IF3L */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_IF3L;

SFR_GLOBAL	SFR_IF3L	if3l;

#ifdef __RL78__
	#define	IF3L_0	(IF3L.0)
	#define	IF3L_1	(IF3L.1)
	#define	IF3L_2	(IF3L.2)
	#define	IF3L_3	(IF3L.3)
	#define	IF3L_4	(IF3L.4)
	#define	IF3L_5	(IF3L.5)
	#define	IF3L_6	(IF3L.6)
	#define	IF3L_7	(IF3L.7)
#else
	#define	PIF12		(if3l.BIT_NUMBER.bit0)
	#define	LIN1WUPIF	(if3l.BIT_NUMBER.bit0)
	#define	LIN1TRMIF	(if3l.BIT_NUMBER.bit1)
	#define	LIN1RVCIF	(if3l.BIT_NUMBER.bit2)
	#define	LIN1STAIF	(if3l.BIT_NUMBER.bit3)
	#define	LIN1IF		(if3l.BIT_NUMBER.bit3)
	#define	TMIF14		(if3l.BIT_NUMBER.bit4)
	#define	TMIF15		(if3l.BIT_NUMBER.bit5)
	#define	TMIF16		(if3l.BIT_NUMBER.bit6)
	#define	TMIF17		(if3l.BIT_NUMBER.bit7)
	#define	IF3L_0		(if3l.BIT_NUMBER.bit0)
	#define	IF3L_1		(if3l.BIT_NUMBER.bit1)
	#define	IF3L_2		(if3l.BIT_NUMBER.bit2)
	#define	IF3L_3		(if3l.BIT_NUMBER.bit3)
	#define	IF3L_4		(if3l.BIT_NUMBER.bit4)
	#define	IF3L_5		(if3l.BIT_NUMBER.bit5)
	#define	IF3L_6		(if3l.BIT_NUMBER.bit6)
	#define	IF3L_7		(if3l.BIT_NUMBER.bit7)
	#define	IF3L		(if3l.ALL)
#endif

/* MK2L */
#ifdef __RL78__
	#define	MK2L_0	(MK2L.0)
	#define	MK2L_1	(MK2L.1)
	#define	MK2L_2	(MK2L.2)
	#define	MK2L_3	(MK2L.3)
	#define	MK2L_4	(MK2L.4)
	#define	MK2L_5	(MK2L.5)
	#define	MK2L_6	(MK2L.6)
	#define	MK2L_7	(MK2L.7)
#else
	#define	TMMK05			(mk2.BIT_NUMBER_16.bit0)
	#define	TMMK06			(mk2.BIT_NUMBER_16.bit1)
	#define	TMMK07			(mk2.BIT_NUMBER_16.bit2)
	#define	PMK11			(mk2.BIT_NUMBER_16.bit3)
	#define	LIN0WUPMK		(mk2.BIT_NUMBER_16.bit3)
	#define	KRMK			(mk2.BIT_NUMBER_16.bit4)
	#define	CAN0ERRMK		(mk2.BIT_NUMBER_16.bit5)
	#define	CAN0WUPMK		(mk2.BIT_NUMBER_16.bit6)
	#define	CAN0CFRMK		(mk2.BIT_NUMBER_16.bit7)
	#define	MK2L_0			(mk2.BIT_NUMBER_16.bit0)
	#define	MK2L_1			(mk2.BIT_NUMBER_16.bit1)
	#define	MK2L_2			(mk2.BIT_NUMBER_16.bit2)
	#define	MK2L_3			(mk2.BIT_NUMBER_16.bit3)
	#define	MK2L_4			(mk2.BIT_NUMBER_16.bit4)
	#define	MK2L_5			(mk2.BIT_NUMBER_16.bit5)
	#define	MK2L_6			(mk2.BIT_NUMBER_16.bit6)
	#define	MK2L_7			(mk2.BIT_NUMBER_16.bit7)
	#define	MK2L			(mk2.BYTE.mk2l)
#endif

/* MK2H */
#ifdef __RL78__
	#define	MK2H_0	(MK2H.0)
	#define	MK2H_1	(MK2H.1)
	#define	MK2H_2	(MK2H.2)
	#define	MK2H_3	(MK2H.3)
	#define	MK2H_4	(MK2H.4)
	#define	MK2H_5	(MK2H.5)
	#define	MK2H_6	(MK2H.6)
	#define	MK2H_7	(MK2H.7)
#else
	#define	CAN0TRMMK	(mk2.BIT_NUMBER_16.bit8)
	#define	CANGRFRMK	(mk2.BIT_NUMBER_16.bit9)
	#define	CANGERRMK	(mk2.BIT_NUMBER_16.bit10)
	#define	TMMK10		(mk2.BIT_NUMBER_16.bit11)
	#define	TMMK11		(mk2.BIT_NUMBER_16.bit12)
	#define	TMMK12		(mk2.BIT_NUMBER_16.bit13)
	#define	TMMK13		(mk2.BIT_NUMBER_16.bit14)
	#define	FLMK		(mk2.BIT_NUMBER_16.bit15)
	#define	MK2H_0		(mk2.BIT_NUMBER_16.bit8)
	#define	MK2H_1		(mk2.BIT_NUMBER_16.bit9)
	#define	MK2H_2		(mk2.BIT_NUMBER_16.bit10)
	#define	MK2H_3		(mk2.BIT_NUMBER_16.bit11)
	#define	MK2H_4		(mk2.BIT_NUMBER_16.bit12)
	#define	MK2H_5		(mk2.BIT_NUMBER_16.bit13)
	#define	MK2H_6		(mk2.BIT_NUMBER_16.bit14)
	#define	MK2H_7		(mk2.BIT_NUMBER_16.bit15)
	#define	MK2H		(mk2.BYTE.mk2h)
#endif

/* MK2 */
typedef struct{
	SFR_UNSIGNED_CHAR	mk2l;
	SFR_UNSIGNED_CHAR	mk2h;
}SFR_BYTE_MK2;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_MK2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_MK2;

SFR_GLOBAL	SFR_MK2	mk2;

#ifdef __RL78__
#else
	#define	MK2	(mk2.ALL)
#endif

/* MK3L */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_MK3L;

SFR_GLOBAL	SFR_MK3L	mk3l;

#ifdef __RL78__
	#define	MK3L_0	(MK3L.0)
	#define	MK3L_1	(MK3L.1)
	#define	MK3L_2	(MK3L.2)
	#define	MK3L_3	(MK3L.3)
	#define	MK3L_4	(MK3L.4)
	#define	MK3L_5	(MK3L.5)
	#define	MK3L_6	(MK3L.6)
	#define	MK3L_7	(MK3L.7)
#else
	#define	PMK12		(mk3l.BIT_NUMBER.bit0)
	#define	LIN1WUPMK	(mk3l.BIT_NUMBER.bit0)
	#define	LIN1TRMMK	(mk3l.BIT_NUMBER.bit1)
	#define	LIN1RVCMK	(mk3l.BIT_NUMBER.bit2)
	#define	LIN1STAMK	(mk3l.BIT_NUMBER.bit3)
	#define	LIN1MK		(mk3l.BIT_NUMBER.bit3)
	#define	TMMK14		(mk3l.BIT_NUMBER.bit4)
	#define	TMMK15		(mk3l.BIT_NUMBER.bit5)
	#define	TMMK16		(mk3l.BIT_NUMBER.bit6)
	#define	TMMK17		(mk3l.BIT_NUMBER.bit7)
	#define	MK3L_0		(mk3l.BIT_NUMBER.bit0)
	#define	MK3L_1		(mk3l.BIT_NUMBER.bit1)
	#define	MK3L_2		(mk3l.BIT_NUMBER.bit2)
	#define	MK3L_3		(mk3l.BIT_NUMBER.bit3)
	#define	MK3L_4		(mk3l.BIT_NUMBER.bit4)
	#define	MK3L_5		(mk3l.BIT_NUMBER.bit5)
	#define	MK3L_6		(mk3l.BIT_NUMBER.bit6)
	#define	MK3L_7		(mk3l.BIT_NUMBER.bit7)
	#define	MK3L		(mk3l.ALL)
#endif

/* PR02L */
#ifdef __RL78__
	#define	PR02L_0	(PR02L.0)
	#define	PR02L_1	(PR02L.1)
	#define	PR02L_2	(PR02L.2)
	#define	PR02L_3	(PR02L.3)
	#define	PR02L_4	(PR02L.4)
	#define	PR02L_5	(PR02L.5)
	#define	PR02L_6	(PR02L.6)
	#define	PR02L_7	(PR02L.7)
#else
	#define	TMPR005		(pr02.BIT_NUMBER_16.bit0)
	#define	TMPR006		(pr02.BIT_NUMBER_16.bit1)
	#define	TMPR007		(pr02.BIT_NUMBER_16.bit2)
	#define	PPR011		(pr02.BIT_NUMBER_16.bit3)
	#define	LIN0WUPPR0	(pr02.BIT_NUMBER_16.bit3)
	#define	KRPR0		(pr02.BIT_NUMBER_16.bit4)
	#define	CAN0ERRPR0	(pr02.BIT_NUMBER_16.bit5)
	#define	CAN0WUPPR0	(pr02.BIT_NUMBER_16.bit6)
	#define	CAN0CFRPR	(pr02.BIT_NUMBER_16.bit7)
	#define	PR02L_0		(pr02.BIT_NUMBER_16.bit0)
	#define	PR02L_1		(pr02.BIT_NUMBER_16.bit1)
	#define	PR02L_2		(pr02.BIT_NUMBER_16.bit2)
	#define	PR02L_3		(pr02.BIT_NUMBER_16.bit3)
	#define	PR02L_4		(pr02.BIT_NUMBER_16.bit4)
	#define	PR02L_5		(pr02.BIT_NUMBER_16.bit5)
	#define	PR02L_6		(pr02.BIT_NUMBER_16.bit6)
	#define	PR02L_7		(pr02.BIT_NUMBER_16.bit7)
	#define	PR02L		(pr02.BYTE.pr02l)
#endif

/* PR02H */
#ifdef __RL78__
	#define	PR02H_0	(PR02H.0)
	#define	PR02H_1	(PR02H.1)
	#define	PR02H_2	(PR02H.2)
	#define	PR02H_3	(PR02H.3)
	#define	PR02H_4	(PR02H.4)
	#define	PR02H_5	(PR02H.5)
	#define	PR02H_6	(PR02H.6)
	#define	PR02H_7	(PR02H.7)
#else
	#define	CAN0TRMPR0	(pr02.BIT_NUMBER_16.bit8)
	#define	CANGRFRPR0	(pr02.BIT_NUMBER_16.bit9)
	#define	CANGERRPR0	(pr02.BIT_NUMBER_16.bit10)
	#define	TMPR010		(pr02.BIT_NUMBER_16.bit11)
	#define	TMPR011		(pr02.BIT_NUMBER_16.bit12)
	#define	TMPR012		(pr02.BIT_NUMBER_16.bit13)
	#define	TMPR013		(pr02.BIT_NUMBER_16.bit14)
	#define	FLPR0		(pr02.BIT_NUMBER_16.bit15)
	#define	PR02H_0		(pr02.BIT_NUMBER_16.bit8)
	#define	PR02H_1		(pr02.BIT_NUMBER_16.bit9)
	#define	PR02H_2		(pr02.BIT_NUMBER_16.bit10)
	#define	PR02H_3		(pr02.BIT_NUMBER_16.bit11)
	#define	PR02H_4		(pr02.BIT_NUMBER_16.bit12)
	#define	PR02H_5		(pr02.BIT_NUMBER_16.bit13)
	#define	PR02H_6		(pr02.BIT_NUMBER_16.bit14)
	#define	PR02H_7		(pr02.BIT_NUMBER_16.bit15)
	#define	PR02H		(pr02.BYTE.pr02h)
#endif

/* PR02 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr02l;
	SFR_UNSIGNED_CHAR	pr02h;
}SFR_BYTE_PR02;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR02	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR02;

SFR_GLOBAL	SFR_PR02	pr02;

#ifdef __RL78__
#else
	#define	PR02	(pr02.ALL)
#endif

/* PR03L */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PR03L;

SFR_GLOBAL	SFR_PR03L	pr03l;

#ifdef __RL78__
	#define	PR03L_0	(PR03L.0)
	#define	PR03L_1	(PR03L.1)
	#define	PR03L_2	(PR03L.2)
	#define	PR03L_3	(PR03L.3)
	#define	PR03L_4	(PR03L.4)
	#define	PR03L_5	(PR03L.5)
	#define	PR03L_6	(PR03L.6)
	#define	PR03L_7	(PR03L.7)
#else
	#define	PPR012		(pr03l.BIT_NUMBER.bit0)
	#define	LIN1WUPPR0	(pr03l.BIT_NUMBER.bit0)
	#define	LIN1TRMPR0	(pr03l.BIT_NUMBER.bit1)
	#define	LIN1RVCPR0	(pr03l.BIT_NUMBER.bit2)
	#define	LIN1STAPR0	(pr03l.BIT_NUMBER.bit3)
	#define	LIN1PR0		(pr03l.BIT_NUMBER.bit3)
	#define	TMPR014		(pr03l.BIT_NUMBER.bit4)
	#define	TMPR015		(pr03l.BIT_NUMBER.bit5)
	#define	TMPR016		(pr03l.BIT_NUMBER.bit6)
	#define	TMPR017		(pr03l.BIT_NUMBER.bit7)
	#define	PR03L_0		(pr03l.BIT_NUMBER.bit0)
	#define	PR03L_1		(pr03l.BIT_NUMBER.bit1)
	#define	PR03L_2		(pr03l.BIT_NUMBER.bit2)
	#define	PR03L_3		(pr03l.BIT_NUMBER.bit3)
	#define	PR03L_4		(pr03l.BIT_NUMBER.bit4)
	#define	PR03L_5		(pr03l.BIT_NUMBER.bit5)
	#define	PR03L_6		(pr03l.BIT_NUMBER.bit6)
	#define	PR03L_7		(pr03l.BIT_NUMBER.bit7)
	#define	PR03L		(pr03l.ALL)
#endif

/* PR12L */
#ifdef __RL78__
	#define	PR12L_0	(PR12L.0)
	#define	PR12L_1	(PR12L.1)
	#define	PR12L_2	(PR12L.2)
	#define	PR12L_3	(PR12L.3)
	#define	PR12L_4	(PR12L.4)
	#define	PR12L_5	(PR12L.5)
	#define	PR12L_6	(PR12L.6)
	#define	PR12L_7	(PR12L.7)
#else
	#define	TMPR105		(pr12.BIT_NUMBER_16.bit0)
	#define	TMPR106		(pr12.BIT_NUMBER_16.bit1)
	#define	TMPR107		(pr12.BIT_NUMBER_16.bit2)
	#define	PPR111		(pr12.BIT_NUMBER_16.bit3)
	#define	LIN0WUPPR1	(pr12.BIT_NUMBER_16.bit3)
	#define	KRPR1		(pr12.BIT_NUMBER_16.bit4)
	#define	CAN0ERRPR1	(pr12.BIT_NUMBER_16.bit5)
	#define	CAN0WUPPR1	(pr12.BIT_NUMBER_16.bit6)
	#define	CAN0CFRPR1	(pr12.BIT_NUMBER_16.bit7)
	#define	PR12L_0		(pr12.BIT_NUMBER_16.bit0)
	#define	PR12L_1		(pr12.BIT_NUMBER_16.bit1)
	#define	PR12L_2		(pr12.BIT_NUMBER_16.bit2)
	#define	PR12L_3		(pr12.BIT_NUMBER_16.bit3)
	#define	PR12L_4		(pr12.BIT_NUMBER_16.bit4)
	#define	PR12L_5		(pr12.BIT_NUMBER_16.bit5)
	#define	PR12L_6		(pr12.BIT_NUMBER_16.bit6)
	#define	PR12L_7		(pr12.BIT_NUMBER_16.bit7)
	#define	PR12L		(pr12.BYTE.pr12l)
#endif

/* PR12H */
#ifdef __RL78__
	#define	PR12H_0	(PR12H.0)
	#define	PR12H_1	(PR12H.1)
	#define	PR12H_2	(PR12H.2)
	#define	PR12H_3	(PR12H.3)
	#define	PR12H_4	(PR12H.4)
	#define	PR12H_5	(PR12H.5)
	#define	PR12H_6	(PR12H.6)
	#define	PR12H_7	(PR12H.7)
#else
	#define	CAN0TRMPR1	(pr12.BIT_NUMBER_16.bit8)
	#define	CANGRFRPR1	(pr12.BIT_NUMBER_16.bit9)
	#define	CANGERRPR1	(pr12.BIT_NUMBER_16.bit10)
	#define	TMPR110		(pr12.BIT_NUMBER_16.bit11)
	#define	TMPR111		(pr12.BIT_NUMBER_16.bit12)
	#define	TMPR112		(pr12.BIT_NUMBER_16.bit13)
	#define	TMPR113		(pr12.BIT_NUMBER_16.bit14)
	#define	FLPR1		(pr12.BIT_NUMBER_16.bit15)
	#define	PR12H_0		(pr12.BIT_NUMBER_16.bit8)
	#define	PR12H_1		(pr12.BIT_NUMBER_16.bit9)
	#define	PR12H_2		(pr12.BIT_NUMBER_16.bit10)
	#define	PR12H_3		(pr12.BIT_NUMBER_16.bit11)
	#define	PR12H_4		(pr12.BIT_NUMBER_16.bit12)
	#define	PR12H_5		(pr12.BIT_NUMBER_16.bit13)
	#define	PR12H_6		(pr12.BIT_NUMBER_16.bit14)
	#define	PR12H_7		(pr12.BIT_NUMBER_16.bit15)
	#define	PR12H		(pr12.BYTE.pr12h)
#endif

/* PR12 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr12l;
	SFR_UNSIGNED_CHAR	pr12h;
}SFR_BYTE_PR12;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR12;

SFR_GLOBAL	SFR_PR12	pr12;

#ifdef __RL78__
#else
	#define	PR12	(pr12.ALL)
#endif

/* PR13L */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PR13L;

SFR_GLOBAL	SFR_PR13L	pr13l;

#ifdef __RL78__
	#define	PR13L_0	(PR13L.0)
	#define	PR13L_1	(PR13L.1)
	#define	PR13L_2	(PR13L.2)
	#define	PR13L_3	(PR13L.3)
	#define	PR13L_4	(PR13L.4)
	#define	PR13L_5	(PR13L.5)
	#define	PR13L_6	(PR13L.6)
	#define	PR13L_7	(PR13L.7)
#else
	#define	PPR112		(pr13l.BIT_NUMBER.bit0)
	#define	LIN1WUPPR1	(pr13l.BIT_NUMBER.bit0)
	#define	LIN1TRMPR1	(pr13l.BIT_NUMBER.bit1)
	#define	LIN1RVCPR1	(pr13l.BIT_NUMBER.bit2)
	#define	LIN1STAPR1	(pr13l.BIT_NUMBER.bit3)
	#define	LIN1PR1		(pr13l.BIT_NUMBER.bit3)
	#define	TMPR114		(pr13l.BIT_NUMBER.bit4)
	#define	TMPR115		(pr13l.BIT_NUMBER.bit5)
	#define	TMPR116		(pr13l.BIT_NUMBER.bit6)
	#define	TMPR117		(pr13l.BIT_NUMBER.bit7)
	#define	PR13L_0		(pr13l.BIT_NUMBER.bit0)
	#define	PR13L_1		(pr13l.BIT_NUMBER.bit1)
	#define	PR13L_2		(pr13l.BIT_NUMBER.bit2)
	#define	PR13L_3		(pr13l.BIT_NUMBER.bit3)
	#define	PR13L_4		(pr13l.BIT_NUMBER.bit4)
	#define	PR13L_5		(pr13l.BIT_NUMBER.bit5)
	#define	PR13L_6		(pr13l.BIT_NUMBER.bit6)
	#define	PR13L_7		(pr13l.BIT_NUMBER.bit7)
	#define	PR13L		(pr13l.ALL)
#endif

/* IF0L */
#ifdef __RL78__
	#define	IF0L_0	(IF0L.0)
	#define	IF0L_1	(IF0L.1)
	#define	IF0L_2	(IF0L.2)
	#define	IF0L_3	(IF0L.3)
	#define	IF0L_4	(IF0L.4)
	#define	IF0L_5	(IF0L.5)
	#define	IF0L_6	(IF0L.6)
	#define	IF0L_7	(IF0L.7)
#else
	#define	WDTIIF	(if0.BIT_NUMBER_16.bit0)
	#define	LVIIF	(if0.BIT_NUMBER_16.bit1)
	#define	PIF0	(if0.BIT_NUMBER_16.bit2)
	#define	PIF1	(if0.BIT_NUMBER_16.bit3)
	#define	PIF2	(if0.BIT_NUMBER_16.bit4)
	#define	PIF3	(if0.BIT_NUMBER_16.bit5)
	#define	PIF4	(if0.BIT_NUMBER_16.bit6)
	#define	SPMIF	(if0.BIT_NUMBER_16.bit6)
	#define	PIF5	(if0.BIT_NUMBER_16.bit7)
	#define	CMPIF0	(if0.BIT_NUMBER_16.bit7)
	#define	IF0L_0	(if0.BIT_NUMBER_16.bit0)
	#define	IF0L_1	(if0.BIT_NUMBER_16.bit1)
	#define	IF0L_2	(if0.BIT_NUMBER_16.bit2)
	#define	IF0L_3	(if0.BIT_NUMBER_16.bit3)
	#define	IF0L_4	(if0.BIT_NUMBER_16.bit4)
	#define	IF0L_5	(if0.BIT_NUMBER_16.bit5)
	#define	IF0L_6	(if0.BIT_NUMBER_16.bit6)
	#define	IF0L_7	(if0.BIT_NUMBER_16.bit7)
	#define	IF0L	(if0.BYTE.if0l)
#endif

/* IF0H */
#ifdef __RL78__
	#define	IF0H_0	(IF0H.0)
	#define	IF0H_1	(IF0H.1)
	#define	IF0H_2	(IF0H.2)
	#define	IF0H_3	(IF0H.3)
	#define	IF0H_4	(IF0H.4)
	#define	IF0H_5	(IF0H.5)
	#define	IF0H_6	(IF0H.6)
	#define	IF0H_7	(IF0H.7)
#else
	#define	CLMIF		(if0.BIT_NUMBER_16.bit8)
	#define	PIF13		(if0.BIT_NUMBER_16.bit8)
	#define	STIF0		(if0.BIT_NUMBER_16.bit9)
	#define	CSIIF00		(if0.BIT_NUMBER_16.bit9)
	#define	IICIF00		(if0.BIT_NUMBER_16.bit9)
	#define	SRIF0		(if0.BIT_NUMBER_16.bit10)
	#define	CSIIF01		(if0.BIT_NUMBER_16.bit10)
	#define	IICIF01		(if0.BIT_NUMBER_16.bit10)
	#define	TRDIF0		(if0.BIT_NUMBER_16.bit11)
	#define	TRDIF1		(if0.BIT_NUMBER_16.bit12)
	#define	TRJIF0		(if0.BIT_NUMBER_16.bit13)
	#define	RAMIF		(if0.BIT_NUMBER_16.bit14)
	#define	LIN0TRMIF	(if0.BIT_NUMBER_16.bit15)
	#define	IF0H_0		(if0.BIT_NUMBER_16.bit8)
	#define	IF0H_1		(if0.BIT_NUMBER_16.bit9)
	#define	IF0H_2		(if0.BIT_NUMBER_16.bit10)
	#define	IF0H_3		(if0.BIT_NUMBER_16.bit11)
	#define	IF0H_4		(if0.BIT_NUMBER_16.bit12)
	#define	IF0H_5		(if0.BIT_NUMBER_16.bit13)
	#define	IF0H_6		(if0.BIT_NUMBER_16.bit14)
	#define	IF0H_7		(if0.BIT_NUMBER_16.bit15)
	#define	IF0H		(if0.BYTE.if0h)
#endif

/* IF0 */
typedef struct{
	SFR_UNSIGNED_CHAR	if0l;
	SFR_UNSIGNED_CHAR	if0h;
}SFR_BYTE_IF0;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_IF0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_IF0;

SFR_GLOBAL	SFR_IF0	if0;

#ifdef __RL78__
#else
	#define	IF0	(if0.ALL)
#endif

/* IF1L */
#ifdef __RL78__
	#define	IF1L_0	(IF1L.0)
	#define	IF1L_1	(IF1L.1)
	#define	IF1L_2	(IF1L.2)
	#define	IF1L_3	(IF1L.3)
	#define	IF1L_4	(IF1L.4)
	#define	IF1L_5	(IF1L.5)
	#define	IF1L_6	(IF1L.6)
	#define	IF1L_7	(IF1L.7)
#else
	#define	LIN0RVCIF	(if1.BIT_NUMBER_16.bit0)
	#define	LIN0STAIF	(if1.BIT_NUMBER_16.bit1)
	#define	LIN0IF		(if1.BIT_NUMBER_16.bit1)
	#define	IICAIF0		(if1.BIT_NUMBER_16.bit2)
	#define	PIF8		(if1.BIT_NUMBER_16.bit3)
	#define	RTCIF		(if1.BIT_NUMBER_16.bit3)
	#define	TMIF00		(if1.BIT_NUMBER_16.bit4)
	#define	TMIF01		(if1.BIT_NUMBER_16.bit5)
	#define	TMIF02		(if1.BIT_NUMBER_16.bit6)
	#define	TMIF03		(if1.BIT_NUMBER_16.bit7)
	#define	IF1L_0		(if1.BIT_NUMBER_16.bit0)
	#define	IF1L_1		(if1.BIT_NUMBER_16.bit1)
	#define	IF1L_2		(if1.BIT_NUMBER_16.bit2)
	#define	IF1L_3		(if1.BIT_NUMBER_16.bit3)
	#define	IF1L_4		(if1.BIT_NUMBER_16.bit4)
	#define	IF1L_5		(if1.BIT_NUMBER_16.bit5)
	#define	IF1L_6		(if1.BIT_NUMBER_16.bit6)
	#define	IF1L_7		(if1.BIT_NUMBER_16.bit7)
	#define	IF1L		(if1.BYTE.if1l)
#endif

/* IF1H */
#ifdef __RL78__
	#define	IF1H_0	(IF1H.0)
	#define	IF1H_1	(IF1H.1)
	#define	IF1H_2	(IF1H.2)
	#define	IF1H_3	(IF1H.3)
	#define	IF1H_4	(IF1H.4)
	#define	IF1H_5	(IF1H.5)
	#define	IF1H_6	(IF1H.6)
	#define	IF1H_7	(IF1H.7)
#else
	#define	ADIF		(if1.BIT_NUMBER_16.bit8)
	#define	PIF6		(if1.BIT_NUMBER_16.bit9)
	#define	TMIF11H		(if1.BIT_NUMBER_16.bit9)
	#define	PIF7		(if1.BIT_NUMBER_16.bit10)
	#define	TMIF13H		(if1.BIT_NUMBER_16.bit10)
	#define	PIF9		(if1.BIT_NUMBER_16.bit11)
	#define	TMIF01H		(if1.BIT_NUMBER_16.bit11)
	#define	PIF10		(if1.BIT_NUMBER_16.bit12)
	#define	TMIF03H		(if1.BIT_NUMBER_16.bit12)
	#define	STIF1		(if1.BIT_NUMBER_16.bit13)
	#define	CSIIF10		(if1.BIT_NUMBER_16.bit13)
	#define	IICIF10		(if1.BIT_NUMBER_16.bit13)
	#define	SRIF1		(if1.BIT_NUMBER_16.bit14)
	#define	CSIIF11		(if1.BIT_NUMBER_16.bit14)
	#define	IICIF11		(if1.BIT_NUMBER_16.bit14)
	#define	TMIF04		(if1.BIT_NUMBER_16.bit15)
	#define	IF1H_0		(if1.BIT_NUMBER_16.bit8)
	#define	IF1H_1		(if1.BIT_NUMBER_16.bit9)
	#define	IF1H_2		(if1.BIT_NUMBER_16.bit10)
	#define	IF1H_3		(if1.BIT_NUMBER_16.bit11)
	#define	IF1H_4		(if1.BIT_NUMBER_16.bit12)
	#define	IF1H_5		(if1.BIT_NUMBER_16.bit13)
	#define	IF1H_6		(if1.BIT_NUMBER_16.bit14)
	#define	IF1H_7		(if1.BIT_NUMBER_16.bit15)
	#define	IF1H		(if1.BYTE.if1h)
#endif

/* IF1 */
typedef struct{
	SFR_UNSIGNED_CHAR	if1l;
	SFR_UNSIGNED_CHAR	if1h;
}SFR_BYTE_IF1;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_IF1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_IF1;

SFR_GLOBAL	SFR_IF1	if1;

#ifdef __RL78__
#else
	#define	IF1	(if1.ALL)
#endif

/* MK0L */
#ifdef __RL78__
	#define	MK0L_0	(MK0L.0)
	#define	MK0L_1	(MK0L.1)
	#define	MK0L_2	(MK0L.2)
	#define	MK0L_3	(MK0L.3)
	#define	MK0L_4	(MK0L.4)
	#define	MK0L_5	(MK0L.5)
	#define	MK0L_6	(MK0L.6)
	#define	MK0L_7	(MK0L.7)
#else
	#define	WDTIMK	(mk0.BIT_NUMBER_16.bit0)
	#define	LVIMK	(mk0.BIT_NUMBER_16.bit1)
	#define	PMK0	(mk0.BIT_NUMBER_16.bit2)
	#define	PMK1	(mk0.BIT_NUMBER_16.bit3)
	#define	PMK2	(mk0.BIT_NUMBER_16.bit4)
	#define	PMK3	(mk0.BIT_NUMBER_16.bit5)
	#define	PMK4	(mk0.BIT_NUMBER_16.bit6)
	#define	SPMMK	(mk0.BIT_NUMBER_16.bit6)
	#define	PMK5	(mk0.BIT_NUMBER_16.bit7)
	#define	CMPMK0	(mk0.BIT_NUMBER_16.bit7)
	#define	MK0L_0	(mk0.BIT_NUMBER_16.bit0)
	#define	MK0L_1	(mk0.BIT_NUMBER_16.bit1)
	#define	MK0L_2	(mk0.BIT_NUMBER_16.bit2)
	#define	MK0L_3	(mk0.BIT_NUMBER_16.bit3)
	#define	MK0L_4	(mk0.BIT_NUMBER_16.bit4)
	#define	MK0L_5	(mk0.BIT_NUMBER_16.bit5)
	#define	MK0L_6	(mk0.BIT_NUMBER_16.bit6)
	#define	MK0L_7	(mk0.BIT_NUMBER_16.bit7)
	#define	MK0L	(mk0.BYTE.mk0l)
#endif

/* MK0H */
#ifdef __RL78__
	#define	MK0H_0	(MK0H.0)
	#define	MK0H_1	(MK0H.1)
	#define	MK0H_2	(MK0H.2)
	#define	MK0H_3	(MK0H.3)
	#define	MK0H_4	(MK0H.4)
	#define	MK0H_5	(MK0H.5)
	#define	MK0H_6	(MK0H.6)
	#define	MK0H_7	(MK0H.7)
#else
	#define	CLMMK		(mk0.BIT_NUMBER_16.bit8)
	#define	PMK13		(mk0.BIT_NUMBER_16.bit8)
	#define	STMK0		(mk0.BIT_NUMBER_16.bit9)
	#define	CSIMK00		(mk0.BIT_NUMBER_16.bit9)
	#define	IICMK00		(mk0.BIT_NUMBER_16.bit9)
	#define	SRMK0		(mk0.BIT_NUMBER_16.bit10)
	#define	CSIMK01		(mk0.BIT_NUMBER_16.bit10)
	#define	IICMK01		(mk0.BIT_NUMBER_16.bit10)
	#define	TRDMK0		(mk0.BIT_NUMBER_16.bit11)
	#define	TRDMK1		(mk0.BIT_NUMBER_16.bit12)
	#define	TRJMK0		(mk0.BIT_NUMBER_16.bit13)
	#define	RAMMK		(mk0.BIT_NUMBER_16.bit14)
	#define	LIN0TRMMK	(mk0.BIT_NUMBER_16.bit15)
	#define	MK0H_0		(mk0.BIT_NUMBER_16.bit8)
	#define	MK0H_1		(mk0.BIT_NUMBER_16.bit9)
	#define	MK0H_2		(mk0.BIT_NUMBER_16.bit10)
	#define	MK0H_3		(mk0.BIT_NUMBER_16.bit11)
	#define	MK0H_4		(mk0.BIT_NUMBER_16.bit12)
	#define	MK0H_5		(mk0.BIT_NUMBER_16.bit13)
	#define	MK0H_6		(mk0.BIT_NUMBER_16.bit14)
	#define	MK0H_7		(mk0.BIT_NUMBER_16.bit15)
	#define	MK0H		(mk0.BYTE.mk0h)
#endif

/* MK0 */
typedef struct{
	SFR_UNSIGNED_CHAR	mk0l;
	SFR_UNSIGNED_CHAR	mk0h;
}SFR_BYTE_MK0;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_MK0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_MK0;

SFR_GLOBAL	SFR_MK0	mk0;

#ifdef __RL78__
#else
	#define	MK0	(mk0.ALL)
#endif

/* MK1L */
#ifdef __RL78__
	#define	MK1L_0	(MK1L.0)
	#define	MK1L_1	(MK1L.1)
	#define	MK1L_2	(MK1L.2)
	#define	MK1L_3	(MK1L.3)
	#define	MK1L_4	(MK1L.4)
	#define	MK1L_5	(MK1L.5)
	#define	MK1L_6	(MK1L.6)
	#define	MK1L_7	(MK1L.7)
#else
	#define	LIN0RVCMK	(mk1.BIT_NUMBER_16.bit0)
	#define	LIN0STAMK	(mk1.BIT_NUMBER_16.bit1)
	#define	LIN0MK		(mk1.BIT_NUMBER_16.bit1)
	#define	IICAMK0		(mk1.BIT_NUMBER_16.bit2)
	#define	PMK8		(mk1.BIT_NUMBER_16.bit3)
	#define	RTCMK		(mk1.BIT_NUMBER_16.bit3)
	#define	TMMK00		(mk1.BIT_NUMBER_16.bit4)
	#define	TMMK01		(mk1.BIT_NUMBER_16.bit5)
	#define	TMMK02		(mk1.BIT_NUMBER_16.bit6)
	#define	TMMK03		(mk1.BIT_NUMBER_16.bit7)
	#define	MK1L_0		(mk1.BIT_NUMBER_16.bit0)
	#define	MK1L_1		(mk1.BIT_NUMBER_16.bit1)
	#define	MK1L_2		(mk1.BIT_NUMBER_16.bit2)
	#define	MK1L_3		(mk1.BIT_NUMBER_16.bit3)
	#define	MK1L_4		(mk1.BIT_NUMBER_16.bit4)
	#define	MK1L_5		(mk1.BIT_NUMBER_16.bit5)
	#define	MK1L_6		(mk1.BIT_NUMBER_16.bit6)
	#define	MK1L_7		(mk1.BIT_NUMBER_16.bit7)
	#define	MK1L		(mk1.BYTE.mk1l)
#endif

/* MK1H */
#ifdef __RL78__
	#define	MK1H_0	(MK1H.0)
	#define	MK1H_1	(MK1H.1)
	#define	MK1H_2	(MK1H.2)
	#define	MK1H_3	(MK1H.3)
	#define	MK1H_4	(MK1H.4)
	#define	MK1H_5	(MK1H.5)
	#define	MK1H_6	(MK1H.6)
	#define	MK1H_7	(MK1H.7)
#else
	#define	ADMK		(mk1.BIT_NUMBER_16.bit8)
	#define	PMK6		(mk1.BIT_NUMBER_16.bit9)
	#define	TMMK11H		(mk1.BIT_NUMBER_16.bit9)
	#define	PMK7		(mk1.BIT_NUMBER_16.bit10)
	#define	TMMK13H		(mk1.BIT_NUMBER_16.bit10)
	#define	PMK9		(mk1.BIT_NUMBER_16.bit11)
	#define	TMMK01H		(mk1.BIT_NUMBER_16.bit11)
	#define	PMK10		(mk1.BIT_NUMBER_16.bit12)
	#define	TMMK03H		(mk1.BIT_NUMBER_16.bit12)
	#define	STMK1		(mk1.BIT_NUMBER_16.bit13)
	#define	CSIMK10		(mk1.BIT_NUMBER_16.bit13)
	#define	IICMK10		(mk1.BIT_NUMBER_16.bit13)
	#define	SRMK1		(mk1.BIT_NUMBER_16.bit14)
	#define	CSIMK11		(mk1.BIT_NUMBER_16.bit14)
	#define	IICMK11		(mk1.BIT_NUMBER_16.bit14)
	#define	TMMK04		(mk1.BIT_NUMBER_16.bit15)
	#define	MK1H_0		(mk1.BIT_NUMBER_16.bit8)
	#define	MK1H_1		(mk1.BIT_NUMBER_16.bit9)
	#define	MK1H_2		(mk1.BIT_NUMBER_16.bit10)
	#define	MK1H_3		(mk1.BIT_NUMBER_16.bit11)
	#define	MK1H_4		(mk1.BIT_NUMBER_16.bit12)
	#define	MK1H_5		(mk1.BIT_NUMBER_16.bit13)
	#define	MK1H_6		(mk1.BIT_NUMBER_16.bit14)
	#define	MK1H_7		(mk1.BIT_NUMBER_16.bit15)
	#define	MK1H		(mk1.BYTE.mk1h)
#endif

/* MK1 */
typedef struct{
	SFR_UNSIGNED_CHAR	mk1l;
	SFR_UNSIGNED_CHAR	mk1h;
}SFR_BYTE_MK1;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_MK1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_MK1;

SFR_GLOBAL	SFR_MK1	mk1;

#ifdef __RL78__
#else
	#define	MK1	(mk1.ALL)
#endif

/* PR00L */
#ifdef __RL78__
	#define	PR00L_0	(PR00L.0)
	#define	PR00L_1	(PR00L.1)
	#define	PR00L_2	(PR00L.2)
	#define	PR00L_3	(PR00L.3)
	#define	PR00L_4	(PR00L.4)
	#define	PR00L_5	(PR00L.5)
	#define	PR00L_6	(PR00L.6)
	#define	PR00L_7	(PR00L.7)
#else
	#define	WDTIPR0			(pr00.BIT_NUMBER_16.bit0)
	#define	LVIPR0			(pr00.BIT_NUMBER_16.bit1)
	#define	PPR00			(pr00.BIT_NUMBER_16.bit2)
	#define	PPR01			(pr00.BIT_NUMBER_16.bit3)
	#define	PPR02			(pr00.BIT_NUMBER_16.bit4)
	#define	PPR03			(pr00.BIT_NUMBER_16.bit5)
	#define	PPR04			(pr00.BIT_NUMBER_16.bit6)
	#define	SPMPR0			(pr00.BIT_NUMBER_16.bit6)
	#define	PPR05			(pr00.BIT_NUMBER_16.bit7)
	#define	CMPPR00			(pr00.BIT_NUMBER_16.bit7)
	#define	PR00L_0			(pr00.BIT_NUMBER_16.bit0)
	#define	PR00L_1			(pr00.BIT_NUMBER_16.bit1)
	#define	PR00L_2			(pr00.BIT_NUMBER_16.bit2)
	#define	PR00L_3			(pr00.BIT_NUMBER_16.bit3)
	#define	PR00L_4			(pr00.BIT_NUMBER_16.bit4)
	#define	PR00L_5			(pr00.BIT_NUMBER_16.bit5)
	#define	PR00L_6			(pr00.BIT_NUMBER_16.bit6)
	#define	PR00L_7			(pr00.BIT_NUMBER_16.bit7)
	#define	PR00L			(pr00.BYTE.pr00l)
#endif

/* PR00H */
#ifdef __RL78__
	#define	PR00H_0	(PR00H.0)
	#define	PR00H_1	(PR00H.1)
	#define	PR00H_2	(PR00H.2)
	#define	PR00H_3	(PR00H.3)
	#define	PR00H_4	(PR00H.4)
	#define	PR00H_5	(PR00H.5)
	#define	PR00H_6	(PR00H.6)
	#define	PR00H_7	(PR00H.7)
#else
	#define	CLMPR0		(pr00.BIT_NUMBER_16.bit8)
	#define	PPR013		(pr00.BIT_NUMBER_16.bit8)
	#define	STPR00		(pr00.BIT_NUMBER_16.bit9)
	#define	CSIPR000	(pr00.BIT_NUMBER_16.bit9)
	#define	IICPR000	(pr00.BIT_NUMBER_16.bit9)
	#define	SRPR00		(pr00.BIT_NUMBER_16.bit210)
	#define	CSIPR001	(pr00.BIT_NUMBER_16.bit10)
	#define	IICPR001	(pr00.BIT_NUMBER_16.bit10)
	#define	TRDPR00		(pr00.BIT_NUMBER_16.bit11)
	#define	TRDPR01		(pr00.BIT_NUMBER_16.bit12)
	#define	TRJPR00		(pr00.BIT_NUMBER_16.bit13)
	#define	RAMPR0		(pr00.BIT_NUMBER_16.bit14)
	#define	LIN0TRMPR0	(pr00.BIT_NUMBER_16.bit15)
	#define	PR00H_0		(pr00.BIT_NUMBER_16.bit8)
	#define	PR00H_1		(pr00.BIT_NUMBER_16.bit9)
	#define	PR00H_2		(pr00.BIT_NUMBER_16.bit10)
	#define	PR00H_3		(pr00.BIT_NUMBER_16.bit11)
	#define	PR00H_4		(pr00.BIT_NUMBER_16.bit12)
	#define	PR00H_5		(pr00.BIT_NUMBER_16.bit13)
	#define	PR00H_6		(pr00.BIT_NUMBER_16.bit14)
	#define	PR00H_7		(pr00.BIT_NUMBER_16.bit15)
	#define	PR00H		(pr00.BYTE.pr00h)
#endif

/* PR00 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr00l;
	SFR_UNSIGNED_CHAR	pr00h;
}SFR_BYTE_PR00;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR00;

SFR_GLOBAL	SFR_PR00	pr00;

#ifdef __RL78__
#else
	#define	PR00	(pr00.ALL)
#endif

/* PR01L */
#ifdef __RL78__
	#define	PR01L_0	(PR01L.0)
	#define	PR01L_1	(PR01L.1)
	#define	PR01L_2	(PR01L.2)
	#define	PR01L_3	(PR01L.3)
	#define	PR01L_4	(PR01L.4)
	#define	PR01L_5	(PR01L.5)
	#define	PR01L_6	(PR01L.6)
	#define	PR01L_7	(PR01L.7)
#else
	#define	LIN0RVCPR0	(pr01.BIT_NUMBER_16.bit0)
	#define	LIN0STAPR0	(pr01.BIT_NUMBER_16.bit1)
	#define	LIN0PR0		(pr01.BIT_NUMBER_16.bit1)
	#define	IICAPR00	(pr01.BIT_NUMBER_16.bit2)
	#define	PPR08		(pr01.BIT_NUMBER_16.bit3)
	#define	RTCPR0		(pr01.BIT_NUMBER_16.bit3)
	#define	TMPR000		(pr01.BIT_NUMBER_16.bit4)
	#define	TMPR001		(pr01.BIT_NUMBER_16.bit5)
	#define	TMPR002		(pr01.BIT_NUMBER_16.bit6)
	#define	TMPR003		(pr01.BIT_NUMBER_16.bit7)
	#define	PR01L_0		(pr01.BIT_NUMBER_16.bit0)
	#define	PR01L_1		(pr01.BIT_NUMBER_16.bit1)
	#define	PR01L_2		(pr01.BIT_NUMBER_16.bit2)
	#define	PR01L_3		(pr01.BIT_NUMBER_16.bit3)
	#define	PR01L_4		(pr01.BIT_NUMBER_16.bit4)
	#define	PR01L_5		(pr01.BIT_NUMBER_16.bit5)
	#define	PR01L_6		(pr01.BIT_NUMBER_16.bit6)
	#define	PR01L_7		(pr01.BIT_NUMBER_16.bit7)
	#define	PR01L		(pr01.BYTE.pr01l)
#endif

/* PR01H */
#ifdef __RL78__
	#define	PR01H_0	(PR01H.0)
	#define	PR01H_1	(PR01H.1)
	#define	PR01H_2	(PR01H.2)
	#define	PR01H_3	(PR01H.3)
	#define	PR01H_4	(PR01H.4)
	#define	PR01H_5	(PR01H.5)
	#define	PR01H_6	(PR01H.6)
	#define	PR01H_7	(PR01H.7)
#else
	#define	ADPR0		(pr01.BIT_NUMBER_16.bit8)
	#define	PPR06		(pr01.BIT_NUMBER_16.bit9)
	#define	TMPR011H	(pr01.BIT_NUMBER_16.bit9)
	#define	PPR07		(pr01.BIT_NUMBER_16.bit10)
	#define	TMPR013H	(pr01.BIT_NUMBER_16.bit10)
	#define	PPR09		(pr01.BIT_NUMBER_16.bit11)
	#define	TMPR001H	(pr01.BIT_NUMBER_16.bit11)
	#define	PPR010		(pr01.BIT_NUMBER_16.bit12)
	#define	TMPR003H	(pr01.BIT_NUMBER_16.bit12)
	#define	STPR01		(pr01.BIT_NUMBER_16.bit13)
	#define	CSIPR010	(pr01.BIT_NUMBER_16.bit13)
	#define	IICPR010	(pr01.BIT_NUMBER_16.bit13)
	#define	SRPR01		(pr01.BIT_NUMBER_16.bit14)
	#define	CSIPR011	(pr01.BIT_NUMBER_16.bit14)
	#define	IICPR011	(pr01.BIT_NUMBER_16.bit14)
	#define	TMPR004		(pr01.BIT_NUMBER_16.bit15)
	#define	PR01H_0		(pr01.BIT_NUMBER_16.bit8)
	#define	PR01H_1		(pr01.BIT_NUMBER_16.bit9)
	#define	PR01H_2		(pr01.BIT_NUMBER_16.bit10)
	#define	PR01H_3		(pr01.BIT_NUMBER_16.bit11)
	#define	PR01H_4		(pr01.BIT_NUMBER_16.bit12)
	#define	PR01H_5		(pr01.BIT_NUMBER_16.bit13)
	#define	PR01H_6		(pr01.BIT_NUMBER_16.bit14)
	#define	PR01H_7		(pr01.BIT_NUMBER_16.bit15)
	#define	PR01H		(pr01.BYTE.pr01h)
#endif

/* PR01 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr01l;
	SFR_UNSIGNED_CHAR	pr01h;
}SFR_BYTE_PR01;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR01;

SFR_GLOBAL	SFR_PR01	pr01;

#ifdef __RL78__
#else
	#define	PR01	(pr01.ALL)
#endif

/* PR10L */
#ifdef __RL78__
	#define	PR10L_0	(PR10L.0)
	#define	PR10L_1	(PR10L.1)
	#define	PR10L_2	(PR10L.2)
	#define	PR10L_3	(PR10L.3)
	#define	PR10L_4	(PR10L.4)
	#define	PR10L_5	(PR10L.5)
	#define	PR10L_6	(PR10L.6)
	#define	PR10L_7	(PR10L.7)
#else
	#define	WDTIPR1		(pr10.BIT_NUMBER_16.bit0)
	#define	LVIPR1		(pr10.BIT_NUMBER_16.bit1)
	#define	PPR10		(pr10.BIT_NUMBER_16.bit2)
	#define	PPR11		(pr10.BIT_NUMBER_16.bit3)
	#define	PPR12		(pr10.BIT_NUMBER_16.bit4)
	#define	PPR13		(pr10.BIT_NUMBER_16.bit5)
	#define	PPR14		(pr10.BIT_NUMBER_16.bit6)
	#define	SPMPR1		(pr10.BIT_NUMBER_16.bit6)
	#define	PPR15		(pr10.BIT_NUMBER_16.bit7)
	#define	CMPPR10		(pr10.BIT_NUMBER_16.bit7)
	#define	PR10L_0		(pr10.BIT_NUMBER_16.bit0)
	#define	PR10L_1		(pr10.BIT_NUMBER_16.bit1)
	#define	PR10L_2		(pr10.BIT_NUMBER_16.bit2)
	#define	PR10L_3		(pr10.BIT_NUMBER_16.bit3)
	#define	PR10L_4		(pr10.BIT_NUMBER_16.bit4)
	#define	PR10L_5		(pr10.BIT_NUMBER_16.bit5)
	#define	PR10L_6		(pr10.BIT_NUMBER_16.bit6)
	#define	PR10L_7		(pr10.BIT_NUMBER_16.bit7)
	#define	PR10L		(pr10.BYTE.pr10l)
#endif

/* PR10H */
#ifdef __RL78__
	#define	PR10H_0	(PR10H.0)
	#define	PR10H_1	(PR10H.1)
	#define	PR10H_2	(PR10H.2)
	#define	PR10H_3	(PR10H.3)
	#define	PR10H_4	(PR10H.4)
	#define	PR10H_5	(PR10H.5)
	#define	PR10H_6	(PR10H.6)
	#define	PR10H_7	(PR10H.7)
#else
	#define	CLMPR1		(pr10.BIT_NUMBER_16.bit8)
	#define	PPR113		(pr10.BIT_NUMBER_16.bit8)
	#define	STPR10		(pr10.BIT_NUMBER_16.bit9)
	#define	CSIPR100	(pr10.BIT_NUMBER_16.bit9)
	#define	IICPR100	(pr10.BIT_NUMBER_16.bit9)
	#define	SRPR10		(pr10.BIT_NUMBER_16.bit10)
	#define	CSIPR101	(pr10.BIT_NUMBER_16.bit10)
	#define	IICPR101	(pr10.BIT_NUMBER_16.bit10)
	#define	TRDPR10		(pr10.BIT_NUMBER_16.bit11)
	#define	TRDPR11		(pr10.BIT_NUMBER_16.bit12)
	#define	TRJPR10		(pr10.BIT_NUMBER_16.bit13)
	#define	RAMPR1		(pr10.BIT_NUMBER_16.bit14)
	#define	LIN0TRMPR1	(pr10.BIT_NUMBER_16.bit15)
	#define	PR10H_0		(pr10.BIT_NUMBER_16.bit8)
	#define	PR10H_1		(pr10.BIT_NUMBER_16.bit9)
	#define	PR10H_2		(pr10.BIT_NUMBER_16.bit10)
	#define	PR10H_3		(pr10.BIT_NUMBER_16.bit11)
	#define	PR10H_4		(pr10.BIT_NUMBER_16.bit12)
	#define	PR10H_5		(pr10.BIT_NUMBER_16.bit13)
	#define	PR10H_6		(pr10.BIT_NUMBER_16.bit14)
	#define	PR10H_7		(pr10.BIT_NUMBER_16.bit15)
	#define	PR10H		(pr10.BYTE.pr10h)
#endif

/* PR10 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr10l;
	SFR_UNSIGNED_CHAR	pr10h;
}SFR_BYTE_PR10;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR10;

SFR_GLOBAL	SFR_PR10	pr10;

#ifdef __RL78__
#else
	#define	PR10	(pr10.ALL)
#endif

/* PR11L */
#ifdef __RL78__
	#define	PR11L_0	(PR11L.0)
	#define	PR11L_1	(PR11L.1)
	#define	PR11L_2	(PR11L.2)
	#define	PR11L_3	(PR11L.3)
	#define	PR11L_4	(PR11L.4)
	#define	PR11L_5	(PR11L.5)
	#define	PR11L_6	(PR11L.6)
	#define	PR11L_7	(PR11L.7)
#else
	#define	LIN0RVCPR1	(pr11.BIT_NUMBER_16.bit0)
	#define	LIN0STAPR1	(pr11.BIT_NUMBER_16.bit1)
	#define	LIN0PR1		(pr11.BIT_NUMBER_16.bit1)
	#define	IICAPR10	(pr11.BIT_NUMBER_16.bit2)
	#define	PPR18		(pr11.BIT_NUMBER_16.bit3)
	#define	RTCPR1		(pr11.BIT_NUMBER_16.bit3)
	#define	TMPR100		(pr11.BIT_NUMBER_16.bit4)
	#define	TMPR101		(pr11.BIT_NUMBER_16.bit5)
	#define	TMPR102		(pr11.BIT_NUMBER_16.bit6)
	#define	TMPR103		(pr11.BIT_NUMBER_16.bit7)
	#define	PR11L_0		(pr11.BIT_NUMBER_16.bit0)
	#define	PR11L_1		(pr11.BIT_NUMBER_16.bit1)
	#define	PR11L_2		(pr11.BIT_NUMBER_16.bit2)
	#define	PR11L_3		(pr11.BIT_NUMBER_16.bit3)
	#define	PR11L_4		(pr11.BIT_NUMBER_16.bit4)
	#define	PR11L_5		(pr11.BIT_NUMBER_16.bit5)
	#define	PR11L_6		(pr11.BIT_NUMBER_16.bit6)
	#define	PR11L_7		(pr11.BIT_NUMBER_16.bit7)
	#define	PR11L		(pr11.BYTE.pr11l)
#endif

/* PR11H */
#ifdef __RL78__
	#define	PR11H_0	(PR11H.0)
	#define	PR11H_1	(PR11H.1)
	#define	PR11H_2	(PR11H.2)
	#define	PR11H_3	(PR11H.3)
	#define	PR11H_4	(PR11H.4)
	#define	PR11H_5	(PR11H.5)
	#define	PR11H_6	(PR11H.6)
	#define	PR11H_7	(PR11H.7)
#else
	#define	ADPR1		(pr11.BIT_NUMBER_16.bit8)
	#define	PPR16		(pr11.BIT_NUMBER_16.bit9)
	#define	TMPR111H	(pr11.BIT_NUMBER_16.bit9)
	#define	PPR17		(pr11.BIT_NUMBER_16.bit10)
	#define	TMPR113H	(pr11.BIT_NUMBER_16.bit10)
	#define	PPR19		(pr11.BIT_NUMBER_16.bit11)
	#define	TMPR101H	(pr11.BIT_NUMBER_16.bit11)
	#define	PPR110		(pr11.BIT_NUMBER_16.bit12)
	#define	TMPR103H	(pr11.BIT_NUMBER_16.bit12)
	#define	STPR11		(pr11.BIT_NUMBER_16.bit13)
	#define	CSIPR110	(pr11.BIT_NUMBER_16.bit13)
	#define	IICPR110	(pr11.BIT_NUMBER_16.bit13)
	#define	SRPR11		(pr11.BIT_NUMBER_16.bit14)
	#define	CSIPR111	(pr11.BIT_NUMBER_16.bit14)
	#define	IICPR111	(pr11.BIT_NUMBER_16.bit14)
	#define	TMPR104		(pr11.BIT_NUMBER_16.bit15)
	#define	PR11H_0		(pr11.BIT_NUMBER_16.bit8)
	#define	PR11H_1		(pr11.BIT_NUMBER_16.bit9)
	#define	PR11H_2		(pr11.BIT_NUMBER_16.bit10)
	#define	PR11H_3		(pr11.BIT_NUMBER_16.bit11)
	#define	PR11H_4		(pr11.BIT_NUMBER_16.bit12)
	#define	PR11H_5		(pr11.BIT_NUMBER_16.bit13)
	#define	PR11H_6		(pr11.BIT_NUMBER_16.bit14)
	#define	PR11H_7		(pr11.BIT_NUMBER_16.bit15)
	#define	PR11H		(pr11.BYTE.pr11h)
#endif

/* PR11 */
typedef struct{
	SFR_UNSIGNED_CHAR	pr11l;
	SFR_UNSIGNED_CHAR	pr11h;
}SFR_BYTE_PR11;

typedef union{
	SFR_BIT16		BIT_NUMBER_16;
	SFR_BYTE_PR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_PR11;

SFR_GLOBAL	SFR_PR11	pr11;

#ifdef __RL78__
#else
	#define	PR11	(pr11.ALL)
#endif

/*MACRL*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT macrl;
#ifdef __RL78__
#else
	#define	MACRL	(macrl)
#endif

/*MACRH*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT macrh;
#ifdef __RL78__
#else
	#define	MACRH	(macrh)
#endif

/* PMC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PMC;

SFR_GLOBAL	SFR_PM5	pmc;

#ifdef __RL78__
	#define	PMC_0	(PMC.0)
	#define	PMC_1	(PMC.1)
	#define	PMC_2	(PMC.2)
	#define	PMC_3	(PMC.3)
	#define	PMC_4	(PMC.4)
	#define	PMC_5	(PMC.5)
	#define	PMC_6	(PMC.6)
	#define	PMC_7	(PMC.7)
#else
	#define	MAA		(pmc.BIT_NUMBER.bit0)
	#define	PMC_0	(pmc.BIT_NUMBER.bit0)
	#define	PMC_1	(pmc.BIT_NUMBER.bit1)
	#define	PMC_2	(pmc.BIT_NUMBER.bit2)
	#define	PMC_3	(pmc.BIT_NUMBER.bit3)
	#define	PMC_4	(pmc.BIT_NUMBER.bit4)
	#define	PMC_5	(pmc.BIT_NUMBER.bit5)
	#define	PMC_6	(pmc.BIT_NUMBER.bit6)
	#define	PMC_7	(pmc.BIT_NUMBER.bit7)
	#define	PMC	(pmc.ALL)
#endif

/******************************************************************************/
/*                     2nd SFRの置換規則                                      */
/******************************************************************************/

/* ADM2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADM2;

SFR_GLOBAL	SFR_ADM2	adm2;

#ifdef __RL78__
	#define	ADM2_0	(ADM2.0)
	#define	ADM2_1	(ADM2.1)
	#define	ADM2_2	(ADM2.2)
	#define	ADM2_3	(ADM2.3)
	#define	ADM2_4	(ADM2.4)
	#define	ADM2_5	(ADM2.5)
	#define	ADM2_6	(ADM2.6)
	#define	ADM2_7	(ADM2.7)
#else
	#define	ADTYP	(adm2.BIT_NUMBER.bit0)
	#define	AWC		(adm2.BIT_NUMBER.bit2)
	#define	ADRCK	(adm2.BIT_NUMBER.bit3)
	#define	ADM2_0	(adm2.BIT_NUMBER.bit0)
	#define	ADM2_1	(adm2.BIT_NUMBER.bit1)
	#define	ADM2_2	(adm2.BIT_NUMBER.bit2)
	#define	ADM2_3	(adm2.BIT_NUMBER.bit3)
	#define	ADM2_4	(adm2.BIT_NUMBER.bit4)
	#define	ADM2_5	(adm2.BIT_NUMBER.bit5)
	#define	ADM2_6	(adm2.BIT_NUMBER.bit6)
	#define	ADM2_7	(adm2.BIT_NUMBER.bit7)
	#define	ADM2	(adm2.ALL)
#endif

/* ADUL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	adul;

#ifdef __RL78__
#else
	#define	ADUL	(adul)
#endif

/* ADLL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	adll;

#ifdef __RL78__
#else
	#define	ADLL	(adll)
#endif

/* ADTES */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	adtes;

#ifdef __RL78__
#else
	#define	ADTES	(adtes)
#endif

/* PIOR0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior0;

#ifdef __RL78__
#else
	#define	PIOR0	(pior0)
#endif

/* PIOR1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior1;

#ifdef __RL78__
#else
	#define	PIOR1	(pior1)
#endif

/* PIOR2 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior2;

#ifdef __RL78__
#else
	#define	PIOR2	(pior2)
#endif

/* PIOR3 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior3;

#ifdef __RL78__
#else
	#define	PIOR3	(pior3)
#endif

/* PIOR4 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior4;

#ifdef __RL78__
#else
	#define	PIOR4	(pior4)
#endif

/* PIOR5 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior5;

#ifdef __RL78__
#else
	#define	PIOR5	(pior5)
#endif

/* PIOR6 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior6;

#ifdef __RL78__
#else
	#define	PIOR6	(pior6)
#endif

/* PIOR7 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior7;

#ifdef __RL78__
#else
	#define	PIOR7	(pior7)
#endif

/* PIOR8 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	pior8;

#ifdef __RL78__
#else
	#define	PIOR8	(pior8)
#endif

/* PITHL1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL1;

SFR_GLOBAL	SFR_PITHL1	pithl1;

#ifdef __RL78__
	#define	PITHL1_0	(PITHL1.0)
	#define	PITHL1_1	(PITHL1.1)
	#define	PITHL1_2	(PITHL1.2)
	#define	PITHL1_3	(PITHL1.3)
	#define	PITHL1_4	(PITHL1.4)
	#define	PITHL1_5	(PITHL1.5)
	#define	PITHL1_6	(PITHL1.6)
	#define	PITHL1_7	(PITHL1.7)
#else
	#define	PITHL1_0	(pithl1.BIT_NUMBER.bit0)
	#define	PITHL1_1	(pithl1.BIT_NUMBER.bit1)
	#define	PITHL1_2	(pithl1.BIT_NUMBER.bit2)
	#define	PITHL1_3	(pithl1.BIT_NUMBER.bit3)
	#define	PITHL1_4	(pithl1.BIT_NUMBER.bit4)
	#define	PITHL1_5	(pithl1.BIT_NUMBER.bit5)
	#define	PITHL1_6	(pithl1.BIT_NUMBER.bit6)
	#define	PITHL1_7	(pithl1.BIT_NUMBER.bit7)
	#define	PITHL1	(pithl1.ALL)
#endif

/* PITHL3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL3;

SFR_GLOBAL	SFR_PITHL3	pithl3;

#ifdef __RL78__
	#define	PITHL3_0	(PITHL3.0)
	#define	PITHL3_1	(PITHL3.1)
	#define	PITHL3_2	(PITHL3.2)
	#define	PITHL3_3	(PITHL3.3)
	#define	PITHL3_4	(PITHL3.4)
	#define	PITHL3_5	(PITHL3.5)
	#define	PITHL3_6	(PITHL3.6)
	#define	PITHL3_7	(PITHL3.7)
#else
	#define	PITHL3_0	(pithl3.BIT_NUMBER.bit0)
	#define	PITHL3_1	(pithl3.BIT_NUMBER.bit1)
	#define	PITHL3_2	(pithl3.BIT_NUMBER.bit2)
	#define	PITHL3_3	(pithl3.BIT_NUMBER.bit3)
	#define	PITHL3_4	(pithl3.BIT_NUMBER.bit4)
	#define	PITHL3_5	(pithl3.BIT_NUMBER.bit5)
	#define	PITHL3_6	(pithl3.BIT_NUMBER.bit6)
	#define	PITHL3_7	(pithl3.BIT_NUMBER.bit7)
	#define	PITHL3		(pithl3.ALL)
#endif

/* PITHL4 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL4;

SFR_GLOBAL	SFR_PITHL4	pithl4;

#ifdef __RL78__
	#define	PITHL4_0	(PITHL4.0)
	#define	PITHL4_1	(PITHL4.1)
	#define	PITHL4_2	(PITHL4.2)
	#define	PITHL4_3	(PITHL4.3)
	#define	PITHL4_4	(PITHL4.4)
	#define	PITHL4_5	(PITHL4.5)
	#define	PITHL4_6	(PITHL4.6)
	#define	PITHL4_7	(PITHL4.7)
#else
	#define	PITHL4_0	(pithl4.BIT_NUMBER.bit0)
	#define	PITHL4_1	(pithl4.BIT_NUMBER.bit1)
	#define	PITHL4_2	(pithl4.BIT_NUMBER.bit2)
	#define	PITHL4_3	(pithl4.BIT_NUMBER.bit3)
	#define	PITHL4_4	(pithl4.BIT_NUMBER.bit4)
	#define	PITHL4_5	(pithl4.BIT_NUMBER.bit5)
	#define	PITHL4_6	(pithl4.BIT_NUMBER.bit6)
	#define	PITHL4_7	(pithl4.BIT_NUMBER.bit7)
	#define	PITHL4		(pithl4.ALL)
#endif

/* PITHL5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL5;

SFR_GLOBAL	SFR_PITHL5	pithl5;

#ifdef __RL78__
	#define	PITHL5_0	(PITHL5.0)
	#define	PITHL5_1	(PITHL5.1)
	#define	PITHL5_2	(PITHL5.2)
	#define	PITHL5_3	(PITHL5.3)
	#define	PITHL5_4	(PITHL5.4)
	#define	PITHL5_5	(PITHL5.5)
	#define	PITHL5_6	(PITHL5.6)
	#define	PITHL5_7	(PITHL5.7)
#else
	#define	PITHL5_0	(pithl5.BIT_NUMBER.bit0)
	#define	PITHL5_1	(pithl5.BIT_NUMBER.bit1)
	#define	PITHL5_2	(pithl5.BIT_NUMBER.bit2)
	#define	PITHL5_3	(pithl5.BIT_NUMBER.bit3)
	#define	PITHL5_4	(pithl5.BIT_NUMBER.bit4)
	#define	PITHL5_5	(pithl5.BIT_NUMBER.bit5)
	#define	PITHL5_6	(pithl5.BIT_NUMBER.bit6)
	#define	PITHL5_7	(pithl5.BIT_NUMBER.bit7)
	#define	PITHL5		(pithl5.ALL)
#endif

/* PITHL6 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL6;

SFR_GLOBAL	SFR_PITHL6	pithl6;

#ifdef __RL78__
	#define	PITHL6_0	(PITHL6.0)
	#define	PITHL6_1	(PITHL6.1)
	#define	PITHL6_2	(PITHL6.2)
	#define	PITHL6_3	(PITHL6.3)
	#define	PITHL6_4	(PITHL6.4)
	#define	PITHL6_5	(PITHL6.5)
	#define	PITHL6_6	(PITHL6.6)
	#define	PITHL6_7	(PITHL6.7)
#else
	#define	PITHL6_0	(pithl6.BIT_NUMBER.bit0)
	#define	PITHL6_1	(pithl6.BIT_NUMBER.bit1)
	#define	PITHL6_2	(pithl6.BIT_NUMBER.bit2)
	#define	PITHL6_3	(pithl6.BIT_NUMBER.bit3)
	#define	PITHL6_4	(pithl6.BIT_NUMBER.bit4)
	#define	PITHL6_5	(pithl6.BIT_NUMBER.bit5)
	#define	PITHL6_6	(pithl6.BIT_NUMBER.bit6)
	#define	PITHL6_7	(pithl6.BIT_NUMBER.bit7)
	#define	PITHL6		(pithl6.ALL)
#endif

/* PITHL7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL7;

SFR_GLOBAL	SFR_PITHL7	pithl7;

#ifdef __RL78__
	#define	PITHL7_0	(PITHL7.0)
	#define	PITHL7_1	(PITHL7.1)
	#define	PITHL7_2	(PITHL7.2)
	#define	PITHL7_3	(PITHL7.3)
	#define	PITHL7_4	(PITHL7.4)
	#define	PITHL7_5	(PITHL7.5)
	#define	PITHL7_6	(PITHL7.6)
	#define	PITHL7_7	(PITHL7.7)
#else
	#define	PITHL7_0	(pithl7.BIT_NUMBER.bit0)
	#define	PITHL7_1	(pithl7.BIT_NUMBER.bit1)
	#define	PITHL7_2	(pithl7.BIT_NUMBER.bit2)
	#define	PITHL7_3	(pithl7.BIT_NUMBER.bit3)
	#define	PITHL7_4	(pithl7.BIT_NUMBER.bit4)
	#define	PITHL7_5	(pithl7.BIT_NUMBER.bit5)
	#define	PITHL7_6	(pithl7.BIT_NUMBER.bit6)
	#define	PITHL7_7	(pithl7.BIT_NUMBER.bit7)
	#define	PITHL7		(pithl7.ALL)
#endif

/* PITHL10 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL10;

SFR_GLOBAL	SFR_PITHL10	pithl10;

#ifdef __RL78__
	#define	PITHL10_0	(PITHL10.0)
	#define	PITHL10_1	(PITHL10.1)
	#define	PITHL10_2	(PITHL10.2)
	#define	PITHL10_3	(PITHL10.3)
	#define	PITHL10_4	(PITHL10.4)
	#define	PITHL10_5	(PITHL10.5)
	#define	PITHL10_6	(PITHL10.6)
	#define	PITHL10_7	(PITHL10.7)
#else
	#define	PITHL10_0	(pithl10.BIT_NUMBER.bit0)
	#define	PITHL10_1	(pithl10.BIT_NUMBER.bit1)
	#define	PITHL10_2	(pithl10.BIT_NUMBER.bit2)
	#define	PITHL10_3	(pithl10.BIT_NUMBER.bit3)
	#define	PITHL10_4	(pithl10.BIT_NUMBER.bit4)
	#define	PITHL10_5	(pithl10.BIT_NUMBER.bit5)
	#define	PITHL10_6	(pithl10.BIT_NUMBER.bit6)
	#define	PITHL10_7	(pithl10.BIT_NUMBER.bit7)
	#define	PITHL10		(pithl10.ALL)
#endif

/* PITHL12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL12;

SFR_GLOBAL	SFR_PITHL12	pithl12;

#ifdef __RL78__
	#define	PITHL12_0	(PITHL12.0)
	#define	PITHL12_1	(PITHL12.1)
	#define	PITHL12_2	(PITHL12.2)
	#define	PITHL12_3	(PITHL12.3)
	#define	PITHL12_4	(PITHL12.4)
	#define	PITHL12_5	(PITHL12.5)
	#define	PITHL12_6	(PITHL12.6)
	#define	PITHL12_7	(PITHL12.7)
#else
	#define	PITHL12_0	(pithl12.BIT_NUMBER.bit0)
	#define	PITHL12_1	(pithl12.BIT_NUMBER.bit1)
	#define	PITHL12_2	(pithl12.BIT_NUMBER.bit2)
	#define	PITHL12_3	(pithl12.BIT_NUMBER.bit3)
	#define	PITHL12_4	(pithl12.BIT_NUMBER.bit4)
	#define	PITHL12_5	(pithl12.BIT_NUMBER.bit5)
	#define	PITHL12_6	(pithl12.BIT_NUMBER.bit6)
	#define	PITHL12_7	(pithl12.BIT_NUMBER.bit7)
	#define	PITHL12		(pithl12.ALL)
#endif

/* PITHL15 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PITHL15;

SFR_GLOBAL	SFR_PITHL15	pithl15;

#ifdef __RL78__
	#define	PITHL15_0	(PITHL15.0)
	#define	PITHL15_1	(PITHL15.1)
	#define	PITHL15_2	(PITHL15.2)
	#define	PITHL15_3	(PITHL15.3)
	#define	PITHL15_4	(PITHL15.4)
	#define	PITHL15_5	(PITHL15.5)
	#define	PITHL15_6	(PITHL15.6)
	#define	PITHL15_7	(PITHL15.7)
#else
	#define	PITHL15_0	(pithl15.BIT_NUMBER.bit0)
	#define	PITHL15_1	(pithl15.BIT_NUMBER.bit1)
	#define	PITHL15_2	(pithl15.BIT_NUMBER.bit2)
	#define	PITHL15_3	(pithl15.BIT_NUMBER.bit3)
	#define	PITHL15_4	(pithl15.BIT_NUMBER.bit4)
	#define	PITHL15_5	(pithl15.BIT_NUMBER.bit5)
	#define	PITHL15_6	(pithl15.BIT_NUMBER.bit6)
	#define	PITHL15_7	(pithl15.BIT_NUMBER.bit7)
	#define	PITHL15		(pithl15.ALL)
#endif

/* PU0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU0;

SFR_GLOBAL	SFR_PU0	pu0;

#ifdef __RL78__
	#define	PU0_0	(PU0.0)
	#define	PU0_1	(PU0.1)
	#define	PU0_2	(PU0.2)
	#define	PU0_3	(PU0.3)
	#define	PU0_4	(PU0.4)
	#define	PU0_5	(PU0.5)
	#define	PU0_6	(PU0.6)
	#define	PU0_7	(PU0.7)
#else
	#define	PU0_0	(pu0.BIT_NUMBER.bit0)
	#define	PU0_1	(pu0.BIT_NUMBER.bit1)
	#define	PU0_2	(pu0.BIT_NUMBER.bit2)
	#define	PU0_3	(pu0.BIT_NUMBER.bit3)
	#define	PU0_4	(pu0.BIT_NUMBER.bit4)
	#define	PU0_5	(pu0.BIT_NUMBER.bit5)
	#define	PU0_6	(pu0.BIT_NUMBER.bit6)
	#define	PU0_7	(pu0.BIT_NUMBER.bit7)
	#define	PU0	(pu0.ALL)
#endif

/* PU1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU1;

SFR_GLOBAL	SFR_PU1	pu1;

#ifdef __RL78__
	#define	PU1_0	(PU1.0)
	#define	PU1_1	(PU1.1)
	#define	PU1_2	(PU1.2)
	#define	PU1_3	(PU1.3)
	#define	PU1_4	(PU1.4)
	#define	PU1_5	(PU1.5)
	#define	PU1_6	(PU1.6)
	#define	PU1_7	(PU1.7)
#else
	#define	PU1_0	(pu1.BIT_NUMBER.bit0)
	#define	PU1_1	(pu1.BIT_NUMBER.bit1)
	#define	PU1_2	(pu1.BIT_NUMBER.bit2)
	#define	PU1_3	(pu1.BIT_NUMBER.bit3)
	#define	PU1_4	(pu1.BIT_NUMBER.bit4)
	#define	PU1_5	(pu1.BIT_NUMBER.bit5)
	#define	PU1_6	(pu1.BIT_NUMBER.bit6)
	#define	PU1_7	(pu1.BIT_NUMBER.bit7)
	#define	PU1	(pu1.ALL)
#endif

/* PU3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU3;

SFR_GLOBAL	SFR_PU3	pu3;

#ifdef __RL78__
	#define	PU3_0	(PU3.0)
	#define	PU3_1	(PU3.1)
	#define	PU3_2	(PU3.2)
	#define	PU3_3	(PU3.3)
	#define	PU3_4	(PU3.4)
	#define	PU3_5	(PU3.5)
	#define	PU3_6	(PU3.6)
	#define	PU3_7	(PU3.7)
#else
	#define	PU3_0	(pu3.BIT_NUMBER.bit0)
	#define	PU3_1	(pu3.BIT_NUMBER.bit1)
	#define	PU3_2	(pu3.BIT_NUMBER.bit2)
	#define	PU3_3	(pu3.BIT_NUMBER.bit3)
	#define	PU3_4	(pu3.BIT_NUMBER.bit4)
	#define	PU3_5	(pu3.BIT_NUMBER.bit5)
	#define	PU3_6	(pu3.BIT_NUMBER.bit6)
	#define	PU3_7	(pu3.BIT_NUMBER.bit7)
	#define	PU3	(pu3.ALL)
#endif

/* PU4 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU4;

SFR_GLOBAL	SFR_PU4	pu4;

#ifdef __RL78__
	#define	PU4_0	(PU4.0)
	#define	PU4_1	(PU4.1)
	#define	PU4_2	(PU4.2)
	#define	PU4_3	(PU4.3)
	#define	PU4_4	(PU4.4)
	#define	PU4_5	(PU4.5)
	#define	PU4_6	(PU4.6)
	#define	PU4_7	(PU4.7)
#else
	#define	PU4_0	(pu4.BIT_NUMBER.bit0)
	#define	PU4_1	(pu4.BIT_NUMBER.bit1)
	#define	PU4_2	(pu4.BIT_NUMBER.bit2)
	#define	PU4_3	(pu4.BIT_NUMBER.bit3)
	#define	PU4_4	(pu4.BIT_NUMBER.bit4)
	#define	PU4_5	(pu4.BIT_NUMBER.bit5)
	#define	PU4_6	(pu4.BIT_NUMBER.bit6)
	#define	PU4_7	(pu4.BIT_NUMBER.bit7)
	#define	PU4	(pu4.ALL)
#endif

/* PU5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU5;

SFR_GLOBAL	SFR_PU5	pu5;

#ifdef __RL78__
	#define	PU5_0	(PU)
	#define	PU5_1	(PU5.1)
	#define	PU5_2	(PU5.2)
	#define	PU5_3	(PU5.3)
	#define	PU5_4	(PU5.4)
	#define	PU5_5	(PU5.5)
	#define	PU5_6	(PU5.6)
	#define	PU5_7	(PU5.7)
#else
	#define	PU5_0	(pu5.BIT_NUMBER.bit0)
	#define	PU5_1	(pu5.BIT_NUMBER.bit1)
	#define	PU5_2	(pu5.BIT_NUMBER.bit2)
	#define	PU5_3	(pu5.BIT_NUMBER.bit3)
	#define	PU5_4	(pu5.BIT_NUMBER.bit4)
	#define	PU5_5	(pu5.BIT_NUMBER.bit5)
	#define	PU5_6	(pu5.BIT_NUMBER.bit6)
	#define	PU5_7	(pu5.BIT_NUMBER.bit7)
	#define	PU5	(pu5.ALL)
#endif

/* PU6 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU6;

SFR_GLOBAL	SFR_PU6	pu6;

#ifdef __RL78__
	#define	PU6_0	(PU6.0)
	#define	PU6_1	(PU6.1)
	#define	PU6_2	(PU6.2)
	#define	PU6_3	(PU6.3)
	#define	PU6_4	(PU6.4)
	#define	PU6_5	(PU6.5)
	#define	PU6_6	(PU6.6)
	#define	PU6_7	(PU6.7)
#else
	#define	PU6_0	(pu6.BIT_NUMBER.bit0)
	#define	PU6_1	(pu6.BIT_NUMBER.bit1)
	#define	PU6_2	(pu6.BIT_NUMBER.bit2)
	#define	PU6_3	(pu6.BIT_NUMBER.bit3)
	#define	PU6_4	(pu6.BIT_NUMBER.bit4)
	#define	PU6_5	(pu6.BIT_NUMBER.bit5)
	#define	PU6_6	(pu6.BIT_NUMBER.bit6)
	#define	PU6_7	(pu6.BIT_NUMBER.bit7)
	#define	PU6	(pu6.ALL)
#endif

/* PU7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU7;

SFR_GLOBAL	SFR_PU7	pu7;

#ifdef __RL78__
	#define	PU7_0	(PU7.0)
	#define	PU7_1	(PU7.1)
	#define	PU7_2	(PU7.2)
	#define	PU7_3	(PU7.3)
	#define	PU7_4	(PU7.4)
	#define	PU7_5	(PU7.5)
	#define	PU7_6	(PU7.6)
	#define	PU7_7	(PU7.7)
#else
	#define	PU7_0	(pu7.BIT_NUMBER.bit0)
	#define	PU7_1	(pu7.BIT_NUMBER.bit1)
	#define	PU7_2	(pu7.BIT_NUMBER.bit2)
	#define	PU7_3	(pu7.BIT_NUMBER.bit3)
	#define	PU7_4	(pu7.BIT_NUMBER.bit4)
	#define	PU7_5	(pu7.BIT_NUMBER.bit5)
	#define	PU7_6	(pu7.BIT_NUMBER.bit6)
	#define	PU7_7	(pu7.BIT_NUMBER.bit7)
	#define	PU7	(pu7.ALL)
#endif

/* PU9 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU9;

SFR_GLOBAL	SFR_PU9	pu9;

#ifdef __RL78__
	#define	PU9_0	(PU9.0)
	#define	PU9_1	(PU9.1)
	#define	PU9_2	(PU9.2)
	#define	PU9_3	(PU9.3)
	#define	PU9_4	(PU9.4)
	#define	PU9_5	(PU9.5)
	#define	PU9_6	(PU9.6)
	#define	PU9_7	(PU9.7)
#else
	#define	PU9_0	(pu9.BIT_NUMBER.bit0)
	#define	PU9_1	(pu9.BIT_NUMBER.bit1)
	#define	PU9_2	(pu9.BIT_NUMBER.bit2)
	#define	PU9_3	(pu9.BIT_NUMBER.bit3)
	#define	PU9_4	(pu9.BIT_NUMBER.bit4)
	#define	PU9_5	(pu9.BIT_NUMBER.bit5)
	#define	PU9_6	(pu9.BIT_NUMBER.bit6)
	#define	PU9_7	(pu9.BIT_NUMBER.bit7)
	#define	PU9	(pu9.ALL)
#endif

/* PU10 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU10;

SFR_GLOBAL	SFR_PU10	pu10;

#ifdef __RL78__
	#define	PU10_0	(PU10.0)
	#define	PU10_1	(PU10.1)
	#define	PU10_2	(PU10.2)
	#define	PU10_3	(PU10.3)
	#define	PU10_4	(PU10.4)
	#define	PU10_5	(PU10.5)
	#define	PU10_6	(PU10.6)
	#define	PU10_7	(PU10.7)
#else
	#define	PU10_0	(pu10.BIT_NUMBER.bit0)
	#define	PU10_1	(pu10.BIT_NUMBER.bit1)
	#define	PU10_2	(pu10.BIT_NUMBER.bit2)
	#define	PU10_3	(pu10.BIT_NUMBER.bit3)
	#define	PU10_4	(pu10.BIT_NUMBER.bit4)
	#define	PU10_5	(pu10.BIT_NUMBER.bit5)
	#define	PU10_6	(pu10.BIT_NUMBER.bit6)
	#define	PU10_7	(pu10.BIT_NUMBER.bit7)
	#define	PU10	(pu10.ALL)
#endif

/* PU12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU12;

SFR_GLOBAL	SFR_PU12	pu12;

#ifdef __RL78__
	#define	PU12_0	(PU12.0)
	#define	PU12_1	(PU12.1)
	#define	PU12_2	(PU12.2)
	#define	PU12_3	(PU12.3)
	#define	PU12_4	(PU12.4)
	#define	PU12_5	(PU12.5)
	#define	PU12_6	(PU12.6)
	#define	PU12_7	(PU12.7)
#else
	#define	PU12_0	(pu12.BIT_NUMBER.bit0)
	#define	PU12_1	(pu12.BIT_NUMBER.bit1)
	#define	PU12_2	(pu12.BIT_NUMBER.bit2)
	#define	PU12_3	(pu12.BIT_NUMBER.bit3)
	#define	PU12_4	(pu12.BIT_NUMBER.bit4)
	#define	PU12_5	(pu12.BIT_NUMBER.bit5)
	#define	PU12_6	(pu12.BIT_NUMBER.bit6)
	#define	PU12_7	(pu12.BIT_NUMBER.bit7)
	#define	PU12	(pu12.ALL)
#endif

/* PU14 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU14;

SFR_GLOBAL	SFR_PU14	pu14;

#ifdef __RL78__
	#define	PU14_0	(PU14.0)
	#define	PU14_1	(PU14.1)
	#define	PU14_2	(PU14.2)
	#define	PU14_3	(PU14.3)
	#define	PU14_4	(PU14.4)
	#define	PU14_5	(PU14.5)
	#define	PU14_6	(PU14.6)
	#define	PU14_7	(PU14.7)
#else
	#define	PU14_0	(pu14.BIT_NUMBER.bit0)
	#define	PU14_1	(pu14.BIT_NUMBER.bit1)
	#define	PU14_2	(pu14.BIT_NUMBER.bit2)
	#define	PU14_3	(pu14.BIT_NUMBER.bit3)
	#define	PU14_4	(pu14.BIT_NUMBER.bit4)
	#define	PU14_5	(pu14.BIT_NUMBER.bit5)
	#define	PU14_6	(pu14.BIT_NUMBER.bit6)
	#define	PU14_7	(pu14.BIT_NUMBER.bit7)
	#define	PU14	(pu14.ALL)
#endif

/* PU15 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PU15;

SFR_GLOBAL	SFR_PU15	pu15;

#ifdef __RL78__
	#define	PU15_0	(PU15.0)
	#define	PU15_1	(PU15.1)
	#define	PU15_2	(PU15.2)
	#define	PU15_3	(PU15.3)
	#define	PU15_4	(PU15.4)
	#define	PU15_5	(PU15.5)
	#define	PU15_6	(PU15.6)
	#define	PU15_7	(PU15.7)
#else
	#define	PU15_0	(pu15.BIT_NUMBER.bit0)
	#define	PU15_1	(pu15.BIT_NUMBER.bit1)
	#define	PU15_2	(pu15.BIT_NUMBER.bit2)
	#define	PU15_3	(pu15.BIT_NUMBER.bit3)
	#define	PU15_4	(pu15.BIT_NUMBER.bit4)
	#define	PU15_5	(pu15.BIT_NUMBER.bit5)
	#define	PU15_6	(pu15.BIT_NUMBER.bit6)
	#define	PU15_7	(pu15.BIT_NUMBER.bit7)
	#define	PU15	(pu15.ALL)
#endif

/* PIM1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM1;

SFR_GLOBAL	SFR_PIM1	pim1;

#ifdef __RL78__
	#define	PIM1_0	(PIM1.0)
	#define	PIM1_1	(PIM1.1)
	#define	PIM1_2	(PIM1.2)
	#define	PIM1_3	(PIM1.3)
	#define	PIM1_4	(PIM1.4)
	#define	PIM1_5	(PIM1.5)
	#define	PIM1_6	(PIM1.6)
	#define	PIM1_7	(PIM1.7)
#else
	#define	PIM1_0	(pim1.BIT_NUMBER.bit0)
	#define	PIM1_1	(pim1.BIT_NUMBER.bit1)
	#define	PIM1_2	(pim1.BIT_NUMBER.bit2)
	#define	PIM1_3	(pim1.BIT_NUMBER.bit3)
	#define	PIM1_4	(pim1.BIT_NUMBER.bit4)
	#define	PIM1_5	(pim1.BIT_NUMBER.bit5)
	#define	PIM1_6	(pim1.BIT_NUMBER.bit6)
	#define	PIM1_7	(pim1.BIT_NUMBER.bit7)
	#define	PIM1	(pim1.ALL)
#endif

/* PIM3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM3;

SFR_GLOBAL	SFR_PIM3	pim3;

#ifdef __RL78__
	#define	PIM3_0	(PIM3.0)
	#define	PIM3_1	(PIM3.1)
	#define	PIM3_2	(PIM3.2)
	#define	PIM3_3	(PIM3.3)
	#define	PIM3_4	(PIM3.4)
	#define	PIM3_5	(PIM3.5)
	#define	PIM3_6	(PIM3.6)
	#define	PIM3_7	(PIM3.7)
#else
	#define	PIM3_0	(pim3.BIT_NUMBER.bit0)
	#define	PIM3_1	(pim3.BIT_NUMBER.bit1)
	#define	PIM3_2	(pim3.BIT_NUMBER.bit2)
	#define	PIM3_3	(pim3.BIT_NUMBER.bit3)
	#define	PIM3_4	(pim3.BIT_NUMBER.bit4)
	#define	PIM3_5	(pim3.BIT_NUMBER.bit5)
	#define	PIM3_6	(pim3.BIT_NUMBER.bit6)
	#define	PIM3_7	(pim3.BIT_NUMBER.bit7)
	#define	PIM3	(pim3.ALL)
#endif

/* PIM5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM5;

SFR_GLOBAL	SFR_PIM5	pim5;

#ifdef __RL78__
	#define	PIM5_0	(PIM5.0)
	#define	PIM5_1	(PIM5.1)
	#define	PIM5_2	(PIM5.2)
	#define	PIM5_3	(PIM5.3)
	#define	PIM5_4	(PIM5.4)
	#define	PIM5_5	(PIM5.5)
	#define	PIM5_6	(PIM5.6)
	#define	PIM5_7	(PIM5.7)
#else
	#define	PIM5_0	(pim5.BIT_NUMBER.bit0)
	#define	PIM5_1	(pim5.BIT_NUMBER.bit1)
	#define	PIM5_2	(pim5.BIT_NUMBER.bit2)
	#define	PIM5_3	(pim5.BIT_NUMBER.bit3)
	#define	PIM5_4	(pim5.BIT_NUMBER.bit4)
	#define	PIM5_5	(pim5.BIT_NUMBER.bit5)
	#define	PIM5_6	(pim5.BIT_NUMBER.bit6)
	#define	PIM5_7	(pim5.BIT_NUMBER.bit7)
	#define	PIM5	(pim5.ALL)
#endif

/* PIM6 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM6;

SFR_GLOBAL	SFR_PIM6	pim6;

#ifdef __RL78__
	#define	PIM6_0	(PIM6.0)
	#define	PIM6_1	(PIM6.1)
	#define	PIM6_2	(PIM6.2)
	#define	PIM6_3	(PIM6.3)
	#define	PIM6_4	(PIM6.4)
	#define	PIM6_5	(PIM6.5)
	#define	PIM6_6	(PIM6.6)
	#define	PIM6_7	(PIM6.7)
#else
	#define	PIM6_0	(pim6.BIT_NUMBER.bit0)
	#define	PIM6_1	(pim6.BIT_NUMBER.bit1)
	#define	PIM6_2	(pim6.BIT_NUMBER.bit2)
	#define	PIM6_3	(pim6.BIT_NUMBER.bit3)
	#define	PIM6_4	(pim6.BIT_NUMBER.bit4)
	#define	PIM6_5	(pim6.BIT_NUMBER.bit5)
	#define	PIM6_6	(pim6.BIT_NUMBER.bit6)
	#define	PIM6_7	(pim6.BIT_NUMBER.bit7)
	#define	PIM6	(pim6.ALL)
#endif

/* PIM7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM7;

SFR_GLOBAL	SFR_PIM7	pim7;

#ifdef __RL78__
	#define	PIM7_0	(PIM7.0)
	#define	PIM7_1	(PIM7.1)
	#define	PIM7_2	(PIM7.2)
	#define	PIM7_3	(PIM7.3)
	#define	PIM7_4	(PIM7.4)
	#define	PIM7_5	(PIM7.5)
	#define	PIM7_6	(PIM7.6)
	#define	PIM7_7	(PIM7.7)
#else
	#define	PIM7_0	(pim7.BIT_NUMBER.bit0)
	#define	PIM7_1	(pim7.BIT_NUMBER.bit1)
	#define	PIM7_2	(pim7.BIT_NUMBER.bit2)
	#define	PIM7_3	(pim7.BIT_NUMBER.bit3)
	#define	PIM7_4	(pim7.BIT_NUMBER.bit4)
	#define	PIM7_5	(pim7.BIT_NUMBER.bit5)
	#define	PIM7_6	(pim7.BIT_NUMBER.bit6)
	#define	PIM7_7	(pim7.BIT_NUMBER.bit7)
	#define	PIM7	(pim7.ALL)
#endif

/* PIM12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PIM12;

SFR_GLOBAL	SFR_PIM12	pim12;

#ifdef __RL78__
	#define	PIM12_0	(PIM12.0)
	#define	PIM12_1	(PIM12.1)
	#define	PIM12_2	(PIM12.2)
	#define	PIM12_3	(PIM12.3)
	#define	PIM12_4	(PIM12.4)
	#define	PIM12_5	(PIM12.5)
	#define	PIM12_6	(PIM12.6)
	#define	PIM12_7	(PIM12.7)
#else
	#define	PIM12_0	(pim12.BIT_NUMBER.bit0)
	#define	PIM12_1	(pim12.BIT_NUMBER.bit1)
	#define	PIM12_2	(pim12.BIT_NUMBER.bit2)
	#define	PIM12_3	(pim12.BIT_NUMBER.bit3)
	#define	PIM12_4	(pim12.BIT_NUMBER.bit4)
	#define	PIM12_5	(pim12.BIT_NUMBER.bit5)
	#define	PIM12_6	(pim12.BIT_NUMBER.bit6)
	#define	PIM12_7	(pim12.BIT_NUMBER.bit7)
	#define	PIM12	(pim12.ALL)
#endif

/* POM1 */
typedef union{
	SFR_BIT8			BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_POM1;

SFR_GLOBAL	SFR_POM1	pom1;

#ifdef __RL78__
	#define	POM1_0	(POM1.0)
	#define	POM1_1	(POM1.1)
	#define	POM1_2	(POM1.2)
	#define	POM1_3	(POM1.3)
	#define	POM1_4	(POM1.4)
	#define	POM1_5	(POM1.5)
	#define	POM1_6	(POM1.6)
	#define	POM1_7	(POM1.7)
#else
	#define	POM1_0	(pom1.BIT_NUMBER.bit0)
	#define	POM1_1	(pom1.BIT_NUMBER.bit1)
	#define	POM1_2	(pom1.BIT_NUMBER.bit2)
	#define	POM1_3	(pom1.BIT_NUMBER.bit3)
	#define	POM1_4	(pom1.BIT_NUMBER.bit4)
	#define	POM1_5	(pom1.BIT_NUMBER.bit5)
	#define	POM1_6	(pom1.BIT_NUMBER.bit6)
	#define	POM1_7	(pom1.BIT_NUMBER.bit7)
	#define	POM1	(pom1.ALL)
#endif

/* POM6 */
typedef union{
	SFR_BIT8			BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_POM6;

SFR_GLOBAL	SFR_POM6	pom6;

#ifdef __RL78__
	#define	POM6_0	(POM6.0)
	#define	POM6_1	(POM6.1)
	#define	POM6_2	(POM6.2)
	#define	POM6_3	(POM6.3)
	#define	POM6_4	(POM6.4)
	#define	POM6_5	(POM6.5)
	#define	POM6_6	(POM6.6)
	#define	POM6_7	(POM6.7)
#else
	#define	POM6_0	(pom6.BIT_NUMBER.bit0)
	#define	POM6_1	(pom6.BIT_NUMBER.bit1)
	#define	POM6_2	(pom6.BIT_NUMBER.bit2)
	#define	POM6_3	(pom6.BIT_NUMBER.bit3)
	#define	POM6_4	(pom6.BIT_NUMBER.bit4)
	#define	POM6_5	(pom6.BIT_NUMBER.bit5)
	#define	POM6_6	(pom6.BIT_NUMBER.bit6)
	#define	POM6_7	(pom6.BIT_NUMBER.bit7)
	#define	POM6	(pom6.ALL)
#endif

/* POM7 */
typedef union{
	SFR_BIT8			BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_POM7;

SFR_GLOBAL	SFR_POM7	pom7;

#ifdef __RL78__
	#define	POM7_0	(POM7.0)
	#define	POM7_1	(POM7.1)
	#define	POM7_2	(POM7.2)
	#define	POM7_3	(POM7.3)
	#define	POM7_4	(POM7.4)
	#define	POM7_5	(POM7.5)
	#define	POM7_6	(POM7.6)
	#define	POM7_7	(POM7.7)
#else
	#define	POM7_0	(pom7.BIT_NUMBER.bit0)
	#define	POM7_1	(pom7.BIT_NUMBER.bit1)
	#define	POM7_2	(pom7.BIT_NUMBER.bit2)
	#define	POM7_3	(pom7.BIT_NUMBER.bit3)
	#define	POM7_4	(pom7.BIT_NUMBER.bit4)
	#define	POM7_5	(pom7.BIT_NUMBER.bit5)
	#define	POM7_6	(pom7.BIT_NUMBER.bit6)
	#define	POM7_7	(pom7.BIT_NUMBER.bit7)
	#define	POM7	(pom7.ALL)
#endif

/* POM12 */
typedef union{
	SFR_BIT8			BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_POM12;

SFR_GLOBAL	SFR_POM12	pom12;

#ifdef __RL78__
	#define	POM12_0	(POM12.0)
	#define	POM12_1	(POM12.1)
	#define	POM12_2	(POM12.2)
	#define	POM12_3	(POM12.3)
	#define	POM12_4	(POM12.4)
	#define	POM12_5	(POM12.5)
	#define	POM12_6	(POM12.6)
	#define	POM12_7	(POM12.7)
#else
	#define	POM12_0	(pom12.BIT_NUMBER.bit0)
	#define	POM12_1	(pom12.BIT_NUMBER.bit1)
	#define	POM12_2	(pom12.BIT_NUMBER.bit2)
	#define	POM12_3	(pom12.BIT_NUMBER.bit3)
	#define	POM12_4	(pom12.BIT_NUMBER.bit4)
	#define	POM12_5	(pom12.BIT_NUMBER.bit5)
	#define	POM12_6	(pom12.BIT_NUMBER.bit6)
	#define	POM12_7	(pom12.BIT_NUMBER.bit7)
	#define	POM12	(pom12.ALL)
#endif

/* PMC7 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PMC7;

SFR_GLOBAL	SFR_PMC7	pmc7;

#ifdef __RL78__
	#define	PMC7_0	(PMC7.0)
	#define	PMC7_1	(PMC7.1)
	#define	PMC7_2	(PMC7.2)
	#define	PMC7_3	(PMC7.3)
	#define	PMC7_4	(PMC7.4)
	#define	PMC7_5	(PMC7.5)
	#define	PMC7_6	(PMC7.6)
	#define	PMC7_7	(PMC7.7)
#else
	#define	PMC7_0	(pmc7.BIT_NUMBER.bit0)
	#define	PMC7_1	(pmc7.BIT_NUMBER.bit1)
	#define	PMC7_2	(pmc7.BIT_NUMBER.bit2)
	#define	PMC7_3	(pmc7.BIT_NUMBER.bit3)
	#define	PMC7_4	(pmc7.BIT_NUMBER.bit4)
	#define	PMC7_5	(pmc7.BIT_NUMBER.bit5)
	#define	PMC7_6	(pmc7.BIT_NUMBER.bit6)
	#define	PMC7_7	(pmc7.BIT_NUMBER.bit7)
	#define	PMC7	(pmc7.ALL)
#endif

/* PMC9 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PMC9;

SFR_GLOBAL	SFR_PMC9	pmc9;

#ifdef __RL78__
	#define	PMC9_0	(PMC9.0)
	#define	PMC9_1	(PMC9.1)
	#define	PMC9_2	(PMC9.2)
	#define	PMC9_3	(PMC9.3)
	#define	PMC9_4	(PMC9.4)
	#define	PMC9_5	(PMC9.5)
	#define	PMC9_6	(PMC9.6)
	#define	PMC9_7	(PMC9.7)
#else
	#define	PMC9_0	(pmc9.BIT_NUMBER.bit0)
	#define	PMC9_1	(pmc9.BIT_NUMBER.bit1)
	#define	PMC9_2	(pmc9.BIT_NUMBER.bit2)
	#define	PMC9_3	(pmc9.BIT_NUMBER.bit3)
	#define	PMC9_4	(pmc9.BIT_NUMBER.bit4)
	#define	PMC9_5	(pmc9.BIT_NUMBER.bit5)
	#define	PMC9_6	(pmc9.BIT_NUMBER.bit6)
	#define	PMC9_7	(pmc9.BIT_NUMBER.bit7)
	#define	PMC9	(pmc9.ALL)
#endif

/* PMC12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PMC12;

SFR_GLOBAL	SFR_PMC12	pmc12;

#ifdef __RL78__
	#define	PMC12_0	(PMC12.0)
	#define	PMC12_1	(PMC12.1)
	#define	PMC12_2	(PMC12.2)
	#define	PMC12_3	(PMC12.3)
	#define	PMC12_4	(PMC12.4)
	#define	PMC12_5	(PMC12.5)
	#define	PMC12_6	(PMC12.6)
	#define	PMC12_7	(PMC12.7)
#else
	#define	PMC12_0	(pmc12.BIT_NUMBER.bit0)
	#define	PMC12_1	(pmc12.BIT_NUMBER.bit1)
	#define	PMC12_2	(pmc12.BIT_NUMBER.bit2)
	#define	PMC12_3	(pmc12.BIT_NUMBER.bit3)
	#define	PMC12_4	(pmc12.BIT_NUMBER.bit4)
	#define	PMC12_5	(pmc12.BIT_NUMBER.bit5)
	#define	PMC12_6	(pmc12.BIT_NUMBER.bit6)
	#define	PMC12_7	(pmc12.BIT_NUMBER.bit7)
	#define	PMC12	(pmc12.ALL)
#endif

/* NFEN0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_NFEN0;

SFR_GLOBAL	SFR_NFEN0	nfen0;

#ifdef __RL78__
	#define	NFEN0_0	(NFEN0.0)
	#define	NFEN0_1	(NFEN0.1)
	#define	NFEN0_2	(NFEN0.2)
	#define	NFEN0_3	(NFEN0.3)
	#define	NFEN0_4	(NFEN0.4)
	#define	NFEN0_5	(NFEN0.5)
	#define	NFEN0_6	(NFEN0.6)
	#define	NFEN0_7	(NFEN0.7)
#else
	#define	NFEN0_0	(nfen0.BIT_NUMBER.bit0)
	#define	NFEN0_1	(nfen0.BIT_NUMBER.bit1)
	#define	NFEN0_2	(nfen0.BIT_NUMBER.bit2)
	#define	NFEN0_3	(nfen0.BIT_NUMBER.bit3)
	#define	NFEN0_4	(nfen0.BIT_NUMBER.bit4)
	#define	NFEN0_5	(nfen0.BIT_NUMBER.bit5)
	#define	NFEN0_6	(nfen0.BIT_NUMBER.bit6)
	#define	NFEN0_7	(nfen0.BIT_NUMBER.bit7)
	#define	NFEN0	(nfen0.ALL)
#endif

/* NFEN1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_NFEN1;

SFR_GLOBAL	SFR_NFEN1	nfen1;

#ifdef __RL78__
	#define	NFEN1_0	(NFEN1.0)
	#define	NFEN1_1	(NFEN1.1)
	#define	NFEN1_2	(NFEN1.2)
	#define	NFEN1_3	(NFEN1.3)
	#define	NFEN1_4	(NFEN1.4)
	#define	NFEN1_5	(NFEN1.5)
	#define	NFEN1_6	(NFEN1.6)
	#define	NFEN1_7	(NFEN1.7)
#else
	#define	NFEN1_0	(nfen1.BIT_NUMBER.bit0)
	#define	NFEN1_1	(nfen1.BIT_NUMBER.bit1)
	#define	NFEN1_2	(nfen1.BIT_NUMBER.bit2)
	#define	NFEN1_3	(nfen1.BIT_NUMBER.bit3)
	#define	NFEN1_4	(nfen1.BIT_NUMBER.bit4)
	#define	NFEN1_5	(nfen1.BIT_NUMBER.bit5)
	#define	NFEN1_6	(nfen1.BIT_NUMBER.bit6)
	#define	NFEN1_7	(nfen1.BIT_NUMBER.bit7)
	#define	NFEN1	(nfen1.ALL)
#endif

/* NFEN2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_NFEN2;

SFR_GLOBAL	SFR_NFEN2	nfen2;

#ifdef __RL78__
	#define	NFEN2_0	(NFEN2.0)
	#define	NFEN2_1	(NFEN2.1)
	#define	NFEN2_2	(NFEN2.2)
	#define	NFEN2_3	(NFEN2.3)
	#define	NFEN2_4	(NFEN2.4)
	#define	NFEN2_5	(NFEN2.5)
	#define	NFEN2_6	(NFEN2.6)
	#define	NFEN2_7	(NFEN2.7)
#else
	#define	NFEN2_0	(nfen2.BIT_NUMBER.bit0)
	#define	NFEN2_1	(nfen2.BIT_NUMBER.bit1)
	#define	NFEN2_2	(nfen2.BIT_NUMBER.bit2)
	#define	NFEN2_3	(nfen2.BIT_NUMBER.bit3)
	#define	NFEN2_4	(nfen2.BIT_NUMBER.bit4)
	#define	NFEN2_5	(nfen2.BIT_NUMBER.bit5)
	#define	NFEN2_6	(nfen2.BIT_NUMBER.bit6)
	#define	NFEN2_7	(nfen2.BIT_NUMBER.bit7)
	#define	NFEN2	(nfen2.ALL)
#endif

/* ISC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ISC;

SFR_GLOBAL	SFR_ISC	isc;

#ifdef __RL78__
	#define	ISC_0	(ISC.0)
	#define	ISC_1	(ISC.1)
	#define	ISC_2	(ISC.2)
	#define	ISC_3	(ISC.3)
	#define	ISC_4	(ISC.4)
	#define	ISC_5	(ISC.5)
	#define	ISC_6	(ISC.6)
	#define	ISC_7	(ISC.7)
#else
	#define	ISC_0	(isc.BIT_NUMBER.bit0)
	#define	ISC_1	(isc.BIT_NUMBER.bit1)
	#define	ISC_2	(isc.BIT_NUMBER.bit2)
	#define	ISC_3	(isc.BIT_NUMBER.bit3)
	#define	ISC_4	(isc.BIT_NUMBER.bit4)
	#define	ISC_5	(isc.BIT_NUMBER.bit5)
	#define	ISC_6	(isc.BIT_NUMBER.bit6)
	#define	ISC_7	(isc.BIT_NUMBER.bit7)
	#define	ISC	(isc.ALL)
#endif

/* TIS0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tis0;

#ifdef __RL78__
#else
	#define	TIS0	(tis0)
#endif

/* TIS1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tis1;

#ifdef __RL78__
#else
	#define	TIS1	(tis1)
#endif

/* ADPC */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	adpc;

#ifdef __RL78__
#else
	#define	ADPC	(adpc)
#endif

/* PMS */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PMS;

SFR_GLOBAL	SFR_PMS	pms;

#ifdef __RL78__
	#define	PMS_0	(PMS.0)
	#define	PMS_1	(PMS.1)
	#define	PMS_2	(PMS.2)
	#define	PMS_3	(PMS.3)
	#define	PMS_4	(PMS.4)
	#define	PMS_5	(PMS.5)
	#define	PMS_6	(PMS.6)
	#define	PMS_7	(PMS.7)
#else
	#define	PMS_0	(pms.BIT_NUMBER.bit0)
	#define	PMS_1	(pms.BIT_NUMBER.bit1)
	#define	PMS_2	(pms.BIT_NUMBER.bit2)
	#define	PMS_3	(pms.BIT_NUMBER.bit3)
	#define	PMS_4	(pms.BIT_NUMBER.bit4)
	#define	PMS_5	(pms.BIT_NUMBER.bit5)
	#define	PMS_6	(pms.BIT_NUMBER.bit6)
	#define	PMS_7	(pms.BIT_NUMBER.bit7)
	#define	PMS	(pms.ALL)
#endif

/* IAWCTL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	iawctl;

#ifdef __RL78__
#else
	#define	IAWCTL	(iawctl)
#endif

/* INTFLG0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	intflg0;

#ifdef __RL78__
#else
	#define	INTFLG0	(intflg0)
#endif

/* TIS2 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tis2;

#ifdef __RL78__
#else
	#define	TIS2	(tis2)
#endif

/* LCHSEL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lchsel;

#ifdef __RL78__
#else
	#define	LCHSEL	(lchsel)
#endif

/* INTMSK */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	intmsk;

#ifdef __RL78__
#else
	#define	INTMSK	(intmsk)
#endif

/* DFLCTL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DFLCTL;

SFR_GLOBAL	SFR_DFLCTL	delctl;

#ifdef __RL78__
	#define	DFLCTL_0	(DFLCTL.0)
	#define	DFLCTL_1	(DFLCTL.1)
	#define	DFLCTL_2	(DFLCTL.2)
	#define	DFLCTL_3	(DFLCTL.3)
	#define	DFLCTL_4	(DFLCTL.4)
	#define	DFLCTL_5	(DFLCTL.5)
	#define	DFLCTL_6	(DFLCTL.6)
	#define	DFLCTL_7	(DFLCTL.7)
#else
	#define	DFLEN		(delctl.BIT_NUMBER.bit0)
	#define	DFLCTL_0	(delctl.BIT_NUMBER.bit0)
	#define	DFLCTL_1	(delctl.BIT_NUMBER.bit1)
	#define	DFLCTL_2	(delctl.BIT_NUMBER.bit2)
	#define	DFLCTL_3	(delctl.BIT_NUMBER.bit3)
	#define	DFLCTL_4	(delctl.BIT_NUMBER.bit4)
	#define	DFLCTL_5	(delctl.BIT_NUMBER.bit5)
	#define	DFLCTL_6	(delctl.BIT_NUMBER.bit6)
	#define	DFLCTL_7	(delctl.BIT_NUMBER.bit7)
	#define	DFLCTL	(delctl.ALL)
#endif

/* HIOTRM */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	hiotrm;

#ifdef __RL78__
#else
	#define	HIOTRM	(hiotrm)
#endif

/* HOCODIV */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	hocodiv;

#ifdef __RL78__
#else
	#define	HOCODIV	(hocodiv)
#endif

/* SPMCTRL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	spmctrl;

#ifdef __RL78__
#else
	#define	SPMCTRL	(spmctrl)
#endif

/* SPOFR */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT spofr;
#ifdef __RL78__
#else
	#define	SPOFR	(spofr)
#endif

/* SPUFR */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT spufr;
#ifdef __RL78__
#else
	#define	SPUFR	(spufr)
#endif

/* PER0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PER0;

SFR_GLOBAL	SFR_PER0	per0;

#ifdef __RL78__
	#define	PER0_0	(PER0.0)
	#define	PER0_1	(PER0.1)
	#define	PER0_2	(PER0.2)
	#define	PER0_3	(PER0.3)
	#define	PER0_4	(PER0.4)
	#define	PER0_5	(PER0.5)
	#define	PER0_6	(PER0.6)
	#define	PER0_7	(PER0.7)
#else
	#define	TAU0EN	(per0.BIT_NUMBER.bit0)
	#define	TAU1EN	(per0.BIT_NUMBER.bit1)
	#define	SAU0EN	(per0.BIT_NUMBER.bit2)
	#define	SAU1EN	(per0.BIT_NUMBER.bit3)
	#define	IICA0EN	(per0.BIT_NUMBER.bit4)
	#define	ADCEN	(per0.BIT_NUMBER.bit5)
	#define	RTCEN	(per0.BIT_NUMBER.bit7)
	#define	PER0_0	(per0.BIT_NUMBER.bit0)
	#define	PER0_1	(per0.BIT_NUMBER.bit1)
	#define	PER0_2	(per0.BIT_NUMBER.bit2)
	#define	PER0_3	(per0.BIT_NUMBER.bit3)
	#define	PER0_4	(per0.BIT_NUMBER.bit4)
	#define	PER0_5	(per0.BIT_NUMBER.bit5)
	#define	PER0_6	(per0.BIT_NUMBER.bit6)
	#define	PER0_7	(per0.BIT_NUMBER.bit7)
	#define	PER0	(per0.ALL)
#endif

/* OSMC */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	osmc;

#ifdef __RL78__
#else
	#define	OSMC	(osmc)
#endif

/* BCDADJ */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	bcdadj;

#ifdef __RL78__
#else
	#define	BCDADJ	(bcdadj)
#endif


/* SSR00L */
#ifdef __RL78__
#else
	#define	SSR00L	(ssr00.BYTE.ssr00l)
#endif

/* SSR00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	ssr00l;
	SFR_UNSIGNED_SHORT_INT	ssr00h;
}SFR_BYTE_SSR00;

typedef union{
	SFR_BYTE_SSR00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSR00;

SFR_GLOBAL	SFR_SSR00	ssr00;

#ifdef __RL78__
#else
	#define	SSR00	(ssr00.ALL)
#endif


/* SSR01L */
#ifdef __RL78__
#else
	#define	SSR01L	(ssr01.BYTE.ssr01l)
#endif

/* SSR01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	ssr01l;
	SFR_UNSIGNED_SHORT_INT	ssr01h;
}SFR_BYTE_SSR01;

typedef union{
	SFR_BYTE_SSR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSR01;

SFR_GLOBAL	SFR_SSR01	ssr01;

#ifdef __RL78__
#else
	#define	SSR01	(ssr01.ALL)
#endif

/* SIR00L */
#ifdef __RL78__
#else
	#define	SIR00L	(sir00.BYTE.sir00l)
#endif

/* SIR00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sir00l;
	SFR_UNSIGNED_SHORT_INT	sir00h;
}SFR_BYTE_SIR00;

typedef union{
	SFR_BYTE_SIR00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SIR00;

SFR_GLOBAL	SFR_SIR00	sir00;

#ifdef __RL78__
#else
	#define	SIR00	(sir00.ALL)
#endif

/* SIR01L */
#ifdef __RL78__
#else
	#define	SIR01L	(sir01.BYTE.sir01l)
#endif

/* SIR01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sir01l;
	SFR_UNSIGNED_SHORT_INT	sir01h;
}SFR_BYTE_SIR01;

typedef union{
	SFR_BYTE_SIR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SIR01;

SFR_GLOBAL	SFR_SIR01	sir01;

#ifdef __RL78__
#else
	#define	SIR01	(sir01.ALL)
#endif

/* SMR00 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT smr00;
#ifdef __RL78__
#else
	#define	SMR00	(smr00)
#endif

/* SMR01 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT smr01;
#ifdef __RL78__
#else
	#define	SMR01	(smr01)
#endif

/* SCR00 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT scr00;
#ifdef __RL78__
#else
	#define	SCR00	(scr00)
#endif

/* SMR01 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT scr01;
#ifdef __RL78__
#else
	#define	SCR01	(scr01)
#endif

/* SE0L */
#ifdef __RL78__
	#define	SE0L_0	(SE0L.0)
	#define	SE0L_1	(SE0L.1)
	#define	SE0L_2	(SE0L.2)
	#define	SE0L_3	(SE0L.3)
	#define	SE0L_4	(SE0L.4)
	#define	SE0L_5	(SE0L.5)
	#define	SE0L_6	(SE0L.6)
	#define	SE0L_7	(SE0L.7)
#else
	#define	SE0L_0			(se0.BIT_NUMBER.bit0)
	#define	SE0L_1			(se0.BIT_NUMBER.bit1)
	#define	SE0L_2			(se0.BIT_NUMBER.bit2)
	#define	SE0L_3			(se0.BIT_NUMBER.bit3)
	#define	SE0L_4			(se0.BIT_NUMBER.bit4)
	#define	SE0L_5			(se0.BIT_NUMBER.bit5)
	#define	SE0L_6			(se0.BIT_NUMBER.bit6)
	#define	SE0L_7			(se0.BIT_NUMBER.bit7)
	#define	SE0L			(se0.BYTE.se0l)
#endif

/* SE0 */
typedef struct{
	SFR_UNSIGNED_CHAR	se0l;
	SFR_UNSIGNED_CHAR	se0h;
}SFR_BYTE_SE0;

typedef union{
	SFR_BYTE_SE0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SE0;

SFR_GLOBAL	SFR_SE0	se0;

#ifdef __RL78__
#else
	#define	SE0	(se0.ALL)
#endif

/* SS0L */
#ifdef __RL78__
	#define	SS0L_0	(SS0L.0)
	#define	SS0L_1	(SS0L.1)
	#define	SS0L_2	(SS0L.2)
	#define	SS0L_3	(SS0L.3)
	#define	SS0L_4	(SS0L.4)
	#define	SS0L_5	(SS0L.5)
	#define	SS0L_6	(SS0L.6)
	#define	SS0L_7	(SS0L.7)
#else
	#define	SS0L_0			(ss0.BIT_NUMBER.bit0)
	#define	SS0L_1			(ss0.BIT_NUMBER.bit1)
	#define	SS0L_2			(ss0.BIT_NUMBER.bit2)
	#define	SS0L_3			(ss0.BIT_NUMBER.bit3)
	#define	SS0L_4			(ss0.BIT_NUMBER.bit4)
	#define	SS0L_5			(ss0.BIT_NUMBER.bit5)
	#define	SS0L_6			(ss0.BIT_NUMBER.bit6)
	#define	SS0L_7			(ss0.BIT_NUMBER.bit7)
	#define	SS0L			(ss0.BYTE.ss0l)
#endif

/* SS0 */
typedef struct{
	SFR_UNSIGNED_CHAR	ss0l;
	SFR_UNSIGNED_CHAR	ss0h;
}SFR_BYTE_SS0;

typedef union{
	SFR_BYTE_SS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SS0;

SFR_GLOBAL	SFR_SS0	ss0;

#ifdef __RL78__
#else
	#define	SS0	(ss0.ALL)
#endif

/* ST0L */
#ifdef __RL78__
	#define	ST0L_0	(ST0L.0)
	#define	ST0L_1	(ST0L.1)
	#define	ST0L_2	(ST0L.2)
	#define	ST0L_3	(ST0L.3)
	#define	ST0L_4	(ST0L.4)
	#define	ST0L_5	(ST0L.5)
	#define	ST0L_6	(ST0L.6)
	#define	ST0L_7	(ST0L.7)
#else
	#define	ST0L_0			(st0.BIT_NUMBER.bit0)
	#define	ST0L_1			(st0.BIT_NUMBER.bit1)
	#define	ST0L_2			(st0.BIT_NUMBER.bit2)
	#define	ST0L_3			(st0.BIT_NUMBER.bit3)
	#define	ST0L_4			(st0.BIT_NUMBER.bit4)
	#define	ST0L_5			(st0.BIT_NUMBER.bit5)
	#define	ST0L_6			(st0.BIT_NUMBER.bit6)
	#define	ST0L_7			(st0.BIT_NUMBER.bit7)
	#define	ST0L			(st0.BYTE.st0l)
#endif

/* ST0 */
typedef struct{
	SFR_UNSIGNED_CHAR	st0l;
	SFR_UNSIGNED_CHAR	st0h;
}SFR_BYTE_ST0;

typedef union{
	SFR_BYTE_ST0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_ST0;

SFR_GLOBAL	SFR_ST0	st0;

#ifdef __RL78__
#else
	#define	ST0	(st0.ALL)
#endif

/* SPS0L */
#ifdef __RL78__
#else
	#define	SPS0L	(sdr00.BYTE.sps0l)
#endif

/* SPS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sps0l;
	SFR_UNSIGNED_SHORT_INT	sps0h;
}SFR_BYTE_SPS0;

typedef union{
	SFR_BYTE_SPS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SPS0;

SFR_GLOBAL	SFR_SPS0	sps0;

#ifdef __RL78__
#else
	#define	SPS0	(sps0.ALL)
#endif

/* SO0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT so0;
#ifdef __RL78__
#else
	#define	SO0	(so0)
#endif

/* SOE0L */
#ifdef __RL78__
	#define	SOE0L_0	(SOE0L.0)
	#define	SOE0L_1	(SOE0L.1)
	#define	SOE0L_2	(SOE0L.2)
	#define	SOE0L_3	(SOE0L.3)
	#define	SOE0L_4	(SOE0L.4)
	#define	SOE0L_5	(SOE0L.5)
	#define	SOE0L_6	(SOE0L.6)
	#define	SOE0L_7	(SOE0L.7)
#else
	#define	SOE0L_0			(soe0.BIT_NUMBER.bit0)
	#define	SOE0L_1			(soe0.BIT_NUMBER.bit1)
	#define	SOE0L_2			(soe0.BIT_NUMBER.bit2)
	#define	SOE0L_3			(soe0.BIT_NUMBER.bit3)
	#define	SOE0L_4			(soe0.BIT_NUMBER.bit4)
	#define	SOE0L_5			(soe0.BIT_NUMBER.bit5)
	#define	SOE0L_6			(soe0.BIT_NUMBER.bit6)
	#define	SOE0L_7			(soe0.BIT_NUMBER.bit7)
	#define	SOE0L			(soe0.BYTE.soe0l)
#endif

/* SOE0 */
typedef struct{
	SFR_UNSIGNED_CHAR	soe0l;
	SFR_UNSIGNED_CHAR	soe0h;
}SFR_BYTE_SOE0;

typedef union{
	SFR_BYTE_SOE0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SOE0;

SFR_GLOBAL	SFR_SOE0	soe0;

#ifdef __RL78__
#else
	#define	SOE0	(soe0.ALL)
#endif

/* SOL0L */
#ifdef __RL78__
#else
	#define	SOL0L	(sol0.BYTE.sol0l)
#endif

/* SOL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sol0l;
	SFR_UNSIGNED_SHORT_INT	sol0h;
}SFR_BYTE_SOL0;

typedef union{
	SFR_BYTE_SOL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SOL0;

SFR_GLOBAL	SFR_SOL0	sol0;

#ifdef __RL78__
#else
	#define	SOL0	(sol0.ALL)
#endif

/* SSE0L */
#ifdef __RL78__
#else
	#define	SSE0L	(sse0.BYTE.sse0l)
#endif

/* SSE0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sse0l;
	SFR_UNSIGNED_SHORT_INT	sse0h;
}SFR_BYTE_SSE0;

typedef union{
	SFR_BYTE_SSE0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSE0;

SFR_GLOBAL	SFR_SSE0	sse0;

#ifdef __RL78__
#else
	#define	SSE0	(sse0.ALL)
#endif

/* SSR10L */
#ifdef __RL78__
#else
	#define	SSR10L	(ssr10.BYTE.ssr10l)
#endif

/* SSR10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	ssr10l;
	SFR_UNSIGNED_SHORT_INT	ssr10h;
}SFR_BYTE_SSR10;

typedef union{
	SFR_BYTE_SSR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSR10;

SFR_GLOBAL	SFR_SSR10	ssr10;

#ifdef __RL78__
#else
	#define	SSR10	(ssr10.ALL)
#endif

/* SSR11L */
#ifdef __RL78__
#else
	#define	SSR11L	(ssr11.BYTE.ssr11l)
#endif

/* SSR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	ssr11l;
	SFR_UNSIGNED_SHORT_INT	ssr11h;
}SFR_BYTE_SSR11;

typedef union{
	SFR_BYTE_SSR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSR11;

SFR_GLOBAL	SFR_SSR11	ssr11;

#ifdef __RL78__
#else
	#define	SSR11	(ssr11.ALL)
#endif

/* SIR10L */
#ifdef __RL78__
#else
	#define	SIR10L	(sir10.BYTE.sir10l)
#endif

/* SIR10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sir10l;
	SFR_UNSIGNED_SHORT_INT	sir10h;
}SFR_BYTE_SIR10;

typedef union{
	SFR_BYTE_SIR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SIR10;

SFR_GLOBAL	SFR_SIR10	sir10;

#ifdef __RL78__
#else
	#define	SIR10	(sir10.ALL)
#endif

/* SIR11L */
#ifdef __RL78__
#else
	#define	SIR11L	(sir11.BYTE.sir11l)
#endif

/* SIR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sir11l;
	SFR_UNSIGNED_SHORT_INT	sir11h;
}SFR_BYTE_SIR11;

typedef union{
	SFR_BYTE_SIR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SIR11;

SFR_GLOBAL	SFR_SIR11	sir11;

#ifdef __RL78__
#else
	#define	SIR11	(sir11.ALL)
#endif

/*SMR10*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT smr10;
#ifdef __RL78__
#else
	#define	SMR10	(smr10)
#endif

/*SMR11*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT smr11;
#ifdef __RL78__
#else
	#define	SMR11	(smr11)
#endif

/*SCR10*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT scr10;
#ifdef __RL78__
#else
	#define	SCR10	(scr10)
#endif

/*SCR11*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT scr11;
#ifdef __RL78__
#else
	#define	SCR11	(scr11)
#endif

/* SE1L */
#ifdef __RL78__
	#define	SE1L_0	(SE1L.0)
	#define	SE1L_1	(SE1L.1)
	#define	SE1L_2	(SE1L.2)
	#define	SE1L_3	(SE1L.3)
	#define	SE1L_4	(SE1L.4)
	#define	SE1L_5	(SE1L.5)
	#define	SE1L_6	(SE1L.6)
	#define	SE1L_7	(SE1L.7)
#else
	#define	SE1L_0			(se1.BIT_NUMBER.bit0)
	#define	SE1L_1			(se1.BIT_NUMBER.bit1)
	#define	SE1L_2			(se1.BIT_NUMBER.bit2)
	#define	SE1L_3			(se1.BIT_NUMBER.bit3)
	#define	SE1L_4			(se1.BIT_NUMBER.bit4)
	#define	SE1L_5			(se1.BIT_NUMBER.bit5)
	#define	SE1L_6			(se1.BIT_NUMBER.bit6)
	#define	SE1L_7			(se1.BIT_NUMBER.bit7)
	#define	SE1L			(se1.BYTE.se1l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	se1l;
	SFR_UNSIGNED_CHAR	se1h;
}SFR_BYTE_SE1;

typedef union{
	SFR_BYTE_SE1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SE1;

SFR_GLOBAL	SFR_SE1	se1;

#ifdef __RL78__
#else
	#define	SE1	(se1.ALL)
#endif

/* SS1L */
#ifdef __RL78__
	#define	SS1L_0	(SS1L.0)
	#define	SS1L_1	(SS1L.1)
	#define	SS1L_2	(SS1L.2)
	#define	SS1L_3	(SS1L.3)
	#define	SS1L_4	(SS1L.4)
	#define	SS1L_5	(SS1L.5)
	#define	SS1L_6	(SS1L.6)
	#define	SS1L_7	(SS1L.7)
#else
	#define	SS1L_0			(ss1.BIT_NUMBER.bit0)
	#define	SS1L_1			(ss1.BIT_NUMBER.bit1)
	#define	SS1L_2			(ss1.BIT_NUMBER.bit2)
	#define	SS1L_3			(ss1.BIT_NUMBER.bit3)
	#define	SS1L_4			(ss1.BIT_NUMBER.bit4)
	#define	SS1L_5			(ss1.BIT_NUMBER.bit5)
	#define	SS1L_6			(ss1.BIT_NUMBER.bit6)
	#define	SS1L_7			(ss1.BIT_NUMBER.bit7)
	#define	SS1L			(ss1.BYTE.ss1l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	ss1l;
	SFR_UNSIGNED_CHAR	ss1h;
}SFR_BYTE_SS1;

typedef union{
	SFR_BYTE_SS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SS1;

SFR_GLOBAL	SFR_SS1	ss1;

#ifdef __RL78__
#else
	#define	SS1	(ss1.ALL)
#endif

/* ST1L */
#ifdef __RL78__
	#define	ST1L_0	(ST1L.0)
	#define	ST1L_1	(ST1L.1)
	#define	ST1L_2	(ST1L.2)
	#define	ST1L_3	(ST1L.3)
	#define	ST1L_4	(ST1L.4)
	#define	ST1L_5	(ST1L.5)
	#define	ST1L_6	(ST1L.6)
	#define	ST1L_7	(ST1L.7)
#else
	#define	ST1L_0			(st1.BIT_NUMBER.bit0)
	#define	ST1L_1			(st1.BIT_NUMBER.bit1)
	#define	ST1L_2			(st1.BIT_NUMBER.bit2)
	#define	ST1L_3			(st1.BIT_NUMBER.bit3)
	#define	ST1L_4			(st1.BIT_NUMBER.bit4)
	#define	ST1L_5			(st1.BIT_NUMBER.bit5)
	#define	ST1L_6			(st1.BIT_NUMBER.bit6)
	#define	ST1L_7			(st1.BIT_NUMBER.bit7)
	#define	ST1L			(st1.BYTE.st1l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	st1l;
	SFR_UNSIGNED_CHAR	st1h;
}SFR_BYTE_ST1;

typedef union{
	SFR_BYTE_ST1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_ST1;

SFR_GLOBAL	SFR_ST1	st1;

#ifdef __RL78__
#else
	#define	ST1	(st1.ALL)
#endif

/* SPS1L */
#ifdef __RL78__
#else
	#define	SPS1L	(sps1.BYTE.sps1l)
#endif

/* SPS1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sps1l;
	SFR_UNSIGNED_SHORT_INT	sps1h;
}SFR_BYTE_SPS1;

typedef union{
	SFR_BYTE_SPS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SPS1;

SFR_GLOBAL	SFR_SPS1	sps1;

#ifdef __RL78__
#else
	#define	SPS1	(sps1.ALL)
#endif

/* SO1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT so1;
#ifdef __RL78__
#else
	#define	SO1	(so1)
#endif

/* SOE1L */
#ifdef __RL78__
	#define	SOE1L_0	(SOE1L.0)
	#define	SOE1L_1	(SOE1L.1)
	#define	SOE1L_2	(SOE1L.2)
	#define	SOE1L_3	(SOE1L.3)
	#define	SOE1L_4	(SOE1L.4)
	#define	SOE1L_5	(SOE1L.5)
	#define	SOE1L_6	(SOE1L.6)
	#define	SOE1L_7	(SOE1L.7)
#else
	#define	SOE1L_0			(soe1.BIT_NUMBER.bit0)
	#define	SOE1L_1			(soe1.BIT_NUMBER.bit1)
	#define	SOE1L_2			(soe1.BIT_NUMBER.bit2)
	#define	SOE1L_3			(soe1.BIT_NUMBER.bit3)
	#define	SOE1L_4			(soe1.BIT_NUMBER.bit4)
	#define	SOE1L_5			(soe1.BIT_NUMBER.bit5)
	#define	SOE1L_6			(soe1.BIT_NUMBER.bit6)
	#define	SOE1L_7			(soe1.BIT_NUMBER.bit7)
	#define	SOE1L			(soe1.BYTE.soe1l)
#endif

/* SOE1 */
typedef struct{
	SFR_UNSIGNED_CHAR	soe1l;
	SFR_UNSIGNED_CHAR	soe1h;
}SFR_BYTE_SOE1;

typedef union{
	SFR_BYTE_SOE1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SOE1;

SFR_GLOBAL	SFR_SOE1	soe1;

#ifdef __RL78__
#else
	#define	SOE1	(soe1.ALL)
#endif

/* SOL1L */
#ifdef __RL78__
#else
	#define	SOL1L	(sol1.BYTE.sol1l)
#endif

/* SOL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sol1l;
	SFR_UNSIGNED_SHORT_INT	sol1h;
}SFR_BYTE_SOL1;

typedef union{
	SFR_BYTE_SOL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SOL1;

SFR_GLOBAL	SFR_SOL1	sol1;

#ifdef __RL78__
#else
	#define	SOL1	(sol1.ALL)
#endif

/* SSE1L */
#ifdef __RL78__
#else
	#define	SSE1L	(sse1.BYTE.sse1l)
#endif

/* SSE1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	sse1l;
	SFR_UNSIGNED_SHORT_INT	sse1h;
}SFR_BYTE_SSE1;

typedef union{
	SFR_BYTE_SSE1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_SSE1;

SFR_GLOBAL	SFR_SSE1	sse1;

#ifdef __RL78__
#else
	#define	SSE1	(sse1.ALL)
#endif

/* TCR00 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr00;
#ifdef __RL78__
#else
	#define	TCR00	(tcr00)
#endif

/* TCR01 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr01;
#ifdef __RL78__
#else
	#define	TCR01	(tcr01)
#endif

/* TCR02 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr02;
#ifdef __RL78__
#else
	#define	TCR02	(tcr02)
#endif

/* TCR03 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr03;
#ifdef __RL78__
#else
	#define	TCR03	(tcr03)
#endif

/* TCR04 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr04;
#ifdef __RL78__
#else
	#define	TCR04	(tcr04)
#endif

/* TCR05 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr05;
#ifdef __RL78__
#else
	#define	TCR05	(tcr05)
#endif

/* TCR06 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr06;
#ifdef __RL78__
#else
	#define	TCR06	(tcr06)
#endif

/* TCR07 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr07;
#ifdef __RL78__
#else
	#define	TCR07	(tcr07)
#endif

/* TMR00 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr00;
#ifdef __RL78__
#else
	#define	TMR00	(tmr00)
#endif

/* TMR01 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr01;
#ifdef __RL78__
#else
	#define	TMR01	(tmr01)
#endif

/* TMR02 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr02;
#ifdef __RL78__
#else
	#define	TMR02	(tmr02)
#endif

/* TMR03 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr03;
#ifdef __RL78__
#else
	#define	TMR03	(tmr03)
#endif

/* TMR04 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr04;
#ifdef __RL78__
#else
	#define	TMR04	(tmr04)
#endif

/* TMR05 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr05;
#ifdef __RL78__
#else
	#define	TMR05	(tmr05)
#endif

/* TMR06 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr06;
#ifdef __RL78__
#else
	#define	TMR06	(tmr06)
#endif

/* TMR07 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr07;
#ifdef __RL78__
#else
	#define	TMR07	(tmr07)
#endif

/* TSR00L */
#ifdef __RL78__
#else
	#define	TSR00L	(tsr00.BYTE.tsr00l)
#endif

/* TSR00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr00l;
	SFR_UNSIGNED_SHORT_INT	tsr00h;
}SFR_BYTE_TSR00;

typedef union{
	SFR_BYTE_TSR00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR00;

SFR_GLOBAL	SFR_TSR00	tsr00;

#ifdef __RL78__
#else
	#define	TSR00	(tsr00.ALL)
#endif

/* TSR01L */
#ifdef __RL78__
#else
	#define	TSR01L	(tsr01.BYTE.tsr01l)
#endif

/* TSR01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr01l;
	SFR_UNSIGNED_SHORT_INT	tsr01h;
}SFR_BYTE_TSR01;

typedef union{
	SFR_BYTE_TSR01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR01;

SFR_GLOBAL	SFR_TSR01	tsr01;

#ifdef __RL78__
#else
	#define	TSR01	(tsr01.ALL)
#endif

/* TSR02L */
#ifdef __RL78__
#else
	#define	TSR02L	(tsr02.BYTE.tsr02l)
#endif

/* TSR02 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr02l;
	SFR_UNSIGNED_SHORT_INT	tsr02h;
}SFR_BYTE_TSR02;

typedef union{
	SFR_BYTE_TSR02	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR02;

SFR_GLOBAL	SFR_TSR02	tsr02;

#ifdef __RL78__
#else
	#define	TSR02	(tsr02.ALL)
#endif

/* TSR03L */
#ifdef __RL78__
#else
	#define	TSR03L	(tsr03.BYTE.tsr03l)
#endif

/* TSR03 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr03l;
	SFR_UNSIGNED_SHORT_INT	tsr03h;
}SFR_BYTE_TSR03;

typedef union{
	SFR_BYTE_TSR03	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR03;

SFR_GLOBAL	SFR_TSR03	tsr03;

#ifdef __RL78__
#else
	#define	TSR03	(tsr03.ALL)
#endif

/* TSR04L */
#ifdef __RL78__
#else
	#define	TSR04L	(tsr04.BYTE.tsr04l)
#endif

/* TSR04 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr04l;
	SFR_UNSIGNED_SHORT_INT	tsr04h;
}SFR_BYTE_TSR04;

typedef union{
	SFR_BYTE_TSR04	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR04;

SFR_GLOBAL	SFR_TSR04	tsr04;

#ifdef __RL78__
#else
	#define	TSR04	(tsr04.ALL)
#endif

/* TSR05L */
#ifdef __RL78__
#else
	#define	TSR05L	(tsr05.BYTE.tsr05l)
#endif

/* TSR05 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr05l;
	SFR_UNSIGNED_SHORT_INT	tsr05h;
}SFR_BYTE_TSR05;

typedef union{
	SFR_BYTE_TSR05	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR05;

SFR_GLOBAL	SFR_TSR05	tsr05;

#ifdef __RL78__
#else
	#define	TSR05	(tsr05.ALL)
#endif

/* TSR06L */
#ifdef __RL78__
#else
	#define	TSR06L	(tsr06.BYTE.tsr06l)
#endif

/* TSR06 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr06l;
	SFR_UNSIGNED_SHORT_INT	tsr06h;
}SFR_BYTE_TSR06;

typedef union{
	SFR_BYTE_TSR06	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR06;

SFR_GLOBAL	SFR_TSR06	tsr06;

#ifdef __RL78__
#else
	#define	TSR06	(tsr06.ALL)
#endif

/* TSR07L */
#ifdef __RL78__
#else
	#define	TSR07L	(tsr07.BYTE.tsr07l)
#endif

/* TSR07 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr07l;
	SFR_UNSIGNED_SHORT_INT	tsr07h;
}SFR_BYTE_TSR07;

typedef union{
	SFR_BYTE_TSR07	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR07;

SFR_GLOBAL	SFR_TSR07	tsr07;

#ifdef __RL78__
#else
	#define	TSR07	(tsr07.ALL)
#endif

/* TE0L */
#ifdef __RL78__
	#define	TE0L_0	(TE0L.0)
	#define	TE0L_1	(TE0L.1)
	#define	TE0L_2	(TE0L.2)
	#define	TE0L_3	(TE0L.3)
	#define	TE0L_4	(TE0L.4)
	#define	TE0L_5	(TE0L.5)
	#define	TE0L_6	(TE0L.6)
	#define	TE0L_7	(TE0L.7)
#else
	#define	TE0L_0	(te0.BIT_NUMBER.bit0)
	#define	TE0L_1	(te0.BIT_NUMBER.bit1)
	#define	TE0L_2	(te0.BIT_NUMBER.bit2)
	#define	TE0L_3	(te0.BIT_NUMBER.bit3)
	#define	TE0L_4	(te0.BIT_NUMBER.bit4)
	#define	TE0L_5	(te0.BIT_NUMBER.bit5)
	#define	TE0L_6	(te0.BIT_NUMBER.bit6)
	#define	TE0L_7	(te0.BIT_NUMBER.bit7)
	#define	TE0L	(te0.BYTE.te0l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	te0l;
	SFR_UNSIGNED_CHAR	te0h;
}SFR_BYTE_TE0;

typedef union{
	SFR_BYTE_TE0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TE0;

SFR_GLOBAL	SFR_TE0	te0;

#ifdef __RL78__
#else
	#define	TE0	(te0.ALL)
#endif

/* TS0L */
#ifdef __RL78__
	#define	TS0L_0	(TS0L.0)
	#define	TS0L_1	(TS0L.1)
	#define	TS0L_2	(TS0L.2)
	#define	TS0L_3	(TS0L.3)
	#define	TS0L_4	(TS0L.4)
	#define	TS0L_5	(TS0L.5)
	#define	TS0L_6	(TS0L.6)
	#define	TS0L_7	(TS0L.7)
#else
	#define	TS0L_0	(ts0.BIT_NUMBER.bit0)
	#define	TS0L_1	(ts0.BIT_NUMBER.bit1)
	#define	TS0L_2	(ts0.BIT_NUMBER.bit2)
	#define	TS0L_3	(ts0.BIT_NUMBER.bit3)
	#define	TS0L_4	(ts0.BIT_NUMBER.bit4)
	#define	TS0L_5	(ts0.BIT_NUMBER.bit5)
	#define	TS0L_6	(ts0.BIT_NUMBER.bit6)
	#define	TS0L_7	(ts0.BIT_NUMBER.bit7)
	#define	TS0L	(ts0.BYTE.ts0l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	ts0l;
	SFR_UNSIGNED_CHAR	ts0h;
}SFR_BYTE_TS0;

typedef union{
	SFR_BYTE_TS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TS0;

SFR_GLOBAL	SFR_TS0	ts0;

#ifdef __RL78__
#else
	#define	TS0	(ts0.ALL)
#endif

/* TT0L */
#ifdef __RL78__
	#define	TT0L_0	(TT0L.0)
	#define	TT0L_1	(TT0L.1)
	#define	TT0L_2	(TT0L.2)
	#define	TT0L_3	(TT0L.3)
	#define	TT0L_4	(TT0L.4)
	#define	TT0L_5	(TT0L.5)
	#define	TT0L_6	(TT0L.6)
	#define	TT0L_7	(TT0L.7)
#else
	#define	TT0L_0	(tt0.BIT_NUMBER.bit0)
	#define	TT0L_1	(tt0.BIT_NUMBER.bit1)
	#define	TT0L_2	(tt0.BIT_NUMBER.bit2)
	#define	TT0L_3	(tt0.BIT_NUMBER.bit3)
	#define	TT0L_4	(tt0.BIT_NUMBER.bit4)
	#define	TT0L_5	(tt0.BIT_NUMBER.bit5)
	#define	TT0L_6	(tt0.BIT_NUMBER.bit6)
	#define	TT0L_7	(tt0.BIT_NUMBER.bit7)
	#define	TT0L	(tt0.BYTE.tt0l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	tt0l;
	SFR_UNSIGNED_CHAR	tt0h;
}SFR_BYTE_TT0;

typedef union{
	SFR_BYTE_TT0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TT0;

SFR_GLOBAL	SFR_TT0	tt0;

#ifdef __RL78__
#else
	#define	TT0	(tt0.ALL)
#endif

/* TPS0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tps0;
#ifdef __RL78__
#else
	#define	TPS0	(tps0)
#endif

/* TO0L */
#ifdef __RL78__
#else
	#define	TO0L	(to0.BYTE.to0l)
#endif

/* TO0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	to0l;
	SFR_UNSIGNED_SHORT_INT	to0h;
}SFR_BYTE_TO0;

typedef union{
	SFR_BYTE_TO0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TO0;

SFR_GLOBAL	SFR_TO0	to0;

#ifdef __RL78__
#else
	#define	TO0	(to0.ALL)
#endif

/* TOE0L */
#ifdef __RL78__
	#define	TOE0L_0	(TOE0L.0)
	#define	TOE0L_1	(TOE0L.1)
	#define	TOE0L_2	(TOE0L.2)
	#define	TOE0L_3	(TOE0L.3)
	#define	TOE0L_4	(TOE0L.4)
	#define	TOE0L_5	(TOE0L.5)
	#define	TOE0L_6	(TOE0L.6)
	#define	TOE0L_7	(TOE0L.7)
#else
	#define	TOE0L_0	(toe0.BIT_NUMBER.bit0)
	#define	TOE0L_1	(toe0.BIT_NUMBER.bit1)
	#define	TOE0L_2	(toe0.BIT_NUMBER.bit2)
	#define	TOE0L_3	(toe0.BIT_NUMBER.bit3)
	#define	TOE0L_4	(toe0.BIT_NUMBER.bit4)
	#define	TOE0L_5	(toe0.BIT_NUMBER.bit5)
	#define	TOE0L_6	(toe0.BIT_NUMBER.bit6)
	#define	TOE0L_7	(toe0.BIT_NUMBER.bit7)
	#define	TOE0L	(toe0.BYTE.toe0l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	toe0l;
	SFR_UNSIGNED_CHAR	toe0h;
}SFR_BYTE_TOE0;

typedef union{
	SFR_BYTE_TOE0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOE0;

SFR_GLOBAL	SFR_TOE0	toe0;

#ifdef __RL78__
#else
	#define	TOE0	(toe0.ALL)
#endif

/* TOL0L */
#ifdef __RL78__
#else
	#define	TOL0L	(tol0.BYTE.tol0l)
#endif

typedef struct{
	SFR_UNSIGNED_SHORT_INT	tol0l;
	SFR_UNSIGNED_SHORT_INT	tol0h;
}SFR_BYTE_TOL0;

/* TOL0 */
typedef union{
	SFR_BYTE_TOL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOL0;

SFR_GLOBAL	SFR_TOL0	tol0;

#ifdef __RL78__
#else
	#define	TOL0	(tol0.ALL)
#endif

/* TOM0L */
#ifdef __RL78__
#else
	#define	TOM0L	(tom0.BYTE.tom0l)
#endif

/* TOM0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tom0l;
	SFR_UNSIGNED_SHORT_INT	tom0h;
}SFR_BYTE_TOM0;

typedef union{
	SFR_BYTE_TOM0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOM0;

SFR_GLOBAL	SFR_TOM0	tom0;

#ifdef __RL78__
#else
	#define	TOM0	(tom0.ALL)
#endif

/* TCR10 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr10;
#ifdef __RL78__
#else
	#define	TCR10	(tcr10)
#endif

/* TCR11 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr11;
#ifdef __RL78__
#else
	#define	TCR11	(tcr11)
#endif

/* TCR12 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr12;
#ifdef __RL78__
#else
	#define	TCR12	(tcr12)
#endif

/* TCR13 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr13;
#ifdef __RL78__
#else
	#define	TCR13	(tcr13)
#endif

/* TCR14 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr14;
#ifdef __RL78__
#else
	#define	TCR14	(tcr14)
#endif

/* TCR15 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr15;
#ifdef __RL78__
#else
	#define	TCR15	(tcr15)
#endif

/* TCR16 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr16;
#ifdef __RL78__
#else
	#define	TCR16	(tcr16)
#endif

/* TCR17 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tcr17;
#ifdef __RL78__
#else
	#define	TCR17	(tcr17)
#endif

/* TMR10 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr10;
#ifdef __RL78__
#else
	#define	TMR10	(tmr10)
#endif

/* TMR11 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr11;
#ifdef __RL78__
#else
	#define	TMR11	(tmr11)
#endif

/* TMR12 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr12;
#ifdef __RL78__
#else
	#define	TMR12	(tmr12)
#endif

/* TMR13 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr13;
#ifdef __RL78__
#else
	#define	TMR13	(tmr13)
#endif

/* TMR14 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr14;
#ifdef __RL78__
#else
	#define	TMR14	(tmr14)
#endif

/* TMR15 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr15;
#ifdef __RL78__
#else
	#define	TMR15	(tmr15)
#endif

/* TMR16 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr16;
#ifdef __RL78__
#else
	#define	TMR16	(tmr16)
#endif

/* TMR17 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tmr17;
#ifdef __RL78__
#else
	#define	TMR17	(tmr17)
#endif

/* TSR10L */
#ifdef __RL78__
#else
	#define	TSR10L	(tsr10.BYTE.tsr10l)
#endif

/* TSR10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr10l;
	SFR_UNSIGNED_SHORT_INT	tsr10h;
}SFR_BYTE_TSR10;

typedef union{
	SFR_BYTE_TSR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR10;

SFR_GLOBAL	SFR_TSR10	tsr10;

#ifdef __RL78__
#else
	#define	TSR10	(tsr10.ALL)
#endif

/* TSR11L */
#ifdef __RL78__
#else
	#define	TSR11L	(tsr11.BYTE.tsr11l)
#endif

/* TSR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr11l;
	SFR_UNSIGNED_SHORT_INT	tsr11h;
}SFR_BYTE_TSR11;

typedef union{
	SFR_BYTE_TSR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR11;

SFR_GLOBAL	SFR_TSR11	tsr11;

#ifdef __RL78__
#else
	#define	TSR11	(tsr11.ALL)
#endif

/* TSR12L */
#ifdef __RL78__
#else
	#define	TSR12L	(tsr12.BYTE.tsr12l)
#endif

/* TSR12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr12l;
	SFR_UNSIGNED_SHORT_INT	tsr12h;
}SFR_BYTE_TSR12;

typedef union{
	SFR_BYTE_TSR12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR12;

SFR_GLOBAL	SFR_TSR12	tsr12;

#ifdef __RL78__
#else
	#define	TSR12	(tsr12.ALL)
#endif

/* TSR13L */
#ifdef __RL78__
#else
	#define	TSR13L	(tsr13.BYTE.tsr13l)
#endif

/* TSR13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr13l;
	SFR_UNSIGNED_SHORT_INT	tsr13h;
}SFR_BYTE_TSR13;

typedef union{
	SFR_BYTE_TSR13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR13;

SFR_GLOBAL	SFR_TSR13	tsr13;

#ifdef __RL78__
#else
	#define	TSR13	(tsr13.ALL)
#endif

/* TSR14L */
#ifdef __RL78__
#else
	#define	TSR14L	(tsr14.BYTE.tsr14l)
#endif

/* TSR14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr14l;
	SFR_UNSIGNED_SHORT_INT	tsr14h;
}SFR_BYTE_TSR14;

typedef union{
	SFR_BYTE_TSR14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR14;

SFR_GLOBAL	SFR_TSR14	tsr14;

#ifdef __RL78__
#else
	#define	TSR14	(tsr14.ALL)
#endif

/* TSR15L */
#ifdef __RL78__
#else
	#define	TSR15L	(tsr15.BYTE.tsr15l)
#endif

/* TSR15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr15l;
	SFR_UNSIGNED_SHORT_INT	tsr15h;
}SFR_BYTE_TSR15;

typedef union{
	SFR_BYTE_TSR15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR15;

SFR_GLOBAL	SFR_TSR15	tsr15;

#ifdef __RL78__
#else
	#define	TSR15	(tsr15.ALL)
#endif

/* TSR16L */
#ifdef __RL78__
#else
	#define	TSR16L	(tsr16.BYTE.tsr16l)
#endif

/* TSR16 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr16l;
	SFR_UNSIGNED_SHORT_INT	tsr16h;
}SFR_BYTE_TSR16;

typedef union{
	SFR_BYTE_TSR16	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR16;

SFR_GLOBAL	SFR_TSR16	tsr16;

#ifdef __RL78__
#else
	#define	TSR16	(tsr16.ALL)
#endif

/* TSR17L */
#ifdef __RL78__
#else
	#define	TSR17L	(tsr17.BYTE.tsr17l)
#endif

/* TSR17 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tsr17l;
	SFR_UNSIGNED_SHORT_INT	tsr17h;
}SFR_BYTE_TSR17;

typedef union{
	SFR_BYTE_TSR17	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TSR17;

SFR_GLOBAL	SFR_TSR17	tsr17;

#ifdef __RL78__
#else
	#define	TSR17	(tsr17.ALL)
#endif

/* TE1L */
#ifdef __RL78__
	#define	TE1L_0	(TE1L.0)
	#define	TE1L_1	(TE1L.1)
	#define	TE1L_2	(TE1L.2)
	#define	TE1L_3	(TE1L.3)
	#define	TE1L_4	(TE1L.4)
	#define	TE1L_5	(TE1L.5)
	#define	TE1L_6	(TE1L.6)
	#define	TE1L_7	(TE1L.7)
#else
	#define	TE1L_0	(te1.BIT_NUMBER.bit0)
	#define	TE1L_1	(te1.BIT_NUMBER.bit1)
	#define	TE1L_2	(te1.BIT_NUMBER.bit2)
	#define	TE1L_3	(te1.BIT_NUMBER.bit3)
	#define	TE1L_4	(te1.BIT_NUMBER.bit4)
	#define	TE1L_5	(te1.BIT_NUMBER.bit5)
	#define	TE1L_6	(te1.BIT_NUMBER.bit6)
	#define	TE1L_7	(te1.BIT_NUMBER.bit7)
	#define	TE1L	(te1.BYTE.te1l)
#endif

/* TE1 */
typedef struct{
	SFR_UNSIGNED_CHAR	te1l;
	SFR_UNSIGNED_CHAR	te1h;
}SFR_BYTE_TE1;

typedef union{
	SFR_BYTE_TE1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TE1;

SFR_GLOBAL	SFR_TE1	te1;

#ifdef __RL78__
#else
	#define	TE1	(te1.ALL)
#endif

/* TS1L */
#ifdef __RL78__
	#define	TS1L_0	(TS1L.0)
	#define	TS1L_1	(TS1L.1)
	#define	TS1L_2	(TS1L.2)
	#define	TS1L_3	(TS1L.3)
	#define	TS1L_4	(TS1L.4)
	#define	TS1L_5	(TS1L.5)
	#define	TS1L_6	(TS1L.6)
	#define	TS1L_7	(TS1L.7)
#else
	#define	TS1L_0	(ts1.BIT_NUMBER.bit0)
	#define	TS1L_1	(ts1.BIT_NUMBER.bit1)
	#define	TS1L_2	(ts1.BIT_NUMBER.bit2)
	#define	TS1L_3	(ts1.BIT_NUMBER.bit3)
	#define	TS1L_4	(ts1.BIT_NUMBER.bit4)
	#define	TS1L_5	(ts1.BIT_NUMBER.bit5)
	#define	TS1L_6	(ts1.BIT_NUMBER.bit6)
	#define	TS1L_7	(ts1.BIT_NUMBER.bit7)
	#define	TS1L	(ts1.BYTE.ts1l)
#endif

/* TS1 */
typedef struct{
	SFR_UNSIGNED_CHAR	ts1l;
	SFR_UNSIGNED_CHAR	ts1h;
}SFR_BYTE_TS1;

typedef union{
	SFR_BYTE_TS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TS1;

SFR_GLOBAL	SFR_TS1	ts1;

#ifdef __RL78__
#else
	#define	TS1	(ts1.ALL)
#endif

/* TT1L */
#ifdef __RL78__
	#define	TT1L_0	(TT1L.0)
	#define	TT1L_1	(TT1L.1)
	#define	TT1L_2	(TT1L.2)
	#define	TT1L_3	(TT1L.3)
	#define	TT1L_4	(TT1L.4)
	#define	TT1L_5	(TT1L.5)
	#define	TT1L_6	(TT1L.6)
	#define	TT1L_7	(TT1L.7)
#else
	#define	TT1L_0			(tt1.BIT_NUMBER.bit0)
	#define	TT1L_1			(tt1.BIT_NUMBER.bit1)
	#define	TT1L_2			(tt1.BIT_NUMBER.bit2)
	#define	TT1L_3			(tt1.BIT_NUMBER.bit3)
	#define	TT1L_4			(tt1.BIT_NUMBER.bit4)
	#define	TT1L_5			(tt1.BIT_NUMBER.bit5)
	#define	TT1L_6			(tt1.BIT_NUMBER.bit6)
	#define	TT1L_7			(tt1.BIT_NUMBER.bit7)
	#define	TT1L			(tt1.BYTE.tt1l)
#endif

/* TT1 */
typedef struct{
	SFR_UNSIGNED_CHAR	tt1l;
	SFR_UNSIGNED_CHAR	tt1h;
}SFR_BYTE_TT1;

typedef union{
	SFR_BYTE_TT1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TT1;

SFR_GLOBAL	SFR_TT1	tt1;

#ifdef __RL78__
#else
	#define	TT1	(tt1.ALL)
#endif

/* TPS1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT tps1;
#ifdef __RL78__
#else
	#define	TPS1	(tps1)
#endif

/* TO1L */
#ifdef __RL78__
#else
	#define	TO1L	(to1.BYTE.to1l)
#endif

/* TO1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	to1l;
	SFR_UNSIGNED_SHORT_INT	to1h;
}SFR_BYTE_TO1;

typedef union{
	SFR_BYTE_TO1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TO1;

SFR_GLOBAL	SFR_TO1	to1;

#ifdef __RL78__
#else
	#define	TO1	(to1.ALL)
#endif

/* TOE1L */
#ifdef __RL78__
	#define	TOE1L_0	(TOE1L.0)
	#define	TOE1L_1	(TOE1L.1)
	#define	TOE1L_2	(TOE1L.2)
	#define	TOE1L_3	(TOE1L.3)
	#define	TOE1L_4	(TOE1L.4)
	#define	TOE1L_5	(TOE1L.5)
	#define	TOE1L_6	(TOE1L.6)
	#define	TOE1L_7	(TOE1L.7)
#else
	#define	TOE1L_0	(toe1.BIT_NUMBER.bit0)
	#define	TOE1L_1	(toe1.BIT_NUMBER.bit1)
	#define	TOE1L_2	(toe1.BIT_NUMBER.bit2)
	#define	TOE1L_3	(toe1.BIT_NUMBER.bit3)
	#define	TOE1L_4	(toe1.BIT_NUMBER.bit4)
	#define	TOE1L_5	(toe1.BIT_NUMBER.bit5)
	#define	TOE1L_6	(toe1.BIT_NUMBER.bit6)
	#define	TOE1L_7	(toe1.BIT_NUMBER.bit7)
	#define	TOE1L	(toe1.BYTE.toe1l)
#endif

typedef struct{
	SFR_UNSIGNED_CHAR	toe1l;
	SFR_UNSIGNED_CHAR	toe1h;
}SFR_BYTE_TOE1;

typedef union{
	SFR_BYTE_TOE1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOE1;

SFR_GLOBAL	SFR_TOE1	toe1;

#ifdef __RL78__
#else
	#define	TOE1	(toe1.ALL)
#endif

/* TOL1L */
#ifdef __RL78__
#else
	#define	TOL1L	(tol1.BYTE.tol1l)
#endif

/* TOL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tol1l;
	SFR_UNSIGNED_SHORT_INT	tol1h;
}SFR_BYTE_TOL1;

typedef union{
	SFR_BYTE_TOL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOL1;

SFR_GLOBAL	SFR_TOL1	tol1;

#ifdef __RL78__
#else
	#define	TOL1	(tol1.ALL)
#endif

/* TOM1L */
#ifdef __RL78__
#else
	#define	TOM1L	(tom1.BYTE.tom1l)
#endif

/* TOM1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tom1l;
	SFR_UNSIGNED_SHORT_INT	tom1h;
}SFR_BYTE_TOM1;

typedef union{
	SFR_BYTE_TOM1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TOM1;

SFR_GLOBAL	SFR_TOM1	tom1;

#ifdef __RL78__
#else
	#define	TOM1	(tom1.ALL)
#endif

/* ERADR */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT eradr;
#ifdef __RL78__
#else
	#define	ERADR	(eradr)
#endif

/* ECCIER */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	eccier;

#ifdef __RL78__
#else
	#define	ECCIER	(eccier)
#endif

/* ECCER */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	eccer;

#ifdef __RL78__
#else
	#define	ECCER	(eccer)
#endif

/* ECCTPR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ecctpr;

#ifdef __RL78__
#else
	#define	ECCTPR	(ecctpr)
#endif

/* ECCTMDR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ecctmdr;

#ifdef __RL78__
#else
	#define	ECCTMDR	(ecctmdr)
#endif

/* ECCDWRVR */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT eccdwrvr;
#ifdef __RL78__
#else
	#define	ECCDWRVR	(eccdwrvr)
#endif

/* PSRSEL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PSRSEL;

SFR_GLOBAL	SFR_PSRSEL	psrsel;

#ifdef __RL78__
	#define	PSRSEL_0	(PSRSEL.0)
	#define	PSRSEL_1	(PSRSEL.1)
	#define	PSRSEL_2	(PSRSEL.2)
	#define	PSRSEL_3	(PSRSEL.3)
	#define	PSRSEL_4	(PSRSEL.4)
	#define	PSRSEL_5	(PSRSEL.5)
	#define	PSRSEL_6	(PSRSEL.6)
	#define	PSRSEL_7	(PSRSEL.7)
#else
	#define	PSRSEL_0	(psrsel.BIT_NUMBER.bit0)
	#define	PSRSEL_1	(psrsel.BIT_NUMBER.bit1)
	#define	PSRSEL_2	(psrsel.BIT_NUMBER.bit2)
	#define	PSRSEL_3	(psrsel.BIT_NUMBER.bit3)
	#define	PSRSEL_4	(psrsel.BIT_NUMBER.bit4)
	#define	PSRSEL_5	(psrsel.BIT_NUMBER.bit5)
	#define	PSRSEL_6	(psrsel.BIT_NUMBER.bit6)
	#define	PSRSEL_7	(psrsel.BIT_NUMBER.bit7)
	#define	PSRSEL		(psrsel.ALL)
#endif

/* PSNZCNT0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PSNZCNT0;

SFR_GLOBAL	SFR_PSNZCNT0	psnzcnt0;

#ifdef __RL78__
	#define	PSNZCNT0_0	(PSNZCNT0.0)
	#define	PSNZCNT0_1	(PSNZCNT0.1)
	#define	PSNZCNT0_2	(PSNZCNT0.2)
	#define	PSNZCNT0_3	(PSNZCNT0.3)
	#define	PSNZCNT0_4	(PSNZCNT0.4)
	#define	PSNZCNT0_5	(PSNZCNT0.5)
	#define	PSNZCNT0_6	(PSNZCNT0.6)
	#define	PSNZCNT0_7	(PSNZCNT0.7)
#else
	#define	PSNZCNT0_0	(psnzcnt0.BIT_NUMBER.bit0)
	#define	PSNZCNT0_1	(psnzcnt0.BIT_NUMBER.bit1)
	#define	PSNZCNT0_2	(psnzcnt0.BIT_NUMBER.bit2)
	#define	PSNZCNT0_3	(psnzcnt0.BIT_NUMBER.bit3)
	#define	PSNZCNT0_4	(psnzcnt0.BIT_NUMBER.bit4)
	#define	PSNZCNT0_5	(psnzcnt0.BIT_NUMBER.bit5)
	#define	PSNZCNT0_6	(psnzcnt0.BIT_NUMBER.bit6)
	#define	PSNZCNT0_7	(psnzcnt0.BIT_NUMBER.bit7)
	#define	PSNZCNT0	(psnzcnt0.ALL)
#endif

/* PSNZCNT1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PSNZCNT1;

SFR_GLOBAL	SFR_PSNZCNT1	psnzcnt1;

#ifdef __RL78__
	#define	PSNZCNT1_0	(PSNZCNT1.0)
	#define	PSNZCNT1_1	(PSNZCNT1.1)
	#define	PSNZCNT1_2	(PSNZCNT1.2)
	#define	PSNZCNT1_3	(PSNZCNT1.3)
	#define	PSNZCNT1_4	(PSNZCNT1.4)
	#define	PSNZCNT1_5	(PSNZCNT1.5)
	#define	PSNZCNT1_6	(PSNZCNT1.6)
	#define	PSNZCNT1_7	(PSNZCNT1.7)
#else
	#define	PSNZCNT1_0	(psnzcnt1.BIT_NUMBER.bit0)
	#define	PSNZCNT1_1	(psnzcnt1.BIT_NUMBER.bit1)
	#define	PSNZCNT1_2	(psnzcnt1.BIT_NUMBER.bit2)
	#define	PSNZCNT1_3	(psnzcnt1.BIT_NUMBER.bit3)
	#define	PSNZCNT1_4	(psnzcnt1.BIT_NUMBER.bit4)
	#define	PSNZCNT1_5	(psnzcnt1.BIT_NUMBER.bit5)
	#define	PSNZCNT1_6	(psnzcnt1.BIT_NUMBER.bit6)
	#define	PSNZCNT1_7	(psnzcnt1.BIT_NUMBER.bit7)
	#define	PSNZCNT1	(psnzcnt1.ALL)
#endif

/* PSNZCNT2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PSNZCNT2;

SFR_GLOBAL	SFR_PSNZCNT2	psnzcnt2;

#ifdef __RL78__
	#define	PSNZCNT2_0	(PSNZCNT2.0)
	#define	PSNZCNT2_1	(PSNZCNT2.1)
	#define	PSNZCNT2_2	(PSNZCNT2.2)
	#define	PSNZCNT2_3	(PSNZCNT2.3)
	#define	PSNZCNT2_4	(PSNZCNT2.4)
	#define	PSNZCNT2_5	(PSNZCNT2.5)
	#define	PSNZCNT2_6	(PSNZCNT2.6)
	#define	PSNZCNT2_7	(PSNZCNT2.7)
#else
	#define	PSNZCNT2_0	(psnzcnt2.BIT_NUMBER.bit0)
	#define	PSNZCNT2_1	(psnzcnt2.BIT_NUMBER.bit1)
	#define	PSNZCNT2_2	(psnzcnt2.BIT_NUMBER.bit2)
	#define	PSNZCNT2_3	(psnzcnt2.BIT_NUMBER.bit3)
	#define	PSNZCNT2_4	(psnzcnt2.BIT_NUMBER.bit4)
	#define	PSNZCNT2_5	(psnzcnt2.BIT_NUMBER.bit5)
	#define	PSNZCNT2_6	(psnzcnt2.BIT_NUMBER.bit6)
	#define	PSNZCNT2_7	(psnzcnt2.BIT_NUMBER.bit7)
	#define	PSNZCNT2	(psnzcnt2.ALL)
#endif

/* PSNZCNT3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PSNZCNT3;

SFR_GLOBAL	SFR_PSNZCNT3	psnzcnt3;

#ifdef __RL78__
	#define	PSNZCNT3_0	(PSNZCNT3.0)
	#define	PSNZCNT3_1	(PSNZCNT3.1)
	#define	PSNZCNT3_2	(PSNZCNT3.2)
	#define	PSNZCNT3_3	(PSNZCNT3.3)
	#define	PSNZCNT3_4	(PSNZCNT3.4)
	#define	PSNZCNT3_5	(PSNZCNT3.5)
	#define	PSNZCNT3_6	(PSNZCNT3.6)
	#define	PSNZCNT3_7	(PSNZCNT3.7)
#else
	#define	PSNZCNT3_0	(psnzcnt3.BIT_NUMBER.bit0)
	#define	PSNZCNT3_1	(psnzcnt3.BIT_NUMBER.bit1)
	#define	PSNZCNT3_2	(psnzcnt3.BIT_NUMBER.bit2)
	#define	PSNZCNT3_3	(psnzcnt3.BIT_NUMBER.bit3)
	#define	PSNZCNT3_4	(psnzcnt3.BIT_NUMBER.bit4)
	#define	PSNZCNT3_5	(psnzcnt3.BIT_NUMBER.bit5)
	#define	PSNZCNT3_6	(psnzcnt3.BIT_NUMBER.bit6)
	#define	PSNZCNT3_7	(psnzcnt3.BIT_NUMBER.bit7)
	#define	PSNZCNT3	(psnzcnt3.ALL)
#endif

/* DAM2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DAM2;

SFR_GLOBAL	SFR_DAM2	dam2;

#ifdef __RL78__
	#define	DAM2_0	(DAM2.0)
	#define	DAM2_1	(DAM2.1)
	#define	DAM2_2	(DAM2.2)
	#define	DAM2_3	(DAM2.3)
	#define	DAM2_4	(DAM2.4)
	#define	DAM2_5	(DAM2.5)
	#define	DAM2_6	(DAM2.6)
	#define	DAM2_7	(DAM2.7)
#else
	#define	ANO0EN	(dam2.BIT_NUMBER.bit0)
	#define	DAM2_0	(dam2.BIT_NUMBER.bit0)
	#define	DAM2_1	(dam2.BIT_NUMBER.bit1)
	#define	DAM2_2	(dam2.BIT_NUMBER.bit2)
	#define	DAM2_3	(dam2.BIT_NUMBER.bit3)
	#define	DAM2_4	(dam2.BIT_NUMBER.bit4)
	#define	DAM2_5	(dam2.BIT_NUMBER.bit5)
	#define	DAM2_6	(dam2.BIT_NUMBER.bit6)
	#define	DAM2_7	(dam2.BIT_NUMBER.bit7)
	#define	DAM2	(dam2.ALL)
#endif

/* PWMDLY0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT pwmdly0;
#ifdef __RL78__
#else
	#define	PWMDLY0	(pwmdly0)
#endif

/* PWMDLY1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT pwmdly1;
#ifdef __RL78__
#else
	#define	PWMDLY1	(pwmdly1)
#endif

/* PWMDLY2 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT pwmdly2;
#ifdef __RL78__
#else
	#define	PWMDLY2	(pwmdly2)
#endif

/* IICCTL00 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_IICCTL00;

SFR_GLOBAL	SFR_IICCTL00	iicctl00;

#ifdef __RL78__
	#define	IICCTL00_0	(IICCTL00.0)
	#define	IICCTL00_1	(IICCTL00.1)
	#define	IICCTL00_2	(IICCTL00.2)
	#define	IICCTL00_3	(IICCTL00.3)
	#define	IICCTL00_4	(IICCTL00.4)
	#define	IICCTL00_5	(IICCTL00.5)
	#define	IICCTL00_6	(IICCTL00.6)
	#define	IICCTL00_7	(IICCTL00.7)
#else
	#define	SPT0		(iicctl00.BIT_NUMBER.bit0)
	#define	STT0		(iicctl00.BIT_NUMBER.bit1)
	#define	ACKE0		(iicctl00.BIT_NUMBER.bit2)
	#define	WTIM0		(iicctl00.BIT_NUMBER.bit3)
	#define	SPIE0		(iicctl00.BIT_NUMBER.bit4)
	#define	WREL0		(iicctl00.BIT_NUMBER.bit5)
	#define	LREL0		(iicctl00.BIT_NUMBER.bit6)
	#define	IICE0		(iicctl00.BIT_NUMBER.bit7)
	#define	IICCTL00_0	(iicctl00.BIT_NUMBER.bit0)
	#define	IICCTL00_1	(iicctl00.BIT_NUMBER.bit1)
	#define	IICCTL00_2	(iicctl00.BIT_NUMBER.bit2)
	#define	IICCTL00_3	(iicctl00.BIT_NUMBER.bit3)
	#define	IICCTL00_4	(iicctl00.BIT_NUMBER.bit4)
	#define	IICCTL00_5	(iicctl00.BIT_NUMBER.bit5)
	#define	IICCTL00_6	(iicctl00.BIT_NUMBER.bit6)
	#define	IICCTL00_7	(iicctl00.BIT_NUMBER.bit7)
	#define	IICCTL00	(iicctl00.ALL)
#endif

/* IICCTL01 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_IICCTL01;

SFR_GLOBAL	SFR_IICCTL01	iicctl01;

#ifdef __RL78__
	#define	IICCTL01_0	(IICCTL01.0)
	#define	IICCTL01_1	(IICCTL01.1)
	#define	IICCTL01_2	(IICCTL01.2)
	#define	IICCTL01_3	(IICCTL01.3)
	#define	IICCTL01_4	(IICCTL01.4)
	#define	IICCTL01_5	(IICCTL01.5)
	#define	IICCTL01_6	(IICCTL01.6)
	#define	IICCTL01_7	(IICCTL01.7)
#else
	#define	PRS0	(iicctl01.BIT_NUMBER.bit0)
	#define	DFC0	(iicctl01.BIT_NUMBER.bit2)
	#define	SMC0	(iicctl01.BIT_NUMBER.bit3)
	#define	DAD0	(iicctl01.BIT_NUMBER.bit4)
	#define	CLD0	(iicctl01.BIT_NUMBER.bit5)
	#define	WUP0	(iicctl01.BIT_NUMBER.bit7)
	#define	IICCTL01_0	(iicctl01.BIT_NUMBER.bit0)
	#define	IICCTL01_1	(iicctl01.BIT_NUMBER.bit1)
	#define	IICCTL01_2	(iicctl01.BIT_NUMBER.bit2)
	#define	IICCTL01_3	(iicctl01.BIT_NUMBER.bit3)
	#define	IICCTL01_4	(iicctl01.BIT_NUMBER.bit4)
	#define	IICCTL01_5	(iicctl01.BIT_NUMBER.bit5)
	#define	IICCTL01_6	(iicctl01.BIT_NUMBER.bit6)
	#define	IICCTL01_7	(iicctl01.BIT_NUMBER.bit7)
	#define	IICCTL01	(iicctl01.ALL)
#endif

/* IICWL0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	iicwl0;

#ifdef __RL78__
#else
	#define	IICWL0	(iicwl0)
#endif

/* IICWH0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	iicwh0;

#ifdef __RL78__
#else
	#define	IICWH0	(iicwh0)
#endif

/* SVA0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	sva0;

#ifdef __RL78__
#else
	#define	SVA0	(sva0)
#endif

/* TRJCR0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	trjcr0;

#ifdef __RL78__
#else
	#define	TRJCR0	(trjcr0)
#endif

/* TRJIOC0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRJIOC0;

SFR_GLOBAL	SFR_TRJIOC0	trjioc0;

#ifdef __RL78__
	#define	TRJIOC0_0	(TRJIOC0.0)
	#define	TRJIOC0_1	(TRJIOC0.1)
	#define	TRJIOC0_2	(TRJIOC0.2)
	#define	TRJIOC0_3	(TRJIOC0.3)
	#define	TRJIOC0_4	(TRJIOC0.4)
	#define	TRJIOC0_5	(TRJIOC0.5)
	#define	TRJIOC0_6	(TRJIOC0.6)
	#define	TRJIOC0_7	(TRJIOC0.7)
#else
	#define	TRJIOC0_0	(trjioc0.BIT_NUMBER.bit0)
	#define	TRJIOC0_1	(trjioc0.BIT_NUMBER.bit1)
	#define	TRJIOC0_2	(trjioc0.BIT_NUMBER.bit2)
	#define	TRJIOC0_3	(trjioc0.BIT_NUMBER.bit3)
	#define	TRJIOC0_4	(trjioc0.BIT_NUMBER.bit4)
	#define	TRJIOC0_5	(trjioc0.BIT_NUMBER.bit5)
	#define	TRJIOC0_6	(trjioc0.BIT_NUMBER.bit6)
	#define	TRJIOC0_7	(trjioc0.BIT_NUMBER.bit7)
	#define	TRJIOC0		(trjioc0.ALL)
#endif

/* TRJMR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRJMR0;

SFR_GLOBAL	SFR_TRJMR0	trjmr0;

#ifdef __RL78__
	#define	TRJMR0_0	(TRJMR0.0)
	#define	TRJMR0_1	(TRJMR0.1)
	#define	TRJMR0_2	(TRJMR0.2)
	#define	TRJMR0_3	(TRJMR0.3)
	#define	TRJMR0_4	(TRJMR0.4)
	#define	TRJMR0_5	(TRJMR0.5)
	#define	TRJMR0_6	(TRJMR0.6)
	#define	TRJMR0_7	(TRJMR0.7)
#else
	#define	TRJMR0_0	(trjmr0.BIT_NUMBER.bit0)
	#define	TRJMR0_1	(trjmr0.BIT_NUMBER.bit1)
	#define	TRJMR0_2	(trjmr0.BIT_NUMBER.bit2)
	#define	TRJMR0_3	(trjmr0.BIT_NUMBER.bit3)
	#define	TRJMR0_4	(trjmr0.BIT_NUMBER.bit4)
	#define	TRJMR0_5	(trjmr0.BIT_NUMBER.bit5)
	#define	TRJMR0_6	(trjmr0.BIT_NUMBER.bit6)
	#define	TRJMR0_7	(trjmr0.BIT_NUMBER.bit7)
	#define	TRJMR0		(trjmr0.ALL)
#endif

/* TRJSR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRJSR0;

SFR_GLOBAL	SFR_TRJSR0	trjsr0;

#ifdef __RL78__
	#define	TRJSR0_0	(TRJSR0.0)
	#define	TRJSR0_1	(TRJSR0.1)
	#define	TRJSR0_2	(TRJSR0.2)
	#define	TRJSR0_3	(TRJSR0.3)
	#define	TRJSR0_4	(TRJSR0.4)
	#define	TRJSR0_5	(TRJSR0.5)
	#define	TRJSR0_6	(TRJSR0.6)
	#define	TRJSR0_7	(TRJSR0.7)
#else
	#define	TRJSR0_0	(trjsr0.BIT_NUMBER.bit0)
	#define	TRJSR0_1	(trjsr0.BIT_NUMBER.bit1)
	#define	TRJSR0_2	(trjsr0.BIT_NUMBER.bit2)
	#define	TRJSR0_3	(trjsr0.BIT_NUMBER.bit3)
	#define	TRJSR0_4	(trjsr0.BIT_NUMBER.bit4)
	#define	TRJSR0_5	(trjsr0.BIT_NUMBER.bit5)
	#define	TRJSR0_6	(trjsr0.BIT_NUMBER.bit6)
	#define	TRJSR0_7	(trjsr0.BIT_NUMBER.bit7)
	#define	TRJSR0		(trjsr0.ALL)
#endif

/* TRDELC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDELC;

SFR_GLOBAL	SFR_TRDELC	trdelc;

#ifdef __RL78__
	#define	TRDELC_0	(TRDELC.0)
	#define	TRDELC_1	(TRDELC.1)
	#define	TRDELC_2	(TRDELC.2)
	#define	TRDELC_3	(TRDELC.3)
	#define	TRDELC_4	(TRDELC.4)
	#define	TRDELC_5	(TRDELC.5)
	#define	TRDELC_6	(TRDELC.6)
	#define	TRDELC_7	(TRDELC.7)
#else
	#define	TRDELC_0	(trdelc.BIT_NUMBER.bit0)
	#define	TRDELC_1	(trdelc.BIT_NUMBER.bit1)
	#define	TRDELC_2	(trdelc.BIT_NUMBER.bit2)
	#define	TRDELC_3	(trdelc.BIT_NUMBER.bit3)
	#define	TRDELC_4	(trdelc.BIT_NUMBER.bit4)
	#define	TRDELC_5	(trdelc.BIT_NUMBER.bit5)
	#define	TRDELC_6	(trdelc.BIT_NUMBER.bit6)
	#define	TRDELC_7	(trdelc.BIT_NUMBER.bit7)
	#define	TRDELC		(trdelc.ALL)
#endif

/* TRDSTR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	trdstr;

#ifdef __RL78__
#else
	#define	TRDSTR	(trdstr)
#endif

/* TRDMR */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDMR;

SFR_GLOBAL	SFR_TRDMR	trdmr;

#ifdef __RL78__
	#define	TRDMR_0	(TRDMR.0)
	#define	TRDMR_1	(TRDMR.1)
	#define	TRDMR_2	(TRDMR.2)
	#define	TRDMR_3	(TRDMR.3)
	#define	TRDMR_4	(TRDMR.4)
	#define	TRDMR_5	(TRDMR.5)
	#define	TRDMR_6	(TRDMR.6)
	#define	TRDMR_7	(TRDMR.7)
#else
	#define	TRDSYNC	(trdmr.BIT_NUMBER.bit0)
	#define	TRDBFC0	(trdmr.BIT_NUMBER.bit4)
	#define	TRDBFD0	(trdmr.BIT_NUMBER.bit5)
	#define	TRDBFC1	(trdmr.BIT_NUMBER.bit6)
	#define	TRDBFD1	(trdmr.BIT_NUMBER.bit7)
	#define	TRDMR_0	(trdmr.BIT_NUMBER.bit0)
	#define	TRDMR_1	(trdmr.BIT_NUMBER.bit1)
	#define	TRDMR_2	(trdmr.BIT_NUMBER.bit2)
	#define	TRDMR_3	(trdmr.BIT_NUMBER.bit3)
	#define	TRDMR_4	(trdmr.BIT_NUMBER.bit4)
	#define	TRDMR_5	(trdmr.BIT_NUMBER.bit5)
	#define	TRDMR_6	(trdmr.BIT_NUMBER.bit6)
	#define	TRDMR_7	(trdmr.BIT_NUMBER.bit7)
	#define	TRDMR	(trdmr.ALL)
#endif

/* TRDPMR */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDPMR;

SFR_GLOBAL	SFR_TRDPMR	trdpmr;

#ifdef __RL78__
	#define	TRDPMR_0	(TRDPMR.0)
	#define	TRDPMR_1	(TRDPMR.1)
	#define	TRDPMR_2	(TRDPMR.2)
	#define	TRDPMR_3	(TRDPMR.3)
	#define	TRDPMR_4	(TRDPMR.4)
	#define	TRDPMR_5	(TRDPMR.5)
	#define	TRDPMR_6	(TRDPMR.6)
	#define	TRDPMR_7	(TRDPMR.7)
#else
	#define	TRDPWMB0	(trdpmr.BIT_NUMBER.bit0)
	#define	TRDPWMC0	(trdpmr.BIT_NUMBER.bit1)
	#define	TRDPWMD0	(trdpmr.BIT_NUMBER.bit2)
	#define	TRDPWMB1	(trdpmr.BIT_NUMBER.bit4)
	#define	TRDPWMC1	(trdpmr.BIT_NUMBER.bit5)
	#define	TRDPWMD1	(trdpmr.BIT_NUMBER.bit6)
	#define	TRDPMR_0	(trdpmr.BIT_NUMBER.bit0)
	#define	TRDPMR_1	(trdpmr.BIT_NUMBER.bit1)
	#define	TRDPMR_2	(trdpmr.BIT_NUMBER.bit2)
	#define	TRDPMR_3	(trdpmr.BIT_NUMBER.bit3)
	#define	TRDPMR_4	(trdpmr.BIT_NUMBER.bit4)
	#define	TRDPMR_5	(trdpmr.BIT_NUMBER.bit5)
	#define	TRDPMR_6	(trdpmr.BIT_NUMBER.bit6)
	#define	TRDPMR_7	(trdpmr.BIT_NUMBER.bit7)
	#define	TRDPMR		(trdpmr.ALL)
#endif

/* TRDFCR */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDFCR;

SFR_GLOBAL	SFR_TRDFCR	trdfcr;

#ifdef __RL78__
	#define	TRDFCR_0	(TRDFCR.0)
	#define	TRDFCR_1	(TRDFCR.1)
	#define	TRDFCR_2	(TRDFCR.2)
	#define	TRDFCR_3	(TRDFCR.3)
	#define	TRDFCR_4	(TRDFCR.4)
	#define	TRDFCR_5	(TRDFCR.5)
	#define	TRDFCR_6	(TRDFCR.6)
	#define	TRDFCR_7	(TRDFCR.7)
#else
	#define	TRDFCR_0	(trdfcr.BIT_NUMBER.bit0)
	#define	TRDFCR_1	(trdfcr.BIT_NUMBER.bit1)
	#define	TRDFCR_2	(trdfcr.BIT_NUMBER.bit2)
	#define	TRDFCR_3	(trdfcr.BIT_NUMBER.bit3)
	#define	TRDFCR_4	(trdfcr.BIT_NUMBER.bit4)
	#define	TRDFCR_5	(trdfcr.BIT_NUMBER.bit5)
	#define	TRDFCR_6	(trdfcr.BIT_NUMBER.bit6)
	#define	TRDFCR_7	(trdfcr.BIT_NUMBER.bit7)
	#define	TRDFCR		(trdfcr.ALL)
#endif

/* TRDOER1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDOER1;

SFR_GLOBAL	SFR_TRDOER1	trdoer1;

#ifdef __RL78__
	#define	TRDOER1_0	(TRDOER1.0)
	#define	TRDOER1_1	(TRDOER1.1)
	#define	TRDOER1_2	(TRDOER1.2)
	#define	TRDOER1_3	(TRDOER1.3)
	#define	TRDOER1_4	(TRDOER1.4)
	#define	TRDOER1_5	(TRDOER1.5)
	#define	TRDOER1_6	(TRDOER1.6)
	#define	TRDOER1_7	(TRDOER1.7)
#else
	#define	TRDOER1_0	(trdoer1.BIT_NUMBER.bit0)
	#define	TRDOER1_1	(trdoer1.BIT_NUMBER.bit1)
	#define	TRDOER1_2	(trdoer1.BIT_NUMBER.bit2)
	#define	TRDOER1_3	(trdoer1.BIT_NUMBER.bit3)
	#define	TRDOER1_4	(trdoer1.BIT_NUMBER.bit4)
	#define	TRDOER1_5	(trdoer1.BIT_NUMBER.bit5)
	#define	TRDOER1_6	(trdoer1.BIT_NUMBER.bit6)
	#define	TRDOER1_7	(trdoer1.BIT_NUMBER.bit7)
	#define	TRDOER1		(trdoer1.ALL)
#endif

/* TRDOER2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDOER2;

SFR_GLOBAL	SFR_TRDOER2	trdoer2;

#ifdef __RL78__
	#define	TRDOER2_0	(TRDOER2.0)
	#define	TRDOER2_1	(TRDOER2.1)
	#define	TRDOER2_2	(TRDOER2.2)
	#define	TRDOER2_3	(TRDOER2.3)
	#define	TRDOER2_4	(TRDOER2.4)
	#define	TRDOER2_5	(TRDOER2.5)
	#define	TRDOER2_6	(TRDOER2.6)
	#define	TRDOER2_7	(TRDOER2.7)
#else
	#define	TRDSHUTS	(trdoer2.BIT_NUMBER.bit0)
	#define	TRDPTO		(trdoer2.BIT_NUMBER.bit7)
	#define	TRDOER2_0	(trdoer2.BIT_NUMBER.bit0)
	#define	TRDOER2_1	(trdoer2.BIT_NUMBER.bit1)
	#define	TRDOER2_2	(trdoer2.BIT_NUMBER.bit2)
	#define	TRDOER2_3	(trdoer2.BIT_NUMBER.bit3)
	#define	TRDOER2_4	(trdoer2.BIT_NUMBER.bit4)
	#define	TRDOER2_5	(trdoer2.BIT_NUMBER.bit5)
	#define	TRDOER2_6	(trdoer2.BIT_NUMBER.bit6)
	#define	TRDOER2_7	(trdoer2.BIT_NUMBER.bit7)
	#define	TRDOER2		(trdoer2.ALL)
#endif

/* TRDOCR */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDOCR;

SFR_GLOBAL	SFR_TRDOCR	trdocr;

#ifdef __RL78__
	#define	TRDOCR_0	(TRDOCR.0)
	#define	TRDOCR_1	(TRDOCR.1)
	#define	TRDOCR_2	(TRDOCR.2)
	#define	TRDOCR_3	(TRDOCR.3)
	#define	TRDOCR_4	(TRDOCR.4)
	#define	TRDOCR_5	(TRDOCR.5)
	#define	TRDOCR_6	(TRDOCR.6)
	#define	TRDOCR_7	(TRDOCR.7)
#else
	#define	TRDOCR_0	(trdocr.BIT_NUMBER.bit0)
	#define	TRDOCR_1	(trdocr.BIT_NUMBER.bit1)
	#define	TRDOCR_2	(trdocr.BIT_NUMBER.bit2)
	#define	TRDOCR_3	(trdocr.BIT_NUMBER.bit3)
	#define	TRDOCR_4	(trdocr.BIT_NUMBER.bit4)
	#define	TRDOCR_5	(trdocr.BIT_NUMBER.bit5)
	#define	TRDOCR_6	(trdocr.BIT_NUMBER.bit6)
	#define	TRDOCR_7	(trdocr.BIT_NUMBER.bit7)
	#define	TRDOCR		(trdocr.ALL)
#endif

/* TRDDF0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDDF0;

SFR_GLOBAL	SFR_TRDDF0	trddf0;

#ifdef __RL78__
	#define	TRDDF0_0	(TRDDF0.0)
	#define	TRDDF0_1	(TRDDF0.1)
	#define	TRDDF0_2	(TRDDF0.2)
	#define	TRDDF0_3	(TRDDF0.3)
	#define	TRDDF0_4	(TRDDF0.4)
	#define	TRDDF0_5	(TRDDF0.5)
	#define	TRDDF0_6	(TRDDF0.6)
	#define	TRDDF0_7	(TRDDF0.7)
#else
	#define	TRDDF0_0	(trddf0.BIT_NUMBER.bit0)
	#define	TRDDF0_1	(trddf0.BIT_NUMBER.bit1)
	#define	TRDDF0_2	(trddf0.BIT_NUMBER.bit2)
	#define	TRDDF0_3	(trddf0.BIT_NUMBER.bit3)
	#define	TRDDF0_4	(trddf0.BIT_NUMBER.bit4)
	#define	TRDDF0_5	(trddf0.BIT_NUMBER.bit5)
	#define	TRDDF0_6	(trddf0.BIT_NUMBER.bit6)
	#define	TRDDF0_7	(trddf0.BIT_NUMBER.bit7)
	#define	TRDDF0		(trddf0.ALL)
#endif

/* TRDDF1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDDF1;

SFR_GLOBAL	SFR_TRDDF1	trddf1;

#ifdef __RL78__
	#define	TRDDF1_0	(TRDDF1.0)
	#define	TRDDF1_1	(TRDDF1.1)
	#define	TRDDF1_2	(TRDDF1.2)
	#define	TRDDF1_3	(TRDDF1.3)
	#define	TRDDF1_4	(TRDDF1.4)
	#define	TRDDF1_5	(TRDDF1.5)
	#define	TRDDF1_6	(TRDDF1.6)
	#define	TRDDF1_7	(TRDDF1.7)
#else
	#define	TRDDF1_0	(trddf1.BIT_NUMBER.bit0)
	#define	TRDDF1_1	(trddf1.BIT_NUMBER.bit1)
	#define	TRDDF1_2	(trddf1.BIT_NUMBER.bit2)
	#define	TRDDF1_3	(trddf1.BIT_NUMBER.bit3)
	#define	TRDDF1_4	(trddf1.BIT_NUMBER.bit4)
	#define	TRDDF1_5	(trddf1.BIT_NUMBER.bit5)
	#define	TRDDF1_6	(trddf1.BIT_NUMBER.bit6)
	#define	TRDDF1_7	(trddf1.BIT_NUMBER.bit7)
	#define	TRDDF1		(trddf1.ALL)
#endif

/* TRDCR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDCR0;

SFR_GLOBAL	SFR_TRDCR0	trdcr0;

#ifdef __RL78__
	#define	TRDCR0_0	(TRDCR0.0)
	#define	TRDCR0_1	(TRDCR0.1)
	#define	TRDCR0_2	(TRDCR0.2)
	#define	TRDCR0_3	(TRDCR0.3)
	#define	TRDCR0_4	(TRDCR0.4)
	#define	TRDCR0_5	(TRDCR0.5)
	#define	TRDCR0_6	(TRDCR0.6)
	#define	TRDCR0_7	(TRDCR0.7)
#else
	#define	TRDCR0_0	(trdcr0.BIT_NUMBER.bit0)
	#define	TRDCR0_1	(trdcr0.BIT_NUMBER.bit1)
	#define	TRDCR0_2	(trdcr0.BIT_NUMBER.bit2)
	#define	TRDCR0_3	(trdcr0.BIT_NUMBER.bit3)
	#define	TRDCR0_4	(trdcr0.BIT_NUMBER.bit4)
	#define	TRDCR0_5	(trdcr0.BIT_NUMBER.bit5)
	#define	TRDCR0_6	(trdcr0.BIT_NUMBER.bit6)
	#define	TRDCR0_7	(trdcr0.BIT_NUMBER.bit7)
	#define	TRDCR0	(trdcr0.ALL)
#endif

/* TRDIORA0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIORA0;

SFR_GLOBAL	SFR_TRDIORA0	trdiora0;

#ifdef __RL78__
	#define	TRDIORA0_0	(TRDIORA0.0)
	#define	TRDIORA0_1	(TRDIORA0.1)
	#define	TRDIORA0_2	(TRDIORA0.2)
	#define	TRDIORA0_3	(TRDIORA0.3)
	#define	TRDIORA0_4	(TRDIORA0.4)
	#define	TRDIORA0_5	(TRDIORA0.5)
	#define	TRDIORA0_6	(TRDIORA0.6)
	#define	TRDIORA0_7	(TRDIORA0.7)
#else
	#define	TRDIORA0_0	(trdiora0.BIT_NUMBER.bit0)
	#define	TRDIORA0_1	(trdiora0.BIT_NUMBER.bit1)
	#define	TRDIORA0_2	(trdiora0.BIT_NUMBER.bit2)
	#define	TRDIORA0_3	(trdiora0.BIT_NUMBER.bit3)
	#define	TRDIORA0_4	(trdiora0.BIT_NUMBER.bit4)
	#define	TRDIORA0_5	(trdiora0.BIT_NUMBER.bit5)
	#define	TRDIORA0_6	(trdiora0.BIT_NUMBER.bit6)
	#define	TRDIORA0_7	(trdiora0.BIT_NUMBER.bit7)
	#define	TRDIORA0	(trdiora0.ALL)
#endif

/* TRDIORC0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIORC0;

SFR_GLOBAL	SFR_TRDIORC0	trdiorc0;

#ifdef __RL78__
	#define	TRDIORC0_0	(TRDIORC0.0)
	#define	TRDIORC0_1	(TRDIORC0.1)
	#define	TRDIORC0_2	(TRDIORC0.2)
	#define	TRDIORC0_3	(TRDIORC0.3)
	#define	TRDIORC0_4	(TRDIORC0.4)
	#define	TRDIORC0_5	(TRDIORC0.5)
	#define	TRDIORC0_6	(TRDIORC0.6)
	#define	TRDIORC0_7	(TRDIORC0.7)
#else
	#define	TRDIORC0_0	(trdiora0.BIT_NUMBER.bit0)
	#define	TRDIORC0_1	(trdiorc0.BIT_NUMBER.bit1)
	#define	TRDIORC0_2	(trdiorc0.BIT_NUMBER.bit2)
	#define	TRDIORC0_3	(trdiorc0.BIT_NUMBER.bit3)
	#define	TRDIORC0_4	(trdiorc0.BIT_NUMBER.bit4)
	#define	TRDIORC0_5	(trdiorc0.BIT_NUMBER.bit5)
	#define	TRDIORC0_6	(trdiorc0.BIT_NUMBER.bit6)
	#define	TRDIORC0_7	(trdiorc0.BIT_NUMBER.bit7)
	#define	TRDIORC0	(trdiorc0.ALL)
#endif

/* TRDSR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDSR0;

SFR_GLOBAL	SFR_TRDSR0	trdsr0;

#ifdef __RL78__
	#define	TRDSR0_0	(TRDSR0.0)
	#define	TRDSR0_1	(TRDSR0.1)
	#define	TRDSR0_2	(TRDSR0.2)
	#define	TRDSR0_3	(TRDSR0.3)
	#define	TRDSR0_4	(TRDSR0.4)
	#define	TRDSR0_5	(TRDSR0.5)
	#define	TRDSR0_6	(TRDSR0.6)
	#define	TRDSR0_7	(TRDSR0.7)
#else
	#define	TRDSR0_0	(trdsr0.BIT_NUMBER.bit0)
	#define	TRDSR0_1	(trdsr0.BIT_NUMBER.bit1)
	#define	TRDSR0_2	(trdsr0.BIT_NUMBER.bit2)
	#define	TRDSR0_3	(trdsr0.BIT_NUMBER.bit3)
	#define	TRDSR0_4	(trdsr0.BIT_NUMBER.bit4)
	#define	TRDSR0_5	(trdsr0.BIT_NUMBER.bit5)
	#define	TRDSR0_6	(trdsr0.BIT_NUMBER.bit6)
	#define	TRDSR0_7	(trdsr0.BIT_NUMBER.bit7)
	#define	TRDSR0		(trdsr0.ALL)
#endif

/* TRDIER0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIER0;

SFR_GLOBAL	SFR_TRDIER0	trdier0;

#ifdef __RL78__
	#define	TRDIER0_0	(TRDIER0.0)
	#define	TRDIER0_1	(TRDIER0.1)
	#define	TRDIER0_2	(TRDIER0.2)
	#define	TRDIER0_3	(TRDIER0.3)
	#define	TRDIER0_4	(TRDIER0.4)
	#define	TRDIER0_5	(TRDIER0.5)
	#define	TRDIER0_6	(TRDIER0.6)
	#define	TRDIER0_7	(TRDIER0.7)
#else
	#define	TRDIER0_0	(trdier0.BIT_NUMBER.bit0)
	#define	TRDIER0_1	(trdier0.BIT_NUMBER.bit1)
	#define	TRDIER0_2	(trdier0.BIT_NUMBER.bit2)
	#define	TRDIER0_3	(trdier0.BIT_NUMBER.bit3)
	#define	TRDIER0_4	(trdier0.BIT_NUMBER.bit4)
	#define	TRDIER0_5	(trdier0.BIT_NUMBER.bit5)
	#define	TRDIER0_6	(trdier0.BIT_NUMBER.bit6)
	#define	TRDIER0_7	(trdier0.BIT_NUMBER.bit7)
	#define	TRDIER0		(trdier0.ALL)
#endif

/* TRDPOCR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDPOCR0;

SFR_GLOBAL	SFR_TRDPOCR0	trdpocr0;

#ifdef __RL78__
	#define	TRDPOCR0_0	(TRDPOCR0.0)
	#define	TRDPOCR0_1	(TRDPOCR0.1)
	#define	TRDPOCR0_2	(TRDPOCR0.2)
	#define	TRDPOCR0_3	(TRDPOCR0.3)
	#define	TRDPOCR0_4	(TRDPOCR0.4)
	#define	TRDPOCR0_5	(TRDPOCR0.5)
	#define	TRDPOCR0_6	(TRDPOCR0.6)
	#define	TRDPOCR0_7	(TRDPOCR0.7)
#else
	#define	TRDPOCR0_0	(trdpocr0.BIT_NUMBER.bit0)
	#define	TRDPOCR0_1	(trdpocr0.BIT_NUMBER.bit1)
	#define	TRDPOCR0_2	(trdpocr0.BIT_NUMBER.bit2)
	#define	TRDPOCR0_3	(trdpocr0.BIT_NUMBER.bit3)
	#define	TRDPOCR0_4	(trdpocr0.BIT_NUMBER.bit4)
	#define	TRDPOCR0_5	(trdpocr0.BIT_NUMBER.bit5)
	#define	TRDPOCR0_6	(trdpocr0.BIT_NUMBER.bit6)
	#define	TRDPOCR0_7	(trdpocr0.BIT_NUMBER.bit7)
	#define	TRDPOCR0	(trdpocr0.ALL)
#endif

/* TRD0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trd0;
#ifdef __RL78__
#else
	#define	TRD0	(trd0)
#endif

/* TRDGRA0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgra0;
#ifdef __RL78__
#else
	#define	TRDGRA0	(trdgra0)
#endif

/* TRDGRB0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrb0;
#ifdef __RL78__
#else
	#define	TRDGRB0	(trdgrb0)
#endif

/* TRDCR1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDCR1;

SFR_GLOBAL	SFR_TRDCR1	trdcr1;

#ifdef __RL78__
	#define	TRDCR1_0	(TRDCR1.0)
	#define	TRDCR1_1	(TRDCR1.1)
	#define	TRDCR1_2	(TRDCR1.2)
	#define	TRDCR1_3	(TRDCR1.3)
	#define	TRDCR1_4	(TRDCR1.4)
	#define	TRDCR1_5	(TRDCR1.5)
	#define	TRDCR1_6	(TRDCR1.6)
	#define	TRDCR1_7	(TRDCR1.7)
#else
	#define	TRDCR1_0	(trdcr1.BIT_NUMBER.bit0)
	#define	TRDCR1_1	(trdcr1.BIT_NUMBER.bit1)
	#define	TRDCR1_2	(trdcr1.BIT_NUMBER.bit2)
	#define	TRDCR1_3	(trdcr1.BIT_NUMBER.bit3)
	#define	TRDCR1_4	(trdcr1.BIT_NUMBER.bit4)
	#define	TRDCR1_5	(trdcr1.BIT_NUMBER.bit5)
	#define	TRDCR1_6	(trdcr1.BIT_NUMBER.bit6)
	#define	TRDCR1_7	(trdcr1.BIT_NUMBER.bit7)
	#define	TRDCR1		(trdcr1.ALL)
#endif

/* TRDIORA1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIORA1;

SFR_GLOBAL	SFR_TRDIORA1	trdiora1;

#ifdef __RL78__
	#define	TRDIORA1_0	(TRDIORA1.0)
	#define	TRDIORA1_1	(TRDIORA1.1)
	#define	TRDIORA1_2	(TRDIORA1.2)
	#define	TRDIORA1_3	(TRDIORA1.3)
	#define	TRDIORA1_4	(TRDIORA1.4)
	#define	TRDIORA1_5	(TRDIORA1.5)
	#define	TRDIORA1_6	(TRDIORA1.6)
	#define	TRDIORA1_7	(TRDIORA1.7)
#else
	#define	TRDIORA1_0	(trdiora1.BIT_NUMBER.bit0)
	#define	TRDIORA1_1	(trdiora1.BIT_NUMBER.bit1)
	#define	TRDIORA1_2	(trdiora1.BIT_NUMBER.bit2)
	#define	TRDIORA1_3	(trdiora1.BIT_NUMBER.bit3)
	#define	TRDIORA1_4	(trdiora1.BIT_NUMBER.bit4)
	#define	TRDIORA1_5	(trdiora1.BIT_NUMBER.bit5)
	#define	TRDIORA1_6	(trdiora1.BIT_NUMBER.bit6)
	#define	TRDIORA1_7	(trdiora1.BIT_NUMBER.bit7)
	#define	TRDIORA1	(trdiora1.ALL)
#endif

/* TRDIORC1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIORC1;

SFR_GLOBAL	SFR_TRDIORC1	trdiorc1;

#ifdef __RL78__
	#define	TRDIORC1_0	(TRDIORC1.0)
	#define	TRDIORC1_1	(TRDIORC1.1)
	#define	TRDIORC1_2	(TRDIORC1.2)
	#define	TRDIORC1_3	(TRDIORC1.3)
	#define	TRDIORC1_4	(TRDIORC1.4)
	#define	TRDIORC1_5	(TRDIORC1.5)
	#define	TRDIORC1_6	(TRDIORC1.6)
	#define	TRDIORC1_7	(TRDIORC1.7)
#else
	#define	TRDIORC1_0	(trdiora1.BIT_NUMBER.bit0)
	#define	TRDIORC1_1	(trdiorc1.BIT_NUMBER.bit1)
	#define	TRDIORC1_2	(trdiorc1.BIT_NUMBER.bit2)
	#define	TRDIORC1_3	(trdiorc1.BIT_NUMBER.bit3)
	#define	TRDIORC1_4	(trdiorc1.BIT_NUMBER.bit4)
	#define	TRDIORC1_5	(trdiorc1.BIT_NUMBER.bit5)
	#define	TRDIORC1_6	(trdiorc1.BIT_NUMBER.bit6)
	#define	TRDIORC1_7	(trdiorc1.BIT_NUMBER.bit7)
	#define	TRDIORC1	(trdiorc1.ALL)
#endif

/* TRDSR1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDSR1;

SFR_GLOBAL	SFR_TRDSR1	trdsr1;

#ifdef __RL78__
	#define	TRDSR1_0	(TRDSR1.0)
	#define	TRDSR1_1	(TRDSR1.1)
	#define	TRDSR1_2	(TRDSR1.2)
	#define	TRDSR1_3	(TRDSR1.3)
	#define	TRDSR1_4	(TRDSR1.4)
	#define	TRDSR1_5	(TRDSR1.5)
	#define	TRDSR1_6	(TRDSR1.6)
	#define	TRDSR1_7	(TRDSR1.7)
#else
	#define	TRDSR1_0	(trdsr1.BIT_NUMBER.bit0)
	#define	TRDSR1_1	(trdsr1.BIT_NUMBER.bit1)
	#define	TRDSR1_2	(trdsr1.BIT_NUMBER.bit2)
	#define	TRDSR1_3	(trdsr1.BIT_NUMBER.bit3)
	#define	TRDSR1_4	(trdsr1.BIT_NUMBER.bit4)
	#define	TRDSR1_5	(trdsr1.BIT_NUMBER.bit5)
	#define	TRDSR1_6	(trdsr1.BIT_NUMBER.bit6)
	#define	TRDSR1_7	(trdsr1.BIT_NUMBER.bit7)
	#define	TRDSR1		(trdsr1.ALL)
#endif

/* TRDIER1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDIER1;

SFR_GLOBAL	SFR_TRDIER1	trdier1;

#ifdef __RL78__
	#define	TRDIER1_0	(TRDIER1.0)
	#define	TRDIER1_1	(TRDIER1.1)
	#define	TRDIER1_2	(TRDIER1.2)
	#define	TRDIER1_3	(TRDIER1.3)
	#define	TRDIER1_4	(TRDIER1.4)
	#define	TRDIER1_5	(TRDIER1.5)
	#define	TRDIER1_6	(TRDIER1.6)
	#define	TRDIER1_7	(TRDIER1.7)
#else
	#define	TRDIER1_0	(trdier1.BIT_NUMBER.bit0)
	#define	TRDIER1_1	(trdier1.BIT_NUMBER.bit1)
	#define	TRDIER1_2	(trdier1.BIT_NUMBER.bit2)
	#define	TRDIER1_3	(trdier1.BIT_NUMBER.bit3)
	#define	TRDIER1_4	(trdier1.BIT_NUMBER.bit4)
	#define	TRDIER1_5	(trdier1.BIT_NUMBER.bit5)
	#define	TRDIER1_6	(trdier1.BIT_NUMBER.bit6)
	#define	TRDIER1_7	(trdier1.BIT_NUMBER.bit7)
	#define	TRDIER1		(trdier1.ALL)
#endif

/* TRDPOCR1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_TRDPOCR1;

SFR_GLOBAL	SFR_TRDPOCR1	trdpocr1;

#ifdef __RL78__
	#define	TRDPOCR1_0	(TRDPOCR1.0)
	#define	TRDPOCR1_1	(TRDPOCR1.1)
	#define	TRDPOCR1_2	(TRDPOCR1.2)
	#define	TRDPOCR1_3	(TRDPOCR1.3)
	#define	TRDPOCR1_4	(TRDPOCR1.4)
	#define	TRDPOCR1_5	(TRDPOCR1.5)
	#define	TRDPOCR1_6	(TRDPOCR1.6)
	#define	TRDPOCR1_7	(TRDPOCR1.7)
#else
	#define	TRDPOCR1_0	(trdpocr1.BIT_NUMBER.bit0)
	#define	TRDPOCR1_1	(trdpocr1.BIT_NUMBER.bit1)
	#define	TRDPOCR1_2	(trdpocr1.BIT_NUMBER.bit2)
	#define	TRDPOCR1_3	(trdpocr1.BIT_NUMBER.bit3)
	#define	TRDPOCR1_4	(trdpocr1.BIT_NUMBER.bit4)
	#define	TRDPOCR1_5	(trdpocr1.BIT_NUMBER.bit5)
	#define	TRDPOCR1_6	(trdpocr1.BIT_NUMBER.bit6)
	#define	TRDPOCR1_7	(trdpocr1.BIT_NUMBER.bit7)
	#define	TRDPOCR1	(trdpocr1.ALL)
#endif

/* TRD1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trd1;
#ifdef __RL78__
#else
	#define	TRD1	(trd1)
#endif

/* TRDGRA1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgra1;
#ifdef __RL78__
#else
	#define	TRDGRA1	(trdgra1)
#endif

/* TRDGRB1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trdgrb1;
#ifdef __RL78__
#else
	#define	TRDGRB1	(trdgrb1)
#endif

/* CMPCTL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CMPCTL;

SFR_GLOBAL	SFR_CMPCTL	cmpctl;

#ifdef __RL78__
	#define	CMPCTL_0	(CMPCTL.0)
	#define	CMPCTL_1	(CMPCTL.1)
	#define	CMPCTL_2	(CMPCTL.2)
	#define	CMPCTL_3	(CMPCTL.3)
	#define	CMPCTL_4	(CMPCTL.4)
	#define	CMPCTL_5	(CMPCTL.5)
	#define	CMPCTL_6	(CMPCTL.6)
	#define	CMPCTL_7	(CMPCTL.7)
#else
	#define	COE			(cmpctl.BIT_NUMBER.bit1)
	#define	HCMPON		(cmpctl.BIT_NUMBER.bit7)
	#define	CMPCTL_0	(cmpctl.BIT_NUMBER.bit0)
	#define	CMPCTL_1	(cmpctl.BIT_NUMBER.bit1)
	#define	CMPCTL_2	(cmpctl.BIT_NUMBER.bit2)
	#define	CMPCTL_3	(cmpctl.BIT_NUMBER.bit3)
	#define	CMPCTL_4	(cmpctl.BIT_NUMBER.bit4)
	#define	CMPCTL_5	(cmpctl.BIT_NUMBER.bit5)
	#define	CMPCTL_6	(cmpctl.BIT_NUMBER.bit6)
	#define	CMPCTL_7	(cmpctl.BIT_NUMBER.bit7)
	#define	CMPCTL		(cmpctl.ALL)
#endif

/* CMPSEL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CMPSEL;

SFR_GLOBAL	SFR_CMPSEL	cmpsel;

#ifdef __RL78__
	#define	CMPSEL_0	(CMPSEL.0)
	#define	CMPSEL_1	(CMPSEL.1)
	#define	CMPSEL_2	(CMPSEL.2)
	#define	CMPSEL_3	(CMPSEL.3)
	#define	CMPSEL_4	(CMPSEL.4)
	#define	CMPSEL_5	(CMPSEL.5)
	#define	CMPSEL_6	(CMPSEL.6)
	#define	CMPSEL_7	(CMPSEL.7)
#else
	#define	CPOE		(cmpsel.BIT_NUMBER.bit6)
	#define	CMPSEL_0	(cmpsel.BIT_NUMBER.bit0)
	#define	CMPSEL_1	(cmpsel.BIT_NUMBER.bit1)
	#define	CMPSEL_2	(cmpsel.BIT_NUMBER.bit2)
	#define	CMPSEL_3	(cmpsel.BIT_NUMBER.bit3)
	#define	CMPSEL_4	(cmpsel.BIT_NUMBER.bit4)
	#define	CMPSEL_5	(cmpsel.BIT_NUMBER.bit5)
	#define	CMPSEL_6	(cmpsel.BIT_NUMBER.bit6)
	#define	CMPSEL_7	(cmpsel.BIT_NUMBER.bit7)
	#define	CMPSEL		(cmpsel.ALL)
#endif

/* CMPMON */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CMPMON;

SFR_GLOBAL	SFR_CMPMON	cmpmon;

#ifdef __RL78__
	#define	CMPMON_0	(CMPMON.0)
	#define	CMPMON_1	(CMPMON.1)
	#define	CMPMON_2	(CMPMON.2)
	#define	CMPMON_3	(CMPMON.3)
	#define	CMPMON_4	(CMPMON.4)
	#define	CMPMON_5	(CMPMON.5)
	#define	CMPMON_6	(CMPMON.6)
	#define	CMPMON_7	(CMPMON.7)
#else
	#define	CMPMON_0	(cmpmon.BIT_NUMBER.bit0)
	#define	CMPMON_1	(cmpmon.BIT_NUMBER.bit1)
	#define	CMPMON_2	(cmpmon.BIT_NUMBER.bit2)
	#define	CMPMON_3	(cmpmon.BIT_NUMBER.bit3)
	#define	CMPMON_4	(cmpmon.BIT_NUMBER.bit4)
	#define	CMPMON_5	(cmpmon.BIT_NUMBER.bit5)
	#define	CMPMON_6	(cmpmon.BIT_NUMBER.bit6)
	#define	CMPMON_7	(cmpmon.BIT_NUMBER.bit7)
	#define	CMPMON		(cmpmon.ALL)
#endif

/* PER1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PER1;

SFR_GLOBAL	SFR_PER1	per1;

#ifdef __RL78__
	#define	PER1_0	(PER1.0)
	#define	PER1_1	(PER1.1)
	#define	PER1_2	(PER1.2)
	#define	PER1_3	(PER1.3)
	#define	PER1_4	(PER1.4)
	#define	PER1_5	(PER1.5)
	#define	PER1_6	(PER1.6)
	#define	PER1_7	(PER1.7)
#else
	#define	TRJ0EN	(per1.BIT_NUMBER.bit0)
	#define	DTCEN	(per1.BIT_NUMBER.bit3)
	#define	TRD0EN	(per1.BIT_NUMBER.bit4)
	#define	CMPEN	(per1.BIT_NUMBER.bit5)
	#define	DACEN	(per1.BIT_NUMBER.bit7)
	#define	PER1_0	(per1.BIT_NUMBER.bit0)
	#define	PER1_1	(per1.BIT_NUMBER.bit1)
	#define	PER1_2	(per1.BIT_NUMBER.bit2)
	#define	PER1_3	(per1.BIT_NUMBER.bit3)
	#define	PER1_4	(per1.BIT_NUMBER.bit4)
	#define	PER1_5	(per1.BIT_NUMBER.bit5)
	#define	PER1_6	(per1.BIT_NUMBER.bit6)
	#define	PER1_7	(per1.BIT_NUMBER.bit7)
	#define	PER1	(per1.ALL)
#endif

/* PER2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PER2;

SFR_GLOBAL	SFR_PER2	per2;

#ifdef __RL78__
	#define	PER2_0	(PER2.0)
	#define	PER2_1	(PER2.1)
	#define	PER2_2	(PER2.2)
	#define	PER2_3	(PER2.3)
	#define	PER2_4	(PER2.4)
	#define	PER2_5	(PER2.5)
	#define	PER2_6	(PER2.6)
	#define	PER2_7	(PER2.7)
#else
	#define	CAN0EN	(per2.BIT_NUMBER.bit0)
	#define	LIN0EN	(per2.BIT_NUMBER.bit2)
	#define	LIN1EN	(per2.BIT_NUMBER.bit3)
	#define	PER2_0	(per2.BIT_NUMBER.bit0)
	#define	PER2_1	(per2.BIT_NUMBER.bit1)
	#define	PER2_2	(per2.BIT_NUMBER.bit2)
	#define	PER2_3	(per2.BIT_NUMBER.bit3)
	#define	PER2_4	(per2.BIT_NUMBER.bit4)
	#define	PER2_5	(per2.BIT_NUMBER.bit5)
	#define	PER2_6	(per2.BIT_NUMBER.bit6)
	#define	PER2_7	(per2.BIT_NUMBER.bit7)
	#define	PER2	(per2.ALL)
#endif

/* CANCKSEL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CANCKSEL;

SFR_GLOBAL	SFR_CANCKSEL	cancksel;

#ifdef __RL78__
	#define	CANCKSEL_0	(CANCKSEL.0)
	#define	CANCKSEL_1	(CANCKSEL.1)
	#define	CANCKSEL_2	(CANCKSEL.2)
	#define	CANCKSEL_3	(CANCKSEL.3)
	#define	CANCKSEL_4	(CANCKSEL.4)
	#define	CANCKSEL_5	(CANCKSEL.5)
	#define	CANCKSEL_6	(CANCKSEL.6)
	#define	CANCKSEL_7	(CANCKSEL.7)
#else
	#define	CAN0MCKE	(cancksel.BIT_NUMBER.bit0)
	#define	CANCKSEL_0	(cancksel.BIT_NUMBER.bit0)
	#define	CANCKSEL_1	(cancksel.BIT_NUMBER.bit1)
	#define	CANCKSEL_2	(cancksel.BIT_NUMBER.bit2)
	#define	CANCKSEL_3	(cancksel.BIT_NUMBER.bit3)
	#define	CANCKSEL_4	(cancksel.BIT_NUMBER.bit4)
	#define	CANCKSEL_5	(cancksel.BIT_NUMBER.bit5)
	#define	CANCKSEL_6	(cancksel.BIT_NUMBER.bit6)
	#define	CANCKSEL_7	(cancksel.BIT_NUMBER.bit7)
	#define	CANCKSEL	(cancksel.ALL)
#endif

/* LINCKSEL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_LINCKSEL;

SFR_GLOBAL	SFR_LINCKSEL	lincksel;

#ifdef __RL78__
	#define	LINCKSEL_0	(LINCKSEL.0)
	#define	LINCKSEL_1	(LINCKSEL.1)
	#define	LINCKSEL_2	(LINCKSEL.2)
	#define	LINCKSEL_3	(LINCKSEL.3)
	#define	LINCKSEL_4	(LINCKSEL.4)
	#define	LINCKSEL_5	(LINCKSEL.5)
	#define	LINCKSEL_6	(LINCKSEL.6)
	#define	LINCKSEL_7	(LINCKSEL.7)
#else
	#define	LIN0MCK		(lincksel.BIT_NUMBER.bit0)
	#define	LIN1MCK		(lincksel.BIT_NUMBER.bit1)
	#define	LIN0MCKE	(lincksel.BIT_NUMBER.bit4)
	#define	LIN1MCKE	(lincksel.BIT_NUMBER.bit5)
	#define	LINCKSEL_0	(lincksel.BIT_NUMBER.bit0)
	#define	LINCKSEL_1	(lincksel.BIT_NUMBER.bit1)
	#define	LINCKSEL_2	(lincksel.BIT_NUMBER.bit2)
	#define	LINCKSEL_3	(lincksel.BIT_NUMBER.bit3)
	#define	LINCKSEL_4	(lincksel.BIT_NUMBER.bit4)
	#define	LINCKSEL_5	(lincksel.BIT_NUMBER.bit5)
	#define	LINCKSEL_6	(lincksel.BIT_NUMBER.bit6)
	#define	LINCKSEL_7	(lincksel.BIT_NUMBER.bit7)
	#define	LINCKSEL	(lincksel.ALL)
#endif

/* CKSEL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CKSEL;

SFR_GLOBAL	SFR_CKSEL	cksel;

#ifdef __RL78__
	#define	CKSEL_0		(CKSEL.0)
	#define	CKSEL_1		(CKSEL.1)
	#define	CKSEL_2		(CKSEL.2)
	#define	CKSEL_3		(CKSEL.3)
	#define	CKSEL_4		(CKSEL.4)
	#define	CKSEL_5		(CKSEL.5)
	#define	CKSEL_6		(CKSEL.6)
	#define	CKSEL_7		(CKSEL.7)
#else
	#define	SELLOSC		(cksel.BIT_NUMBER.bit0)
	#define	TRD_CKSEL	(cksel.BIT_NUMBER.bit2)
	#define	CKSEL_0		(cksel.BIT_NUMBER.bit0)
	#define	CKSEL_1		(cksel.BIT_NUMBER.bit1)
	#define	CKSEL_2		(cksel.BIT_NUMBER.bit2)
	#define	CKSEL_3		(cksel.BIT_NUMBER.bit3)
	#define	CKSEL_4		(cksel.BIT_NUMBER.bit4)
	#define	CKSEL_5		(cksel.BIT_NUMBER.bit5)
	#define	CKSEL_6		(cksel.BIT_NUMBER.bit6)
	#define	CKSEL_7		(cksel.BIT_NUMBER.bit7)
	#define	CKSEL		(cksel.ALL)
#endif

/* PLLCTL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PLLCTL;

SFR_GLOBAL	SFR_PLLCTL	pllctl;

#ifdef __RL78__
	#define	PLLCTL_0	(PLLCTL.0)
	#define	PLLCTL_1	(PLLCTL.1)
	#define	PLLCTL_2	(PLLCTL.2)
	#define	PLLCTL_3	(PLLCTL.3)
	#define	PLLCTL_4	(PLLCTL.4)
	#define	PLLCTL_5	(PLLCTL.5)
	#define	PLLCTL_6	(PLLCTL.6)
	#define	PLLCTL_7	(PLLCTL.7)
#else
	#define	PLLON		(pllctl.BIT_NUMBER.bit0)
	#define	PLLMUL		(pllctl.BIT_NUMBER.bit1)
	#define	SELPLL		(pllctl.BIT_NUMBER.bit2)
	#define	PLLDIV0		(pllctl.BIT_NUMBER.bit4)
	#define	PLLDIV1		(pllctl.BIT_NUMBER.bit5)
	#define	LCKSEL0		(pllctl.BIT_NUMBER.bit6)
	#define	LCKSEL1		(pllctl.BIT_NUMBER.bit7)
	#define	PLLCTL_0	(pllctl.BIT_NUMBER.bit0)
	#define	PLLCTL_1	(pllctl.BIT_NUMBER.bit1)
	#define	PLLCTL_2	(pllctl.BIT_NUMBER.bit2)
	#define	PLLCTL_3	(pllctl.BIT_NUMBER.bit3)
	#define	PLLCTL_4	(pllctl.BIT_NUMBER.bit4)
	#define	PLLCTL_5	(pllctl.BIT_NUMBER.bit5)
	#define	PLLCTL_6	(pllctl.BIT_NUMBER.bit6)
	#define	PLLCTL_7	(pllctl.BIT_NUMBER.bit7)
	#define	PLLCTL		(pllctl.ALL)
#endif

/* PLLSTS */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_PLLSTS;

SFR_GLOBAL	SFR_PLLSTS	pllsts;

#ifdef __RL78__
	#define	PLLSTS_0	(PLLSTS.0)
	#define	PLLSTS_1	(PLLSTS.1)
	#define	PLLSTS_2	(PLLSTS.2)
	#define	PLLSTS_3	(PLLSTS.3)
	#define	PLLSTS_4	(PLLSTS.4)
	#define	PLLSTS_5	(PLLSTS.5)
	#define	PLLSTS_6	(PLLSTS.6)
	#define	PLLSTS_7	(PLLSTS.7)
#else
	#define	SELPLLS		(pllsts.BIT_NUMBER.bit3)
	#define	LOCK		(pllsts.BIT_NUMBER.bit7)
	#define	PLLSTS_0	(pllsts.BIT_NUMBER.bit0)
	#define	PLLSTS_1	(pllsts.BIT_NUMBER.bit1)
	#define	PLLSTS_2	(pllsts.BIT_NUMBER.bit2)
	#define	PLLSTS_3	(pllsts.BIT_NUMBER.bit3)
	#define	PLLSTS_4	(pllsts.BIT_NUMBER.bit4)
	#define	PLLSTS_5	(pllsts.BIT_NUMBER.bit5)
	#define	PLLSTS_6	(pllsts.BIT_NUMBER.bit6)
	#define	PLLSTS_7	(pllsts.BIT_NUMBER.bit7)
	#define	PLLSTS		(pllsts.ALL)
#endif

/* MDIV */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	mdiv;

#ifdef __RL78__
#else
	#define	MDIV	(mdiv)
#endif

/* RTCCL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_RTCCL;

SFR_GLOBAL	SFR_RTCCL	rtccl;

#ifdef __RL78__
	#define	RTCCL_0	(RTCCL.0)
	#define	RTCCL_1	(RTCCL.1)
	#define	RTCCL_2	(RTCCL.2)
	#define	RTCCL_3	(RTCCL.3)
	#define	RTCCL_4	(RTCCL.4)
	#define	RTCCL_5	(RTCCL.5)
	#define	RTCCL_6	(RTCCL.6)
	#define	RTCCL_7	(RTCCL.7)
#else
	#define	RTCCL_0	(rtccl.BIT_NUMBER.bit0)
	#define	RTCCL_1	(rtccl.BIT_NUMBER.bit1)
	#define	RTCCL_2	(rtccl.BIT_NUMBER.bit2)
	#define	RTCCL_3	(rtccl.BIT_NUMBER.bit3)
	#define	RTCCL_4	(rtccl.BIT_NUMBER.bit4)
	#define	RTCCL_5	(rtccl.BIT_NUMBER.bit5)
	#define	RTCCL_6	(rtccl.BIT_NUMBER.bit6)
	#define	RTCCL_7	(rtccl.BIT_NUMBER.bit7)
	#define	RTCCL	(rtccl.ALL)
#endif

/* POCRES */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_POCRES;

SFR_GLOBAL	SFR_POCRES	pocres;

#ifdef __RL78__
	#define	POCRES_0	(POCRES.0)
	#define	POCRES_1	(POCRES.1)
	#define	POCRES_2	(POCRES.2)
	#define	POCRES_3	(POCRES.3)
	#define	POCRES_4	(POCRES.4)
	#define	POCRES_5	(POCRES.5)
	#define	POCRES_6	(POCRES.6)
	#define	POCRES_7	(POCRES.7)
#else
	#define	POCRES0		(pocres.BIT_NUMBER.bit0)
	#define	CLKRF		(pocres.BIT_NUMBER.bit4)
	#define	POCRES_0	(pocres.BIT_NUMBER.bit0)
	#define	POCRES_1	(pocres.BIT_NUMBER.bit1)
	#define	POCRES_2	(pocres.BIT_NUMBER.bit2)
	#define	POCRES_3	(pocres.BIT_NUMBER.bit3)
	#define	POCRES_4	(pocres.BIT_NUMBER.bit4)
	#define	POCRES_5	(pocres.BIT_NUMBER.bit5)
	#define	POCRES_6	(pocres.BIT_NUMBER.bit6)
	#define	POCRES_7	(pocres.BIT_NUMBER.bit7)
	#define	POCRES		(pocres.ALL)
#endif

/* STPSTC */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_STPSTC;

SFR_GLOBAL	SFR_STPSTC	stpstc;

#ifdef __RL78__
	#define	STPSTC_0	(STPSTC.0)
	#define	STPSTC_1	(STPSTC.1)
	#define	STPSTC_2	(STPSTC.2)
	#define	STPSTC_3	(STPSTC.3)
	#define	STPSTC_4	(STPSTC.4)
	#define	STPSTC_5	(STPSTC.5)
	#define	STPSTC_6	(STPSTC.6)
	#define	STPSTC_7	(STPSTC.7)
#else
	#define	STPSEL		(stpstc.BIT_NUMBER.bit0)
	#define	STPLV		(stpstc.BIT_NUMBER.bit4)
	#define	STPOEN		(stpstc.BIT_NUMBER.bit7)
	#define	STPSTC_0	(stpstc.BIT_NUMBER.bit0)
	#define	STPSTC_1	(stpstc.BIT_NUMBER.bit1)
	#define	STPSTC_2	(stpstc.BIT_NUMBER.bit2)
	#define	STPSTC_3	(stpstc.BIT_NUMBER.bit3)
	#define	STPSTC_4	(stpstc.BIT_NUMBER.bit4)
	#define	STPSTC_5	(stpstc.BIT_NUMBER.bit5)
	#define	STPSTC_6	(stpstc.BIT_NUMBER.bit6)
	#define	STPSTC_7	(stpstc.BIT_NUMBER.bit7)
	#define	STPSTC		(stpstc.ALL)
#endif

/* HDTCCR0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTCCR0;

SFR_GLOBAL	SFR_HDTCCR0	hdtccr0;

#ifdef __RL78__
	#define	HDTCCR0_0	(HDTCCR0.0)
	#define	HDTCCR0_1	(HDTCCR0.1)
	#define	HDTCCR0_2	(HDTCCR0.2)
	#define	HDTCCR0_3	(HDTCCR0.3)
	#define	HDTCCR0_4	(HDTCCR0.4)
	#define	HDTCCR0_5	(HDTCCR0.5)
	#define	HDTCCR0_6	(HDTCCR0.6)
	#define	HDTCCR0_7	(HDTCCR0.7)
#else
	#define	HMODE0		(hdtccr0.BIT_NUMBER.bit0)
	#define	HRPTSEL0	(hdtccr0.BIT_NUMBER.bit1)
	#define	HSAMOD0		(hdtccr0.BIT_NUMBER.bit2)
	#define	HDAMOD0		(hdtccr0.BIT_NUMBER.bit3)
	#define	HCHNE0		(hdtccr0.BIT_NUMBER.bit4)
	#define	HRPTINT0	(hdtccr0.BIT_NUMBER.bit5)
	#define	HSZ0		(hdtccr0.BIT_NUMBER.bit6)
	#define	HDTCCR0_0	(hdtccr0.BIT_NUMBER.bit0)
	#define	HDTCCR0_1	(hdtccr0.BIT_NUMBER.bit1)
	#define	HDTCCR0_2	(hdtccr0.BIT_NUMBER.bit2)
	#define	HDTCCR0_3	(hdtccr0.BIT_NUMBER.bit3)
	#define	HDTCCR0_4	(hdtccr0.BIT_NUMBER.bit4)
	#define	HDTCCR0_5	(hdtccr0.BIT_NUMBER.bit5)
	#define	HDTCCR0_6	(hdtccr0.BIT_NUMBER.bit6)
	#define	HDTCCR0_7	(hdtccr0.BIT_NUMBER.bit7)
	#define	HDTCCR0		(hdtccr0.ALL)
#endif

/* HDTCCT0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTCCT0;

SFR_GLOBAL	SFR_HDTCCT0	hdtcct0;

#ifdef __RL78__
	#define	HDTCCT0_0	(HDTCCT0.0)
	#define	HDTCCT0_1	(HDTCCT0.1)
	#define	HDTCCT0_2	(HDTCCT0.2)
	#define	HDTCCT0_3	(HDTCCT0.3)
	#define	HDTCCT0_4	(HDTCCT0.4)
	#define	HDTCCT0_5	(HDTCCT0.5)
	#define	HDTCCT0_6	(HDTCCT0.6)
	#define	HDTCCT0_7	(HDTCCT0.7)
#else
	#define	HDTCCT0_0	(hdtcct0.BIT_NUMBER.bit0)
	#define	HDTCCT0_1	(hdtcct0.BIT_NUMBER.bit1)
	#define	HDTCCT0_2	(hdtcct0.BIT_NUMBER.bit2)
	#define	HDTCCT0_3	(hdtcct0.BIT_NUMBER.bit3)
	#define	HDTCCT0_4	(hdtcct0.BIT_NUMBER.bit4)
	#define	HDTCCT0_5	(hdtcct0.BIT_NUMBER.bit5)
	#define	HDTCCT0_6	(hdtcct0.BIT_NUMBER.bit6)
	#define	HDTCCT0_7	(hdtcct0.BIT_NUMBER.bit7)
	#define	HDTCCT0		(hdtcct0.ALL)
#endif

/* HDTRLD0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTRLD0;

SFR_GLOBAL	SFR_HDTRLD0	hdtrld0;

#ifdef __RL78__
	#define	HDTRLD0_0	(HDTRLD0.0)
	#define	HDTRLD0_1	(HDTRLD0.1)
	#define	HDTRLD0_2	(HDTRLD0.2)
	#define	HDTRLD0_3	(HDTRLD0.3)
	#define	HDTRLD0_4	(HDTRLD0.4)
	#define	HDTRLD0_5	(HDTRLD0.5)
	#define	HDTRLD0_6	(HDTRLD0.6)
	#define	HDTRLD0_7	(HDTRLD0.7)
#else
	#define	HDTRLD0_0	(hdtrld0.BIT_NUMBER.bit0)
	#define	HDTRLD0_1	(hdtrld0.BIT_NUMBER.bit1)
	#define	HDTRLD0_2	(hdtrld0.BIT_NUMBER.bit2)
	#define	HDTRLD0_3	(hdtrld0.BIT_NUMBER.bit3)
	#define	HDTRLD0_4	(hdtrld0.BIT_NUMBER.bit4)
	#define	HDTRLD0_5	(hdtrld0.BIT_NUMBER.bit5)
	#define	HDTRLD0_6	(hdtrld0.BIT_NUMBER.bit6)
	#define	HDTRLD0_7	(hdtrld0.BIT_NUMBER.bit7)
	#define	HDTRLD0		(hdtrld0.ALL)
#endif

/* HDTSAR0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT hdtsar0;
#ifdef __RL78__
#else
	#define	HDTSAR0	(hdtsar0)
#endif

/* HDTDAR0 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT hdtdar0;
#ifdef __RL78__
#else
	#define	HDTDAR0	(hdtdar0)
#endif

/* HDTCCR1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTCCR1;

SFR_GLOBAL	SFR_HDTCCR1	hdtccr1;

#ifdef __RL78__
	#define	HDTCCR1_0	(HDTCCR1.0)
	#define	HDTCCR1_1	(HDTCCR1.1)
	#define	HDTCCR1_2	(HDTCCR1.2)
	#define	HDTCCR1_3	(HDTCCR1.3)
	#define	HDTCCR1_4	(HDTCCR1.4)
	#define	HDTCCR1_5	(HDTCCR1.5)
	#define	HDTCCR1_6	(HDTCCR1.6)
	#define	HDTCCR1_7	(HDTCCR1.7)
#else
	#define	HMODE1		(hdtccr1.BIT_NUMBER.bit0)
	#define	HRPTSEL1	(hdtccr1.BIT_NUMBER.bit1)
	#define	HSAMOD1		(hdtccr1.BIT_NUMBER.bit2)
	#define	HDAMOD1		(hdtccr1.BIT_NUMBER.bit3)
	#define	HCHNE1		(hdtccr1.BIT_NUMBER.bit4)
	#define	HRPTINT1	(hdtccr1.BIT_NUMBER.bit5)
	#define	HSZ1		(hdtccr1.BIT_NUMBER.bit6)
	#define	HDTCCR1_0	(hdtccr1.BIT_NUMBER.bit0)
	#define	HDTCCR1_1	(hdtccr1.BIT_NUMBER.bit1)
	#define	HDTCCR1_2	(hdtccr1.BIT_NUMBER.bit2)
	#define	HDTCCR1_3	(hdtccr1.BIT_NUMBER.bit3)
	#define	HDTCCR1_4	(hdtccr1.BIT_NUMBER.bit4)
	#define	HDTCCR1_5	(hdtccr1.BIT_NUMBER.bit5)
	#define	HDTCCR1_6	(hdtccr1.BIT_NUMBER.bit6)
	#define	HDTCCR1_7	(hdtccr1.BIT_NUMBER.bit7)
	#define	HDTCCR1		(hdtccr1.ALL)
#endif

/* HDTCCT1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTCCT1;

SFR_GLOBAL	SFR_HDTCCT1	hdtcct1;

#ifdef __RL78__
	#define	HDTCCT1_0	(HDTCCT1.0)
	#define	HDTCCT1_1	(HDTCCT1.1)
	#define	HDTCCT1_2	(HDTCCT1.2)
	#define	HDTCCT1_3	(HDTCCT1.3)
	#define	HDTCCT1_4	(HDTCCT1.4)
	#define	HDTCCT1_5	(HDTCCT1.5)
	#define	HDTCCT1_6	(HDTCCT1.6)
	#define	HDTCCT1_7	(HDTCCT1.7)
#else
	#define	HDTCCT1_0	(hdtcct1.BIT_NUMBER.bit0)
	#define	HDTCCT1_1	(hdtcct1.BIT_NUMBER.bit1)
	#define	HDTCCT1_2	(hdtcct1.BIT_NUMBER.bit2)
	#define	HDTCCT1_3	(hdtcct1.BIT_NUMBER.bit3)
	#define	HDTCCT1_4	(hdtcct1.BIT_NUMBER.bit4)
	#define	HDTCCT1_5	(hdtcct1.BIT_NUMBER.bit5)
	#define	HDTCCT1_6	(hdtcct1.BIT_NUMBER.bit6)
	#define	HDTCCT1_7	(hdtcct1.BIT_NUMBER.bit7)
	#define	HDTCCT1		(hdtcct1.ALL)
#endif

/* HDTRLD1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_HDTRLD1;

SFR_GLOBAL	SFR_HDTRLD1	hdtrld1;

#ifdef __RL78__
	#define	HDTRLD1_0	(HDTRLD1.0)
	#define	HDTRLD1_1	(HDTRLD1.1)
	#define	HDTRLD1_2	(HDTRLD1.2)
	#define	HDTRLD1_3	(HDTRLD1.3)
	#define	HDTRLD1_4	(HDTRLD1.4)
	#define	HDTRLD1_5	(HDTRLD1.5)
	#define	HDTRLD1_6	(HDTRLD1.6)
	#define	HDTRLD1_7	(HDTRLD1.7)
#else
	#define	HDTRLD1_0	(hdtrld1.BIT_NUMBER.bit0)
	#define	HDTRLD1_1	(hdtrld1.BIT_NUMBER.bit1)
	#define	HDTRLD1_2	(hdtrld1.BIT_NUMBER.bit2)
	#define	HDTRLD1_3	(hdtrld1.BIT_NUMBER.bit3)
	#define	HDTRLD1_4	(hdtrld1.BIT_NUMBER.bit4)
	#define	HDTRLD1_5	(hdtrld1.BIT_NUMBER.bit5)
	#define	HDTRLD1_6	(hdtrld1.BIT_NUMBER.bit6)
	#define	HDTRLD1_7	(hdtrld1.BIT_NUMBER.bit7)
	#define	HDTRLD1		(hdtrld1.ALL)
#endif

/* HDTSAR1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT hdtsar1;
#ifdef __RL78__
#else
	#define	HDTSAR1	(hdtsar1)
#endif

/* HDTDAR1 */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT hdtdar1;
#ifdef __RL78__
#else
	#define	HDTDAR1	(hdtdar1)
#endif

/* DTCBAR */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	dtcbar;

#ifdef __RL78__
#else
	#define	DTCBAR	(dtcbar)
#endif

/* SELHS0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_SELHS0;

SFR_GLOBAL	SFR_SELHS0	selhs0;

#ifdef __RL78__
	#define	SELHS0_0	(SELHS0.0)
	#define	SELHS0_1	(SELHS0.1)
	#define	SELHS0_2	(SELHS0.2)
	#define	SELHS0_3	(SELHS0.3)
	#define	SELHS0_4	(SELHS0.4)
	#define	SELHS0_5	(SELHS0.5)
	#define	SELHS0_6	(SELHS0.6)
	#define	SELHS0_7	(SELHS0.7)
#else
	#define	SELHS0_0	(selhs0.BIT_NUMBER.bit0)
	#define	SELHS0_1	(selhs0.BIT_NUMBER.bit1)
	#define	SELHS0_2	(selhs0.BIT_NUMBER.bit2)
	#define	SELHS0_3	(selhs0.BIT_NUMBER.bit3)
	#define	SELHS0_4	(selhs0.BIT_NUMBER.bit4)
	#define	SELHS0_5	(selhs0.BIT_NUMBER.bit5)
	#define	SELHS0_6	(selhs0.BIT_NUMBER.bit6)
	#define	SELHS0_7	(selhs0.BIT_NUMBER.bit7)
	#define	SELHS0		(selhs0.ALL)
#endif

/* SELHS1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_SELHS1;

SFR_GLOBAL	SFR_SELHS1	selhs1;

#ifdef __RL78__
	#define	SELHS1_0	(SELHS1.0)
	#define	SELHS1_1	(SELHS1.1)
	#define	SELHS1_2	(SELHS1.2)
	#define	SELHS1_3	(SELHS1.3)
	#define	SELHS1_4	(SELHS1.4)
	#define	SELHS1_5	(SELHS1.5)
	#define	SELHS1_6	(SELHS1.6)
	#define	SELHS1_7	(SELHS1.7)
#else
	#define	SELHS1_0	(selhs1.BIT_NUMBER.bit0)
	#define	SELHS1_1	(selhs1.BIT_NUMBER.bit1)
	#define	SELHS1_2	(selhs1.BIT_NUMBER.bit2)
	#define	SELHS1_3	(selhs1.BIT_NUMBER.bit3)
	#define	SELHS1_4	(selhs1.BIT_NUMBER.bit4)
	#define	SELHS1_5	(selhs1.BIT_NUMBER.bit5)
	#define	SELHS1_6	(selhs1.BIT_NUMBER.bit6)
	#define	SELHS1_7	(selhs1.BIT_NUMBER.bit7)
	#define	SELHS1		(selhs1.ALL)
#endif

/* DTCEN0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN0;

SFR_GLOBAL	SFR_DTCEN0	dtcen0;

#ifdef __RL78__
	#define	DTCEN0_0	(DTCEN0.0)
	#define	DTCEN0_1	(DTCEN0.1)
	#define	DTCEN0_2	(DTCEN0.2)
	#define	DTCEN0_3	(DTCEN0.3)
	#define	DTCEN0_4	(DTCEN0.4)
	#define	DTCEN0_5	(DTCEN0.5)
	#define	DTCEN0_6	(DTCEN0.6)
	#define	DTCEN0_7	(DTCEN0.7)
#else
	#define	DTCEN00		(dtcen0.BIT_NUMBER.bit0)
	#define	DTCEN01		(dtcen0.BIT_NUMBER.bit1)
	#define	DTCEN02		(dtcen0.BIT_NUMBER.bit2)
	#define	DTCEN03		(dtcen0.BIT_NUMBER.bit3)
	#define	DTCEN04		(dtcen0.BIT_NUMBER.bit4)
	#define	DTCEN05		(dtcen0.BIT_NUMBER.bit5)
	#define	DTCEN06		(dtcen0.BIT_NUMBER.bit6)
	#define	DTCEN07		(dtcen0.BIT_NUMBER.bit7)
	#define	DTCEN0_0	(dtcen0.BIT_NUMBER.bit0)
	#define	DTCEN0_1	(dtcen0.BIT_NUMBER.bit1)
	#define	DTCEN0_2	(dtcen0.BIT_NUMBER.bit2)
	#define	DTCEN0_3	(dtcen0.BIT_NUMBER.bit3)
	#define	DTCEN0_4	(dtcen0.BIT_NUMBER.bit4)
	#define	DTCEN0_5	(dtcen0.BIT_NUMBER.bit5)
	#define	DTCEN0_6	(dtcen0.BIT_NUMBER.bit6)
	#define	DTCEN0_7	(dtcen0.BIT_NUMBER.bit7)
	#define	DTCEN0		(dtcen0.ALL)
#endif

/* DTCEN1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN1;

SFR_GLOBAL	SFR_DTCEN1	dtcen1;

#ifdef __RL78__
	#define	DTCEN1_0	(DTCEN1.0)
	#define	DTCEN1_1	(DTCEN1.1)
	#define	DTCEN1_2	(DTCEN1.2)
	#define	DTCEN1_3	(DTCEN1.3)
	#define	DTCEN1_4	(DTCEN1.4)
	#define	DTCEN1_5	(DTCEN1.5)
	#define	DTCEN1_6	(DTCEN1.6)
	#define	DTCEN1_7	(DTCEN1.7)
#else
	#define	DTCEN10		(dtcen1.BIT_NUMBER.bit0)
	#define	DTCEN11		(dtcen1.BIT_NUMBER.bit1)
	#define	DTCEN12		(dtcen1.BIT_NUMBER.bit2)
	#define	DTCEN13		(dtcen1.BIT_NUMBER.bit3)
	#define	DTCEN14		(dtcen1.BIT_NUMBER.bit4)
	#define	DTCEN15		(dtcen1.BIT_NUMBER.bit5)
	#define	DTCEN16		(dtcen1.BIT_NUMBER.bit6)
	#define	DTCEN17		(dtcen1.BIT_NUMBER.bit7)
	#define	DTCEN1_0	(dtcen1.BIT_NUMBER.bit0)
	#define	DTCEN1_1	(dtcen1.BIT_NUMBER.bit1)
	#define	DTCEN1_2	(dtcen1.BIT_NUMBER.bit2)
	#define	DTCEN1_3	(dtcen1.BIT_NUMBER.bit3)
	#define	DTCEN1_4	(dtcen1.BIT_NUMBER.bit4)
	#define	DTCEN1_5	(dtcen1.BIT_NUMBER.bit5)
	#define	DTCEN1_6	(dtcen1.BIT_NUMBER.bit6)
	#define	DTCEN1_7	(dtcen1.BIT_NUMBER.bit7)
	#define	DTCEN1		(dtcen1.ALL)
#endif

/* DTCEN2 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN2;

SFR_GLOBAL	SFR_DTCEN2	dtcen2;

#ifdef __RL78__
	#define	DTCEN2_0	(DTCEN2.0)
	#define	DTCEN2_1	(DTCEN2.1)
	#define	DTCEN2_2	(DTCEN2.2)
	#define	DTCEN2_3	(DTCEN2.3)
	#define	DTCEN2_4	(DTCEN2.4)
	#define	DTCEN2_5	(DTCEN2.5)
	#define	DTCEN2_6	(DTCEN2.6)
	#define	DTCEN2_7	(DTCEN2.7)
#else
	#define	DTCEN20		(dtcen2.BIT_NUMBER.bit0)
	#define	DTCEN21		(dtcen2.BIT_NUMBER.bit1)
	#define	DTCEN22		(dtcen2.BIT_NUMBER.bit2)
	#define	DTCEN23		(dtcen2.BIT_NUMBER.bit3)
	#define	DTCEN24		(dtcen2.BIT_NUMBER.bit4)
	#define	DTCEN25		(dtcen2.BIT_NUMBER.bit5)
	#define	DTCEN26		(dtcen2.BIT_NUMBER.bit6)
	#define	DTCEN27		(dtcen2.BIT_NUMBER.bit7)
	#define	DTCEN2_0	(dtcen2.BIT_NUMBER.bit0)
	#define	DTCEN2_1	(dtcen2.BIT_NUMBER.bit1)
	#define	DTCEN2_2	(dtcen2.BIT_NUMBER.bit2)
	#define	DTCEN2_3	(dtcen2.BIT_NUMBER.bit3)
	#define	DTCEN2_4	(dtcen2.BIT_NUMBER.bit4)
	#define	DTCEN2_5	(dtcen2.BIT_NUMBER.bit5)
	#define	DTCEN2_6	(dtcen2.BIT_NUMBER.bit6)
	#define	DTCEN2_7	(dtcen2.BIT_NUMBER.bit7)
	#define	DTCEN2		(dtcen2.ALL)
#endif

/* DTCEN3 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN3;

SFR_GLOBAL	SFR_DTCEN3	dtcen3;

#ifdef __RL78__
	#define	DTCEN3_0	(DTCEN3.0)
	#define	DTCEN3_1	(DTCEN3.1)
	#define	DTCEN3_2	(DTCEN3.2)
	#define	DTCEN3_3	(DTCEN3.3)
	#define	DTCEN3_4	(DTCEN3.4)
	#define	DTCEN3_5	(DTCEN3.5)
	#define	DTCEN3_6	(DTCEN3.6)
	#define	DTCEN3_7	(DTCEN3.7)
#else
	#define	DTCEN30		(dtcen3.BIT_NUMBER.bit0)
	#define	DTCEN31		(dtcen3.BIT_NUMBER.bit1)
	#define	DTCEN32		(dtcen3.BIT_NUMBER.bit2)
	#define	DTCEN33		(dtcen3.BIT_NUMBER.bit3)
	#define	DTCEN34		(dtcen3.BIT_NUMBER.bit4)
	#define	DTCEN35		(dtcen3.BIT_NUMBER.bit5)
	#define	DTCEN36		(dtcen3.BIT_NUMBER.bit6)
	#define	DTCEN37		(dtcen3.BIT_NUMBER.bit7)
	#define	DTCEN3_0	(dtcen3.BIT_NUMBER.bit0)
	#define	DTCEN3_1	(dtcen3.BIT_NUMBER.bit1)
	#define	DTCEN3_2	(dtcen3.BIT_NUMBER.bit2)
	#define	DTCEN3_3	(dtcen3.BIT_NUMBER.bit3)
	#define	DTCEN3_4	(dtcen3.BIT_NUMBER.bit4)
	#define	DTCEN3_5	(dtcen3.BIT_NUMBER.bit5)
	#define	DTCEN3_6	(dtcen3.BIT_NUMBER.bit6)
	#define	DTCEN3_7	(dtcen3.BIT_NUMBER.bit7)
	#define	DTCEN3		(dtcen3.ALL)
#endif

/* DTCEN4 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN4;

SFR_GLOBAL	SFR_DTCEN4	dtcen4;

#ifdef __RL78__
	#define	DTCEN4_0	(DTCEN4.0)
	#define	DTCEN4_1	(DTCEN4.1)
	#define	DTCEN4_2	(DTCEN4.2)
	#define	DTCEN4_3	(DTCEN4.3)
	#define	DTCEN4_4	(DTCEN4.4)
	#define	DTCEN4_5	(DTCEN4.5)
	#define	DTCEN4_6	(DTCEN4.6)
	#define	DTCEN4_7	(DTCEN4.7)
#else
	#define	DTCEN40		(dtcen4.BIT_NUMBER.bit0)
	#define	DTCEN41		(dtcen4.BIT_NUMBER.bit1)
	#define	DTCEN42		(dtcen4.BIT_NUMBER.bit2)
	#define	DTCEN43		(dtcen4.BIT_NUMBER.bit3)
	#define	DTCEN44		(dtcen4.BIT_NUMBER.bit4)
	#define	DTCEN45		(dtcen4.BIT_NUMBER.bit5)
	#define	DTCEN46		(dtcen4.BIT_NUMBER.bit6)
	#define	DTCEN47		(dtcen4.BIT_NUMBER.bit7)
	#define	DTCEN4_0	(dtcen4.BIT_NUMBER.bit0)
	#define	DTCEN4_1	(dtcen4.BIT_NUMBER.bit1)
	#define	DTCEN4_2	(dtcen4.BIT_NUMBER.bit2)
	#define	DTCEN4_3	(dtcen4.BIT_NUMBER.bit3)
	#define	DTCEN4_4	(dtcen4.BIT_NUMBER.bit4)
	#define	DTCEN4_5	(dtcen4.BIT_NUMBER.bit5)
	#define	DTCEN4_6	(dtcen4.BIT_NUMBER.bit6)
	#define	DTCEN4_7	(dtcen4.BIT_NUMBER.bit7)
	#define	DTCEN4		(dtcen4.ALL)
#endif

/* DTCEN5 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_DTCEN5;

SFR_GLOBAL	SFR_DTCEN5	dtcen5;

#ifdef __RL78__
	#define	DTCEN5_0	(DTCEN5.0)
	#define	DTCEN5_1	(DTCEN5.1)
	#define	DTCEN5_2	(DTCEN5.2)
	#define	DTCEN5_3	(DTCEN5.3)
	#define	DTCEN5_4	(DTCEN5.4)
	#define	DTCEN5_5	(DTCEN5.5)
	#define	DTCEN5_6	(DTCEN5.6)
	#define	DTCEN5_7	(DTCEN5.7)
#else
	#define	DTCEN50		(dtcen5.BIT_NUMBER.bit0)
	#define	DTCEN51		(dtcen5.BIT_NUMBER.bit1)
	#define	DTCEN52		(dtcen5.BIT_NUMBER.bit2)
	#define	DTCEN53		(dtcen5.BIT_NUMBER.bit3)
	#define	DTCEN54		(dtcen5.BIT_NUMBER.bit4)
	#define	DTCEN55		(dtcen5.BIT_NUMBER.bit5)
	#define	DTCEN56		(dtcen5.BIT_NUMBER.bit6)
	#define	DTCEN57		(dtcen5.BIT_NUMBER.bit7)
	#define	DTCEN5_0	(dtcen5.BIT_NUMBER.bit0)
	#define	DTCEN5_1	(dtcen5.BIT_NUMBER.bit1)
	#define	DTCEN5_2	(dtcen5.BIT_NUMBER.bit2)
	#define	DTCEN5_3	(dtcen5.BIT_NUMBER.bit3)
	#define	DTCEN5_4	(dtcen5.BIT_NUMBER.bit4)
	#define	DTCEN5_5	(dtcen5.BIT_NUMBER.bit5)
	#define	DTCEN5_6	(dtcen5.BIT_NUMBER.bit6)
	#define	DTCEN5_7	(dtcen5.BIT_NUMBER.bit7)
	#define	DTCEN5		(dtcen5.ALL)
#endif

/* CRC0CTL */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_CRC0CTL;

SFR_GLOBAL	SFR_CRC0CTL	crc0ctl;

#ifdef __RL78__
	#define	CRC0CTL_0	(CRC0CTL.0)
	#define	CRC0CTL_1	(CRC0CTL.1)
	#define	CRC0CTL_2	(CRC0CTL.2)
	#define	CRC0CTL_3	(CRC0CTL.3)
	#define	CRC0CTL_4	(CRC0CTL.4)
	#define	CRC0CTL_5	(CRC0CTL.5)
	#define	CRC0CTL_6	(CRC0CTL.6)
	#define	CRC0CTL_7	(CRC0CTL.7)
#else
	#define	CRC0EN		(crc0ctl.BIT_NUMBER.bit7)
	#define	CRC0CTL_0	(crc0ctl.BIT_NUMBER.bit0)
	#define	CRC0CTL_1	(crc0ctl.BIT_NUMBER.bit1)
	#define	CRC0CTL_2	(crc0ctl.BIT_NUMBER.bit2)
	#define	CRC0CTL_3	(crc0ctl.BIT_NUMBER.bit3)
	#define	CRC0CTL_4	(crc0ctl.BIT_NUMBER.bit4)
	#define	CRC0CTL_5	(crc0ctl.BIT_NUMBER.bit5)
	#define	CRC0CTL_6	(crc0ctl.BIT_NUMBER.bit6)
	#define	CRC0CTL_7	(crc0ctl.BIT_NUMBER.bit7)
	#define	CRC0CTL		(crc0ctl.ALL)
#endif

/* PGCRCL */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT pgcrcl;
#ifdef __RL78__
#else
	#define	PGCRCL	(pgcrcl)
#endif

/* CRCMD */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	crcmd;

#ifdef __RL78__
#else
	#define	CRCMD	(crcmd)
#endif

/* CRCD */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT crcd;
#ifdef __RL78__
#else
	#define	CRCD	(crcd)
#endif

/* C0CFGLL */
#ifdef __RL78__
#else
	#define	C0CFGLL	(c0cfgl.BYTE.c0cfgll)
#endif

/* C0CFGLH */
#ifdef __RL78__
#else
	#define	C0CFGLH	(c0cfgl.BYTE.c0cfglh)
#endif

/* C0CFGL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0cfgll;
	SFR_UNSIGNED_SHORT_INT	c0cfglh;
}SFR_BYTE_C0CFGL;

typedef union{
	SFR_BYTE_C0CFGL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0CFGL;

SFR_GLOBAL	SFR_C0CFGL	c0cfgl;

#ifdef __RL78__
#else
	#define	C0CFGL	(c0cfgl.ALL)
#endif

/* C0CFGHL */
#ifdef __RL78__
#else
	#define	C0CFGHL	(c0cfgh.BYTE.c0cfghl)
#endif

/* C0CFGHH */
#ifdef __RL78__
#else
	#define	C0CFGHH	(c0cfgh.BYTE.c0cfghh)
#endif

/* C0CFGH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0cfghl;
	SFR_UNSIGNED_SHORT_INT	c0cfghh;
}SFR_BYTE_C0CFGH;

typedef union{
	SFR_BYTE_C0CFGL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0CFGH;

SFR_GLOBAL	SFR_C0CFGH	c0cfgh;

#ifdef __RL78__
#else
	#define	C0CFGH	(c0cfgh.ALL)
#endif

/* C0CTRLL */
#ifdef __RL78__
#else
	#define	C0CTRLL	(c0ctrl.BYTE.c0ctrll)
#endif

/* C0CTRLH */
#ifdef __RL78__
#else
	#define	C0CTRLH	(c0ctrl.BYTE.c0ctrlh)
#endif

/* C0CTRL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0ctrll;
	SFR_UNSIGNED_SHORT_INT	c0ctrlh;
}SFR_BYTE_C0CTRL;

typedef union{
	SFR_BYTE_C0CTRL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0CTRL;

SFR_GLOBAL	SFR_C0CTRL	c0ctrl;

#ifdef __RL78__
#else
	#define	C0CTRL	(c0ctrl.ALL)
#endif

/* C0CTRHL */
#ifdef __RL78__
#else
	#define	C0CTRHL	(c0ctrh.BYTE.c0ctrhl)
#endif

/* C0CTRHH */
#ifdef __RL78__
#else
	#define	C0CTRHH	(c0ctrh.BYTE.c0ctrhh)
#endif

/* C0CTRH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0ctrhl;
	SFR_UNSIGNED_SHORT_INT	c0ctrhh;
}SFR_BYTE_C0CTRH;

typedef union{
	SFR_BYTE_C0CFGL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0CTRH;

SFR_GLOBAL	SFR_C0CTRH	c0ctrh;

#ifdef __RL78__
#else
	#define	C0CTRH	(c0ctrh.ALL)
#endif

/* C0STSLL */
#ifdef __RL78__
#else
	#define	C0STSLL	(c0stsl.BYTE.c0stsll)
#endif

/* C0STSLH */
#ifdef __RL78__
#else
	#define	C0STSLH	(c0stsl.BYTE.c0stslh)
#endif

/* C0STSL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0stsll;
	SFR_UNSIGNED_SHORT_INT	c0stslh;
}SFR_BYTE_C0STSL;

typedef union{
	SFR_BYTE_C0STSL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0STSL;

SFR_GLOBAL	SFR_C0STSL	c0stsl;

#ifdef __RL78__
#else
	#define	C0STSL	(c0stsl.ALL)
#endif

/* C0STSHL */
#ifdef __RL78__
#else
	#define	C0STSHL	(c0stsh.BYTE.c0stshl)
#endif

/* C0STSHH */
#ifdef __RL78__
#else
	#define	C0STSHH	(c0stsh.BYTE.c0stshh)
#endif

/* C0STSH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0stshl;
	SFR_UNSIGNED_SHORT_INT	c0stshh;
}SFR_BYTE_C0STSH;

typedef union{
	SFR_BYTE_C0STSH	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0STSH;

SFR_GLOBAL	SFR_C0STSH	c0stsh;

#ifdef __RL78__
#else
	#define	C0STSH	(c0stsh.ALL)
#endif

/* C0ERFLLL */
#ifdef __RL78__
#else
	#define	C0ERFLLL	(c0erfll.BYTE.c0erflll)
#endif

/* C0ERFLLH */
#ifdef __RL78__
#else
	#define	C0ERFLLH	(c0erfll.BYTE.c0erfllh)
#endif

/* C0ERFLL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0erflll;
	SFR_UNSIGNED_SHORT_INT	c0erfllh;
}SFR_BYTE_C0ERFLL;

typedef union{
	SFR_BYTE_C0ERFLL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0ERFLL;

SFR_GLOBAL	SFR_C0ERFLL	c0erfll;

#ifdef __RL78__
#else
	#define	C0ERFLL	(c0erfll.ALL)
#endif

/* C0ERFLHL */
#ifdef __RL78__
#else
	#define	C0ERFLHL	(c0erflh.BYTE.c0erflhl)
#endif

/* C0ERFLHH */
#ifdef __RL78__
#else
	#define	C0ERFLHH	(c0erflh.BYTE.c0erflhh)
#endif

/* C0ERFLH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	c0erflhl;
	SFR_UNSIGNED_SHORT_INT	c0erflhh;
}SFR_BYTE_C0ERFLH;

typedef union{
	SFR_BYTE_C0ERFLH	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_C0ERFLH;

SFR_GLOBAL	SFR_C0ERFLH	c0erflh;

#ifdef __RL78__
#else
	#define	C0ERFLH	(c0erflh.ALL)
#endif

/* GCFGLL */
#ifdef __RL78__
#else
	#define	GCFGLL	(gcfgl.BYTE.gcfgll)
#endif

/* GCFGLH */
#ifdef __RL78__
#else
	#define	GCFGLH	(gcfgl.BYTE.gcfglh)
#endif

/* GCFGL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gcfgll;
	SFR_UNSIGNED_SHORT_INT	gcfglh;
}SFR_BYTE_GCFGL;

typedef union{
	SFR_BYTE_GCFGL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GCFGL;

SFR_GLOBAL	SFR_GCFGL	gcfgl;

#ifdef __RL78__
#else
	#define	GCFGL	(gcfgl.ALL)
#endif

/* GCFGHL */
#ifdef __RL78__
#else
	#define	GCFGHL	(gcfgh.BYTE.gcfghl)
#endif

/* GCFGHH */
#ifdef __RL78__
#else
	#define	GCFGHH	(gcfgh.BYTE.gcfghh)
#endif

/* GCFGH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gcfghl;
	SFR_UNSIGNED_SHORT_INT	gcfghh;
}SFR_BYTE_GCFGH;

typedef union{
	SFR_BYTE_GCFGL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GCFGH;

SFR_GLOBAL	SFR_GCFGH	gcfgh;

#ifdef __RL78__
#else
	#define	GCFGH	(gcfgh.ALL)
#endif

/* GCTRLL */
#ifdef __RL78__
#else
	#define	GCTRLL	(gctrl.BYTE.gctrll)
#endif

/* GCTRLH */
#ifdef __RL78__
#else
	#define	GCTRLH	(gctrl.BYTE.gctrlh)
#endif

/* GCTRL */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gctrll;
	SFR_UNSIGNED_SHORT_INT	gctrlh;
}SFR_BYTE_GCTRL;

typedef union{
	SFR_BYTE_GCTRL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GCTRL;

SFR_GLOBAL	SFR_GCTRL	gctrl;

#ifdef __RL78__
#else
	#define	GCTRL	(gctrl.ALL)
#endif

/* GCTRHL */
#ifdef __RL78__
#else
	#define	GCTRHL	(gctrh.BYTE.gctrhl)
#endif

/* GCTRHH */
#ifdef __RL78__
#else
	#define	GCTRHH	(gctrh.BYTE.gctrhh)
#endif

/* GCTRH */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gctrhl;
	SFR_UNSIGNED_SHORT_INT	gctrhh;
}SFR_BYTE_GCTRH;

typedef union{
	SFR_BYTE_GCTRL	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GCTRH;

SFR_GLOBAL	SFR_GCTRH	gctrh;

#ifdef __RL78__
#else
	#define	GCTRH	(gctrh.ALL)
#endif

/* GSTSL */
#ifdef __RL78__
#else
	#define	GSTSL	(gsts.BYTE.gstsl)
#endif

/* GSTSH */
#ifdef __RL78__
#else
	#define	GSTSH	(gsts.BYTE.gstsh)
#endif

/* GSTS */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gstsl;
	SFR_UNSIGNED_SHORT_INT	gstsh;
}SFR_BYTE_GSTS;

typedef union{
	SFR_BYTE_GSTS	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GSTS;

SFR_GLOBAL	SFR_GSTS	gsts;

#ifdef __RL78__
#else
	#define	GSTS	(gsts.ALL)
#endif

/* GERFLL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	gerfll;

#ifdef __RL78__
#else
	#define	GERFLL	(gerfll)
#endif

/* GTSC */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT gtsc;
#ifdef __RL78__
#else
	#define	GTSC	(gtsc)
#endif

/* GAFLCFGL */
#ifdef __RL78__
#else
	#define	GAFLCFGL	(gaflcfg.BYTE.gaflcfgl)
#endif

/* GAFLCFGH */
#ifdef __RL78__
#else
	#define	GAFLCFGH	(gaflcfg.BYTE.gaflcfgh)
#endif

/* GAFLCFG */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflcfgl;
	SFR_UNSIGNED_SHORT_INT	gaflcfgh;
}SFR_BYTE_GAFLCFG;

typedef union{
	SFR_BYTE_GAFLCFG	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLCFG;

SFR_GLOBAL	SFR_GAFLCFG	gaflcfg;

#ifdef __RL78__
#else
	#define	GAFLCFG	(gaflcfg.ALL)
#endif

/* RMNBL */
#ifdef __RL78__
#else
	#define	RMNBL	(rmnb.BYTE.rmnbl)
#endif

/* RMNB */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmnbl;
	SFR_UNSIGNED_SHORT_INT	rmnbh;
}SFR_BYTE_RMNB;

typedef union{
	SFR_BYTE_RMNB	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMNB;

SFR_GLOBAL	SFR_RMNB	rmnb;

#ifdef __RL78__
#else
	#define	RMNB	(rmnb.ALL)
#endif

/* RMND0L */
#ifdef __RL78__
#else
	#define	RMND0L	(rmnd0.BYTE.rmnd0l)
#endif

/* RMND0H */
#ifdef __RL78__
#else
	#define	RMND0H	(rmnd0.BYTE.rmnd0h)
#endif

/* RMND0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmnd0l;
	SFR_UNSIGNED_SHORT_INT	rmnd0h;
}SFR_BYTE_RMND0;

typedef union{
	SFR_BYTE_RMND0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMND0;

SFR_GLOBAL	SFR_RMND0	rmnd0;

#ifdef __RL78__
#else
	#define	RMND0	(rmnd0.ALL)
#endif

/* RFCC0L */
#ifdef __RL78__
#else
	#define	RFCC0L	(rfcc0.BYTE.rfcc0l)
#endif

/* RFCC0H */
#ifdef __RL78__
#else
	#define	RFCC0H	(rfcc0.BYTE.rfcc0h)
#endif

/* RFCC0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfcc0l;
	SFR_UNSIGNED_SHORT_INT	rfcc0h;
}SFR_BYTE_RFCC0;

typedef union{
	SFR_BYTE_RFCC0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFCC0;

SFR_GLOBAL	SFR_RFCC0	rfcc0;

#ifdef __RL78__
#else
	#define	RFCC0	(rfcc0.ALL)
#endif


/* RFCC1L */
#ifdef __RL78__
#else
	#define	RFCC1L	(rfcc1.BYTE.rfcc1l)
#endif

/* RFCC1H */
#ifdef __RL78__
#else
	#define	RFCC1H	(rfcc1.BYTE.rfcc1h)
#endif

/* RFCC1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfcc1l;
	SFR_UNSIGNED_SHORT_INT	rfcc1h;
}SFR_BYTE_RFCC1;

typedef union{
	SFR_BYTE_RFCC1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFCC1;

SFR_GLOBAL	SFR_RFCC1	rfcc1;

#ifdef __RL78__
#else
	#define	RFCC1	(rfcc1.ALL)
#endif

/* RFSTS0L */
#ifdef __RL78__
#else
	#define	RFSTS0L	(rfsts0.BYTE.rfsts0l)
#endif

/* RFSTS0H */
#ifdef __RL78__
#else
	#define	RFSTS0H	(rfsts0.BYTE.rfsts0h)
#endif

/* RFSTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfsts0l;
	SFR_UNSIGNED_SHORT_INT	rfsts0h;
}SFR_BYTE_RFSTS0;

typedef union{
	SFR_BYTE_RFSTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFSTS0;

SFR_GLOBAL	SFR_RFSTS0	rfsts0;

#ifdef __RL78__
#else
	#define	RFSTS0	(rfsts0.ALL)
#endif


/* RFSTS1L */
#ifdef __RL78__
#else
	#define	RFSTS1L	(rfsts1.BYTE.rfsts1l)
#endif

/* RFSTS1H */
#ifdef __RL78__
#else
	#define	RFSTS1H	(rfsts1.BYTE.rfsts1h)
#endif

/* RFSTS1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfsts1l;
	SFR_UNSIGNED_SHORT_INT	rfsts1h;
}SFR_BYTE_RFSTS1;

typedef union{
	SFR_BYTE_RFSTS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFSTS1;

SFR_GLOBAL	SFR_RFSTS1	rfsts1;

#ifdef __RL78__
#else
	#define	RFSTS1	(rfsts1.ALL)
#endif

/* RFPCTR0L */
#ifdef __RL78__
#else
	#define	RFPCTR0L	(rfpctr0.BYTE.rfpctr0l)
#endif

/* RFPCTR0H */
#ifdef __RL78__
#else
	#define	RFPCTR0H	(rfpctr0.BYTE.rfpctr0h)
#endif

/* RFPCTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfpctr0l;
	SFR_UNSIGNED_SHORT_INT	rfpctr0h;
}SFR_BYTE_RFPCTR0;

typedef union{
	SFR_BYTE_RFPCTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFPCTR0;

SFR_GLOBAL	SFR_RFPCTR0	rfpctr0;

#ifdef __RL78__
#else
	#define	RFPCTR0	(rfpctr0.ALL)
#endif

/* RFPCTR1L */
#ifdef __RL78__
#else
	#define	RFPCTR1L	(rfpctr1.BYTE.rfpctr1l)
#endif

/* RFPCTR1H */
#ifdef __RL78__
#else
	#define	RFPCTR1H	(rfpctr1.BYTE.rfpctr1h)
#endif

/* RFPCTR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfpctr1l;
	SFR_UNSIGNED_SHORT_INT	rfpctr1h;
}SFR_BYTE_RFPCTR1;

typedef union{
	SFR_BYTE_RFPCTR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFPCTR1;

SFR_GLOBAL	SFR_RFPCTR1	rfpctr1;

#ifdef __RL78__
#else
	#define	RFPCTR1	(rfpctr1.ALL)
#endif

/* CFCCL0L */
#ifdef __RL78__
#else
	#define	CFCCL0L	(cfccl0.BYTE.cfccl0l)
#endif

/* CFCCL0H */
#ifdef __RL78__
#else
	#define	CFCCL0H	(cfccl0.BYTE.cfccl0h)
#endif

/* CFCCL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfccl0l;
	SFR_UNSIGNED_SHORT_INT	cfccl0h;
}SFR_BYTE_CFCCL0;

typedef union{
	SFR_BYTE_CFCCL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFCCL0;

SFR_GLOBAL	SFR_CFCCL0	cfccl0;

#ifdef __RL78__
#else
	#define	CFCCL0	(cfccl0.ALL)
#endif

/* CFCCH0L */
#ifdef __RL78__
#else
	#define	CFCCH0L	(cfcch0.BYTE.cfcch0l)
#endif

/* CFCCH0H */
#ifdef __RL78__
#else
	#define	CFCCH0H	(cfcch0.BYTE.cfcch0h)
#endif

/* CFCCH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfcch0l;
	SFR_UNSIGNED_SHORT_INT	cfcch0h;
}SFR_BYTE_CFCCH0;

typedef union{
	SFR_BYTE_CFCCH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFCCH0;

SFR_GLOBAL	SFR_CFCCH0	cfcch0;

#ifdef __RL78__
#else
	#define	CFCCH0	(cfcch0.ALL)
#endif

/* CFSTS0L */
#ifdef __RL78__
#else
	#define	CFSTS0L	(cfsts0.BYTE.cfsts0l)
#endif

/* CFSTS0H */
#ifdef __RL78__
#else
	#define	CFSTS0H	(cfsts0.BYTE.cfsts0h)
#endif

/* CFSTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfsts0l;
	SFR_UNSIGNED_SHORT_INT	cfsts0h;
}SFR_BYTE_CFSTS0;

typedef union{
	SFR_BYTE_CFSTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFSTS0;

SFR_GLOBAL	SFR_CFSTS0	cfsts0;

#ifdef __RL78__
#else
	#define	CFSTS0	(cfsts0.ALL)
#endif

/* CFPCTR0L */
#ifdef __RL78__
#else
	#define	CFPCTR0L	(cfpctr0.BYTE.cfpctr0l)
#endif

/* CFPCTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfpctr0l;
	SFR_UNSIGNED_SHORT_INT	cfpctr0h;
}SFR_BYTE_CFPCTR0;

typedef union{
	SFR_BYTE_CFPCTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFPCTR0;

SFR_GLOBAL	SFR_CFPCTR0	cfpctr0;

#ifdef __RL78__
#else
	#define	CFPCTR0	(cfpctr0.ALL)
#endif

/* RFMSTS */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	rfmsts;

#ifdef __RL78__
#else
	#define	RFMSTS	(rfmsts)
#endif

/* CFMSTS */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	cfmsts;

#ifdef __RL78__
#else
	#define	CFMSTS	(cfmsts)
#endif

/* RFISTS */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	rfists;

#ifdef __RL78__
#else
	#define	RFISTS	(rfists)
#endif

/* CFISTS */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	cfists;

#ifdef __RL78__
#else
	#define	CFISTS	(cfists)
#endif

/* TMC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmc0;

#ifdef __RL78__
#else
	#define	TMC0	(tmc0)
#endif

/* TMC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmc1;

#ifdef __RL78__
#else
	#define	TMC1	(tmc1)
#endif

/* TMC2 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmc2;

#ifdef __RL78__
#else
	#define	TMC2	(tmc2)
#endif

/* TMC3 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmc3;

#ifdef __RL78__
#else
	#define	TMC3	(tmc3)
#endif

/* TMSTS0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmsts0;

#ifdef __RL78__
#else
	#define	TMSTS0	(tmsts0)
#endif

/* TMSTS1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmsts1;

#ifdef __RL78__
#else
	#define	TMSTS1	(tmsts1)
#endif

/* TMSTS2 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmsts2;

#ifdef __RL78__
#else
	#define	TMSTS2	(tmsts2)
#endif

/* TMSTS3 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	tmsts3;

#ifdef __RL78__
#else
	#define	TMSTS3	(tmsts3)
#endif

/* TMTRSTSL */
#ifdef __RL78__
#else
	#define	TMTRSTSL	(tmtrsts.BYTE.tmtrstsl)
#endif

/* TMTRSTSH */
#ifdef __RL78__
#else
	#define	TMTRSTSH	(tmtrsts.BYTE.tmtrstsh)
#endif

/* TMTRSTS */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmtrstsl;
	SFR_UNSIGNED_SHORT_INT	tmtrstsh;
}SFR_BYTE_TMTRSTS;

typedef union{
	SFR_BYTE_TMTRSTS	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMTRSTS;

SFR_GLOBAL	SFR_TMTRSTS	tmtrsts;

#ifdef __RL78__
#else
	#define	TMTRSTS	(tmtrsts.ALL)
#endif

/* TMTCSTSL */
#ifdef __RL78__
#else
	#define	TMTCSTSL	(tmtcsts.BYTE.tmtcstsl)
#endif

/* TMTCSTSH */
#ifdef __RL78__
#else
	#define	TMTCSTSH	(tmtcsts.BYTE.tmtcstsh)
#endif

/* TMTCSTS */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmtcstsl;
	SFR_UNSIGNED_SHORT_INT	tmtcstsh;
}SFR_BYTE_TMTCSTS;

typedef union{
	SFR_BYTE_TMTCSTS	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMTCSTS;

SFR_GLOBAL	SFR_TMTCSTS	tmtcsts;

#ifdef __RL78__
#else
	#define	TMTCSTS	(tmtcsts.ALL)
#endif

/* TMTASTSL */
#ifdef __RL78__
#else
	#define	TMTASTSL	(tmtasts.BYTE.tmtastsl)
#endif

/* TMTASTSH */
#ifdef __RL78__
#else
	#define	TMTASTSH	(tmtasts.BYTE.tmtastsh)
#endif

/* TMTASTS */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmtastsl;
	SFR_UNSIGNED_SHORT_INT	tmtastsh;
}SFR_BYTE_TMTASTS;

typedef union{
	SFR_BYTE_TMTASTS	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMTASTS;

SFR_GLOBAL	SFR_TMTASTS	tmtasts;

#ifdef __RL78__
#else
	#define	TMTASTS	(tmtasts.ALL)
#endif

/* TMIECL */
#ifdef __RL78__
#else
	#define	TMIECL	(tmiec.BYTE.tmiecl)
#endif

/* TMIECH */
#ifdef __RL78__
#else
	#define	TMIECH	(tmiec.BYTE.tmiech)
#endif

/* TMIEC */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmiecl;
	SFR_UNSIGNED_SHORT_INT	tmiech;
}SFR_BYTE_TMIEC;

typedef union{
	SFR_BYTE_TMIEC	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIEC;

SFR_GLOBAL	SFR_TMIEC	tmiec;

#ifdef __RL78__
#else
	#define	TMIEC	(tmiec.ALL)
#endif

/* THLCC0L */
#ifdef __RL78__
#else
	#define	THLCC0L	(thlcc0.BYTE.thlcc0l)
#endif

/* THLCC0H */
#ifdef __RL78__
#else
	#define	THLCC0H	(thlcc0.BYTE.thlcc0h)
#endif

/* THLCC0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	thlcc0l;
	SFR_UNSIGNED_SHORT_INT	thlcc0h;
}SFR_BYTE_THLCC0;

typedef union{
	SFR_BYTE_THLCC0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_THLCC0;

SFR_GLOBAL	SFR_THLCC0	thlcc0;

#ifdef __RL78__
#else
	#define	THLCC0	(thlcc0.ALL)
#endif

/* THLSTS0L */
#ifdef __RL78__
#else
	#define	THLSTS0L	(thlsts0.BYTE.thlsts0l)
#endif

/* THLSTS0H */
#ifdef __RL78__
#else
	#define	THLSTS0H	(thlsts0.BYTE.thlsts0h)
#endif

/* THLSTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	thlsts0l;
	SFR_UNSIGNED_SHORT_INT	thlsts0h;
}SFR_BYTE_THLSTS0;

typedef union{
	SFR_BYTE_THLSTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_THLSTS0;

SFR_GLOBAL	SFR_THLSTS0	thlsts0;

#ifdef __RL78__
#else
	#define	THLSTS0	(thlsts0.ALL)
#endif

/* THLPCTR0L */
#ifdef __RL78__
#else
	#define	THLPCTR0L	(thlpctr0.BYTE.thlpctr0l)
#endif

/* THLPCTR0H */
#ifdef __RL78__
#else
	#define	THLPCTR0H	(thlpctr0.BYTE.thlpctr0h)
#endif

/* THLPCTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	thlpctr0l;
	SFR_UNSIGNED_SHORT_INT	thlpctr0h;
}SFR_BYTE_THLPCTR0;

typedef union{
	SFR_BYTE_THLPCTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_THLPCTR0;

SFR_GLOBAL	SFR_THLPCTR0	thlpctr0;

#ifdef __RL78__
#else
	#define	THLPCTR0	(thlpctr0.ALL)
#endif

/* GTINTSTSL */
#ifdef __RL78__
#else
	#define	GTINTSTSL	(gtintsts.BYTE.gtintstsl)
#endif

/* GTINTSTSH */
#ifdef __RL78__
#else
	#define	GTINTSTSH	(gtintsts.BYTE.gtintstsh)
#endif

/* GTINTSTS */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gtintstsl;
	SFR_UNSIGNED_SHORT_INT	gtintstsh;
}SFR_BYTE_GTINTSTS;

typedef union{
	SFR_BYTE_GTINTSTS	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GTINTSTS;

SFR_GLOBAL	SFR_GTINTSTS	gtintsts;

#ifdef __RL78__
#else
	#define	GTINTSTS	(gtintsts.ALL)
#endif

/* GRWCRL */
#ifdef __RL78__
#else
	#define	GRWCRL	(grwcr.BYTE.grwcrl)
#endif

/* GRWCRH */
#ifdef __RL78__
#else
	#define	GRWCRH	(grwcr.BYTE.grwcrh)
#endif

/* GRWCR */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	grwcrl;
	SFR_UNSIGNED_SHORT_INT	grwcrh;
}SFR_BYTE_GRWCR;

typedef union{
	SFR_BYTE_GRWCR	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GRWCR;

SFR_GLOBAL	SFR_GRWCR	grwcr;

#ifdef __RL78__
#else
	#define	GRWCR	(grwcr.ALL)
#endif

/* GTSTCFGL */
#ifdef __RL78__
#else
	#define	GTSTCFGL	(gtstcfg.BYTE.gtstcfgl)
#endif

/* GTSTCFGH */
#ifdef __RL78__
#else
	#define	GTSTCFGH	(gtstcfg.BYTE.gtstcfgh)
#endif

/* GTSTCFG */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gtstcfgl;
	SFR_UNSIGNED_SHORT_INT	gtstcfgh;
}SFR_BYTE_GTSTCFG;

typedef union{
	SFR_BYTE_GTSTCFG	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GTSTCFG;

SFR_GLOBAL	SFR_GTSTCFG	gtstcfg;

#ifdef __RL78__
#else
	#define	GTSTCFG	(gtstcfg.ALL)
#endif

/* GTSTCTRL */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	gtstctrl;

#ifdef __RL78__
#else
	#define	GTSTCTRL	(gtstctrl)
#endif

/* GLOCKK */
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT glockk;
#ifdef __RL78__
#else
	#define	GLOCKK	(glockk)
#endif

/* CAN受信ルール登録レジスタここから*/
/* GAFLIDL0L */
#ifdef __RL78__
#else
	#define	GAFLIDL0L	(gaflidl0.BYTE.gaflidl0l)
#endif

/* GAFLIDL0H */
#ifdef __RL78__
#else
	#define	GAFLIDL0H	(gaflidl0.BYTE.gaflidl0h)
#endif

/* GAFLIDL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl0l;
	SFR_UNSIGNED_SHORT_INT	gaflidl0h;
}SFR_BYTE_GAFLIDL0;

typedef union{
	SFR_BYTE_GAFLIDL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL0;

SFR_GLOBAL	SFR_GAFLIDL0	gaflidl0;

#ifdef __RL78__
#else
	#define	GAFLIDL0	(gaflidl0.ALL)
#endif

/* GAFLIDH0L */
#ifdef __RL78__
#else
	#define	GAFLIDH0L	(gaflidh0.BYTE.gaflidh0l)
#endif

/* GAFLIDH0H */
#ifdef __RL78__
#else
	#define	GAFLIDH0H	(gaflidh0.BYTE.gaflidh0h)
#endif

/* GAFLIDH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh0l;
	SFR_UNSIGNED_SHORT_INT	gaflidh0h;
}SFR_BYTE_GAFLIDH0;

typedef union{
	SFR_BYTE_GAFLIDH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH0;

SFR_GLOBAL	SFR_GAFLIDH0	gaflidh0;

#ifdef __RL78__
#else
	#define	GAFLIDH0	(gaflidh0.ALL)
#endif

/* GAFLML0L */
#ifdef __RL78__
#else
	#define	GAFLML0L	(gaflml0.BYTE.gaflml0l)
#endif

/* GAFLML0H */
#ifdef __RL78__
#else
	#define	GAFLML0H	(gaflml0.BYTE.gaflml0h)
#endif

/* GAFLML0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml0l;
	SFR_UNSIGNED_SHORT_INT	gaflml0h;
}SFR_BYTE_GAFLML0;

typedef union{
	SFR_BYTE_GAFLML0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML0;

SFR_GLOBAL	SFR_GAFLML0	gaflml0;

#ifdef __RL78__
#else
	#define	GAFLML0	(gaflml0.ALL)
#endif

/* GAFLMH0L */
#ifdef __RL78__
#else
	#define	GAFLMH0L	(gaflmh0.BYTE.gaflmh0l)
#endif

/* GAFLMH0H */
#ifdef __RL78__
#else
	#define	GAFLMH0H	(gaflmh0.BYTE.gaflmh0h)
#endif

/* GAFLMH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh0l;
	SFR_UNSIGNED_SHORT_INT	gaflmh0h;
}SFR_BYTE_GAFLMH0;

typedef union{
	SFR_BYTE_GAFLMH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH0;

SFR_GLOBAL	SFR_GAFLMH0	gaflmh0;

#ifdef __RL78__
#else
	#define	GAFLMH0	(gaflmh0.ALL)
#endif

/* GAFLPL0L */
#ifdef __RL78__
#else
	#define	GAFLPL0L	(gaflpl0.BYTE.gaflpl0l)
#endif

/* GAFLPL0H */
#ifdef __RL78__
#else
	#define	GAFLPL0H	(gaflpl0.BYTE.gaflpl0h)
#endif

/* GAFLPL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl0l;
	SFR_UNSIGNED_SHORT_INT	gaflpl0h;
}SFR_BYTE_GAFLPL0;

typedef union{
	SFR_BYTE_GAFLPL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL0;

SFR_GLOBAL	SFR_GAFLPL0	gaflpl0;

#ifdef __RL78__
#else
	#define	GAFLPL0	(gaflpl0.ALL)
#endif

/* GAFLPH0L */
#ifdef __RL78__
#else
	#define	GAFLPH0L	(gaflph0.BYTE.gaflph0l)
#endif

/* GAFLPH0H */
#ifdef __RL78__
#else
	#define	GAFLPH0H	(gaflph0.BYTE.gaflph0h)
#endif

/* GAFLPH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph0l;
	SFR_UNSIGNED_SHORT_INT	gaflph0h;
}SFR_BYTE_GAFLPH0;

typedef union{
	SFR_BYTE_GAFLPH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH0;

SFR_GLOBAL	SFR_GAFLPH0	gaflph0;

#ifdef __RL78__
#else
	#define	GAFLPH0	(gaflph0.ALL)
#endif

/* GAFLIDL1L */
#ifdef __RL78__
#else
	#define	GAFLIDL1L	(gaflidl1.BYTE.gaflidl1l)
#endif

/* GAFLIDL1H */
#ifdef __RL78__
#else
	#define	GAFLIDL1H	(gaflidl1.BYTE.gaflidl1h)
#endif

/* GAFLIDL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl1l;
	SFR_UNSIGNED_SHORT_INT	gaflidl1h;
}SFR_BYTE_GAFLIDL1;

typedef union{
	SFR_BYTE_GAFLIDL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL1;

SFR_GLOBAL	SFR_GAFLIDL1	gaflidl1;

#ifdef __RL78__
#else
	#define	GAFLIDL1	(gaflidl1.ALL)
#endif

/* GAFLIDH1L */
#ifdef __RL78__
#else
	#define	GAFLIDH1L	(gaflidh1.BYTE.gaflidh1l)
#endif

/* GAFLIDH1H */
#ifdef __RL78__
#else
	#define	GAFLIDH1H	(gaflidh1.BYTE.gaflidh1h)
#endif

/* GAFLIDH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh1l;
	SFR_UNSIGNED_SHORT_INT	gaflidh1h;
}SFR_BYTE_GAFLIDH1;

typedef union{
	SFR_BYTE_GAFLIDH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH1;

SFR_GLOBAL	SFR_GAFLIDH1	gaflidh1;

#ifdef __RL78__
#else
	#define	GAFLIDH1	(gaflidh1.ALL)
#endif

/* GAFLML1L */
#ifdef __RL78__
#else
	#define	GAFLML1L	(gaflml1.BYTE.gaflml1l)
#endif

/* GAFLML1H */
#ifdef __RL78__
#else
	#define	GAFLML1H	(gaflml1.BYTE.gaflml1h)
#endif

/* GAFLML1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml1l;
	SFR_UNSIGNED_SHORT_INT	gaflml1h;
}SFR_BYTE_GAFLML1;

typedef union{
	SFR_BYTE_GAFLML1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML1;

SFR_GLOBAL	SFR_GAFLML1	gaflml1;

#ifdef __RL78__
#else
	#define	GAFLML1	(gaflml1.ALL)
#endif

/* GAFLMH1L */
#ifdef __RL78__
#else
	#define	GAFLMH1L	(gaflmh1.BYTE.gaflmh1l)
#endif

/* GAFLMH1H */
#ifdef __RL78__
#else
	#define	GAFLMH1H	(gaflmh1.BYTE.gaflmh1h)
#endif

/* GAFLMH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh1l;
	SFR_UNSIGNED_SHORT_INT	gaflmh1h;
}SFR_BYTE_GAFLMH1;

typedef union{
	SFR_BYTE_GAFLMH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH1;

SFR_GLOBAL	SFR_GAFLMH1	gaflmh1;

#ifdef __RL78__
#else
	#define	GAFLMH1	(gaflmh1.ALL)
#endif

/* GAFLPL1L */
#ifdef __RL78__
#else
	#define	GAFLPL1L	(gaflpl1.BYTE.gaflpl1l)
#endif

/* GAFLPL1H */
#ifdef __RL78__
#else
	#define	GAFLPL1H	(gaflpl1.BYTE.gaflpl1h)
#endif

/* GAFLPL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl1l;
	SFR_UNSIGNED_SHORT_INT	gaflpl1h;
}SFR_BYTE_GAFLPL1;

typedef union{
	SFR_BYTE_GAFLPL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL1;

SFR_GLOBAL	SFR_GAFLPL1	gaflpl1;

#ifdef __RL78__
#else
	#define	GAFLPL1	(gaflpl1.ALL)
#endif

/* GAFLPH1L */
#ifdef __RL78__
#else
	#define	GAFLPH1L	(gaflph1.BYTE.gaflph1l)
#endif

/* GAFLPH1H */
#ifdef __RL78__
#else
	#define	GAFLPH1H	(gaflph1.BYTE.gaflph1h)
#endif

/* GAFLPH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph1l;
	SFR_UNSIGNED_SHORT_INT	gaflph1h;
}SFR_BYTE_GAFLPH1;

typedef union{
	SFR_BYTE_GAFLPH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH1;

SFR_GLOBAL	SFR_GAFLPH1	gaflph1;

#ifdef __RL78__
#else
	#define	GAFLPH1	(gaflph1.ALL)
#endif

/* GAFLIDL2L */
#ifdef __RL78__
#else
	#define	GAFLIDL2L	(gaflidl2.BYTE.gaflidl2l)
#endif

/* GAFLIDL2H */
#ifdef __RL78__
#else
	#define	GAFLIDL2H	(gaflidl2.BYTE.gaflidl2h)
#endif

/* GAFLIDL2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl2l;
	SFR_UNSIGNED_SHORT_INT	gaflidl2h;
}SFR_BYTE_GAFLIDL2;

typedef union{
	SFR_BYTE_GAFLIDL2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL2;

SFR_GLOBAL	SFR_GAFLIDL2	gaflidl2;

#ifdef __RL78__
#else
	#define	GAFLIDL2	(gaflidl2.ALL)
#endif

/* GAFLIDH2L */
#ifdef __RL78__
#else
	#define	GAFLIDH2L	(gaflidh2.BYTE.gaflidh2l)
#endif

/* GAFLIDH2H */
#ifdef __RL78__
#else
	#define	GAFLIDH2H	(gaflidh2.BYTE.gaflidh2h)
#endif

/* GAFLIDH2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh2l;
	SFR_UNSIGNED_SHORT_INT	gaflidh2h;
}SFR_BYTE_GAFLIDH2;

typedef union{
	SFR_BYTE_GAFLIDH2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH2;

SFR_GLOBAL	SFR_GAFLIDH2	gaflidh2;

#ifdef __RL78__
#else
	#define	GAFLIDH2	(gaflidh2.ALL)
#endif

/* GAFLML2L */
#ifdef __RL78__
#else
	#define	GAFLML2L	(gaflml2.BYTE.gaflml2l)
#endif

/* GAFLML2H */
#ifdef __RL78__
#else
	#define	GAFLML2H	(gaflml2.BYTE.gaflml2h)
#endif

/* GAFLML2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml2l;
	SFR_UNSIGNED_SHORT_INT	gaflml2h;
}SFR_BYTE_GAFLML2;

typedef union{
	SFR_BYTE_GAFLML2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML2;

SFR_GLOBAL	SFR_GAFLML2	gaflml2;

#ifdef __RL78__
#else
	#define	GAFLML2	(gaflml2.ALL)
#endif

/* GAFLMH2L */
#ifdef __RL78__
#else
	#define	GAFLMH2L	(gaflmh2.BYTE.gaflmh2l)
#endif

/* GAFLMH2H */
#ifdef __RL78__
#else
	#define	GAFLMH2H	(gaflmh2.BYTE.gaflmh2h)
#endif

/* GAFLMH2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh2l;
	SFR_UNSIGNED_SHORT_INT	gaflmh2h;
}SFR_BYTE_GAFLMH2;

typedef union{
	SFR_BYTE_GAFLMH2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH2;

SFR_GLOBAL	SFR_GAFLMH2	gaflmh2;

#ifdef __RL78__
#else
	#define	GAFLMH2	(gaflmh2.ALL)
#endif

/* GAFLPL2L */
#ifdef __RL78__
#else
	#define	GAFLPL2L	(gaflpl2.BYTE.gaflpl2l)
#endif

/* GAFLPL2H */
#ifdef __RL78__
#else
	#define	GAFLPL2H	(gaflpl2.BYTE.gaflpl2h)
#endif

/* GAFLPL2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl2l;
	SFR_UNSIGNED_SHORT_INT	gaflpl2h;
}SFR_BYTE_GAFLPL2;

typedef union{
	SFR_BYTE_GAFLPL2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL2;

SFR_GLOBAL	SFR_GAFLPL2	gaflpl2;

#ifdef __RL78__
#else
	#define	GAFLPL2	(gaflpl2.ALL)
#endif

/* GAFLPH2L */
#ifdef __RL78__
#else
	#define	GAFLPH2L	(gaflph2.BYTE.gaflph2l)
#endif

/* GAFLPH2H */
#ifdef __RL78__
#else
	#define	GAFLPH2H	(gaflph2.BYTE.gaflph2h)
#endif

/* GAFLPH2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph2l;
	SFR_UNSIGNED_SHORT_INT	gaflph2h;
}SFR_BYTE_GAFLPH2;

typedef union{
	SFR_BYTE_GAFLPH2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH2;

SFR_GLOBAL	SFR_GAFLPH2	gaflph2;

#ifdef __RL78__
#else
	#define	GAFLPH2	(gaflph2.ALL)
#endif

/* GAFLIDL3L */
#ifdef __RL78__
#else
	#define	GAFLIDL3L	(gaflidl3.BYTE.gaflidl3l)
#endif

/* GAFLIDL3H */
#ifdef __RL78__
#else
	#define	GAFLIDL3H	(gaflidl3.BYTE.gaflidl3h)
#endif

/* GAFLIDL3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl3l;
	SFR_UNSIGNED_SHORT_INT	gaflidl3h;
}SFR_BYTE_GAFLIDL3;

typedef union{
	SFR_BYTE_GAFLIDL3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL3;

SFR_GLOBAL	SFR_GAFLIDL3	gaflidl3;

#ifdef __RL78__
#else
	#define	GAFLIDL3	(gaflidl3.ALL)
#endif

/* GAFLIDH3L */
#ifdef __RL78__
#else
	#define	GAFLIDH3L	(gaflidh3.BYTE.gaflidh3l)
#endif

/* GAFLIDH3H */
#ifdef __RL78__
#else
	#define	GAFLIDH3H	(gaflidh3.BYTE.gaflidh3h)
#endif

/* GAFLIDH3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh3l;
	SFR_UNSIGNED_SHORT_INT	gaflidh3h;
}SFR_BYTE_GAFLIDH3;

typedef union{
	SFR_BYTE_GAFLIDH3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH3;

SFR_GLOBAL	SFR_GAFLIDH3	gaflidh3;

#ifdef __RL78__
#else
	#define	GAFLIDH3	(gaflidh3.ALL)
#endif

/* GAFLML3L */
#ifdef __RL78__
#else
	#define	GAFLML3L	(gaflml3.BYTE.gaflml3l)
#endif

/* GAFLML3H */
#ifdef __RL78__
#else
	#define	GAFLML3H	(gaflml3.BYTE.gaflml3h)
#endif

/* GAFLML3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml3l;
	SFR_UNSIGNED_SHORT_INT	gaflml3h;
}SFR_BYTE_GAFLML3;

typedef union{
	SFR_BYTE_GAFLML3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML3;

SFR_GLOBAL	SFR_GAFLML3	gaflml3;

#ifdef __RL78__
#else
	#define	GAFLML3	(gaflml3.ALL)
#endif

/* GAFLMH3L */
#ifdef __RL78__
#else
	#define	GAFLMH3L	(gaflmh3.BYTE.gaflmh3l)
#endif

/* GAFLMH3H */
#ifdef __RL78__
#else
	#define	GAFLMH3H	(gaflmh3.BYTE.gaflmh3h)
#endif

/* GAFLMH3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh3l;
	SFR_UNSIGNED_SHORT_INT	gaflmh3h;
}SFR_BYTE_GAFLMH3;

typedef union{
	SFR_BYTE_GAFLMH3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH3;

SFR_GLOBAL	SFR_GAFLMH3	gaflmh3;

#ifdef __RL78__
#else
	#define	GAFLMH3	(gaflmh3.ALL)
#endif

/* GAFLPL3L */
#ifdef __RL78__
#else
	#define	GAFLPL3L	(gaflpl3.BYTE.gaflpl3l)
#endif

/* GAFLPL3H */
#ifdef __RL78__
#else
	#define	GAFLPL3H	(gaflpl3.BYTE.gaflpl3h)
#endif

/* GAFLPL3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl3l;
	SFR_UNSIGNED_SHORT_INT	gaflpl3h;
}SFR_BYTE_GAFLPL3;

typedef union{
	SFR_BYTE_GAFLPL3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL3;

SFR_GLOBAL	SFR_GAFLPL3	gaflpl3;

#ifdef __RL78__
#else
	#define	GAFLPL3	(gaflpl3.ALL)
#endif

/* GAFLPH3L */
#ifdef __RL78__
#else
	#define	GAFLPH3L	(gaflph3.BYTE.gaflph3l)
#endif

/* GAFLPH3H */
#ifdef __RL78__
#else
	#define	GAFLPH3H	(gaflph3.BYTE.gaflph3h)
#endif

/* GAFLPH3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph3l;
	SFR_UNSIGNED_SHORT_INT	gaflph3h;
}SFR_BYTE_GAFLPH3;

typedef union{
	SFR_BYTE_GAFLPH3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH3;

SFR_GLOBAL	SFR_GAFLPH3	gaflph3;

#ifdef __RL78__
#else
	#define	GAFLPH3	(gaflph3.ALL)
#endif

/* GAFLIDL4L */
#ifdef __RL78__
#else
	#define	GAFLIDL4L	(gaflidl4.BYTE.gaflidl4l)
#endif

/* GAFLIDL4H */
#ifdef __RL78__
#else
	#define	GAFLIDL4H	(gaflidl4.BYTE.gaflidl4h)
#endif

/* GAFLIDL4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl4l;
	SFR_UNSIGNED_SHORT_INT	gaflidl4h;
}SFR_BYTE_GAFLIDL4;

typedef union{
	SFR_BYTE_GAFLIDL4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL4;

SFR_GLOBAL	SFR_GAFLIDL4	gaflidl4;

#ifdef __RL78__
#else
	#define	GAFLIDL4	(gaflidl4.ALL)
#endif

/* GAFLIDH4L */
#ifdef __RL78__
#else
	#define	GAFLIDH4L	(gaflidh4.BYTE.gaflidh4l)
#endif

/* GAFLIDH4H */
#ifdef __RL78__
#else
	#define	GAFLIDH4H	(gaflidh4.BYTE.gaflidh4h)
#endif

/* GAFLIDH4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh4l;
	SFR_UNSIGNED_SHORT_INT	gaflidh4h;
}SFR_BYTE_GAFLIDH4;

typedef union{
	SFR_BYTE_GAFLIDH4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH4;

SFR_GLOBAL	SFR_GAFLIDH4	gaflidh4;

#ifdef __RL78__
#else
	#define	GAFLIDH4	(gaflidh4.ALL)
#endif

/* GAFLML4L */
#ifdef __RL78__
#else
	#define	GAFLML4L	(gaflml4.BYTE.gaflml4l)
#endif

/* GAFLML4H */
#ifdef __RL78__
#else
	#define	GAFLML4H	(gaflml4.BYTE.gaflml4h)
#endif

/* GAFLML4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml4l;
	SFR_UNSIGNED_SHORT_INT	gaflml4h;
}SFR_BYTE_GAFLML4;

typedef union{
	SFR_BYTE_GAFLML4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML4;

SFR_GLOBAL	SFR_GAFLML4	gaflml4;

#ifdef __RL78__
#else
	#define	GAFLML4	(gaflml4.ALL)
#endif

/* GAFLMH4L */
#ifdef __RL78__
#else
	#define	GAFLMH4L	(gaflmh4.BYTE.gaflmh4l)
#endif

/* GAFLMH4H */
#ifdef __RL78__
#else
	#define	GAFLMH4H	(gaflmh4.BYTE.gaflmh4h)
#endif

/* GAFLMH4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh4l;
	SFR_UNSIGNED_SHORT_INT	gaflmh4h;
}SFR_BYTE_GAFLMH4;

typedef union{
	SFR_BYTE_GAFLMH4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH4;

SFR_GLOBAL	SFR_GAFLMH4	gaflmh4;

#ifdef __RL78__
#else
	#define	GAFLMH4	(gaflmh4.ALL)
#endif

/* GAFLPL4L */
#ifdef __RL78__
#else
	#define	GAFLPL4L	(gaflpl4.BYTE.gaflpl4l)
#endif

/* GAFLPL4H */
#ifdef __RL78__
#else
	#define	GAFLPL4H	(gaflpl4.BYTE.gaflpl4h)
#endif

/* GAFLPL4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl4l;
	SFR_UNSIGNED_SHORT_INT	gaflpl4h;
}SFR_BYTE_GAFLPL4;

typedef union{
	SFR_BYTE_GAFLPL4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL4;

SFR_GLOBAL	SFR_GAFLPL4	gaflpl4;

#ifdef __RL78__
#else
	#define	GAFLPL4	(gaflpl4.ALL)
#endif

/* GAFLPH4L */
#ifdef __RL78__
#else
	#define	GAFLPH4L	(gaflph4.BYTE.gaflph4l)
#endif

/* GAFLPH4H */
#ifdef __RL78__
#else
	#define	GAFLPH4H	(gaflph4.BYTE.gaflph4h)
#endif

/* GAFLPH4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph4l;
	SFR_UNSIGNED_SHORT_INT	gaflph4h;
}SFR_BYTE_GAFLPH4;

typedef union{
	SFR_BYTE_GAFLPH4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH4;

SFR_GLOBAL	SFR_GAFLPH4	gaflph4;

#ifdef __RL78__
#else
	#define	GAFLPH4	(gaflph4.ALL)
#endif

/* GAFLIDL5L */
#ifdef __RL78__
#else
	#define	GAFLIDL5L	(gaflidl5.BYTE.gaflidl5l)
#endif

/* GAFLIDL5H */
#ifdef __RL78__
#else
	#define	GAFLIDL5H	(gaflidl5.BYTE.gaflidl5h)
#endif

/* GAFLIDL5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl5l;
	SFR_UNSIGNED_SHORT_INT	gaflidl5h;
}SFR_BYTE_GAFLIDL5;

typedef union{
	SFR_BYTE_GAFLIDL5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL5;

SFR_GLOBAL	SFR_GAFLIDL5	gaflidl5;

#ifdef __RL78__
#else
	#define	GAFLIDL5	(gaflidl5.ALL)
#endif

/* GAFLIDH5L */
#ifdef __RL78__
#else
	#define	GAFLIDH5L	(gaflidh5.BYTE.gaflidh5l)
#endif

/* GAFLIDH5H */
#ifdef __RL78__
#else
	#define	GAFLIDH5H	(gaflidh5.BYTE.gaflidh5h)
#endif

/* GAFLIDH5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh5l;
	SFR_UNSIGNED_SHORT_INT	gaflidh5h;
}SFR_BYTE_GAFLIDH5;

typedef union{
	SFR_BYTE_GAFLIDH5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH5;

SFR_GLOBAL	SFR_GAFLIDH5	gaflidh5;

#ifdef __RL78__
#else
	#define	GAFLIDH5	(gaflidh5.ALL)
#endif

/* GAFLML5L */
#ifdef __RL78__
#else
	#define	GAFLML5L	(gaflml5.BYTE.gaflml5l)
#endif

/* GAFLML5H */
#ifdef __RL78__
#else
	#define	GAFLML5H	(gaflml5.BYTE.gaflml5h)
#endif

/* GAFLML5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml5l;
	SFR_UNSIGNED_SHORT_INT	gaflml5h;
}SFR_BYTE_GAFLML5;

typedef union{
	SFR_BYTE_GAFLML5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML5;

SFR_GLOBAL	SFR_GAFLML5	gaflml5;

#ifdef __RL78__
#else
	#define	GAFLML5	(gaflml5.ALL)
#endif

/* GAFLMH5L */
#ifdef __RL78__
#else
	#define	GAFLMH5L	(gaflmh5.BYTE.gaflmh5l)
#endif

/* GAFLMH5H */
#ifdef __RL78__
#else
	#define	GAFLMH5H	(gaflmh5.BYTE.gaflmh5h)
#endif

/* GAFLMH5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh5l;
	SFR_UNSIGNED_SHORT_INT	gaflmh5h;
}SFR_BYTE_GAFLMH5;

typedef union{
	SFR_BYTE_GAFLMH5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH5;

SFR_GLOBAL	SFR_GAFLMH5	gaflmh5;

#ifdef __RL78__
#else
	#define	GAFLMH5	(gaflmh5.ALL)
#endif

/* GAFLPL5L */
#ifdef __RL78__
#else
	#define	GAFLPL5L	(gaflpl5.BYTE.gaflpl5l)
#endif

/* GAFLPL5H */
#ifdef __RL78__
#else
	#define	GAFLPL5H	(gaflpl5.BYTE.gaflpl5h)
#endif

/* GAFLPL5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl5l;
	SFR_UNSIGNED_SHORT_INT	gaflpl5h;
}SFR_BYTE_GAFLPL5;

typedef union{
	SFR_BYTE_GAFLPL5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL5;

SFR_GLOBAL	SFR_GAFLPL5	gaflpl5;

#ifdef __RL78__
#else
	#define	GAFLPL5	(gaflpl5.ALL)
#endif

/* GAFLPH5L */
#ifdef __RL78__
#else
	#define	GAFLPH5L	(gaflph5.BYTE.gaflph5l)
#endif

/* GAFLPH5H */
#ifdef __RL78__
#else
	#define	GAFLPH5H	(gaflph5.BYTE.gaflph5h)
#endif

/* GAFLPH5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph5l;
	SFR_UNSIGNED_SHORT_INT	gaflph5h;
}SFR_BYTE_GAFLPH5;

typedef union{
	SFR_BYTE_GAFLPH5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH5;

SFR_GLOBAL	SFR_GAFLPH5	gaflph5;

#ifdef __RL78__
#else
	#define	GAFLPH5	(gaflph5.ALL)
#endif

/* GAFLIDL6L */
#ifdef __RL78__
#else
	#define	GAFLIDL6L	(gaflidl6.BYTE.gaflidl6l)
#endif

/* GAFLIDL6H */
#ifdef __RL78__
#else
	#define	GAFLIDL6H	(gaflidl6.BYTE.gaflidl6h)
#endif

/* GAFLIDL6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl6l;
	SFR_UNSIGNED_SHORT_INT	gaflidl6h;
}SFR_BYTE_GAFLIDL6;

typedef union{
	SFR_BYTE_GAFLIDL6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL6;

SFR_GLOBAL	SFR_GAFLIDL6	gaflidl6;

#ifdef __RL78__
#else
	#define	GAFLIDL6	(gaflidl6.ALL)
#endif

/* GAFLIDH6L */
#ifdef __RL78__
#else
	#define	GAFLIDH6L	(gaflidh6.BYTE.gaflidh6l)
#endif

/* GAFLIDH6H */
#ifdef __RL78__
#else
	#define	GAFLIDH6H	(gaflidh6.BYTE.gaflidh6h)
#endif

/* GAFLIDH6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh6l;
	SFR_UNSIGNED_SHORT_INT	gaflidh6h;
}SFR_BYTE_GAFLIDH6;

typedef union{
	SFR_BYTE_GAFLIDH6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH6;

SFR_GLOBAL	SFR_GAFLIDH6	gaflidh6;

#ifdef __RL78__
#else
	#define	GAFLIDH6	(gaflidh6.ALL)
#endif

/* GAFLML6L */
#ifdef __RL78__
#else
	#define	GAFLML6L	(gaflml6.BYTE.gaflml6l)
#endif

/* GAFLML6H */
#ifdef __RL78__
#else
	#define	GAFLML6H	(gaflml6.BYTE.gaflml6h)
#endif

/* GAFLML6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml6l;
	SFR_UNSIGNED_SHORT_INT	gaflml6h;
}SFR_BYTE_GAFLML6;

typedef union{
	SFR_BYTE_GAFLML6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML6;

SFR_GLOBAL	SFR_GAFLML6	gaflml6;

#ifdef __RL78__
#else
	#define	GAFLML6	(gaflml6.ALL)
#endif

/* GAFLMH6L */
#ifdef __RL78__
#else
	#define	GAFLMH6L	(gaflmh6.BYTE.gaflmh6l)
#endif

/* GAFLMH6H */
#ifdef __RL78__
#else
	#define	GAFLMH6H	(gaflmh6.BYTE.gaflmh6h)
#endif

/* GAFLMH6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh6l;
	SFR_UNSIGNED_SHORT_INT	gaflmh6h;
}SFR_BYTE_GAFLMH6;

typedef union{
	SFR_BYTE_GAFLMH6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH6;

SFR_GLOBAL	SFR_GAFLMH6	gaflmh6;

#ifdef __RL78__
#else
	#define	GAFLMH6	(gaflmh6.ALL)
#endif

/* GAFLPL6L */
#ifdef __RL78__
#else
	#define	GAFLPL6L	(gaflpl6.BYTE.gaflpl6l)
#endif

/* GAFLPL6H */
#ifdef __RL78__
#else
	#define	GAFLPL6H	(gaflpl6.BYTE.gaflpl6h)
#endif

/* GAFLPL6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl6l;
	SFR_UNSIGNED_SHORT_INT	gaflpl6h;
}SFR_BYTE_GAFLPL6;

typedef union{
	SFR_BYTE_GAFLPL6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL6;

SFR_GLOBAL	SFR_GAFLPL6	gaflpl6;

#ifdef __RL78__
#else
	#define	GAFLPL6	(gaflpl6.ALL)
#endif

/* GAFLPH6L */
#ifdef __RL78__
#else
	#define	GAFLPH6L	(gaflph6.BYTE.gaflph6l)
#endif

/* GAFLPH6H */
#ifdef __RL78__
#else
	#define	GAFLPH6H	(gaflph6.BYTE.gaflph6h)
#endif

/* GAFLPH6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph6l;
	SFR_UNSIGNED_SHORT_INT	gaflph6h;
}SFR_BYTE_GAFLPH6;

typedef union{
	SFR_BYTE_GAFLPH6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH6;

SFR_GLOBAL	SFR_GAFLPH6	gaflph6;

#ifdef __RL78__
#else
	#define	GAFLPH6	(gaflph6.ALL)
#endif

/* GAFLIDL7L */
#ifdef __RL78__
#else
	#define	GAFLIDL7L	(gaflidl7.BYTE.gaflidl7l)
#endif

/* GAFLIDL7H */
#ifdef __RL78__
#else
	#define	GAFLIDL7H	(gaflidl7.BYTE.gaflidl7h)
#endif

/* GAFLIDL7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl7l;
	SFR_UNSIGNED_SHORT_INT	gaflidl7h;
}SFR_BYTE_GAFLIDL7;

typedef union{
	SFR_BYTE_GAFLIDL7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL7;

SFR_GLOBAL	SFR_GAFLIDL7	gaflidl7;

#ifdef __RL78__
#else
	#define	GAFLIDL7	(gaflidl7.ALL)
#endif

/* GAFLIDH7L */
#ifdef __RL78__
#else
	#define	GAFLIDH7L	(gaflidh7.BYTE.gaflidh7l)
#endif

/* GAFLIDH7H */
#ifdef __RL78__
#else
	#define	GAFLIDH7H	(gaflidh7.BYTE.gaflidh7h)
#endif

/* GAFLIDH7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh7l;
	SFR_UNSIGNED_SHORT_INT	gaflidh7h;
}SFR_BYTE_GAFLIDH7;

typedef union{
	SFR_BYTE_GAFLIDH7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH7;

SFR_GLOBAL	SFR_GAFLIDH7	gaflidh7;

#ifdef __RL78__
#else
	#define	GAFLIDH7	(gaflidh7.ALL)
#endif

/* GAFLML7L */
#ifdef __RL78__
#else
	#define	GAFLML7L	(gaflml7.BYTE.gaflml7l)
#endif

/* GAFLML7H */
#ifdef __RL78__
#else
	#define	GAFLML7H	(gaflml7.BYTE.gaflml7h)
#endif

/* GAFLML7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml7l;
	SFR_UNSIGNED_SHORT_INT	gaflml7h;
}SFR_BYTE_GAFLML7;

typedef union{
	SFR_BYTE_GAFLML7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML7;

SFR_GLOBAL	SFR_GAFLML7	gaflml7;

#ifdef __RL78__
#else
	#define	GAFLML7	(gaflml7.ALL)
#endif

/* GAFLMH7L */
#ifdef __RL78__
#else
	#define	GAFLMH7L	(gaflmh7.BYTE.gaflmh7l)
#endif

/* GAFLMH7H */
#ifdef __RL78__
#else
	#define	GAFLMH7H	(gaflmh7.BYTE.gaflmh7h)
#endif

/* GAFLMH7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh7l;
	SFR_UNSIGNED_SHORT_INT	gaflmh7h;
}SFR_BYTE_GAFLMH7;

typedef union{
	SFR_BYTE_GAFLMH7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH7;

SFR_GLOBAL	SFR_GAFLMH7	gaflmh7;

#ifdef __RL78__
#else
	#define	GAFLMH7	(gaflmh7.ALL)
#endif

/* GAFLPL7L */
#ifdef __RL78__
#else
	#define	GAFLPL7L	(gaflpl7.BYTE.gaflpl7l)
#endif

/* GAFLPL7H */
#ifdef __RL78__
#else
	#define	GAFLPL7H	(gaflpl7.BYTE.gaflpl7h)
#endif

/* GAFLPL7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl7l;
	SFR_UNSIGNED_SHORT_INT	gaflpl7h;
}SFR_BYTE_GAFLPL7;

typedef union{
	SFR_BYTE_GAFLPL7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL7;

SFR_GLOBAL	SFR_GAFLPL7	gaflpl7;

#ifdef __RL78__
#else
	#define	GAFLPL7	(gaflpl7.ALL)
#endif

/* GAFLPH7L */
#ifdef __RL78__
#else
	#define	GAFLPH7L	(gaflph7.BYTE.gaflph7l)
#endif

/* GAFLPH7H */
#ifdef __RL78__
#else
	#define	GAFLPH7H	(gaflph7.BYTE.gaflph7h)
#endif

/* GAFLPH7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph7l;
	SFR_UNSIGNED_SHORT_INT	gaflph7h;
}SFR_BYTE_GAFLPH7;

typedef union{
	SFR_BYTE_GAFLPH7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH7;

SFR_GLOBAL	SFR_GAFLPH7	gaflph7;

#ifdef __RL78__
#else
	#define	GAFLPH7	(gaflph7.ALL)
#endif


/* GAFLIDL8L */
#ifdef __RL78__
#else
	#define	GAFLIDL8L	(gaflidl8.BYTE.gaflidl8l)
#endif

/* GAFLIDL8H */
#ifdef __RL78__
#else
	#define	GAFLIDL8H	(gaflidl8.BYTE.gaflidl8h)
#endif

/* GAFLIDL8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl8l;
	SFR_UNSIGNED_SHORT_INT	gaflidl8h;
}SFR_BYTE_GAFLIDL8;

typedef union{
	SFR_BYTE_GAFLIDL8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL8;

SFR_GLOBAL	SFR_GAFLIDL8	gaflidl8;

#ifdef __RL78__
#else
	#define	GAFLIDL8	(gaflidl8.ALL)
#endif

/* GAFLIDH8L */
#ifdef __RL78__
#else
	#define	GAFLIDH8L	(gaflidh8.BYTE.gaflidh8l)
#endif

/* GAFLIDH8H */
#ifdef __RL78__
#else
	#define	GAFLIDH8H	(gaflidh8.BYTE.gaflidh8h)
#endif

/* GAFLIDH8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh8l;
	SFR_UNSIGNED_SHORT_INT	gaflidh8h;
}SFR_BYTE_GAFLIDH8;

typedef union{
	SFR_BYTE_GAFLIDH8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH8;

SFR_GLOBAL	SFR_GAFLIDH8	gaflidh8;

#ifdef __RL78__
#else
	#define	GAFLIDH8	(gaflidh8.ALL)
#endif

/* GAFLML8L */
#ifdef __RL78__
#else
	#define	GAFLML8L	(gaflml8.BYTE.gaflml8l)
#endif

/* GAFLML8H */
#ifdef __RL78__
#else
	#define	GAFLML8H	(gaflml8.BYTE.gaflml8h)
#endif

/* GAFLML8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml8l;
	SFR_UNSIGNED_SHORT_INT	gaflml8h;
}SFR_BYTE_GAFLML8;

typedef union{
	SFR_BYTE_GAFLML8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML8;

SFR_GLOBAL	SFR_GAFLML8	gaflml8;

#ifdef __RL78__
#else
	#define	GAFLML8	(gaflml8.ALL)
#endif

/* GAFLMH8L */
#ifdef __RL78__
#else
	#define	GAFLMH8L	(gaflmh8.BYTE.gaflmh8l)
#endif

/* GAFLMH8H */
#ifdef __RL78__
#else
	#define	GAFLMH8H	(gaflmh8.BYTE.gaflmh8h)
#endif

/* GAFLMH8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh8l;
	SFR_UNSIGNED_SHORT_INT	gaflmh8h;
}SFR_BYTE_GAFLMH8;

typedef union{
	SFR_BYTE_GAFLMH8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH8;

SFR_GLOBAL	SFR_GAFLMH8	gaflmh8;

#ifdef __RL78__
#else
	#define	GAFLMH8	(gaflmh8.ALL)
#endif

/* GAFLPL8L */
#ifdef __RL78__
#else
	#define	GAFLPL8L	(gaflpl8.BYTE.gaflpl8l)
#endif

/* GAFLPL8H */
#ifdef __RL78__
#else
	#define	GAFLPL8H	(gaflpl8.BYTE.gaflpl8h)
#endif

/* GAFLPL8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl8l;
	SFR_UNSIGNED_SHORT_INT	gaflpl8h;
}SFR_BYTE_GAFLPL8;

typedef union{
	SFR_BYTE_GAFLPL8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL8;

SFR_GLOBAL	SFR_GAFLPL8	gaflpl8;

#ifdef __RL78__
#else
	#define	GAFLPL8	(gaflpl8.ALL)
#endif

/* GAFLPH8L */
#ifdef __RL78__
#else
	#define	GAFLPH8L	(gaflph8.BYTE.gaflph8l)
#endif

/* GAFLPH8H */
#ifdef __RL78__
#else
	#define	GAFLPH8H	(gaflph8.BYTE.gaflph8h)
#endif

/* GAFLPH8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph8l;
	SFR_UNSIGNED_SHORT_INT	gaflph8h;
}SFR_BYTE_GAFLPH8;

typedef union{
	SFR_BYTE_GAFLPH8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH8;

SFR_GLOBAL	SFR_GAFLPH8	gaflph8;

#ifdef __RL78__
#else
	#define	GAFLPH8	(gaflph8.ALL)
#endif

/* GAFLIDL9L */
#ifdef __RL78__
#else
	#define	GAFLIDL9L	(gaflidl9.BYTE.gaflidl9l)
#endif

/* GAFLIDL9H */
#ifdef __RL78__
#else
	#define	GAFLIDL9H	(gaflidl9.BYTE.gaflidl9h)
#endif

/* GAFLIDL9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl9l;
	SFR_UNSIGNED_SHORT_INT	gaflidl9h;
}SFR_BYTE_GAFLIDL9;

typedef union{
	SFR_BYTE_GAFLIDL9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL9;

SFR_GLOBAL	SFR_GAFLIDL9	gaflidl9;

#ifdef __RL78__
#else
	#define	GAFLIDL9	(gaflidl9.ALL)
#endif

/* GAFLIDH9L */
#ifdef __RL78__
#else
	#define	GAFLIDH9L	(gaflidh9.BYTE.gaflidh9l)
#endif

/* GAFLIDH9H */
#ifdef __RL78__
#else
	#define	GAFLIDH9H	(gaflidh9.BYTE.gaflidh9h)
#endif

/* GAFLIDH9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh9l;
	SFR_UNSIGNED_SHORT_INT	gaflidh9h;
}SFR_BYTE_GAFLIDH9;

typedef union{
	SFR_BYTE_GAFLIDH9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH9;

SFR_GLOBAL	SFR_GAFLIDH9	gaflidh9;

#ifdef __RL78__
#else
	#define	GAFLIDH9	(gaflidh9.ALL)
#endif

/* GAFLML9L */
#ifdef __RL78__
#else
	#define	GAFLML9L	(gaflml9.BYTE.gaflml9l)
#endif

/* GAFLML9H */
#ifdef __RL78__
#else
	#define	GAFLML9H	(gaflml9.BYTE.gaflml9h)
#endif

/* GAFLML9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml9l;
	SFR_UNSIGNED_SHORT_INT	gaflml9h;
}SFR_BYTE_GAFLML9;

typedef union{
	SFR_BYTE_GAFLML9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML9;

SFR_GLOBAL	SFR_GAFLML9	gaflml9;

#ifdef __RL78__
#else
	#define	GAFLML9	(gaflml9.ALL)
#endif

/* GAFLMH9L */
#ifdef __RL78__
#else
	#define	GAFLMH9L	(gaflmh9.BYTE.gaflmh9l)
#endif

/* GAFLMH9H */
#ifdef __RL78__
#else
	#define	GAFLMH9H	(gaflmh9.BYTE.gaflmh9h)
#endif

/* GAFLMH9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh9l;
	SFR_UNSIGNED_SHORT_INT	gaflmh9h;
}SFR_BYTE_GAFLMH9;

typedef union{
	SFR_BYTE_GAFLMH9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH9;

SFR_GLOBAL	SFR_GAFLMH9	gaflmh9;

#ifdef __RL78__
#else
	#define	GAFLMH9	(gaflmh9.ALL)
#endif

/* GAFLPL9L */
#ifdef __RL78__
#else
	#define	GAFLPL9L	(gaflpl9.BYTE.gaflpl9l)
#endif

/* GAFLPL9H */
#ifdef __RL78__
#else
	#define	GAFLPL9H	(gaflpl9.BYTE.gaflpl9h)
#endif

/* GAFLPL9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl9l;
	SFR_UNSIGNED_SHORT_INT	gaflpl9h;
}SFR_BYTE_GAFLPL9;

typedef union{
	SFR_BYTE_GAFLPL9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL9;

SFR_GLOBAL	SFR_GAFLPL9	gaflpl9;

#ifdef __RL78__
#else
	#define	GAFLPL9	(gaflpl9.ALL)
#endif

/* GAFLPH9L */
#ifdef __RL78__
#else
	#define	GAFLPH9L	(gaflph9.BYTE.gaflph9l)
#endif

/* GAFLPH9H */
#ifdef __RL78__
#else
	#define	GAFLPH9H	(gaflph9.BYTE.gaflph9h)
#endif

/* GAFLPH9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph9l;
	SFR_UNSIGNED_SHORT_INT	gaflph9h;
}SFR_BYTE_GAFLPH9;

typedef union{
	SFR_BYTE_GAFLPH9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH9;

SFR_GLOBAL	SFR_GAFLPH9	gaflph9;

#ifdef __RL78__
#else
	#define	GAFLPH9	(gaflph9.ALL)
#endif

/* GAFLIDL10L */
#ifdef __RL78__
#else
	#define	GAFLIDL10L	(gaflidl10.BYTE.gaflidl10l)
#endif

/* GAFLIDL10H */
#ifdef __RL78__
#else
	#define	GAFLIDL10H	(gaflidl10.BYTE.gaflidl10h)
#endif

/* GAFLIDL10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl10l;
	SFR_UNSIGNED_SHORT_INT	gaflidl10h;
}SFR_BYTE_GAFLIDL10;

typedef union{
	SFR_BYTE_GAFLIDL10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL10;

SFR_GLOBAL	SFR_GAFLIDL10	gaflidl10;

#ifdef __RL78__
#else
	#define	GAFLIDL10	(gaflidl10.ALL)
#endif

/* GAFLIDH10L */
#ifdef __RL78__
#else
	#define	GAFLIDH10L	(gaflidh10.BYTE.gaflidh10l)
#endif

/* GAFLIDH10H */
#ifdef __RL78__
#else
	#define	GAFLIDH10H	(gaflidh10.BYTE.gaflidh10h)
#endif

/* GAFLIDH10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh10l;
	SFR_UNSIGNED_SHORT_INT	gaflidh10h;
}SFR_BYTE_GAFLIDH10;

typedef union{
	SFR_BYTE_GAFLIDH10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH10;

SFR_GLOBAL	SFR_GAFLIDH10	gaflidh10;

#ifdef __RL78__
#else
	#define	GAFLIDH10	(gaflidh10.ALL)
#endif

/* GAFLML10L */
#ifdef __RL78__
#else
	#define	GAFLML10L	(gaflml10.BYTE.gaflml10l)
#endif

/* GAFLML10H */
#ifdef __RL78__
#else
	#define	GAFLML10H	(gaflml10.BYTE.gaflml10h)
#endif

/* GAFLML10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml10l;
	SFR_UNSIGNED_SHORT_INT	gaflml10h;
}SFR_BYTE_GAFLML10;

typedef union{
	SFR_BYTE_GAFLML10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML10;

SFR_GLOBAL	SFR_GAFLML10	gaflml10;

#ifdef __RL78__
#else
	#define	GAFLML10	(gaflml10.ALL)
#endif

/* GAFLMH10L */
#ifdef __RL78__
#else
	#define	GAFLMH10L	(gaflmh10.BYTE.gaflmh10l)
#endif

/* GAFLMH10H */
#ifdef __RL78__
#else
	#define	GAFLMH10H	(gaflmh10.BYTE.gaflmh10h)
#endif

/* GAFLMH10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh10l;
	SFR_UNSIGNED_SHORT_INT	gaflmh10h;
}SFR_BYTE_GAFLMH10;

typedef union{
	SFR_BYTE_GAFLMH10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH10;

SFR_GLOBAL	SFR_GAFLMH10	gaflmh10;

#ifdef __RL78__
#else
	#define	GAFLMH10	(gaflmh10.ALL)
#endif

/* GAFLPL10L */
#ifdef __RL78__
#else
	#define	GAFLPL10L	(gaflpl10.BYTE.gaflpl10l)
#endif

/* GAFLPL10H */
#ifdef __RL78__
#else
	#define	GAFLPL10H	(gaflpl10.BYTE.gaflpl10h)
#endif

/* GAFLPL10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl10l;
	SFR_UNSIGNED_SHORT_INT	gaflpl10h;
}SFR_BYTE_GAFLPL10;

typedef union{
	SFR_BYTE_GAFLPL10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL10;

SFR_GLOBAL	SFR_GAFLPL10	gaflpl10;

#ifdef __RL78__
#else
	#define	GAFLPL10	(gaflpl10.ALL)
#endif

/* GAFLPH10L */
#ifdef __RL78__
#else
	#define	GAFLPH10L	(gaflph10.BYTE.gaflph10l)
#endif

/* GAFLPH10H */
#ifdef __RL78__
#else
	#define	GAFLPH10H	(gaflph10.BYTE.gaflph10h)
#endif

/* GAFLPH10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph10l;
	SFR_UNSIGNED_SHORT_INT	gaflph10h;
}SFR_BYTE_GAFLPH10;

typedef union{
	SFR_BYTE_GAFLPH10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH10;

SFR_GLOBAL	SFR_GAFLPH10	gaflph10;

#ifdef __RL78__
#else
	#define	GAFLPH10	(gaflph10.ALL)
#endif

/* GAFLIDL11L */
#ifdef __RL78__
#else
	#define	GAFLIDL11L	(gaflidl11.BYTE.gaflidl11l)
#endif

/* GAFLIDL11H */
#ifdef __RL78__
#else
	#define	GAFLIDL11H	(gaflidl11.BYTE.gaflidl11h)
#endif

/* GAFLIDL11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl11l;
	SFR_UNSIGNED_SHORT_INT	gaflidl11h;
}SFR_BYTE_GAFLIDL11;

typedef union{
	SFR_BYTE_GAFLIDL11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL11;

SFR_GLOBAL	SFR_GAFLIDL11	gaflidl11;

#ifdef __RL78__
#else
	#define	GAFLIDL11	(gaflidl11.ALL)
#endif

/* GAFLIDH11L */
#ifdef __RL78__
#else
	#define	GAFLIDH11L	(gaflidh11.BYTE.gaflidh11l)
#endif

/* GAFLIDH11H */
#ifdef __RL78__
#else
	#define	GAFLIDH11H	(gaflidh11.BYTE.gaflidh11h)
#endif

/* GAFLIDH11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh11l;
	SFR_UNSIGNED_SHORT_INT	gaflidh11h;
}SFR_BYTE_GAFLIDH11;

typedef union{
	SFR_BYTE_GAFLIDH11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH11;

SFR_GLOBAL	SFR_GAFLIDH11	gaflidh11;

#ifdef __RL78__
#else
	#define	GAFLIDH11	(gaflidh11.ALL)
#endif

/* GAFLML11L */
#ifdef __RL78__
#else
	#define	GAFLML11L	(gaflml11.BYTE.gaflml11l)
#endif

/* GAFLML11H */
#ifdef __RL78__
#else
	#define	GAFLML11H	(gaflml11.BYTE.gaflml11h)
#endif

/* GAFLML11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml11l;
	SFR_UNSIGNED_SHORT_INT	gaflml11h;
}SFR_BYTE_GAFLML11;

typedef union{
	SFR_BYTE_GAFLML11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML11;

SFR_GLOBAL	SFR_GAFLML11	gaflml11;

#ifdef __RL78__
#else
	#define	GAFLML11	(gaflml11.ALL)
#endif

/* GAFLMH11L */
#ifdef __RL78__
#else
	#define	GAFLMH11L	(gaflmh11.BYTE.gaflmh11l)
#endif

/* GAFLMH11H */
#ifdef __RL78__
#else
	#define	GAFLMH11H	(gaflmh11.BYTE.gaflmh11h)
#endif

/* GAFLMH11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh11l;
	SFR_UNSIGNED_SHORT_INT	gaflmh11h;
}SFR_BYTE_GAFLMH11;

typedef union{
	SFR_BYTE_GAFLMH11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH11;

SFR_GLOBAL	SFR_GAFLMH11	gaflmh11;

#ifdef __RL78__
#else
	#define	GAFLMH11	(gaflmh11.ALL)
#endif

/* GAFLPL11L */
#ifdef __RL78__
#else
	#define	GAFLPL11L	(gaflpl11.BYTE.gaflpl11l)
#endif

/* GAFLPL11H */
#ifdef __RL78__
#else
	#define	GAFLPL11H	(gaflpl11.BYTE.gaflpl11h)
#endif

/* GAFLPL11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl11l;
	SFR_UNSIGNED_SHORT_INT	gaflpl11h;
}SFR_BYTE_GAFLPL11;

typedef union{
	SFR_BYTE_GAFLPL11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL11;

SFR_GLOBAL	SFR_GAFLPL11	gaflpl11;

#ifdef __RL78__
#else
	#define	GAFLPL11	(gaflpl11.ALL)
#endif

/* GAFLPH11L */
#ifdef __RL78__
#else
	#define	GAFLPH11L	(gaflph11.BYTE.gaflph11l)
#endif

/* GAFLPH11H */
#ifdef __RL78__
#else
	#define	GAFLPH11H	(gaflph11.BYTE.gaflph11h)
#endif

/* GAFLPH11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph11l;
	SFR_UNSIGNED_SHORT_INT	gaflph11h;
}SFR_BYTE_GAFLPH11;

typedef union{
	SFR_BYTE_GAFLPH11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH11;

SFR_GLOBAL	SFR_GAFLPH11	gaflph11;

#ifdef __RL78__
#else
	#define	GAFLPH11	(gaflph11.ALL)
#endif

/* GAFLIDL12L */
#ifdef __RL78__
#else
	#define	GAFLIDL12L	(gaflidl12.BYTE.gaflidl12l)
#endif

/* GAFLIDL12H */
#ifdef __RL78__
#else
	#define	GAFLIDL12H	(gaflidl12.BYTE.gaflidl12h)
#endif

/* GAFLIDL12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl12l;
	SFR_UNSIGNED_SHORT_INT	gaflidl12h;
}SFR_BYTE_GAFLIDL12;

typedef union{
	SFR_BYTE_GAFLIDL12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL12;

SFR_GLOBAL	SFR_GAFLIDL12	gaflidl12;

#ifdef __RL78__
#else
	#define	GAFLIDL12	(gaflidl12.ALL)
#endif

/* GAFLIDH12L */
#ifdef __RL78__
#else
	#define	GAFLIDH12L	(gaflidh12.BYTE.gaflidh12l)
#endif

/* GAFLIDH12H */
#ifdef __RL78__
#else
	#define	GAFLIDH12H	(gaflidh12.BYTE.gaflidh12h)
#endif

/* GAFLIDH12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh12l;
	SFR_UNSIGNED_SHORT_INT	gaflidh12h;
}SFR_BYTE_GAFLIDH12;

typedef union{
	SFR_BYTE_GAFLIDH12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH12;

SFR_GLOBAL	SFR_GAFLIDH12	gaflidh12;

#ifdef __RL78__
#else
	#define	GAFLIDH12	(gaflidh12.ALL)
#endif

/* GAFLML12L */
#ifdef __RL78__
#else
	#define	GAFLML12L	(gaflml12.BYTE.gaflml12l)
#endif

/* GAFLML12H */
#ifdef __RL78__
#else
	#define	GAFLML12H	(gaflml12.BYTE.gaflml12h)
#endif

/* GAFLML12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml12l;
	SFR_UNSIGNED_SHORT_INT	gaflml12h;
}SFR_BYTE_GAFLML12;

typedef union{
	SFR_BYTE_GAFLML12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML12;

SFR_GLOBAL	SFR_GAFLML12	gaflml12;

#ifdef __RL78__
#else
	#define	GAFLML12	(gaflml12.ALL)
#endif

/* GAFLMH12L */
#ifdef __RL78__
#else
	#define	GAFLMH12L	(gaflmh12.BYTE.gaflmh12l)
#endif

/* GAFLMH12H */
#ifdef __RL78__
#else
	#define	GAFLMH12H	(gaflmh12.BYTE.gaflmh12h)
#endif

/* GAFLMH12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh12l;
	SFR_UNSIGNED_SHORT_INT	gaflmh12h;
}SFR_BYTE_GAFLMH12;

typedef union{
	SFR_BYTE_GAFLMH12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH12;

SFR_GLOBAL	SFR_GAFLMH12	gaflmh12;

#ifdef __RL78__
#else
	#define	GAFLMH12	(gaflmh12.ALL)
#endif

/* GAFLPL12L */
#ifdef __RL78__
#else
	#define	GAFLPL12L	(gaflpl12.BYTE.gaflpl12l)
#endif

/* GAFLPL12H */
#ifdef __RL78__
#else
	#define	GAFLPL12H	(gaflpl12.BYTE.gaflpl12h)
#endif

/* GAFLPL12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl12l;
	SFR_UNSIGNED_SHORT_INT	gaflpl12h;
}SFR_BYTE_GAFLPL12;

typedef union{
	SFR_BYTE_GAFLPL12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL12;

SFR_GLOBAL	SFR_GAFLPL12	gaflpl12;

#ifdef __RL78__
#else
	#define	GAFLPL12	(gaflpl12.ALL)
#endif

/* GAFLPH12L */
#ifdef __RL78__
#else
	#define	GAFLPH12L	(gaflph12.BYTE.gaflph12l)
#endif

/* GAFLPH12H */
#ifdef __RL78__
#else
	#define	GAFLPH12H	(gaflph12.BYTE.gaflph12h)
#endif

/* GAFLPH12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph12l;
	SFR_UNSIGNED_SHORT_INT	gaflph12h;
}SFR_BYTE_GAFLPH12;

typedef union{
	SFR_BYTE_GAFLPH12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH12;

SFR_GLOBAL	SFR_GAFLPH12	gaflph12;

#ifdef __RL78__
#else
	#define	GAFLPH12	(gaflph12.ALL)
#endif

/* GAFLIDL13L */
#ifdef __RL78__
#else
	#define	GAFLIDL13L	(gaflidl13.BYTE.gaflidl13l)
#endif

/* GAFLIDL13H */
#ifdef __RL78__
#else
	#define	GAFLIDL13H	(gaflidl13.BYTE.gaflidl13h)
#endif

/* GAFLIDL13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl13l;
	SFR_UNSIGNED_SHORT_INT	gaflidl13h;
}SFR_BYTE_GAFLIDL13;

typedef union{
	SFR_BYTE_GAFLIDL13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL13;

SFR_GLOBAL	SFR_GAFLIDL13	gaflidl13;

#ifdef __RL78__
#else
	#define	GAFLIDL13	(gaflidl13.ALL)
#endif

/* GAFLIDH13L */
#ifdef __RL78__
#else
	#define	GAFLIDH13L	(gaflidh13.BYTE.gaflidh13l)
#endif

/* GAFLIDH13H */
#ifdef __RL78__
#else
	#define	GAFLIDH13H	(gaflidh13.BYTE.gaflidh13h)
#endif

/* GAFLIDH13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh13l;
	SFR_UNSIGNED_SHORT_INT	gaflidh13h;
}SFR_BYTE_GAFLIDH13;

typedef union{
	SFR_BYTE_GAFLIDH13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH13;

SFR_GLOBAL	SFR_GAFLIDH13	gaflidh13;

#ifdef __RL78__
#else
	#define	GAFLIDH13	(gaflidh13.ALL)
#endif

/* GAFLML13L */
#ifdef __RL78__
#else
	#define	GAFLML13L	(gaflml13.BYTE.gaflml13l)
#endif

/* GAFLML13H */
#ifdef __RL78__
#else
	#define	GAFLML13H	(gaflml13.BYTE.gaflml13h)
#endif

/* GAFLML13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml13l;
	SFR_UNSIGNED_SHORT_INT	gaflml13h;
}SFR_BYTE_GAFLML13;

typedef union{
	SFR_BYTE_GAFLML13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML13;

SFR_GLOBAL	SFR_GAFLML13	gaflml13;

#ifdef __RL78__
#else
	#define	GAFLML13	(gaflml13.ALL)
#endif

/* GAFLMH13L */
#ifdef __RL78__
#else
	#define	GAFLMH13L	(gaflmh13.BYTE.gaflmh13l)
#endif

/* GAFLMH13H */
#ifdef __RL78__
#else
	#define	GAFLMH13H	(gaflmh13.BYTE.gaflmh13h)
#endif

/* GAFLMH13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh13l;
	SFR_UNSIGNED_SHORT_INT	gaflmh13h;
}SFR_BYTE_GAFLMH13;

typedef union{
	SFR_BYTE_GAFLMH13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH13;

SFR_GLOBAL	SFR_GAFLMH13	gaflmh13;

#ifdef __RL78__
#else
	#define	GAFLMH13	(gaflmh13.ALL)
#endif

/* GAFLPL13L */
#ifdef __RL78__
#else
	#define	GAFLPL13L	(gaflpl13.BYTE.gaflpl13l)
#endif

/* GAFLPL13H */
#ifdef __RL78__
#else
	#define	GAFLPL13H	(gaflpl13.BYTE.gaflpl13h)
#endif

/* GAFLPL13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl13l;
	SFR_UNSIGNED_SHORT_INT	gaflpl13h;
}SFR_BYTE_GAFLPL13;

typedef union{
	SFR_BYTE_GAFLPL13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL13;

SFR_GLOBAL	SFR_GAFLPL13	gaflpl13;

#ifdef __RL78__
#else
	#define	GAFLPL13	(gaflpl13.ALL)
#endif

/* GAFLPH13L */
#ifdef __RL78__
#else
	#define	GAFLPH13L	(gaflph13.BYTE.gaflph13l)
#endif

/* GAFLPH13H */
#ifdef __RL78__
#else
	#define	GAFLPH13H	(gaflph13.BYTE.gaflph13h)
#endif

/* GAFLPH13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph13l;
	SFR_UNSIGNED_SHORT_INT	gaflph13h;
}SFR_BYTE_GAFLPH13;

typedef union{
	SFR_BYTE_GAFLPH13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH13;

SFR_GLOBAL	SFR_GAFLPH13	gaflph13;

#ifdef __RL78__
#else
	#define	GAFLPH13	(gaflph13.ALL)
#endif

/* GAFLIDL14L */
#ifdef __RL78__
#else
	#define	GAFLIDL14L	(gaflidl14.BYTE.gaflidl14l)
#endif

/* GAFLIDL14H */
#ifdef __RL78__
#else
	#define	GAFLIDL14H	(gaflidl14.BYTE.gaflidl14h)
#endif

/* GAFLIDL14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl14l;
	SFR_UNSIGNED_SHORT_INT	gaflidl14h;
}SFR_BYTE_GAFLIDL14;

typedef union{
	SFR_BYTE_GAFLIDL14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL14;

SFR_GLOBAL	SFR_GAFLIDL14	gaflidl14;

#ifdef __RL78__
#else
	#define	GAFLIDL14	(gaflidl14.ALL)
#endif

/* GAFLIDH14L */
#ifdef __RL78__
#else
	#define	GAFLIDH14L	(gaflidh14.BYTE.gaflidh14l)
#endif

/* GAFLIDH14H */
#ifdef __RL78__
#else
	#define	GAFLIDH14H	(gaflidh14.BYTE.gaflidh14h)
#endif

/* GAFLIDH14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh14l;
	SFR_UNSIGNED_SHORT_INT	gaflidh14h;
}SFR_BYTE_GAFLIDH14;

typedef union{
	SFR_BYTE_GAFLIDH14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH14;

SFR_GLOBAL	SFR_GAFLIDH14	gaflidh14;

#ifdef __RL78__
#else
	#define	GAFLIDH14	(gaflidh14.ALL)
#endif

/* GAFLML14L */
#ifdef __RL78__
#else
	#define	GAFLML14L	(gaflml14.BYTE.gaflml14l)
#endif

/* GAFLML14H */
#ifdef __RL78__
#else
	#define	GAFLML14H	(gaflml14.BYTE.gaflml14h)
#endif

/* GAFLML14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml14l;
	SFR_UNSIGNED_SHORT_INT	gaflml14h;
}SFR_BYTE_GAFLML14;

typedef union{
	SFR_BYTE_GAFLML14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML14;

SFR_GLOBAL	SFR_GAFLML14	gaflml14;

#ifdef __RL78__
#else
	#define	GAFLML14	(gaflml14.ALL)
#endif

/* GAFLMH14L */
#ifdef __RL78__
#else
	#define	GAFLMH14L	(gaflmh14.BYTE.gaflmh14l)
#endif

/* GAFLMH14H */
#ifdef __RL78__
#else
	#define	GAFLMH14H	(gaflmh14.BYTE.gaflmh14h)
#endif

/* GAFLMH14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh14l;
	SFR_UNSIGNED_SHORT_INT	gaflmh14h;
}SFR_BYTE_GAFLMH14;

typedef union{
	SFR_BYTE_GAFLMH14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH14;

SFR_GLOBAL	SFR_GAFLMH14	gaflmh14;

#ifdef __RL78__
#else
	#define	GAFLMH14	(gaflmh14.ALL)
#endif

/* GAFLPL14L */
#ifdef __RL78__
#else
	#define	GAFLPL14L	(gaflpl14.BYTE.gaflpl14l)
#endif

/* GAFLPL14H */
#ifdef __RL78__
#else
	#define	GAFLPL14H	(gaflpl14.BYTE.gaflpl14h)
#endif

/* GAFLPL14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl14l;
	SFR_UNSIGNED_SHORT_INT	gaflpl14h;
}SFR_BYTE_GAFLPL14;

typedef union{
	SFR_BYTE_GAFLPL14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL14;

SFR_GLOBAL	SFR_GAFLPL14	gaflpl14;

#ifdef __RL78__
#else
	#define	GAFLPL14	(gaflpl14.ALL)
#endif

/* GAFLPH14L */
#ifdef __RL78__
#else
	#define	GAFLPH14L	(gaflph14.BYTE.gaflph14l)
#endif

/* GAFLPH14H */
#ifdef __RL78__
#else
	#define	GAFLPH14H	(gaflph14.BYTE.gaflph14h)
#endif

/* GAFLPH14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph14l;
	SFR_UNSIGNED_SHORT_INT	gaflph14h;
}SFR_BYTE_GAFLPH14;

typedef union{
	SFR_BYTE_GAFLPH14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH14;

SFR_GLOBAL	SFR_GAFLPH14	gaflph14;

#ifdef __RL78__
#else
	#define	GAFLPH14	(gaflph14.ALL)
#endif

/* GAFLIDL15L */
#ifdef __RL78__
#else
	#define	GAFLIDL15L	(gaflidl15.BYTE.gaflidl15l)
#endif

/* GAFLIDL15H */
#ifdef __RL78__
#else
	#define	GAFLIDL15H	(gaflidl15.BYTE.gaflidl15h)
#endif

/* GAFLIDL15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidl15l;
	SFR_UNSIGNED_SHORT_INT	gaflidl15h;
}SFR_BYTE_GAFLIDL15;

typedef union{
	SFR_BYTE_GAFLIDL15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDL15;

SFR_GLOBAL	SFR_GAFLIDL15	gaflidl15;

#ifdef __RL78__
#else
	#define	GAFLIDL15	(gaflidl15.ALL)
#endif

/* GAFLIDH15L */
#ifdef __RL78__
#else
	#define	GAFLIDH15L	(gaflidh15.BYTE.gaflidh15l)
#endif

/* GAFLIDH15H */
#ifdef __RL78__
#else
	#define	GAFLIDH15H	(gaflidh15.BYTE.gaflidh15h)
#endif

/* GAFLIDH15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflidh15l;
	SFR_UNSIGNED_SHORT_INT	gaflidh15h;
}SFR_BYTE_GAFLIDH15;

typedef union{
	SFR_BYTE_GAFLIDH15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLIDH15;

SFR_GLOBAL	SFR_GAFLIDH15	gaflidh15;

#ifdef __RL78__
#else
	#define	GAFLIDH15	(gaflidh15.ALL)
#endif

/* GAFLML15L */
#ifdef __RL78__
#else
	#define	GAFLML15L	(gaflml15.BYTE.gaflml15l)
#endif

/* GAFLML15H */
#ifdef __RL78__
#else
	#define	GAFLML15H	(gaflml15.BYTE.gaflml15h)
#endif

/* GAFLML15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflml15l;
	SFR_UNSIGNED_SHORT_INT	gaflml15h;
}SFR_BYTE_GAFLML15;

typedef union{
	SFR_BYTE_GAFLML15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLML15;

SFR_GLOBAL	SFR_GAFLML15	gaflml15;

#ifdef __RL78__
#else
	#define	GAFLML15	(gaflml15.ALL)
#endif

/* GAFLMH15L */
#ifdef __RL78__
#else
	#define	GAFLMH15L	(gaflmh15.BYTE.gaflmh15l)
#endif

/* GAFLMH15H */
#ifdef __RL78__
#else
	#define	GAFLMH15H	(gaflmh15.BYTE.gaflmh15h)
#endif

/* GAFLMH15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflmh15l;
	SFR_UNSIGNED_SHORT_INT	gaflmh15h;
}SFR_BYTE_GAFLMH15;

typedef union{
	SFR_BYTE_GAFLMH15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLMH15;

SFR_GLOBAL	SFR_GAFLMH15	gaflmh15;

#ifdef __RL78__
#else
	#define	GAFLMH15	(gaflmh15.ALL)
#endif

/* GAFLPL15L */
#ifdef __RL78__
#else
	#define	GAFLPL15L	(gaflpl15.BYTE.gaflpl15l)
#endif

/* GAFLPL15H */
#ifdef __RL78__
#else
	#define	GAFLPL15H	(gaflpl15.BYTE.gaflpl15h)
#endif

/* GAFLPL15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflpl15l;
	SFR_UNSIGNED_SHORT_INT	gaflpl15h;
}SFR_BYTE_GAFLPL15;

typedef union{
	SFR_BYTE_GAFLPL15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPL15;

SFR_GLOBAL	SFR_GAFLPL15	gaflpl15;

#ifdef __RL78__
#else
	#define	GAFLPL15	(gaflpl15.ALL)
#endif

/* GAFLPH15L */
#ifdef __RL78__
#else
	#define	GAFLPH15L	(gaflph15.BYTE.gaflph15l)
#endif

/* GAFLPH15H */
#ifdef __RL78__
#else
	#define	GAFLPH15H	(gaflph15.BYTE.gaflph15h)
#endif

/* GAFLPH15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	gaflph15l;
	SFR_UNSIGNED_SHORT_INT	gaflph15h;
}SFR_BYTE_GAFLPH15;

typedef union{
	SFR_BYTE_GAFLPH15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_GAFLPH15;

SFR_GLOBAL	SFR_GAFLPH15	gaflph15;

#ifdef __RL78__
#else
	#define	GAFLPH15	(gaflph15.ALL)
#endif

/* CAN受信ルール登録レジスタここまで */

/* CAN受信バッファ・レジスタここから */
/* RMIDL0L */
#ifdef __RL78__
#else
	#define	RMIDL0L	(rmidl0.BYTE.rmidl0l)
#endif

/* RMIDL0H */
#ifdef __RL78__
#else
	#define	RMIDL0H	(rmidl0.BYTE.rmidl0h)
#endif

/* RMIDL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl0l;
	SFR_UNSIGNED_SHORT_INT	rmidl0h;
}SFR_BYTE_RMIDL0;

typedef union{
	SFR_BYTE_RMIDL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL0;

SFR_GLOBAL	SFR_RMIDL0	rmidl0;

#ifdef __RL78__
#else
	#define	RMIDL0	(rmidl0.ALL)
#endif

/* RMIDH0L */
#ifdef __RL78__
#else
	#define	RMIDH0L	(rmidh0.BYTE.rmidh0l)
#endif

/* RMIDH0H */
#ifdef __RL78__
#else
	#define	RMIDH0H	(rmidh0.BYTE.rmidh0h)
#endif

/* RMIDH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh0l;
	SFR_UNSIGNED_SHORT_INT	rmidh0h;
}SFR_BYTE_RMIDH0;

typedef union{
	SFR_BYTE_RMIDH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH0;

SFR_GLOBAL	SFR_RMIDH0	rmidh0;

#ifdef __RL78__
#else
	#define	RMIDH0	(rmidh0.ALL)
#endif

/* RMTS0L */
#ifdef __RL78__
#else
	#define	RMTS0L	(rmts0.BYTE.rmts0l)
#endif

/* RMTS0H */
#ifdef __RL78__
#else
	#define	RMTS0H	(rmts0.BYTE.rmts0h)
#endif

/* RMTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts0l;
	SFR_UNSIGNED_SHORT_INT	rmts0h;
}SFR_BYTE_RMTS0;

typedef union{
	SFR_BYTE_RMTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS0;

SFR_GLOBAL	SFR_RMTS0	rmts0;

#ifdef __RL78__
#else
	#define	RMTS0	(rmts0.ALL)
#endif

/* RMPTR0L */
#ifdef __RL78__
#else
	#define	RMPTR0L	(rmptr0.BYTE.rmptr0l)
#endif

/* RMPTR0H */
#ifdef __RL78__
#else
	#define	RMPTR0H	(rmptr0.BYTE.rmptr0h)
#endif

/* RMPTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr0l;
	SFR_UNSIGNED_SHORT_INT	rmptr0h;
}SFR_BYTE_RMPTR0;

typedef union{
	SFR_BYTE_RMPTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR0;

SFR_GLOBAL	SFR_RMPTR0	rmptr0;

#ifdef __RL78__
#else
	#define	RMPTR0	(rmptr0.ALL)
#endif

/* RMDF00L */
#ifdef __RL78__
#else
	#define	RMDF00L	(rmdf00.BYTE.rmdf00l)
#endif

/* RMDF00H */
#ifdef __RL78__
#else
	#define	RMDF00H	(rmdf00.BYTE.rmdf00h)
#endif

/* RMDF00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf00l;
	SFR_UNSIGNED_SHORT_INT	rmdf00h;
}SFR_BYTE_RMDF00;

typedef union{
	SFR_BYTE_RMDF00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF00;

SFR_GLOBAL	SFR_RMDF00	rmdf00;

#ifdef __RL78__
#else
	#define	RMDF00	(rmdf00.ALL)
#endif

/* RMDF10L */
#ifdef __RL78__
#else
	#define	RMDF10L	(rmdf10.BYTE.rmdf10l)
#endif

/* RMDF10H */
#ifdef __RL78__
#else
	#define	RMDF10H	(rmdf10.BYTE.rmdf10h)
#endif

/* RMDF10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf10l;
	SFR_UNSIGNED_SHORT_INT	rmdf10h;
}SFR_BYTE_RMDF10;

typedef union{
	SFR_BYTE_RMDF10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF10;

SFR_GLOBAL	SFR_RMDF10	rmdf10;

#ifdef __RL78__
#else
	#define	RMDF10	(rmdf10.ALL)
#endif

/* RMDF20L */
#ifdef __RL78__
#else
	#define	RMDF20L	(rmdf20.BYTE.rmdf20l)
#endif

/* RMDF20H */
#ifdef __RL78__
#else
	#define	RMDF20H	(rmdf20.BYTE.rmdf20h)
#endif

/* RMDF20 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf20l;
	SFR_UNSIGNED_SHORT_INT	rmdf20h;
}SFR_BYTE_RMDF20;

typedef union{
	SFR_BYTE_RMDF20	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF20;

SFR_GLOBAL	SFR_RMDF20	rmdf20;

#ifdef __RL78__
#else
	#define	RMDF20	(rmdf20.ALL)
#endif

/* RMDF30L */
#ifdef __RL78__
#else
	#define	RMDF30L	(rmdf30.BYTE.rmdf30l)
#endif

/* RMDF30H */
#ifdef __RL78__
#else
	#define	RMDF30H	(rmdf30.BYTE.rmdf30h)
#endif

/* RMDF30 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf30l;
	SFR_UNSIGNED_SHORT_INT	rmdf30h;
}SFR_BYTE_RMDF30;

typedef union{
	SFR_BYTE_RMDF30	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF30;

SFR_GLOBAL	SFR_RMDF30	rmdf30;

#ifdef __RL78__
#else
	#define	RMDF30	(rmdf30.ALL)
#endif

/* RMIDL1L */
#ifdef __RL78__
#else
	#define	RMIDL1L	(rmidl1.BYTE.rmidl1l)
#endif

/* RMIDL1H */
#ifdef __RL78__
#else
	#define	RMIDL1H	(rmidl1.BYTE.rmidl1h)
#endif

/* RMIDL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl1l;
	SFR_UNSIGNED_SHORT_INT	rmidl1h;
}SFR_BYTE_RMIDL1;

typedef union{
	SFR_BYTE_RMIDL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL1;

SFR_GLOBAL	SFR_RMIDL1	rmidl1;

#ifdef __RL78__
#else
	#define	RMIDL1	(rmidl1.ALL)
#endif

/* RMIDH1L */
#ifdef __RL78__
#else
	#define	RMIDH1L	(rmidh1.BYTE.rmidh1l)
#endif

/* RMIDH1H */
#ifdef __RL78__
#else
	#define	RMIDH1H	(rmidh1.BYTE.rmidh1h)
#endif

/* RMIDH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh1l;
	SFR_UNSIGNED_SHORT_INT	rmidh1h;
}SFR_BYTE_RMIDH1;

typedef union{
	SFR_BYTE_RMIDH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH1;

SFR_GLOBAL	SFR_RMIDH1	rmidh1;

#ifdef __RL78__
#else
	#define	RMIDH1	(rmidh1.ALL)
#endif

/* RMTS1L */
#ifdef __RL78__
#else
	#define	RMTS1L	(rmts1.BYTE.rmts1l)
#endif

/* RMTS1H */
#ifdef __RL78__
#else
	#define	RMTS1H	(rmts1.BYTE.rmts1h)
#endif

/* RMTS1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts1l;
	SFR_UNSIGNED_SHORT_INT	rmts1h;
}SFR_BYTE_RMTS1;

typedef union{
	SFR_BYTE_RMTS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS1;

SFR_GLOBAL	SFR_RMTS1	rmts1;

#ifdef __RL78__
#else
	#define	RMTS1	(rmts1.ALL)
#endif

/* RMPTR1L */
#ifdef __RL78__
#else
	#define	RMPTR1L	(rmptr1.BYTE.rmptr1l)
#endif

/* RMPTR1H */
#ifdef __RL78__
#else
	#define	RMPTR1H	(rmptr1.BYTE.rmptr1h)
#endif

/* RMPTR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr1l;
	SFR_UNSIGNED_SHORT_INT	rmptr1h;
}SFR_BYTE_RMPTR1;

typedef union{
	SFR_BYTE_RMPTR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR1;

SFR_GLOBAL	SFR_RMPTR1	rmptr1;

#ifdef __RL78__
#else
	#define	RMPTR1	(rmptr1.ALL)
#endif

/* RMDF01L */
#ifdef __RL78__
#else
	#define	RMDF01L	(rmdf01.BYTE.rmdf01l)
#endif

/* RMDF01H */
#ifdef __RL78__
#else
	#define	RMDF01H	(rmdf01.BYTE.rmdf01h)
#endif

/* RMDF01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf01l;
	SFR_UNSIGNED_SHORT_INT	rmdf01h;
}SFR_BYTE_RMDF01;

typedef union{
	SFR_BYTE_RMDF01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF01;

SFR_GLOBAL	SFR_RMDF01	rmdf01;

#ifdef __RL78__
#else
	#define	RMDF01	(rmdf01.ALL)
#endif

/* RMDF11L */
#ifdef __RL78__
#else
	#define	RMDF11L	(rmdf11.BYTE.rmdf11l)
#endif

/* RMDF11H */
#ifdef __RL78__
#else
	#define	RMDF11H	(rmdf11.BYTE.rmdf11h)
#endif

/* RMDF11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf11l;
	SFR_UNSIGNED_SHORT_INT	rmdf11h;
}SFR_BYTE_RMDF11;

typedef union{
	SFR_BYTE_RMDF11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF11;

SFR_GLOBAL	SFR_RMDF11	rmdf11;

#ifdef __RL78__
#else
	#define	RMDF11	(rmdf11.ALL)
#endif

/* RMDF21L */
#ifdef __RL78__
#else
	#define	RMDF21L	(rmdf21.BYTE.rmdf21l)
#endif

/* RMDF21H */
#ifdef __RL78__
#else
	#define	RMDF21H	(rmdf21.BYTE.rmdf21h)
#endif

/* RMDF21 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf21l;
	SFR_UNSIGNED_SHORT_INT	rmdf21h;
}SFR_BYTE_RMDF21;

typedef union{
	SFR_BYTE_RMDF21	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF21;

SFR_GLOBAL	SFR_RMDF21	rmdf21;

#ifdef __RL78__
#else
	#define	RMDF21	(rmdf21.ALL)
#endif

/* RMDF31L */
#ifdef __RL78__
#else
	#define	RMDF31L	(rmdf31.BYTE.rmdf31l)
#endif

/* RMDF31H */
#ifdef __RL78__
#else
	#define	RMDF31H	(rmdf31.BYTE.rmdf31h)
#endif

/* RMDF31 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf31l;
	SFR_UNSIGNED_SHORT_INT	rmdf31h;
}SFR_BYTE_RMDF31;

typedef union{
	SFR_BYTE_RMDF31	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF31;

SFR_GLOBAL	SFR_RMDF31	rmdf31;

#ifdef __RL78__
#else
	#define	RMDF31	(rmdf31.ALL)
#endif

/* RMIDL2L */
#ifdef __RL78__
#else
	#define	RMIDL2L	(rmidl2.BYTE.rmidl2l)
#endif

/* RMIDL2H */
#ifdef __RL78__
#else
	#define	RMIDL2H	(rmidl2.BYTE.rmidl2h)
#endif

/* RMIDL2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl2l;
	SFR_UNSIGNED_SHORT_INT	rmidl2h;
}SFR_BYTE_RMIDL2;

typedef union{
	SFR_BYTE_RMIDL2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL2;

SFR_GLOBAL	SFR_RMIDL2	rmidl2;

#ifdef __RL78__
#else
	#define	RMIDL2	(rmidl2.ALL)
#endif

/* RMIDH2L */
#ifdef __RL78__
#else
	#define	RMIDH2L	(rmidh2.BYTE.rmidh2l)
#endif

/* RMIDH2H */
#ifdef __RL78__
#else
	#define	RMIDH2H	(rmidh2.BYTE.rmidh2h)
#endif

/* RMIDH2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh2l;
	SFR_UNSIGNED_SHORT_INT	rmidh2h;
}SFR_BYTE_RMIDH2;

typedef union{
	SFR_BYTE_RMIDH2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH2;

SFR_GLOBAL	SFR_RMIDH2	rmidh2;

#ifdef __RL78__
#else
	#define	RMIDH2	(rmidh2.ALL)
#endif

/* RMTS2L */
#ifdef __RL78__
#else
	#define	RMTS2L	(rmts2.BYTE.rmts2l)
#endif

/* RMTS2H */
#ifdef __RL78__
#else
	#define	RMTS2H	(rmts2.BYTE.rmts2h)
#endif

/* RMTS2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts2l;
	SFR_UNSIGNED_SHORT_INT	rmts2h;
}SFR_BYTE_RMTS2;

typedef union{
	SFR_BYTE_RMTS2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS2;

SFR_GLOBAL	SFR_RMTS2	rmts2;

#ifdef __RL78__
#else
	#define	RMTS2	(rmts2.ALL)
#endif

/* RMPTR2L */
#ifdef __RL78__
#else
	#define	RMPTR2L	(rmptr2.BYTE.rmptr2l)
#endif

/* RMPTR2H */
#ifdef __RL78__
#else
	#define	RMPTR2H	(rmptr2.BYTE.rmptr2h)
#endif

/* RMPTR2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr2l;
	SFR_UNSIGNED_SHORT_INT	rmptr2h;
}SFR_BYTE_RMPTR2;

typedef union{
	SFR_BYTE_RMPTR2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR2;

SFR_GLOBAL	SFR_RMPTR2	rmptr2;
	
#ifdef __RL78__
#else
	#define	RMPTR2	(rmptr2.ALL)
#endif

/* RMDF02L */
#ifdef __RL78__
#else
	#define	RMDF02L	(rmdf02.BYTE.rmdf02l)
#endif

/* RMDF02H */
#ifdef __RL78__
#else
	#define	RMDF02H	(rmdf02.BYTE.rmdf02h)
#endif

/* RMDF02 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf02l;
	SFR_UNSIGNED_SHORT_INT	rmdf02h;
}SFR_BYTE_RMDF02;

typedef union{
	SFR_BYTE_RMDF02	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF02;

SFR_GLOBAL	SFR_RMDF02	rmdf02;

#ifdef __RL78__
#else
	#define	RMDF02	(rmdf02.ALL)
#endif

/* RMDF12L */
#ifdef __RL78__
#else
	#define	RMDF12L	(rmdf12.BYTE.rmdf12l)
#endif

/* RMDF12H */
#ifdef __RL78__
#else
	#define	RMDF12H	(rmdf12.BYTE.rmdf12h)
#endif

/* RMDF12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf12l;
	SFR_UNSIGNED_SHORT_INT	rmdf12h;
}SFR_BYTE_RMDF12;

typedef union{
	SFR_BYTE_RMDF12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF12;

SFR_GLOBAL	SFR_RMDF12	rmdf12;

#ifdef __RL78__
#else
	#define	RMDF12	(rmdf12.ALL)
#endif

/* RMDF22L */
#ifdef __RL78__
#else
	#define	RMDF22L	(rmdf22.BYTE.rmdf22l)
#endif

/* RMDF22H */
#ifdef __RL78__
#else
	#define	RMDF22H	(rmdf22.BYTE.rmdf22h)
#endif

/* RMDF22 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf22l;
	SFR_UNSIGNED_SHORT_INT	rmdf22h;
}SFR_BYTE_RMDF22;

typedef union{
	SFR_BYTE_RMDF22	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF22;

SFR_GLOBAL	SFR_RMDF22	rmdf22;

#ifdef __RL78__
#else
	#define	RMDF22	(rmdf22.ALL)
#endif

/* RMDF32L */
#ifdef __RL78__
#else
	#define	RMDF32L	(rmdf32.BYTE.rmdf32l)
#endif

/* RMDF32H */
#ifdef __RL78__
#else
	#define	RMDF32H	(rmdf32.BYTE.rmdf32h)
#endif

/* RMDF32 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf32l;
	SFR_UNSIGNED_SHORT_INT	rmdf32h;
}SFR_BYTE_RMDF32;

typedef union{
	SFR_BYTE_RMDF32	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF32;

SFR_GLOBAL	SFR_RMDF32	rmdf32;

#ifdef __RL78__
#else
	#define	RMDF32	(rmdf32.ALL)
#endif

/* RMIDL3L */
#ifdef __RL78__
#else
	#define	RMIDL3L	(rmidl3.BYTE.rmidl3l)
#endif

/* RMIDL3H */
#ifdef __RL78__
#else
	#define	RMIDL3H	(rmidl3.BYTE.rmidl3h)
#endif

/* RMIDL3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl3l;
	SFR_UNSIGNED_SHORT_INT	rmidl3h;
}SFR_BYTE_RMIDL3;

typedef union{
	SFR_BYTE_RMIDL3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL3;

SFR_GLOBAL	SFR_RMIDL3	rmidl3;

#ifdef __RL78__
#else
	#define	RMIDL3	(rmidl3.ALL)
#endif

/* RMIDH3L */
#ifdef __RL78__
#else
	#define	RMIDH3L	(rmidh3.BYTE.rmidh3l)
#endif

/* RMIDH3H */
#ifdef __RL78__
#else
	#define	RMIDH3H	(rmidh3.BYTE.rmidh3h)
#endif

/* RMIDH3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh3l;
	SFR_UNSIGNED_SHORT_INT	rmidh3h;
}SFR_BYTE_RMIDH3;

typedef union{
	SFR_BYTE_RMIDH3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH3;

SFR_GLOBAL	SFR_RMIDH3	rmidh3;

#ifdef __RL78__
#else
	#define	RMIDH3	(rmidh3.ALL)
#endif

/* RMTS3L */
#ifdef __RL78__
#else
	#define	RMTS3L	(rmts3.BYTE.rmts3l)
#endif

/* RMTS3H */
#ifdef __RL78__
#else
	#define	RMTS3H	(rmts3.BYTE.rmts3h)
#endif

/* RMTS3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts3l;
	SFR_UNSIGNED_SHORT_INT	rmts3h;
}SFR_BYTE_RMTS3;

typedef union{
	SFR_BYTE_RMTS3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS3;

SFR_GLOBAL	SFR_RMTS3	rmts3;

#ifdef __RL78__
#else
	#define	RMTS3	(rmts3.ALL)
#endif

/* RMPTR3L */
#ifdef __RL78__
#else
	#define	RMPTR3L	(rmptr3.BYTE.rmptr3l)
#endif

/* RMPTR3H */
#ifdef __RL78__
#else
	#define	RMPTR3H	(rmptr3.BYTE.rmptr3h)
#endif

/* RMPTR3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr3l;
	SFR_UNSIGNED_SHORT_INT	rmptr3h;
}SFR_BYTE_RMPTR3;

typedef union{
	SFR_BYTE_RMPTR3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR3;

SFR_GLOBAL	SFR_RMPTR3	rmptr3;

#ifdef __RL78__
#else
	#define	RMPTR3	(rmptr3.ALL)
#endif

/* RMDF03L */
#ifdef __RL78__
#else
	#define	RMDF03L	(rmdf03.BYTE.rmdf03l)
#endif

/* RMDF03H */
#ifdef __RL78__
#else
	#define	RMDF03H	(rmdf03.BYTE.rmdf03h)
#endif

/* RMDF03 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf03l;
	SFR_UNSIGNED_SHORT_INT	rmdf03h;
}SFR_BYTE_RMDF03;

typedef union{
	SFR_BYTE_RMDF03	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF03;

SFR_GLOBAL	SFR_RMDF03	rmdf03;

#ifdef __RL78__
#else
	#define	RMDF03	(rmdf03.ALL)
#endif

/* RMDF13L */
#ifdef __RL78__
#else
	#define	RMDF13L	(rmdf13.BYTE.rmdf13l)
#endif

/* RMDF13H */
#ifdef __RL78__
#else
	#define	RMDF13H	(rmdf13.BYTE.rmdf13h)
#endif

/* RMDF13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf13l;
	SFR_UNSIGNED_SHORT_INT	rmdf13h;
}SFR_BYTE_RMDF13;

typedef union{
	SFR_BYTE_RMDF13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF13;

SFR_GLOBAL	SFR_RMDF13	rmdf13;

#ifdef __RL78__
#else
	#define	RMDF13	(rmdf13.ALL)
#endif

/* RMDF23L */
#ifdef __RL78__
#else
	#define	RMDF23L	(rmdf23.BYTE.rmdf23l)
#endif

/* RMDF23H */
#ifdef __RL78__
#else
	#define	RMDF23H	(rmdf23.BYTE.rmdf23h)
#endif

/* RMDF23 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf23l;
	SFR_UNSIGNED_SHORT_INT	rmdf23h;
}SFR_BYTE_RMDF23;

typedef union{
	SFR_BYTE_RMDF23	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF23;

SFR_GLOBAL	SFR_RMDF23	rmdf23;

#ifdef __RL78__
#else
	#define	RMDF23	(rmdf23.ALL)
#endif

/* RMDF33L */
#ifdef __RL78__
#else
	#define	RMDF33L	(rmdf33.BYTE.rmdf33l)
#endif

/* RMDF33H */
#ifdef __RL78__
#else
	#define	RMDF33H	(rmdf33.BYTE.rmdf33h)
#endif

/* RMDF33 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf33l;
	SFR_UNSIGNED_SHORT_INT	rmdf33h;
}SFR_BYTE_RMDF33;

typedef union{
	SFR_BYTE_RMDF33	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF33;

SFR_GLOBAL	SFR_RMDF33	rmdf33;

#ifdef __RL78__
#else
	#define	RMDF33	(rmdf33.ALL)
#endif

/* RMIDL4L */
#ifdef __RL78__
#else
	#define	RMIDL4L	(rmidl4.BYTE.rmidl4l)
#endif

/* RMIDL4H */
#ifdef __RL78__
#else
	#define	RMIDL4H	(rmidl4.BYTE.rmidl4h)
#endif

/* RMIDL4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl4l;
	SFR_UNSIGNED_SHORT_INT	rmidl4h;
}SFR_BYTE_RMIDL4;

typedef union{
	SFR_BYTE_RMIDL4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL4;

SFR_GLOBAL	SFR_RMIDL4	rmidl4;

#ifdef __RL78__
#else
	#define	RMIDL4	(rmidl4.ALL)
#endif

/* RMIDH4L */
#ifdef __RL78__
#else
	#define	RMIDH4L	(rmidh4.BYTE.rmidh4l)
#endif

/* RMIDH4H */
#ifdef __RL78__
#else
	#define	RMIDH4H	(rmidh4.BYTE.rmidh4h)
#endif

/* RMIDH4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh4l;
	SFR_UNSIGNED_SHORT_INT	rmidh4h;
}SFR_BYTE_RMIDH4;

typedef union{
	SFR_BYTE_RMIDH4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH4;

SFR_GLOBAL	SFR_RMIDH4	rmidh4;

#ifdef __RL78__
#else
	#define	RMIDH4	(rmidh4.ALL)
#endif

/* RMTS4L */
#ifdef __RL78__
#else
	#define	RMTS4L	(rmts4.BYTE.rmts4l)
#endif

/* RMTS4H */
#ifdef __RL78__
#else
	#define	RMTS4H	(rmts4.BYTE.rmts4h)
#endif

/* RMTS4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts4l;
	SFR_UNSIGNED_SHORT_INT	rmts4h;
}SFR_BYTE_RMTS4;

typedef union{
	SFR_BYTE_RMTS4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS4;

SFR_GLOBAL	SFR_RMTS4	rmts4;

#ifdef __RL78__
#else
	#define	RMTS4	(rmts4.ALL)
#endif

/* RMPTR4L */
#ifdef __RL78__
#else
	#define	RMPTR4L	(rmptr4.BYTE.rmptr4l)
#endif

/* RMPTR4H */
#ifdef __RL78__
#else
	#define	RMPTR4H	(rmptr4.BYTE.rmptr4h)
#endif

/* RMPTR4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr4l;
	SFR_UNSIGNED_SHORT_INT	rmptr4h;
}SFR_BYTE_RMPTR4;

typedef union{
	SFR_BYTE_RMPTR4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR4;

SFR_GLOBAL	SFR_RMPTR4	rmptr4;

#ifdef __RL78__
#else
	#define	RMPTR4	(rmptr4.ALL)
#endif

/* RMDF04L */
#ifdef __RL78__
#else
	#define	RMDF04L	(rmdf04.BYTE.rmdf04l)
#endif

/* RMDF04H */
#ifdef __RL78__
#else
	#define	RMDF04H	(rmdf04.BYTE.rmdf04h)
#endif

/* RMDF04 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf04l;
	SFR_UNSIGNED_SHORT_INT	rmdf04h;
}SFR_BYTE_RMDF04;

typedef union{
	SFR_BYTE_RMDF04	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF04;

SFR_GLOBAL	SFR_RMDF04	rmdf04;

#ifdef __RL78__
#else
	#define	RMDF04	(rmdf04.ALL)
#endif

/* RMDF14L */
#ifdef __RL78__
#else
	#define	RMDF14L	(rmdf14.BYTE.rmdf14l)
#endif

/* RMDF14H */
#ifdef __RL78__
#else
	#define	RMDF14H	(rmdf14.BYTE.rmdf14h)
#endif

/* RMDF14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf14l;
	SFR_UNSIGNED_SHORT_INT	rmdf14h;
}SFR_BYTE_RMDF14;

typedef union{
	SFR_BYTE_RMDF14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF14;

SFR_GLOBAL	SFR_RMDF14	rmdf14;

#ifdef __RL78__
#else
	#define	RMDF14	(rmdf14.ALL)
#endif

/* RMDF24L */
#ifdef __RL78__
#else
	#define	RMDF24L	(rmdf24.BYTE.rmdf24l)
#endif

/* RMDF24H */
#ifdef __RL78__
#else
	#define	RMDF24H	(rmdf24.BYTE.rmdf24h)
#endif

/* RMDF24 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf24l;
	SFR_UNSIGNED_SHORT_INT	rmdf24h;
}SFR_BYTE_RMDF24;

typedef union{
	SFR_BYTE_RMDF24	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF24;

SFR_GLOBAL	SFR_RMDF24	rmdf24;

#ifdef __RL78__
#else
	#define	RMDF24	(rmdf24.ALL)
#endif

/* RMDF34L */
#ifdef __RL78__
#else
	#define	RMDF34L	(rmdf34.BYTE.rmdf34l)
#endif

/* RMDF34H */
#ifdef __RL78__
#else
	#define	RMDF34H	(rmdf34.BYTE.rmdf34h)
#endif

/* RMDF34 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf34l;
	SFR_UNSIGNED_SHORT_INT	rmdf34h;
}SFR_BYTE_RMDF34;

typedef union{
	SFR_BYTE_RMDF34	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF34;

SFR_GLOBAL	SFR_RMDF34	rmdf34;

#ifdef __RL78__
#else
	#define	RMDF34	(rmdf34.ALL)
#endif

/* RMIDL5L */
#ifdef __RL78__
#else
	#define	RMIDL5L	(rmidl5.BYTE.rmidl5l)
#endif

/* RMIDL5H */
#ifdef __RL78__
#else
	#define	RMIDL5H	(rmidl5.BYTE.rmidl5h)
#endif

/* RMIDL5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl5l;
	SFR_UNSIGNED_SHORT_INT	rmidl5h;
}SFR_BYTE_RMIDL5;

typedef union{
	SFR_BYTE_RMIDL5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL5;

SFR_GLOBAL	SFR_RMIDL5	rmidl5;

#ifdef __RL78__
#else
	#define	RMIDL5	(rmidl5.ALL)
#endif

/* RMIDH5L */
#ifdef __RL78__
#else
	#define	RMIDH5L	(rmidh5.BYTE.rmidh5l)
#endif

/* RMIDH5H */
#ifdef __RL78__
#else
	#define	RMIDH5H	(rmidh5.BYTE.rmidh5h)
#endif

/* RMIDH5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh5l;
	SFR_UNSIGNED_SHORT_INT	rmidh5h;
}SFR_BYTE_RMIDH5;

typedef union{
	SFR_BYTE_RMIDH5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH5;

SFR_GLOBAL	SFR_RMIDH5	rmidh5;

#ifdef __RL78__
#else
	#define	RMIDH5	(rmidh5.ALL)
#endif

/* RMTS5L */
#ifdef __RL78__
#else
	#define	RMTS5L	(rmts5.BYTE.rmts5l)
#endif

/* RMTS5H */
#ifdef __RL78__
#else
	#define	RMTS5H	(rmts5.BYTE.rmts5h)
#endif

/* RMTS5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts5l;
	SFR_UNSIGNED_SHORT_INT	rmts5h;
}SFR_BYTE_RMTS5;

typedef union{
	SFR_BYTE_RMTS5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS5;

SFR_GLOBAL	SFR_RMTS5	rmts5;

#ifdef __RL78__
#else
	#define	RMTS5	(rmts5.ALL)
#endif

/* RMPTR5L */
#ifdef __RL78__
#else
	#define	RMPTR5L	(rmptr5.BYTE.rmptr5l)
#endif

/* RMPTR5H */
#ifdef __RL78__
#else
	#define	RMPTR5H	(rmptr5.BYTE.rmptr5h)
#endif

/* RMPTR5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr5l;
	SFR_UNSIGNED_SHORT_INT	rmptr5h;
}SFR_BYTE_RMPTR5;

typedef union{
	SFR_BYTE_RMPTR5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR5;

SFR_GLOBAL	SFR_RMPTR5	rmptr5;

#ifdef __RL78__
#else
	#define	RMPTR5	(rmptr5.ALL)
#endif

/* RMDF05L */
#ifdef __RL78__
#else
	#define	RMDF05L	(rmdf05.BYTE.rmdf05l)
#endif

/* RMDF05H */
#ifdef __RL78__
#else
	#define	RMDF05H	(rmdf05.BYTE.rmdf05h)
#endif

/* RMDF05 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf05l;
	SFR_UNSIGNED_SHORT_INT	rmdf05h;
}SFR_BYTE_RMDF05;

typedef union{
	SFR_BYTE_RMDF05	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF05;

SFR_GLOBAL	SFR_RMDF05	rmdf05;

#ifdef __RL78__
#else
	#define	RMDF05	(rmdf05.ALL)
#endif

/* RMDF15L */
#ifdef __RL78__
#else
	#define	RMDF15L	(rmdf15.BYTE.rmdf15l)
#endif

/* RMDF15H */
#ifdef __RL78__
#else
	#define	RMDF15H	(rmdf15.BYTE.rmdf15h)
#endif

/* RMDF15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf15l;
	SFR_UNSIGNED_SHORT_INT	rmdf15h;
}SFR_BYTE_RMDF15;

typedef union{
	SFR_BYTE_RMDF15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF15;

SFR_GLOBAL	SFR_RMDF15	rmdf15;

#ifdef __RL78__
#else
	#define	RMDF15	(rmdf15.ALL)
#endif

/* RMDF25L */
#ifdef __RL78__
#else
	#define	RMDF25L	(rmdf25.BYTE.rmdf25l)
#endif

/* RMDF25H */
#ifdef __RL78__
#else
	#define	RMDF25H	(rmdf25.BYTE.rmdf25h)
#endif

/* RMDF25 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf25l;
	SFR_UNSIGNED_SHORT_INT	rmdf25h;
}SFR_BYTE_RMDF25;

typedef union{
	SFR_BYTE_RMDF25	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF25;

SFR_GLOBAL	SFR_RMDF25	rmdf25;

#ifdef __RL78__
#else
	#define	RMDF25	(rmdf25.ALL)
#endif

/* RMDF35L */
#ifdef __RL78__
#else
	#define	RMDF35L	(rmdf35.BYTE.rmdf35l)
#endif

/* RMDF35H */
#ifdef __RL78__
#else
	#define	RMDF35H	(rmdf35.BYTE.rmdf35h)
#endif

/* RMDF35 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf35l;
	SFR_UNSIGNED_SHORT_INT	rmdf35h;
}SFR_BYTE_RMDF35;

typedef union{
	SFR_BYTE_RMDF35	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF35;

SFR_GLOBAL	SFR_RMDF35	rmdf35;

#ifdef __RL78__
#else
	#define	RMDF35	(rmdf35.ALL)
#endif

/* RMIDL6L */
#ifdef __RL78__
#else
	#define	RMIDL6L	(rmidl6.BYTE.rmidl6l)
#endif

/* RMIDL6H */
#ifdef __RL78__
#else
	#define	RMIDL6H	(rmidl6.BYTE.rmidl6h)
#endif

/* RMIDL6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl6l;
	SFR_UNSIGNED_SHORT_INT	rmidl6h;
}SFR_BYTE_RMIDL6;

typedef union{
	SFR_BYTE_RMIDL6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL6;

SFR_GLOBAL	SFR_RMIDL6	rmidl6;

#ifdef __RL78__
#else
	#define	RMIDL6	(rmidl6.ALL)
#endif

/* RMIDH6L */
#ifdef __RL78__
#else
	#define	RMIDH6L	(rmidh6.BYTE.rmidh6l)
#endif

/* RMIDH6H */
#ifdef __RL78__
#else
	#define	RMIDH6H	(rmidh6.BYTE.rmidh6h)
#endif

/* RMIDH6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh6l;
	SFR_UNSIGNED_SHORT_INT	rmidh6h;
}SFR_BYTE_RMIDH6;

typedef union{
	SFR_BYTE_RMIDH6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH6;

SFR_GLOBAL	SFR_RMIDH6	rmidh6;

#ifdef __RL78__
#else
	#define	RMIDH6	(rmidh6.ALL)
#endif

/* RMTS6L */
#ifdef __RL78__
#else
	#define	RMTS6L	(rmts6.BYTE.rmts6l)
#endif

/* RMTS6H */
#ifdef __RL78__
#else
	#define	RMTS6H	(rmts6.BYTE.rmts6h)
#endif

/* RMTS6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts6l;
	SFR_UNSIGNED_SHORT_INT	rmts6h;
}SFR_BYTE_RMTS6;

typedef union{
	SFR_BYTE_RMTS6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS6;

SFR_GLOBAL	SFR_RMTS6	rmts6;

#ifdef __RL78__
#else
	#define	RMTS6	(rmts6.ALL)
#endif

/* RMPTR6L */
#ifdef __RL78__
#else
	#define	RMPTR6L	(rmptr6.BYTE.rmptr6l)
#endif

/* RMPTR6H */
#ifdef __RL78__
#else
	#define	RMPTR6H	(rmptr6.BYTE.rmptr6h)
#endif

/* RMPTR6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr6l;
	SFR_UNSIGNED_SHORT_INT	rmptr6h;
}SFR_BYTE_RMPTR6;

typedef union{
	SFR_BYTE_RMPTR6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR6;

SFR_GLOBAL	SFR_RMPTR6	rmptr6;

#ifdef __RL78__
#else
	#define	RMPTR6	(rmptr6.ALL)
#endif

/* RMDF06L */
#ifdef __RL78__
#else
	#define	RMDF06L	(rmdf06.BYTE.rmdf06l)
#endif

/* RMDF06H */
#ifdef __RL78__
#else
	#define	RMDF06H	(rmdf06.BYTE.rmdf06h)
#endif

/* RMDF06 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf06l;
	SFR_UNSIGNED_SHORT_INT	rmdf06h;
}SFR_BYTE_RMDF06;

typedef union{
	SFR_BYTE_RMDF06	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF06;

SFR_GLOBAL	SFR_RMDF06	rmdf06;

#ifdef __RL78__
#else
	#define	RMDF06	(rmdf06.ALL)
#endif

/* RMDF16L */
#ifdef __RL78__
#else
	#define	RMDF16L	(rmdf16.BYTE.rmdf16l)
#endif

/* RMDF16H */
#ifdef __RL78__
#else
	#define	RMDF16H	(rmdf16.BYTE.rmdf16h)
#endif

/* RMDF16 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf16l;
	SFR_UNSIGNED_SHORT_INT	rmdf16h;
}SFR_BYTE_RMDF16;

typedef union{
	SFR_BYTE_RMDF16	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF16;

SFR_GLOBAL	SFR_RMDF16	rmdf16;

#ifdef __RL78__
#else
	#define	RMDF16	(rmdf16.ALL)
#endif

/* RMDF26L */
#ifdef __RL78__
#else
	#define	RMDF26L	(rmdf26.BYTE.rmdf26l)
#endif

/* RMDF26H */
#ifdef __RL78__
#else
	#define	RMDF26H	(rmdf26.BYTE.rmdf26h)
#endif

/* RMDF26 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf26l;
	SFR_UNSIGNED_SHORT_INT	rmdf26h;
}SFR_BYTE_RMDF26;

typedef union{
	SFR_BYTE_RMDF26	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF26;

SFR_GLOBAL	SFR_RMDF26	rmdf26;

#ifdef __RL78__
#else
	#define	RMDF26	(rmdf26.ALL)
#endif

/* RMDF36L */
#ifdef __RL78__
#else
	#define	RMDF36L	(rmdf36.BYTE.rmdf36l)
#endif

/* RMDF36H */
#ifdef __RL78__
#else
	#define	RMDF36H	(rmdf36.BYTE.rmdf36h)
#endif

/* RMDF36 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf36l;
	SFR_UNSIGNED_SHORT_INT	rmdf36h;
}SFR_BYTE_RMDF36;

typedef union{
	SFR_BYTE_RMDF36	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF36;

SFR_GLOBAL	SFR_RMDF36	rmdf36;

#ifdef __RL78__
#else
	#define	RMDF36	(rmdf36.ALL)
#endif

/* RMIDL7L */
#ifdef __RL78__
#else
	#define	RMIDL7L	(rmidl7.BYTE.rmidl7l)
#endif

/* RMIDL7H */
#ifdef __RL78__
#else
	#define	RMIDL7H	(rmidl7.BYTE.rmidl7h)
#endif

/* RMIDL7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl7l;
	SFR_UNSIGNED_SHORT_INT	rmidl7h;
}SFR_BYTE_RMIDL7;

typedef union{
	SFR_BYTE_RMIDL7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL7;

SFR_GLOBAL	SFR_RMIDL7	rmidl7;

#ifdef __RL78__
#else
	#define	RMIDL7	(rmidl7.ALL)
#endif

/* RMIDH7L */
#ifdef __RL78__
#else
	#define	RMIDH7L	(rmidh7.BYTE.rmidh7l)
#endif

/* RMIDH7H */
#ifdef __RL78__
#else
	#define	RMIDH7H	(rmidh7.BYTE.rmidh7h)
#endif

/* RMIDH7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh7l;
	SFR_UNSIGNED_SHORT_INT	rmidh7h;
}SFR_BYTE_RMIDH7;

typedef union{
	SFR_BYTE_RMIDH7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH7;

SFR_GLOBAL	SFR_RMIDH7	rmidh7;

#ifdef __RL78__
#else
	#define	RMIDH7	(rmidh7.ALL)
#endif

/* RMTS7L */
#ifdef __RL78__
#else
	#define	RMTS7L	(rmts7.BYTE.rmts7l)
#endif

/* RMTS7H */
#ifdef __RL78__
#else
	#define	RMTS7H	(rmts7.BYTE.rmts7h)
#endif

/* RMTS7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts7l;
	SFR_UNSIGNED_SHORT_INT	rmts7h;
}SFR_BYTE_RMTS7;

typedef union{
	SFR_BYTE_RMTS7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS7;

SFR_GLOBAL	SFR_RMTS7	rmts7;

#ifdef __RL78__
#else
	#define	RMTS7	(rmts7.ALL)
#endif

/* RMPTR7L */
#ifdef __RL78__
#else
	#define	RMPTR7L	(rmptr7.BYTE.rmptr7l)
#endif

/* RMPTR7H */
#ifdef __RL78__
#else
	#define	RMPTR7H	(rmptr7.BYTE.rmptr7h)
#endif

/* RMPTR7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr7l;
	SFR_UNSIGNED_SHORT_INT	rmptr7h;
}SFR_BYTE_RMPTR7;

typedef union{
	SFR_BYTE_RMPTR7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR7;

SFR_GLOBAL	SFR_RMPTR7	rmptr7;

#ifdef __RL78__
#else
	#define	RMPTR7	(rmptr7.ALL)
#endif

/* RMDF07L */
#ifdef __RL78__
#else
	#define	RMDF07L	(rmdf07.BYTE.rmdf07l)
#endif

/* RMDF07H */
#ifdef __RL78__
#else
	#define	RMDF07H	(rmdf07.BYTE.rmdf07h)
#endif

/* RMDF07 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf07l;
	SFR_UNSIGNED_SHORT_INT	rmdf07h;
}SFR_BYTE_RMDF07;

typedef union{
	SFR_BYTE_RMDF07	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF07;

SFR_GLOBAL	SFR_RMDF07	rmdf07;

#ifdef __RL78__
#else
	#define	RMDF07	(rmdf07.ALL)
#endif

/* RMDF17L */
#ifdef __RL78__
#else
	#define	RMDF17L	(rmdf17.BYTE.rmdf17l)
#endif

/* RMDF17H */
#ifdef __RL78__
#else
	#define	RMDF17H	(rmdf17.BYTE.rmdf17h)
#endif

/* RMDF17 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf17l;
	SFR_UNSIGNED_SHORT_INT	rmdf17h;
}SFR_BYTE_RMDF17;

typedef union{
	SFR_BYTE_RMDF17	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF17;

SFR_GLOBAL	SFR_RMDF17	rmdf17;

#ifdef __RL78__
#else
	#define	RMDF17	(rmdf17.ALL)
#endif

/* RMDF27L */
#ifdef __RL78__
#else
	#define	RMDF27L	(rmdf27.BYTE.rmdf27l)
#endif

/* RMDF27H */
#ifdef __RL78__
#else
	#define	RMDF27H	(rmdf27.BYTE.rmdf27h)
#endif

/* RMDF27 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf27l;
	SFR_UNSIGNED_SHORT_INT	rmdf27h;
}SFR_BYTE_RMDF27;

typedef union{
	SFR_BYTE_RMDF27	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF27;

SFR_GLOBAL	SFR_RMDF27	rmdf27;

#ifdef __RL78__
#else
	#define	RMDF27	(rmdf27.ALL)
#endif

/* RMDF37L */
#ifdef __RL78__
#else
	#define	RMDF37L	(rmdf37.BYTE.rmdf37l)
#endif

/* RMDF37H */
#ifdef __RL78__
#else
	#define	RMDF37H	(rmdf37.BYTE.rmdf37h)
#endif

/* RMDF37 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf37l;
	SFR_UNSIGNED_SHORT_INT	rmdf37h;
}SFR_BYTE_RMDF37;

typedef union{
	SFR_BYTE_RMDF37	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF37;

SFR_GLOBAL	SFR_RMDF37	rmdf37;

#ifdef __RL78__
#else
	#define	RMDF37	(rmdf37.ALL)
#endif

/* RMIDL8L */
#ifdef __RL78__
#else
	#define	RMIDL8L	(rmidl8.BYTE.rmidl8l)
#endif

/* RMIDL8H */
#ifdef __RL78__
#else
	#define	RMIDL8H	(rmidl8.BYTE.rmidl8h)
#endif

/* RMIDL8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl8l;
	SFR_UNSIGNED_SHORT_INT	rmidl8h;
}SFR_BYTE_RMIDL8;

typedef union{
	SFR_BYTE_RMIDL8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL8;

SFR_GLOBAL	SFR_RMIDL8	rmidl8;

#ifdef __RL78__
#else
	#define	RMIDL8	(rmidl8.ALL)
#endif

/* RMIDH8L */
#ifdef __RL78__
#else
	#define	RMIDH8L	(rmidh8.BYTE.rmidh8l)
#endif

/* RMIDH8H */
#ifdef __RL78__
#else
	#define	RMIDH8H	(rmidh8.BYTE.rmidh8h)
#endif

/* RMIDH8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh8l;
	SFR_UNSIGNED_SHORT_INT	rmidh8h;
}SFR_BYTE_RMIDH8;

typedef union{
	SFR_BYTE_RMIDH8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH8;

SFR_GLOBAL	SFR_RMIDH8	rmidh8;

#ifdef __RL78__
#else
	#define	RMIDH8	(rmidh8.ALL)
#endif

/* RMTS8L */
#ifdef __RL78__
#else
	#define	RMTS8L	(rmts8.BYTE.rmts8l)
#endif

/* RMTS8H */
#ifdef __RL78__
#else
	#define	RMTS8H	(rmts8.BYTE.rmts8h)
#endif

/* RMTS8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts8l;
	SFR_UNSIGNED_SHORT_INT	rmts8h;
}SFR_BYTE_RMTS8;

typedef union{
	SFR_BYTE_RMTS8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS8;

SFR_GLOBAL	SFR_RMTS8	rmts8;

#ifdef __RL78__
#else
	#define	RMTS8	(rmts8.ALL)
#endif

/* RMPTR8L */
#ifdef __RL78__
#else
	#define	RMPTR8L	(rmptr8.BYTE.rmptr8l)
#endif

/* RMPTR8H */
#ifdef __RL78__
#else
	#define	RMPTR8H	(rmptr8.BYTE.rmptr8h)
#endif

/* RMPTR8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr8l;
	SFR_UNSIGNED_SHORT_INT	rmptr8h;
}SFR_BYTE_RMPTR8;

typedef union{
	SFR_BYTE_RMPTR8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR8;

SFR_GLOBAL	SFR_RMPTR8	rmptr8;

#ifdef __RL78__
#else
	#define	RMPTR8	(rmptr8.ALL)
#endif

/* RMDF08L */
#ifdef __RL78__
#else
	#define	RMDF08L	(rmdf08.BYTE.rmdf08l)
#endif

/* RMDF08H */
#ifdef __RL78__
#else
	#define	RMDF08H	(rmdf08.BYTE.rmdf08h)
#endif

/* RMDF08 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf08l;
	SFR_UNSIGNED_SHORT_INT	rmdf08h;
}SFR_BYTE_RMDF08;

typedef union{
	SFR_BYTE_RMDF08	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF08;

SFR_GLOBAL	SFR_RMDF08	rmdf08;

#ifdef __RL78__
#else
	#define	RMDF08	(rmdf08.ALL)
#endif

/* RMDF18L */
#ifdef __RL78__
#else
	#define	RMDF18L	(rmdf18.BYTE.rmdf18l)
#endif

/* RMDF18H */
#ifdef __RL78__
#else
	#define	RMDF18H	(rmdf18.BYTE.rmdf18h)
#endif

/* RMDF18 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf18l;
	SFR_UNSIGNED_SHORT_INT	rmdf18h;
}SFR_BYTE_RMDF18;

typedef union{
	SFR_BYTE_RMDF18	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF18;

SFR_GLOBAL	SFR_RMDF18	rmdf18;

#ifdef __RL78__
#else
	#define	RMDF18	(rmdf18.ALL)
#endif

/* RMDF28L */
#ifdef __RL78__
#else
	#define	RMDF28L	(rmdf28.BYTE.rmdf28l)
#endif

/* RMDF28H */
#ifdef __RL78__
#else
	#define	RMDF28H	(rmdf28.BYTE.rmdf28h)
#endif

/* RMDF28 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf28l;
	SFR_UNSIGNED_SHORT_INT	rmdf28h;
}SFR_BYTE_RMDF28;

typedef union{
	SFR_BYTE_RMDF28	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF28;

SFR_GLOBAL	SFR_RMDF28	rmdf28;

#ifdef __RL78__
#else
	#define	RMDF28	(rmdf28.ALL)
#endif

/* RMDF38L */
#ifdef __RL78__
#else
	#define	RMDF38L	(rmdf38.BYTE.rmdf38l)
#endif

/* RMDF38H */
#ifdef __RL78__
#else
	#define	RMDF38H	(rmdf38.BYTE.rmdf38h)
#endif

/* RMDF38 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf38l;
	SFR_UNSIGNED_SHORT_INT	rmdf38h;
}SFR_BYTE_RMDF38;

typedef union{
	SFR_BYTE_RMDF38	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF38;

SFR_GLOBAL	SFR_RMDF38	rmdf38;

#ifdef __RL78__
#else
	#define	RMDF38	(rmdf38.ALL)
#endif

/* RMIDL9L */
#ifdef __RL78__
#else
	#define	RMIDL9L	(rmidl9.BYTE.rmidl9l)
#endif

/* RMIDL9H */
#ifdef __RL78__
#else
	#define	RMIDL9H	(rmidl9.BYTE.rmidl9h)
#endif

/* RMIDL9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl9l;
	SFR_UNSIGNED_SHORT_INT	rmidl9h;
}SFR_BYTE_RMIDL9;

typedef union{
	SFR_BYTE_RMIDL9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL9;

SFR_GLOBAL	SFR_RMIDL9	rmidl9;

#ifdef __RL78__
#else
	#define	RMIDL9	(rmidl9.ALL)
#endif

/* RMIDH9L */
#ifdef __RL78__
#else
	#define	RMIDH9L	(rmidh9.BYTE.rmidh9l)
#endif

/* RMIDH9H */
#ifdef __RL78__
#else
	#define	RMIDH9H	(rmidh9.BYTE.rmidh9h)
#endif

/* RMIDH9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh9l;
	SFR_UNSIGNED_SHORT_INT	rmidh9h;
}SFR_BYTE_RMIDH9;

typedef union{
	SFR_BYTE_RMIDH9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH9;

SFR_GLOBAL	SFR_RMIDH9	rmidh9;

#ifdef __RL78__
#else
	#define	RMIDH9	(rmidh9.ALL)
#endif

/* RMTS9L */
#ifdef __RL78__
#else
	#define	RMTS9L	(rmts9.BYTE.rmts9l)
#endif

/* RMTS9H */
#ifdef __RL78__
#else
	#define	RMTS9H	(rmts9.BYTE.rmts9h)
#endif

/* RMTS9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts9l;
	SFR_UNSIGNED_SHORT_INT	rmts9h;
}SFR_BYTE_RMTS9;

typedef union{
	SFR_BYTE_RMTS9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS9;

SFR_GLOBAL	SFR_RMTS9	rmts9;

#ifdef __RL78__
#else
	#define	RMTS9	(rmts9.ALL)
#endif

/* RMPTR9L */
#ifdef __RL78__
#else
	#define	RMPTR9L	(rmptr9.BYTE.rmptr9l)
#endif

/* RMPTR9H */
#ifdef __RL78__
#else
	#define	RMPTR9H	(rmptr9.BYTE.rmptr9h)
#endif

/* RMPTR9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr9l;
	SFR_UNSIGNED_SHORT_INT	rmptr9h;
}SFR_BYTE_RMPTR9;

typedef union{
	SFR_BYTE_RMPTR9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR9;

SFR_GLOBAL	SFR_RMPTR9	rmptr9;

#ifdef __RL78__
#else
	#define	RMPTR9	(rmptr9.ALL)
#endif

/* RMDF09L */
#ifdef __RL78__
#else
	#define	RMDF09L	(rmdf09.BYTE.rmdf09l)
#endif

/* RMDF09H */
#ifdef __RL78__
#else
	#define	RMDF09H	(rmdf09.BYTE.rmdf09h)
#endif

/* RMDF09 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf09l;
	SFR_UNSIGNED_SHORT_INT	rmdf09h;
}SFR_BYTE_RMDF09;

typedef union{
	SFR_BYTE_RMDF09	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF09;

SFR_GLOBAL	SFR_RMDF09	rmdf09;

#ifdef __RL78__
#else
	#define	RMDF09	(rmdf09.ALL)
#endif

/* RMDF19L */
#ifdef __RL78__
#else
	#define	RMDF19L	(rmdf19.BYTE.rmdf19l)
#endif

/* RMDF19H */
#ifdef __RL78__
#else
	#define	RMDF19H	(rmdf19.BYTE.rmdf19h)
#endif

/* RMDF19 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf19l;
	SFR_UNSIGNED_SHORT_INT	rmdf19h;
}SFR_BYTE_RMDF19;

typedef union{
	SFR_BYTE_RMDF19	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF19;

SFR_GLOBAL	SFR_RMDF19	rmdf19;

#ifdef __RL78__
#else
	#define	RMDF19	(rmdf19.ALL)
#endif

/* RMDF29L */
#ifdef __RL78__
#else
	#define	RMDF29L	(rmdf29.BYTE.rmdf29l)
#endif

/* RMDF29H */
#ifdef __RL78__
#else
	#define	RMDF29H	(rmdf29.BYTE.rmdf29h)
#endif

/* RMDF29 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf29l;
	SFR_UNSIGNED_SHORT_INT	rmdf29h;
}SFR_BYTE_RMDF29;

typedef union{
	SFR_BYTE_RMDF29	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF29;

SFR_GLOBAL	SFR_RMDF29	rmdf29;

#ifdef __RL78__
#else
	#define	RMDF29	(rmdf29.ALL)
#endif

/* RMDF39L */
#ifdef __RL78__
#else
	#define	RMDF39L	(rmdf39.BYTE.rmdf39l)
#endif

/* RMDF39H */
#ifdef __RL78__
#else
	#define	RMDF39H	(rmdf39.BYTE.rmdf39h)
#endif

/* RMDF39 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf39l;
	SFR_UNSIGNED_SHORT_INT	rmdf39h;
}SFR_BYTE_RMDF39;

typedef union{
	SFR_BYTE_RMDF39	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF39;

SFR_GLOBAL	SFR_RMDF39	rmdf39;

#ifdef __RL78__
#else
	#define	RMDF39	(rmdf39.ALL)
#endif

/* RMIDL10L */
#ifdef __RL78__
#else
	#define	RMIDL10L	(rmidl10.BYTE.rmidl10l)
#endif

/* RMIDL10H */
#ifdef __RL78__
#else
	#define	RMIDL10H	(rmidl10.BYTE.rmidl10h)
#endif

/* RMIDL10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl10l;
	SFR_UNSIGNED_SHORT_INT	rmidl10h;
}SFR_BYTE_RMIDL10;

typedef union{
	SFR_BYTE_RMIDL10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL10;

SFR_GLOBAL	SFR_RMIDL10	rmidl10;

#ifdef __RL78__
#else
	#define	RMIDL10	(rmidl10.ALL)
#endif

/* RMIDH10L */
#ifdef __RL78__
#else
	#define	RMIDH10L	(rmidh10.BYTE.rmidh10l)
#endif

/* RMIDH10H */
#ifdef __RL78__
#else
	#define	RMIDH10H	(rmidh10.BYTE.rmidh10h)
#endif

/* RMIDH10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh10l;
	SFR_UNSIGNED_SHORT_INT	rmidh10h;
}SFR_BYTE_RMIDH10;

typedef union{
	SFR_BYTE_RMIDH10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH10;

SFR_GLOBAL	SFR_RMIDH10	rmidh10;

#ifdef __RL78__
#else
	#define	RMIDH10	(rmidh10.ALL)
#endif

/* RMTS10L */
#ifdef __RL78__
#else
	#define	RMTS10L	(rmts10.BYTE.rmts10l)
#endif

/* RMTS10H */
#ifdef __RL78__
#else
	#define	RMTS10H	(rmts10.BYTE.rmts10h)
#endif

/* RMTS10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts10l;
	SFR_UNSIGNED_SHORT_INT	rmts10h;
}SFR_BYTE_RMTS10;

typedef union{
	SFR_BYTE_RMTS10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS10;

SFR_GLOBAL	SFR_RMTS10	rmts10;

#ifdef __RL78__
#else
	#define	RMTS10	(rmts10.ALL)
#endif

/* RMPTR10L */
#ifdef __RL78__
#else
	#define	RMPTR10L	(rmptr10.BYTE.rmptr10l)
#endif

/* RMPTR10H */
#ifdef __RL78__
#else
	#define	RMPTR10H	(rmptr10.BYTE.rmptr10h)
#endif

/* RMPTR10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr10l;
	SFR_UNSIGNED_SHORT_INT	rmptr10h;
}SFR_BYTE_RMPTR10;

typedef union{
	SFR_BYTE_RMPTR10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR10;

SFR_GLOBAL	SFR_RMPTR10	rmptr10;

#ifdef __RL78__
#else
	#define	RMPTR10	(rmptr10.ALL)
#endif

/* RMDF010L */
#ifdef __RL78__
#else
	#define	RMDF010L	(rmdf010.BYTE.rmdf010l)
#endif

/* RMDF010H */
#ifdef __RL78__
#else
	#define	RMDF010H	(rmdf010.BYTE.rmdf010h)
#endif

/* RMDF010 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf010l;
	SFR_UNSIGNED_SHORT_INT	rmdf010h;
}SFR_BYTE_RMDF010;

typedef union{
	SFR_BYTE_RMDF010	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF010;

SFR_GLOBAL	SFR_RMDF010	rmdf010;

#ifdef __RL78__
#else
	#define	RMDF010	(rmdf010.ALL)
#endif

/* RMDF110L */
#ifdef __RL78__
#else
	#define	RMDF110L	(rmdf110.BYTE.rmdf110l)
#endif

/* RMDF110H */
#ifdef __RL78__
#else
	#define	RMDF110H	(rmdf110.BYTE.rmdf110h)
#endif

/* RMDF110 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf110l;
	SFR_UNSIGNED_SHORT_INT	rmdf110h;
}SFR_BYTE_RMDF110;

typedef union{
	SFR_BYTE_RMDF110	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF110;

SFR_GLOBAL	SFR_RMDF110	rmdf110;

#ifdef __RL78__
#else
	#define	RMDF110	(rmdf110.ALL)
#endif

/* RMDF210L */
#ifdef __RL78__
#else
	#define	RMDF210L	(rmdf210.BYTE.rmdf210l)
#endif

/* RMDF210H */
#ifdef __RL78__
#else
	#define	RMDF210H	(rmdf210.BYTE.rmdf210h)
#endif

/* RMDF210 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf210l;
	SFR_UNSIGNED_SHORT_INT	rmdf210h;
}SFR_BYTE_RMDF210;

typedef union{
	SFR_BYTE_RMDF210	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF210;

SFR_GLOBAL	SFR_RMDF210	rmdf210;

#ifdef __RL78__
#else
	#define	RMDF210	(rmdf210.ALL)
#endif

/* RMDF310L */
#ifdef __RL78__
#else
	#define	RMDF310L	(rmdf310.BYTE.rmdf310l)
#endif

/* RMDF310H */
#ifdef __RL78__
#else
	#define	RMDF310H	(rmdf310.BYTE.rmdf310h)
#endif

/* RMDF310 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf310l;
	SFR_UNSIGNED_SHORT_INT	rmdf310h;
}SFR_BYTE_RMDF310;

typedef union{
	SFR_BYTE_RMDF310	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF310;

SFR_GLOBAL	SFR_RMDF310	rmdf310;

#ifdef __RL78__
#else
	#define	RMDF310	(rmdf310.ALL)
#endif

/* RMIDL11L */
#ifdef __RL78__
#else
	#define	RMIDL11L	(rmidl11.BYTE.rmidl11l)
#endif

/* RMIDL11H */
#ifdef __RL78__
#else
	#define	RMIDL11H	(rmidl11.BYTE.rmidl11h)
#endif

/* RMIDL11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl11l;
	SFR_UNSIGNED_SHORT_INT	rmidl11h;
}SFR_BYTE_RMIDL11;

typedef union{
	SFR_BYTE_RMIDL11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL11;

SFR_GLOBAL	SFR_RMIDL11	rmidl11;

#ifdef __RL78__
#else
	#define	RMIDL11	(rmidl11.ALL)
#endif

/* RMIDH11L */
#ifdef __RL78__
#else
	#define	RMIDH11L	(rmidh11.BYTE.rmidh11l)
#endif

/* RMIDH11H */
#ifdef __RL78__
#else
	#define	RMIDH11H	(rmidh11.BYTE.rmidh11h)
#endif

/* RMIDH11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh11l;
	SFR_UNSIGNED_SHORT_INT	rmidh11h;
}SFR_BYTE_RMIDH11;

typedef union{
	SFR_BYTE_RMIDH11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH11;

SFR_GLOBAL	SFR_RMIDH11	rmidh11;

#ifdef __RL78__
#else
	#define	RMIDH11	(rmidh11.ALL)
#endif

/* RMTS11L */
#ifdef __RL78__
#else
	#define	RMTS11L	(rmts11.BYTE.rmts11l)
#endif

/* RMTS11H */
#ifdef __RL78__
#else
	#define	RMTS11H	(rmts11.BYTE.rmts11h)
#endif

/* RMTS11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts11l;
	SFR_UNSIGNED_SHORT_INT	rmts11h;
}SFR_BYTE_RMTS11;

typedef union{
	SFR_BYTE_RMTS11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS11;

SFR_GLOBAL	SFR_RMTS11	rmts11;

#ifdef __RL78__
#else
	#define	RMTS11	(rmts11.ALL)
#endif

/* RMPTR11L */
#ifdef __RL78__
#else
	#define	RMPTR11L	(rmptr11.BYTE.rmptr11l)
#endif

/* RMPTR11H */
#ifdef __RL78__
#else
	#define	RMPTR11H	(rmptr11.BYTE.rmptr11h)
#endif

/* RMPTR11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr11l;
	SFR_UNSIGNED_SHORT_INT	rmptr11h;
}SFR_BYTE_RMPTR11;

typedef union{
	SFR_BYTE_RMPTR11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR11;

SFR_GLOBAL	SFR_RMPTR11	rmptr11;

#ifdef __RL78__
#else
	#define	RMPTR11	(rmptr11.ALL)
#endif

/* RMDF011L */
#ifdef __RL78__
#else
	#define	RMDF011L	(rmdf011.BYTE.rmdf011l)
#endif

/* RMDF011H */
#ifdef __RL78__
#else
	#define	RMDF011H	(rmdf011.BYTE.rmdf011h)
#endif

/* RMDF011 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf011l;
	SFR_UNSIGNED_SHORT_INT	rmdf011h;
}SFR_BYTE_RMDF011;

typedef union{
	SFR_BYTE_RMDF011	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF011;

SFR_GLOBAL	SFR_RMDF011	rmdf011;

#ifdef __RL78__
#else
	#define	RMDF011	(rmdf011.ALL)
#endif

/* RMDF111L */
#ifdef __RL78__
#else
	#define	RMDF111L	(rmdf111.BYTE.rmdf111l)
#endif

/* RMDF111H */
#ifdef __RL78__
#else
	#define	RMDF111H	(rmdf111.BYTE.rmdf111h)
#endif

/* RMDF111 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf111l;
	SFR_UNSIGNED_SHORT_INT	rmdf111h;
}SFR_BYTE_RMDF111;

typedef union{
	SFR_BYTE_RMDF111	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF111;

SFR_GLOBAL	SFR_RMDF111	rmdf111;

#ifdef __RL78__
#else
	#define	RMDF111	(rmdf111.ALL)
#endif

/* RMDF211L */
#ifdef __RL78__
#else
	#define	RMDF211L	(rmdf211.BYTE.rmdf211l)
#endif

/* RMDF211H */
#ifdef __RL78__
#else
	#define	RMDF211H	(rmdf211.BYTE.rmdf211h)
#endif

/* RMDF211 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf211l;
	SFR_UNSIGNED_SHORT_INT	rmdf211h;
}SFR_BYTE_RMDF211;

typedef union{
	SFR_BYTE_RMDF211	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF211;

SFR_GLOBAL	SFR_RMDF211	rmdf211;

#ifdef __RL78__
#else
	#define	RMDF211	(rmdf211.ALL)
#endif

/* RMDF311L */
#ifdef __RL78__
#else
	#define	RMDF311L	(rmdf311.BYTE.rmdf311l)
#endif

/* RMDF311H */
#ifdef __RL78__
#else
	#define	RMDF311H	(rmdf311.BYTE.rmdf311h)
#endif

/* RMDF311 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf311l;
	SFR_UNSIGNED_SHORT_INT	rmdf311h;
}SFR_BYTE_RMDF311;

typedef union{
	SFR_BYTE_RMDF311	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF311;

SFR_GLOBAL	SFR_RMDF311	rmdf311;

#ifdef __RL78__
#else
	#define	RMDF311	(rmdf311.ALL)
#endif

/* RMIDL12L */
#ifdef __RL78__
#else
	#define	RMIDL12L	(rmidl12.BYTE.rmidl12l)
#endif

/* RMIDL12H */
#ifdef __RL78__
#else
	#define	RMIDL12H	(rmidl12.BYTE.rmidl12h)
#endif

/* RMIDL12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl12l;
	SFR_UNSIGNED_SHORT_INT	rmidl12h;
}SFR_BYTE_RMIDL12;

typedef union{
	SFR_BYTE_RMIDL12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL12;

SFR_GLOBAL	SFR_RMIDL12	rmidl12;

#ifdef __RL78__
#else
	#define	RMIDL12	(rmidl12.ALL)
#endif

/* RMIDH12L */
#ifdef __RL78__
#else
	#define	RMIDH12L	(rmidh12.BYTE.rmidh12l)
#endif

/* RMIDH12H */
#ifdef __RL78__
#else
	#define	RMIDH12H	(rmidh12.BYTE.rmidh12h)
#endif

/* RMIDH12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh12l;
	SFR_UNSIGNED_SHORT_INT	rmidh12h;
}SFR_BYTE_RMIDH12;

typedef union{
	SFR_BYTE_RMIDH12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH12;

SFR_GLOBAL	SFR_RMIDH12	rmidh12;

#ifdef __RL78__
#else
	#define	RMIDH12	(rmidh12.ALL)
#endif

/* RMTS12L */
#ifdef __RL78__
#else
	#define	RMTS12L	(rmts12.BYTE.rmts12l)
#endif

/* RMTS12H */
#ifdef __RL78__
#else
	#define	RMTS12H	(rmts12.BYTE.rmts12h)
#endif

/* RMTS12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts12l;
	SFR_UNSIGNED_SHORT_INT	rmts12h;
}SFR_BYTE_RMTS12;

typedef union{
	SFR_BYTE_RMTS12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS12;

SFR_GLOBAL	SFR_RMTS12	rmts12;

#ifdef __RL78__
#else
	#define	RMTS12	(rmts12.ALL)
#endif

/* RMPTR12L */
#ifdef __RL78__
#else
	#define	RMPTR12L	(rmptr12.BYTE.rmptr12l)
#endif

/* RMPTR12H */
#ifdef __RL78__
#else
	#define	RMPTR12H	(rmptr12.BYTE.rmptr12h)
#endif

/* RMPTR12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr12l;
	SFR_UNSIGNED_SHORT_INT	rmptr12h;
}SFR_BYTE_RMPTR12;

typedef union{
	SFR_BYTE_RMPTR12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR12;

SFR_GLOBAL	SFR_RMPTR12	rmptr12;

#ifdef __RL78__
#else
	#define	RMPTR12	(rmptr12.ALL)
#endif

/* RMDF012L */
#ifdef __RL78__
#else
	#define	RMDF012L	(rmdf012.BYTE.rmdf012l)
#endif

/* RMDF012H */
#ifdef __RL78__
#else
	#define	RMDF012H	(rmdf012.BYTE.rmdf012h)
#endif

/* RMDF012 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf012l;
	SFR_UNSIGNED_SHORT_INT	rmdf012h;
}SFR_BYTE_RMDF012;

typedef union{
	SFR_BYTE_RMDF012	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF012;

SFR_GLOBAL	SFR_RMDF012	rmdf012;

#ifdef __RL78__
#else
	#define	RMDF012	(rmdf012.ALL)
#endif

/* RMDF112L */
#ifdef __RL78__
#else
	#define	RMDF112L	(rmdf112.BYTE.rmdf112l)
#endif

/* RMDF112H */
#ifdef __RL78__
#else
	#define	RMDF112H	(rmdf112.BYTE.rmdf112h)
#endif

/* RMDF112 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf112l;
	SFR_UNSIGNED_SHORT_INT	rmdf112h;
}SFR_BYTE_RMDF112;

typedef union{
	SFR_BYTE_RMDF112	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF112;

SFR_GLOBAL	SFR_RMDF112	rmdf112;

#ifdef __RL78__
#else
	#define	RMDF112	(rmdf112.ALL)
#endif

/* RMDF212L */
#ifdef __RL78__
#else
	#define	RMDF212L	(rmdf212.BYTE.rmdf212l)
#endif

/* RMDF212H */
#ifdef __RL78__
#else
	#define	RMDF212H	(rmdf212.BYTE.rmdf212h)
#endif

/* RMDF212 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf212l;
	SFR_UNSIGNED_SHORT_INT	rmdf212h;
}SFR_BYTE_RMDF212;

typedef union{
	SFR_BYTE_RMDF212	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF212;

SFR_GLOBAL	SFR_RMDF212	rmdf212;

#ifdef __RL78__
#else
	#define	RMDF212	(rmdf212.ALL)
#endif

/* RMDF312L */
#ifdef __RL78__
#else
	#define	RMDF312L	(rmdf312.BYTE.rmdf312l)
#endif

/* RMDF312H */
#ifdef __RL78__
#else
	#define	RMDF312H	(rmdf312.BYTE.rmdf312h)
#endif

/* RMDF312 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf312l;
	SFR_UNSIGNED_SHORT_INT	rmdf312h;
}SFR_BYTE_RMDF312;

typedef union{
	SFR_BYTE_RMDF312	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF312;

SFR_GLOBAL	SFR_RMDF312	rmdf312;

#ifdef __RL78__
#else
	#define	RMDF312	(rmdf312.ALL)
#endif

/* RMIDL13L */
#ifdef __RL78__
#else
	#define	RMIDL13L	(rmidl13.BYTE.rmidl13l)
#endif

/* RMIDL13H */
#ifdef __RL78__
#else
	#define	RMIDL13H	(rmidl13.BYTE.rmidl13h)
#endif

/* RMIDL13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl13l;
	SFR_UNSIGNED_SHORT_INT	rmidl13h;
}SFR_BYTE_RMIDL13;

typedef union{
	SFR_BYTE_RMIDL13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL13;

SFR_GLOBAL	SFR_RMIDL13	rmidl13;

#ifdef __RL78__
#else
	#define	RMIDL13	(rmidl13.ALL)
#endif

/* RMIDH13L */
#ifdef __RL78__
#else
	#define	RMIDH13L	(rmidh13.BYTE.rmidh13l)
#endif

/* RMIDH13H */
#ifdef __RL78__
#else
	#define	RMIDH13H	(rmidh13.BYTE.rmidh13h)
#endif

/* RMIDH13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh13l;
	SFR_UNSIGNED_SHORT_INT	rmidh13h;
}SFR_BYTE_RMIDH13;

typedef union{
	SFR_BYTE_RMIDH13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH13;

SFR_GLOBAL	SFR_RMIDH13	rmidh13;

#ifdef __RL78__
#else
	#define	RMIDH13	(rmidh13.ALL)
#endif

/* RMTS13L */
#ifdef __RL78__
#else
	#define	RMTS13L	(rmts13.BYTE.rmts13l)
#endif

/* RMTS13H */
#ifdef __RL78__
#else
	#define	RMTS13H	(rmts13.BYTE.rmts13h)
#endif

/* RMTS13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts13l;
	SFR_UNSIGNED_SHORT_INT	rmts13h;
}SFR_BYTE_RMTS13;

typedef union{
	SFR_BYTE_RMTS13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS13;

SFR_GLOBAL	SFR_RMTS13	rmts13;

#ifdef __RL78__
#else
	#define	RMTS13	(rmts13.ALL)
#endif

/* RMPTR13L */
#ifdef __RL78__
#else
	#define	RMPTR13L	(rmptr13.BYTE.rmptr13l)
#endif

/* RMPTR13H */
#ifdef __RL78__
#else
	#define	RMPTR13H	(rmptr13.BYTE.rmptr13h)
#endif

/* RMPTR13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr13l;
	SFR_UNSIGNED_SHORT_INT	rmptr13h;
}SFR_BYTE_RMPTR13;

typedef union{
	SFR_BYTE_RMPTR13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR13;

SFR_GLOBAL	SFR_RMPTR13	rmptr13;

#ifdef __RL78__
#else
	#define	RMPTR13	(rmptr13.ALL)
#endif

/* RMDF013L */
#ifdef __RL78__
#else
	#define	RMDF013L	(rmdf013.BYTE.rmdf013l)
#endif

/* RMDF013H */
#ifdef __RL78__
#else
	#define	RMDF013H	(rmdf013.BYTE.rmdf013h)
#endif

/* RMDF013 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf013l;
	SFR_UNSIGNED_SHORT_INT	rmdf013h;
}SFR_BYTE_RMDF013;

typedef union{
	SFR_BYTE_RMDF013	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF013;

SFR_GLOBAL	SFR_RMDF013	rmdf013;

#ifdef __RL78__
#else
	#define	RMDF013	(rmdf013.ALL)
#endif

/* RMDF113L */
#ifdef __RL78__
#else
	#define	RMDF113L	(rmdf113.BYTE.rmdf113l)
#endif

/* RMDF113H */
#ifdef __RL78__
#else
	#define	RMDF113H	(rmdf113.BYTE.rmdf113h)
#endif

/* RMDF113 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf113l;
	SFR_UNSIGNED_SHORT_INT	rmdf113h;
}SFR_BYTE_RMDF113;

typedef union{
	SFR_BYTE_RMDF113	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF113;

SFR_GLOBAL	SFR_RMDF113	rmdf113;

#ifdef __RL78__
#else
	#define	RMDF113	(rmdf113.ALL)
#endif

/* RMDF213L */
#ifdef __RL78__
#else
	#define	RMDF213L	(rmdf213.BYTE.rmdf213l)
#endif

/* RMDF213H */
#ifdef __RL78__
#else
	#define	RMDF213H	(rmdf213.BYTE.rmdf213h)
#endif

/* RMDF213 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf213l;
	SFR_UNSIGNED_SHORT_INT	rmdf213h;
}SFR_BYTE_RMDF213;

typedef union{
	SFR_BYTE_RMDF213	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF213;

SFR_GLOBAL	SFR_RMDF213	rmdf213;

#ifdef __RL78__
#else
	#define	RMDF213	(rmdf213.ALL)
#endif

/* RMDF313L */
#ifdef __RL78__
#else
	#define	RMDF313L	(rmdf313.BYTE.rmdf313l)
#endif

/* RMDF313H */
#ifdef __RL78__
#else
	#define	RMDF313H	(rmdf313.BYTE.rmdf313h)
#endif

/* RMDF313 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf313l;
	SFR_UNSIGNED_SHORT_INT	rmdf313h;
}SFR_BYTE_RMDF313;

typedef union{
	SFR_BYTE_RMDF313	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF313;

SFR_GLOBAL	SFR_RMDF313	rmdf313;

#ifdef __RL78__
#else
	#define	RMDF313	(rmdf313.ALL)
#endif

/* RMIDL14L */
#ifdef __RL78__
#else
	#define	RMIDL14L	(rmidl14.BYTE.rmidl14l)
#endif

/* RMIDL14H */
#ifdef __RL78__
#else
	#define	RMIDL14H	(rmidl14.BYTE.rmidl14h)
#endif

/* RMIDL14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl14l;
	SFR_UNSIGNED_SHORT_INT	rmidl14h;
}SFR_BYTE_RMIDL14;

typedef union{
	SFR_BYTE_RMIDL14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL14;

SFR_GLOBAL	SFR_RMIDL14	rmidl14;

#ifdef __RL78__
#else
	#define	RMIDL14	(rmidl14.ALL)
#endif

/* RMIDH14L */
#ifdef __RL78__
#else
	#define	RMIDH14L	(rmidh14.BYTE.rmidh14l)
#endif

/* RMIDH14H */
#ifdef __RL78__
#else
	#define	RMIDH14H	(rmidh14.BYTE.rmidh14h)
#endif

/* RMIDH14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh14l;
	SFR_UNSIGNED_SHORT_INT	rmidh14h;
}SFR_BYTE_RMIDH14;

typedef union{
	SFR_BYTE_RMIDH14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH14;

SFR_GLOBAL	SFR_RMIDH14	rmidh14;

#ifdef __RL78__
#else
	#define	RMIDH14	(rmidh14.ALL)
#endif

/* RMTS14L */
#ifdef __RL78__
#else
	#define	RMTS14L	(rmts14.BYTE.rmts14l)
#endif

/* RMTS14H */
#ifdef __RL78__
#else
	#define	RMTS14H	(rmts14.BYTE.rmts14h)
#endif

/* RMTS14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts14l;
	SFR_UNSIGNED_SHORT_INT	rmts14h;
}SFR_BYTE_RMTS14;

typedef union{
	SFR_BYTE_RMTS14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS14;

SFR_GLOBAL	SFR_RMTS14	rmts14;

#ifdef __RL78__
#else
	#define	RMTS14	(rmts14.ALL)
#endif

/* RMPTR14L */
#ifdef __RL78__
#else
	#define	RMPTR14L	(rmptr14.BYTE.rmptr14l)
#endif

/* RMPTR14H */
#ifdef __RL78__
#else
	#define	RMPTR14H	(rmptr14.BYTE.rmptr14h)
#endif

/* RMPTR14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr14l;
	SFR_UNSIGNED_SHORT_INT	rmptr14h;
}SFR_BYTE_RMPTR14;

typedef union{
	SFR_BYTE_RMPTR14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR14;

SFR_GLOBAL	SFR_RMPTR14	rmptr14;

#ifdef __RL78__
#else
	#define	RMPTR14	(rmptr14.ALL)
#endif

/* RMDF014L */
#ifdef __RL78__
#else
	#define	RMDF014L	(rmdf014.BYTE.rmdf014l)
#endif

/* RMDF014H */
#ifdef __RL78__
#else
	#define	RMDF014H	(rmdf014.BYTE.rmdf014h)
#endif

/* RMDF014 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf014l;
	SFR_UNSIGNED_SHORT_INT	rmdf014h;
}SFR_BYTE_RMDF014;

typedef union{
	SFR_BYTE_RMDF014	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF014;

SFR_GLOBAL	SFR_RMDF014	rmdf014;

#ifdef __RL78__
#else
	#define	RMDF014	(rmdf014.ALL)
#endif

/* RMDF114L */
#ifdef __RL78__
#else
	#define	RMDF114L	(rmdf114.BYTE.rmdf114l)
#endif

/* RMDF114H */
#ifdef __RL78__
#else
	#define	RMDF114H	(rmdf114.BYTE.rmdf114h)
#endif

/* RMDF114 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf114l;
	SFR_UNSIGNED_SHORT_INT	rmdf114h;
}SFR_BYTE_RMDF114;

typedef union{
	SFR_BYTE_RMDF114	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF114;

SFR_GLOBAL	SFR_RMDF114	rmdf114;

#ifdef __RL78__
#else
	#define	RMDF114	(rmdf114.ALL)
#endif

/* RMDF214L */
#ifdef __RL78__
#else
	#define	RMDF214L	(rmdf214.BYTE.rmdf214l)
#endif

/* RMDF214H */
#ifdef __RL78__
#else
	#define	RMDF214H	(rmdf214.BYTE.rmdf214h)
#endif

/* RMDF214 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf214l;
	SFR_UNSIGNED_SHORT_INT	rmdf214h;
}SFR_BYTE_RMDF214;

typedef union{
	SFR_BYTE_RMDF214	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF214;

SFR_GLOBAL	SFR_RMDF214	rmdf214;

#ifdef __RL78__
#else
	#define	RMDF214	(rmdf214.ALL)
#endif

/* RMDF314L */
#ifdef __RL78__
#else
	#define	RMDF314L	(rmdf314.BYTE.rmdf314l)
#endif

/* RMDF314H */
#ifdef __RL78__
#else
	#define	RMDF314H	(rmdf314.BYTE.rmdf314h)
#endif

/* RMDF314 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf314l;
	SFR_UNSIGNED_SHORT_INT	rmdf314h;
}SFR_BYTE_RMDF314;

typedef union{
	SFR_BYTE_RMDF314	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF314;

SFR_GLOBAL	SFR_RMDF314	rmdf314;

#ifdef __RL78__
#else
	#define	RMDF314	(rmdf314.ALL)
#endif

/* RMIDL15L */
#ifdef __RL78__
#else
	#define	RMIDL15L	(rmidl15.BYTE.rmidl15l)
#endif

/* RMIDL15H */
#ifdef __RL78__
#else
	#define	RMIDL15H	(rmidl15.BYTE.rmidl15h)
#endif

/* RMIDL15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidl15l;
	SFR_UNSIGNED_SHORT_INT	rmidl15h;
}SFR_BYTE_RMIDL15;

typedef union{
	SFR_BYTE_RMIDL15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDL15;

SFR_GLOBAL	SFR_RMIDL15	rmidl15;

#ifdef __RL78__
#else
	#define	RMIDL15	(rmidl15.ALL)
#endif

/* RMIDH15L */
#ifdef __RL78__
#else
	#define	RMIDH15L	(rmidh15.BYTE.rmidh15l)
#endif

/* RMIDH15H */
#ifdef __RL78__
#else
	#define	RMIDH15H	(rmidh15.BYTE.rmidh15h)
#endif

/* RMIDH15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmidh15l;
	SFR_UNSIGNED_SHORT_INT	rmidh15h;
}SFR_BYTE_RMIDH15;

typedef union{
	SFR_BYTE_RMIDH15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMIDH15;

SFR_GLOBAL	SFR_RMIDH15	rmidh15;

#ifdef __RL78__
#else
	#define	RMIDH15	(rmidh15.ALL)
#endif

/* RMTS15L */
#ifdef __RL78__
#else
	#define	RMTS15L	(rmts15.BYTE.rmts15l)
#endif

/* RMTS15H */
#ifdef __RL78__
#else
	#define	RMTS15H	(rmts15.BYTE.rmts15h)
#endif

/* RMTS15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmts15l;
	SFR_UNSIGNED_SHORT_INT	rmts15h;
}SFR_BYTE_RMTS15;

typedef union{
	SFR_BYTE_RMTS15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMTS15;

SFR_GLOBAL	SFR_RMTS15	rmts15;

#ifdef __RL78__
#else
	#define	RMTS15	(rmts15.ALL)
#endif

/* RMPTR15L */
#ifdef __RL78__
#else
	#define	RMPTR15L	(rmptr15.BYTE.rmptr15l)
#endif

/* RMPTR15H */
#ifdef __RL78__
#else
	#define	RMPTR15H	(rmptr15.BYTE.rmptr15h)
#endif

/* RMPTR15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmptr15l;
	SFR_UNSIGNED_SHORT_INT	rmptr15h;
}SFR_BYTE_RMPTR15;

typedef union{
	SFR_BYTE_RMPTR15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMPTR15;

SFR_GLOBAL	SFR_RMPTR15	rmptr15;

#ifdef __RL78__
#else
	#define	RMPTR15	(rmptr15.ALL)
#endif

/* RMDF015L */
#ifdef __RL78__
#else
	#define	RMDF015L	(rmdf015.BYTE.rmdf015l)
#endif

/* RMDF015H */
#ifdef __RL78__
#else
	#define	RMDF015H	(rmdf015.BYTE.rmdf015h)
#endif

/* RMDF015 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf015l;
	SFR_UNSIGNED_SHORT_INT	rmdf015h;
}SFR_BYTE_RMDF015;

typedef union{
	SFR_BYTE_RMDF015	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF015;

SFR_GLOBAL	SFR_RMDF015	rmdf015;

#ifdef __RL78__
#else
	#define	RMDF015	(rmdf015.ALL)
#endif

/* RMDF115L */
#ifdef __RL78__
#else
	#define	RMDF115L	(rmdf115.BYTE.rmdf115l)
#endif

/* RMDF115H */
#ifdef __RL78__
#else
	#define	RMDF115H	(rmdf115.BYTE.rmdf115h)
#endif

/* RMDF115 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf115l;
	SFR_UNSIGNED_SHORT_INT	rmdf115h;
}SFR_BYTE_RMDF115;

typedef union{
	SFR_BYTE_RMDF115	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF115;

SFR_GLOBAL	SFR_RMDF115	rmdf115;

#ifdef __RL78__
#else
	#define	RMDF115	(rmdf115.ALL)
#endif

/* RMDF215L */
#ifdef __RL78__
#else
	#define	RMDF215L	(rmdf215.BYTE.rmdf215l)
#endif

/* RMDF215H */
#ifdef __RL78__
#else
	#define	RMDF215H	(rmdf215.BYTE.rmdf215h)
#endif

/* RMDF215 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf215l;
	SFR_UNSIGNED_SHORT_INT	rmdf215h;
}SFR_BYTE_RMDF215;

typedef union{
	SFR_BYTE_RMDF215	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF215;

SFR_GLOBAL	SFR_RMDF215	rmdf215;

#ifdef __RL78__
#else
	#define	RMDF215	(rmdf215.ALL)
#endif

/* RMDF315L */
#ifdef __RL78__
#else
	#define	RMDF315L	(rmdf315.BYTE.rmdf315l)
#endif

/* RMDF315H */
#ifdef __RL78__
#else
	#define	RMDF315H	(rmdf315.BYTE.rmdf315h)
#endif

/* RMDF315 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rmdf315l;
	SFR_UNSIGNED_SHORT_INT	rmdf315h;
}SFR_BYTE_RMDF315;

typedef union{
	SFR_BYTE_RMDF315	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RMDF315;

SFR_GLOBAL	SFR_RMDF315	rmdf315;

#ifdef __RL78__
#else
	#define	RMDF315	(rmdf315.ALL)
#endif
/* CAN受信バッファ・レジスタここまで */

/* CAN用RAMテスト・レジスタここから */
/* RPGACC0L */
#ifdef __RL78__
#else
	#define	RPGACC0L	(rpgacc0.BYTE.rpgacc0l)
#endif

/* RPGACC0H */
#ifdef __RL78__
#else
	#define	RPGACC0H	(rpgacc0.BYTE.rpgacc0h)
#endif

/* RPGACC0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc0l;
	SFR_UNSIGNED_SHORT_INT	rpgacc0h;
}SFR_BYTE_RPGACC0;

typedef union{
	SFR_BYTE_RPGACC0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC0;

SFR_GLOBAL	SFR_RPGACC0	rpgacc0;

#ifdef __RL78__
#else
	#define	RPGACC0	(rpgacc0.ALL)
#endif

/* RPGACC1L */
#ifdef __RL78__
#else
	#define	RPGACC1L	(rpgacc1.BYTE.rpgacc1l)
#endif

/* RPGACC1H */
#ifdef __RL78__
#else
	#define	RPGACC1H	(rpgacc1.BYTE.rpgacc1h)
#endif

/* RPGACC1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc1l;
	SFR_UNSIGNED_SHORT_INT	rpgacc1h;
}SFR_BYTE_RPGACC1;

typedef union{
	SFR_BYTE_RPGACC1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC1;

SFR_GLOBAL	SFR_RPGACC1	rpgacc1;

#ifdef __RL78__
#else
	#define	RPGACC1	(rpgacc1.ALL)
#endif

/* RPGACC2L */
#ifdef __RL78__
#else
	#define	RPGACC2L	(rpgacc2.BYTE.rpgacc2l)
#endif

/* RPGACC2H */
#ifdef __RL78__
#else
	#define	RPGACC2H	(rpgacc2.BYTE.rpgacc2h)
#endif

/* RPGACC2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc2l;
	SFR_UNSIGNED_SHORT_INT	rpgacc2h;
}SFR_BYTE_RPGACC2;

typedef union{
	SFR_BYTE_RPGACC2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC2;

SFR_GLOBAL	SFR_RPGACC2	rpgacc2;

#ifdef __RL78__
#else
	#define	RPGACC2	(rpgacc2.ALL)
#endif

/* RPGACC3L */
#ifdef __RL78__
#else
	#define	RPGACC3L	(rpgacc3.BYTE.rpgacc3l)
#endif

/* RPGACC3H */
#ifdef __RL78__
#else
	#define	RPGACC3H	(rpgacc3.BYTE.rpgacc3h)
#endif

/* RPGACC3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc3l;
	SFR_UNSIGNED_SHORT_INT	rpgacc3h;
}SFR_BYTE_RPGACC3;

typedef union{
	SFR_BYTE_RPGACC3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC3;

SFR_GLOBAL	SFR_RPGACC3	rpgacc3;

#ifdef __RL78__
#else
	#define	RPGACC3	(rpgacc3.ALL)
#endif

/* RPGACC4L */
#ifdef __RL78__
#else
	#define	RPGACC4L	(rpgacc4.BYTE.rpgacc4l)
#endif

/* RPGACC4H */
#ifdef __RL78__
#else
	#define	RPGACC4H	(rpgacc4.BYTE.rpgacc4h)
#endif

/* RPGACC4 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc4l;
	SFR_UNSIGNED_SHORT_INT	rpgacc4h;
}SFR_BYTE_RPGACC4;

typedef union{
	SFR_BYTE_RPGACC4	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC4;

SFR_GLOBAL	SFR_RPGACC4	rpgacc4;

#ifdef __RL78__
#else
	#define	RPGACC4	(rpgacc4.ALL)
#endif

/* RPGACC5L */
#ifdef __RL78__
#else
	#define	RPGACC5L	(rpgacc5.BYTE.rpgacc5l)
#endif

/* RPGACC5H */
#ifdef __RL78__
#else
	#define	RPGACC5H	(rpgacc5.BYTE.rpgacc5h)
#endif

/* RPGACC5 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc5l;
	SFR_UNSIGNED_SHORT_INT	rpgacc5h;
}SFR_BYTE_RPGACC5;

typedef union{
	SFR_BYTE_RPGACC5	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC5;

SFR_GLOBAL	SFR_RPGACC5	rpgacc5;

#ifdef __RL78__
#else
	#define	RPGACC5	(rpgacc5.ALL)
#endif

/* RPGACC6L */
#ifdef __RL78__
#else
	#define	RPGACC6L	(rpgacc6.BYTE.rpgacc6l)
#endif

/* RPGACC6H */
#ifdef __RL78__
#else
	#define	RPGACC6H	(rpgacc6.BYTE.rpgacc6h)
#endif

/* RPGACC6 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc6l;
	SFR_UNSIGNED_SHORT_INT	rpgacc6h;
}SFR_BYTE_RPGACC6;

typedef union{
	SFR_BYTE_RPGACC6	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC6;

SFR_GLOBAL	SFR_RPGACC6	rpgacc6;

#ifdef __RL78__
#else
	#define	RPGACC6	(rpgacc6.ALL)
#endif

/* RPGACC7L */
#ifdef __RL78__
#else
	#define	RPGACC7L	(rpgacc7.BYTE.rpgacc7l)
#endif

/* RPGACC7H */
#ifdef __RL78__
#else
	#define	RPGACC7H	(rpgacc7.BYTE.rpgacc7h)
#endif

/* RPGACC7 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc7l;
	SFR_UNSIGNED_SHORT_INT	rpgacc7h;
}SFR_BYTE_RPGACC7;

typedef union{
	SFR_BYTE_RPGACC7	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC7;

SFR_GLOBAL	SFR_RPGACC7	rpgacc7;

#ifdef __RL78__
#else
	#define	RPGACC7	(rpgacc7.ALL)
#endif

/* RPGACC8L */
#ifdef __RL78__
#else
	#define	RPGACC8L	(rpgacc8.BYTE.rpgacc8l)
#endif

/* RPGACC8H */
#ifdef __RL78__
#else
	#define	RPGACC8H	(rpgacc8.BYTE.rpgacc8h)
#endif

/* RPGACC8 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc8l;
	SFR_UNSIGNED_SHORT_INT	rpgacc8h;
}SFR_BYTE_RPGACC8;

typedef union{
	SFR_BYTE_RPGACC8	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC8;

SFR_GLOBAL	SFR_RPGACC8	rpgacc8;

#ifdef __RL78__
#else
	#define	RPGACC8	(rpgacc8.ALL)
#endif

/* RPGACC9L */
#ifdef __RL78__
#else
	#define	RPGACC9L	(rpgacc9.BYTE.rpgacc9l)
#endif

/* RPGACC9H */
#ifdef __RL78__
#else
	#define	RPGACC9H	(rpgacc9.BYTE.rpgacc9h)
#endif

/* RPGACC9 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc9l;
	SFR_UNSIGNED_SHORT_INT	rpgacc9h;
}SFR_BYTE_RPGACC9;

typedef union{
	SFR_BYTE_RPGACC9	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC9;

SFR_GLOBAL	SFR_RPGACC9	rpgacc9;

#ifdef __RL78__
#else
	#define	RPGACC9	(rpgacc9.ALL)
#endif

/* RPGACC10L */
#ifdef __RL78__
#else
	#define	RPGACC10L	(rpgacc10.BYTE.rpgacc10l)
#endif

/* RPGACC10H */
#ifdef __RL78__
#else
	#define	RPGACC10H	(rpgacc10.BYTE.rpgacc10h)
#endif

/* RPGACC10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc10l;
	SFR_UNSIGNED_SHORT_INT	rpgacc10h;
}SFR_BYTE_RPGACC10;

typedef union{
	SFR_BYTE_RPGACC10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC10;

SFR_GLOBAL	SFR_RPGACC10	rpgacc10;

#ifdef __RL78__
#else
	#define	RPGACC10	(rpgacc10.ALL)
#endif

/* RPGACC11L */
#ifdef __RL78__
#else
	#define	RPGACC11L	(rpgacc11.BYTE.rpgacc11l)
#endif

/* RPGACC11H */
#ifdef __RL78__
#else
	#define	RPGACC11H	(rpgacc11.BYTE.rpgacc11h)
#endif

/* RPGACC11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc11l;
	SFR_UNSIGNED_SHORT_INT	rpgacc11h;
}SFR_BYTE_RPGACC11;

typedef union{
	SFR_BYTE_RPGACC11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC11;

SFR_GLOBAL	SFR_RPGACC11	rpgacc11;

#ifdef __RL78__
#else
	#define	RPGACC11	(rpgacc11.ALL)
#endif

/* RPGACC12L */
#ifdef __RL78__
#else
	#define	RPGACC12L	(rpgacc12.BYTE.rpgacc12l)
#endif

/* RPGACC12H */
#ifdef __RL78__
#else
	#define	RPGACC12H	(rpgacc12.BYTE.rpgacc12h)
#endif

/* RPGACC12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc12l;
	SFR_UNSIGNED_SHORT_INT	rpgacc12h;
}SFR_BYTE_RPGACC12;

typedef union{
	SFR_BYTE_RPGACC12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC12;

SFR_GLOBAL	SFR_RPGACC12	rpgacc12;

#ifdef __RL78__
#else
	#define	RPGACC12	(rpgacc12.ALL)
#endif

/* RPGACC13L */
#ifdef __RL78__
#else
	#define	RPGACC13L	(rpgacc13.BYTE.rpgacc13l)
#endif

/* RPGACC13H */
#ifdef __RL78__
#else
	#define	RPGACC13H	(rpgacc13.BYTE.rpgacc13h)
#endif

/* RPGACC13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc13l;
	SFR_UNSIGNED_SHORT_INT	rpgacc13h;
}SFR_BYTE_RPGACC13;

typedef union{
	SFR_BYTE_RPGACC13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC13;

SFR_GLOBAL	SFR_RPGACC13	rpgacc13;

#ifdef __RL78__
#else
	#define	RPGACC13	(rpgacc13.ALL)
#endif

/* RPGACC14L */
#ifdef __RL78__
#else
	#define	RPGACC14L	(rpgacc14.BYTE.rpgacc14l)
#endif

/* RPGACC14H */
#ifdef __RL78__
#else
	#define	RPGACC14H	(rpgacc14.BYTE.rpgacc14h)
#endif

/* RPGACC14 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc14l;
	SFR_UNSIGNED_SHORT_INT	rpgacc14h;
}SFR_BYTE_RPGACC14;

typedef union{
	SFR_BYTE_RPGACC14	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC14;

SFR_GLOBAL	SFR_RPGACC14	rpgacc14;

#ifdef __RL78__
#else
	#define	RPGACC14	(rpgacc14.ALL)
#endif

/* RPGACC15L */
#ifdef __RL78__
#else
	#define	RPGACC15L	(rpgacc15.BYTE.rpgacc15l)
#endif

/* RPGACC15H */
#ifdef __RL78__
#else
	#define	RPGACC15H	(rpgacc15.BYTE.rpgacc15h)
#endif

/* RPGACC15 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc15l;
	SFR_UNSIGNED_SHORT_INT	rpgacc15h;
}SFR_BYTE_RPGACC15;

typedef union{
	SFR_BYTE_RPGACC15	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC15;

SFR_GLOBAL	SFR_RPGACC15	rpgacc15;

#ifdef __RL78__
#else
	#define	RPGACC15	(rpgacc15.ALL)
#endif

/* RPGACC16L */
#ifdef __RL78__
#else
	#define	RPGACC16L	(rpgacc16.BYTE.rpgacc16l)
#endif

/* RPGACC16H */
#ifdef __RL78__
#else
	#define	RPGACC16H	(rpgacc16.BYTE.rpgacc16h)
#endif

/* RPGACC16 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc16l;
	SFR_UNSIGNED_SHORT_INT	rpgacc16h;
}SFR_BYTE_RPGACC16;

typedef union{
	SFR_BYTE_RPGACC16	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC16;

SFR_GLOBAL	SFR_RPGACC16	rpgacc16;

#ifdef __RL78__
#else
	#define	RPGACC16	(rpgacc16.ALL)
#endif

/* RPGACC17L */
#ifdef __RL78__
#else
	#define	RPGACC17L	(rpgacc17.BYTE.rpgacc17l)
#endif

/* RPGACC17H */
#ifdef __RL78__
#else
	#define	RPGACC17H	(rpgacc17.BYTE.rpgacc17h)
#endif

/* RPGACC17 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc17l;
	SFR_UNSIGNED_SHORT_INT	rpgacc17h;
}SFR_BYTE_RPGACC17;

typedef union{
	SFR_BYTE_RPGACC17	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC17;

SFR_GLOBAL	SFR_RPGACC17	rpgacc17;

#ifdef __RL78__
#else
	#define	RPGACC17	(rpgacc17.ALL)
#endif

/* RPGACC18L */
#ifdef __RL78__
#else
	#define	RPGACC18L	(rpgacc18.BYTE.rpgacc18l)
#endif

/* RPGACC18H */
#ifdef __RL78__
#else
	#define	RPGACC18H	(rpgacc18.BYTE.rpgacc18h)
#endif

/* RPGACC18 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc18l;
	SFR_UNSIGNED_SHORT_INT	rpgacc18h;
}SFR_BYTE_RPGACC18;

typedef union{
	SFR_BYTE_RPGACC18	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC18;

SFR_GLOBAL	SFR_RPGACC18	rpgacc18;

#ifdef __RL78__
#else
	#define	RPGACC18	(rpgacc18.ALL)
#endif

/* RPGACC19L */
#ifdef __RL78__
#else
	#define	RPGACC19L	(rpgacc19.BYTE.rpgacc19l)
#endif

/* RPGACC19H */
#ifdef __RL78__
#else
	#define	RPGACC19H	(rpgacc19.BYTE.rpgacc19h)
#endif

/* RPGACC19 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc19l;
	SFR_UNSIGNED_SHORT_INT	rpgacc19h;
}SFR_BYTE_RPGACC19;

typedef union{
	SFR_BYTE_RPGACC19	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC19;

SFR_GLOBAL	SFR_RPGACC19	rpgacc19;

#ifdef __RL78__
#else
	#define	RPGACC19	(rpgacc19.ALL)
#endif

/* RPGACC20L */
#ifdef __RL78__
#else
	#define	RPGACC20L	(rpgacc20.BYTE.rpgacc20l)
#endif

/* RPGACC20H */
#ifdef __RL78__
#else
	#define	RPGACC20H	(rpgacc20.BYTE.rpgacc20h)
#endif

/* RPGACC20 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc20l;
	SFR_UNSIGNED_SHORT_INT	rpgacc20h;
}SFR_BYTE_RPGACC20;

typedef union{
	SFR_BYTE_RPGACC20	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC20;

SFR_GLOBAL	SFR_RPGACC20	rpgacc20;

#ifdef __RL78__
#else
	#define	RPGACC20	(rpgacc20.ALL)
#endif

/* RPGACC21L */
#ifdef __RL78__
#else
	#define	RPGACC21L	(rpgacc21.BYTE.rpgacc21l)
#endif

/* RPGACC21H */
#ifdef __RL78__
#else
	#define	RPGACC21H	(rpgacc21.BYTE.rpgacc21h)
#endif

/* RPGACC21 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc21l;
	SFR_UNSIGNED_SHORT_INT	rpgacc21h;
}SFR_BYTE_RPGACC21;

typedef union{
	SFR_BYTE_RPGACC21	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC21;

SFR_GLOBAL	SFR_RPGACC21	rpgacc21;

#ifdef __RL78__
#else
	#define	RPGACC21	(rpgacc21.ALL)
#endif

/* RPGACC22L */
#ifdef __RL78__
#else
	#define	RPGACC22L	(rpgacc22.BYTE.rpgacc22l)
#endif

/* RPGACC22H */
#ifdef __RL78__
#else
	#define	RPGACC22H	(rpgacc22.BYTE.rpgacc22h)
#endif

/* RPGACC22 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc22l;
	SFR_UNSIGNED_SHORT_INT	rpgacc22h;
}SFR_BYTE_RPGACC22;

typedef union{
	SFR_BYTE_RPGACC22	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC22;

SFR_GLOBAL	SFR_RPGACC22	rpgacc22;

#ifdef __RL78__
#else
	#define	RPGACC22	(rpgacc22.ALL)
#endif

/* RPGACC23L */
#ifdef __RL78__
#else
	#define	RPGACC23L	(rpgacc23.BYTE.rpgacc23l)
#endif

/* RPGACC23H */
#ifdef __RL78__
#else
	#define	RPGACC23H	(rpgacc23.BYTE.rpgacc23h)
#endif

/* RPGACC23 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc23l;
	SFR_UNSIGNED_SHORT_INT	rpgacc23h;
}SFR_BYTE_RPGACC23;

typedef union{
	SFR_BYTE_RPGACC23	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC23;

SFR_GLOBAL	SFR_RPGACC23	rpgacc23;

#ifdef __RL78__
#else
	#define	RPGACC23	(rpgacc23.ALL)
#endif

/* RPGACC24L */
#ifdef __RL78__
#else
	#define	RPGACC24L	(rpgacc24.BYTE.rpgacc24l)
#endif

/* RPGACC24H */
#ifdef __RL78__
#else
	#define	RPGACC24H	(rpgacc24.BYTE.rpgacc24h)
#endif

/* RPGACC24 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc24l;
	SFR_UNSIGNED_SHORT_INT	rpgacc24h;
}SFR_BYTE_RPGACC24;

typedef union{
	SFR_BYTE_RPGACC24	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC24;

SFR_GLOBAL	SFR_RPGACC24	rpgacc24;

#ifdef __RL78__
#else
	#define	RPGACC24	(rpgacc24.ALL)
#endif

/* RPGACC25L */
#ifdef __RL78__
#else
	#define	RPGACC25L	(rpgacc25.BYTE.rpgacc25l)
#endif

/* RPGACC25H */
#ifdef __RL78__
#else
	#define	RPGACC25H	(rpgacc25.BYTE.rpgacc25h)
#endif

/* RPGACC25 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc25l;
	SFR_UNSIGNED_SHORT_INT	rpgacc25h;
}SFR_BYTE_RPGACC25;

typedef union{
	SFR_BYTE_RPGACC25	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC25;

SFR_GLOBAL	SFR_RPGACC25	rpgacc25;

#ifdef __RL78__
#else
	#define	RPGACC25	(rpgacc25.ALL)
#endif

/* RPGACC26L */
#ifdef __RL78__
#else
	#define	RPGACC26L	(rpgacc26.BYTE.rpgacc26l)
#endif

/* RPGACC26H */
#ifdef __RL78__
#else
	#define	RPGACC26H	(rpgacc26.BYTE.rpgacc26h)
#endif

/* RPGACC26 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc26l;
	SFR_UNSIGNED_SHORT_INT	rpgacc26h;
}SFR_BYTE_RPGACC26;

typedef union{
	SFR_BYTE_RPGACC26	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC26;

SFR_GLOBAL	SFR_RPGACC26	rpgacc26;

#ifdef __RL78__
#else
	#define	RPGACC26	(rpgacc26.ALL)
#endif

/* RPGACC27L */
#ifdef __RL78__
#else
	#define	RPGACC27L	(rpgacc27.BYTE.rpgacc27l)
#endif

/* RPGACC27H */
#ifdef __RL78__
#else
	#define	RPGACC27H	(rpgacc27.BYTE.rpgacc27h)
#endif

/* RPGACC27 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc27l;
	SFR_UNSIGNED_SHORT_INT	rpgacc27h;
}SFR_BYTE_RPGACC27;

typedef union{
	SFR_BYTE_RPGACC27	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC27;

SFR_GLOBAL	SFR_RPGACC27	rpgacc27;

#ifdef __RL78__
#else
	#define	RPGACC27	(rpgacc27.ALL)
#endif

/* RPGACC28L */
#ifdef __RL78__
#else
	#define	RPGACC28L	(rpgacc28.BYTE.rpgacc28l)
#endif

/* RPGACC28H */
#ifdef __RL78__
#else
	#define	RPGACC28H	(rpgacc28.BYTE.rpgacc28h)
#endif

/* RPGACC28 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc28l;
	SFR_UNSIGNED_SHORT_INT	rpgacc28h;
}SFR_BYTE_RPGACC28;

typedef union{
	SFR_BYTE_RPGACC28	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC28;

SFR_GLOBAL	SFR_RPGACC28	rpgacc28;

#ifdef __RL78__
#else
	#define	RPGACC28	(rpgacc28.ALL)
#endif

/* RPGACC29L */
#ifdef __RL78__
#else
	#define	RPGACC29L	(rpgacc29.BYTE.rpgacc29l)
#endif

/* RPGACC29H */
#ifdef __RL78__
#else
	#define	RPGACC29H	(rpgacc29.BYTE.rpgacc29h)
#endif

/* RPGACC29 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc29l;
	SFR_UNSIGNED_SHORT_INT	rpgacc29h;
}SFR_BYTE_RPGACC29;

typedef union{
	SFR_BYTE_RPGACC29	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC29;

SFR_GLOBAL	SFR_RPGACC29	rpgacc29;

#ifdef __RL78__
#else
	#define	RPGACC29	(rpgacc29.ALL)
#endif

/* RPGACC30L */
#ifdef __RL78__
#else
	#define	RPGACC30L	(rpgacc30.BYTE.rpgacc30l)
#endif

/* RPGACC30H */
#ifdef __RL78__
#else
	#define	RPGACC30H	(rpgacc30.BYTE.rpgacc30h)
#endif

/* RPGACC30 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc30l;
	SFR_UNSIGNED_SHORT_INT	rpgacc30h;
}SFR_BYTE_RPGACC30;

typedef union{
	SFR_BYTE_RPGACC30	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC30;

SFR_GLOBAL	SFR_RPGACC30	rpgacc30;

#ifdef __RL78__
#else
	#define	RPGACC30	(rpgacc30.ALL)
#endif

/* RPGACC31L */
#ifdef __RL78__
#else
	#define	RPGACC31L	(rpgacc31.BYTE.rpgacc31l)
#endif

/* RPGACC31H */
#ifdef __RL78__
#else
	#define	RPGACC31H	(rpgacc31.BYTE.rpgacc31h)
#endif

/* RPGACC31 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc31l;
	SFR_UNSIGNED_SHORT_INT	rpgacc31h;
}SFR_BYTE_RPGACC31;

typedef union{
	SFR_BYTE_RPGACC31	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC31;

SFR_GLOBAL	SFR_RPGACC31	rpgacc31;

#ifdef __RL78__
#else
	#define	RPGACC31	(rpgacc31.ALL)
#endif

/* RPGACC32L */
#ifdef __RL78__
#else
	#define	RPGACC32L	(rpgacc32.BYTE.rpgacc32l)
#endif

/* RPGACC32H */
#ifdef __RL78__
#else
	#define	RPGACC32H	(rpgacc32.BYTE.rpgacc32h)
#endif

/* RPGACC32 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc32l;
	SFR_UNSIGNED_SHORT_INT	rpgacc32h;
}SFR_BYTE_RPGACC32;

typedef union{
	SFR_BYTE_RPGACC32	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC32;

SFR_GLOBAL	SFR_RPGACC32	rpgacc32;

#ifdef __RL78__
#else
	#define	RPGACC32	(rpgacc32.ALL)
#endif

/* RPGACC33L */
#ifdef __RL78__
#else
	#define	RPGACC33L	(rpgacc33.BYTE.rpgacc33l)
#endif

/* RPGACC33H */
#ifdef __RL78__
#else
	#define	RPGACC33H	(rpgacc33.BYTE.rpgacc33h)
#endif

/* RPGACC33 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc33l;
	SFR_UNSIGNED_SHORT_INT	rpgacc33h;
}SFR_BYTE_RPGACC33;

typedef union{
	SFR_BYTE_RPGACC33	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC33;

SFR_GLOBAL	SFR_RPGACC33	rpgacc33;

#ifdef __RL78__
#else
	#define	RPGACC33	(rpgacc33.ALL)
#endif

/* RPGACC34L */
#ifdef __RL78__
#else
	#define	RPGACC34L	(rpgacc34.BYTE.rpgacc34l)
#endif

/* RPGACC34H */
#ifdef __RL78__
#else
	#define	RPGACC34H	(rpgacc34.BYTE.rpgacc34h)
#endif

/* RPGACC34 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc34l;
	SFR_UNSIGNED_SHORT_INT	rpgacc34h;
}SFR_BYTE_RPGACC34;

typedef union{
	SFR_BYTE_RPGACC34	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC34;

SFR_GLOBAL	SFR_RPGACC34	rpgacc34;

#ifdef __RL78__
#else
	#define	RPGACC34	(rpgacc34.ALL)
#endif

/* RPGACC35L */
#ifdef __RL78__
#else
	#define	RPGACC35L	(rpgacc35.BYTE.rpgacc35l)
#endif

/* RPGACC35H */
#ifdef __RL78__
#else
	#define	RPGACC35H	(rpgacc35.BYTE.rpgacc35h)
#endif

/* RPGACC35 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc35l;
	SFR_UNSIGNED_SHORT_INT	rpgacc35h;
}SFR_BYTE_RPGACC35;

typedef union{
	SFR_BYTE_RPGACC35	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC35;

SFR_GLOBAL	SFR_RPGACC35	rpgacc35;

#ifdef __RL78__
#else
	#define	RPGACC35	(rpgacc35.ALL)
#endif

/* RPGACC36L */
#ifdef __RL78__
#else
	#define	RPGACC36L	(rpgacc36.BYTE.rpgacc36l)
#endif

/* RPGACC36H */
#ifdef __RL78__
#else
	#define	RPGACC36H	(rpgacc36.BYTE.rpgacc36h)
#endif

/* RPGACC36 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc36l;
	SFR_UNSIGNED_SHORT_INT	rpgacc36h;
}SFR_BYTE_RPGACC36;

typedef union{
	SFR_BYTE_RPGACC36	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC36;

SFR_GLOBAL	SFR_RPGACC36	rpgacc36;

#ifdef __RL78__
#else
	#define	RPGACC36	(rpgacc36.ALL)
#endif

/* RPGACC37L */
#ifdef __RL78__
#else
	#define	RPGACC37L	(rpgacc37.BYTE.rpgacc37l)
#endif

/* RPGACC37H */
#ifdef __RL78__
#else
	#define	RPGACC37H	(rpgacc37.BYTE.rpgacc37h)
#endif

/* RPGACC37 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc37l;
	SFR_UNSIGNED_SHORT_INT	rpgacc37h;
}SFR_BYTE_RPGACC37;

typedef union{
	SFR_BYTE_RPGACC37	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC37;

SFR_GLOBAL	SFR_RPGACC37	rpgacc37;

#ifdef __RL78__
#else
	#define	RPGACC37	(rpgacc37.ALL)
#endif

/* RPGACC38L */
#ifdef __RL78__
#else
	#define	RPGACC38L	(rpgacc38.BYTE.rpgacc38l)
#endif

/* RPGACC38H */
#ifdef __RL78__
#else
	#define	RPGACC38H	(rpgacc38.BYTE.rpgacc38h)
#endif

/* RPGACC38 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc38l;
	SFR_UNSIGNED_SHORT_INT	rpgacc38h;
}SFR_BYTE_RPGACC38;

typedef union{
	SFR_BYTE_RPGACC38	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC38;

SFR_GLOBAL	SFR_RPGACC38	rpgacc38;

#ifdef __RL78__
#else
	#define	RPGACC38	(rpgacc38.ALL)
#endif

/* RPGACC39L */
#ifdef __RL78__
#else
	#define	RPGACC39L	(rpgacc39.BYTE.rpgacc39l)
#endif

/* RPGACC39H */
#ifdef __RL78__
#else
	#define	RPGACC39H	(rpgacc39.BYTE.rpgacc39h)
#endif

/* RPGACC39 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc39l;
	SFR_UNSIGNED_SHORT_INT	rpgacc39h;
}SFR_BYTE_RPGACC39;

typedef union{
	SFR_BYTE_RPGACC39	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC39;

SFR_GLOBAL	SFR_RPGACC39	rpgacc39;

#ifdef __RL78__
#else
	#define	RPGACC39	(rpgacc39.ALL)
#endif

/* RPGACC40L */
#ifdef __RL78__
#else
	#define	RPGACC40L	(rpgacc40.BYTE.rpgacc40l)
#endif

/* RPGACC40H */
#ifdef __RL78__
#else
	#define	RPGACC40H	(rpgacc40.BYTE.rpgacc40h)
#endif

/* RPGACC40 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc40l;
	SFR_UNSIGNED_SHORT_INT	rpgacc40h;
}SFR_BYTE_RPGACC40;

typedef union{
	SFR_BYTE_RPGACC40	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC40;

SFR_GLOBAL	SFR_RPGACC40	rpgacc40;

#ifdef __RL78__
#else
	#define	RPGACC40	(rpgacc40.ALL)
#endif

/* RPGACC41L */
#ifdef __RL78__
#else
	#define	RPGACC41L	(rpgacc41.BYTE.rpgacc41l)
#endif

/* RPGACC41H */
#ifdef __RL78__
#else
	#define	RPGACC41H	(rpgacc41.BYTE.rpgacc41h)
#endif

/* RPGACC41 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc41l;
	SFR_UNSIGNED_SHORT_INT	rpgacc41h;
}SFR_BYTE_RPGACC41;

typedef union{
	SFR_BYTE_RPGACC41	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC41;

SFR_GLOBAL	SFR_RPGACC41	rpgacc41;

#ifdef __RL78__
#else
	#define	RPGACC41	(rpgacc41.ALL)
#endif

/* RPGACC42L */
#ifdef __RL78__
#else
	#define	RPGACC42L	(rpgacc42.BYTE.rpgacc42l)
#endif

/* RPGACC42H */
#ifdef __RL78__
#else
	#define	RPGACC42H	(rpgacc42.BYTE.rpgacc42h)
#endif

/* RPGACC42 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc42l;
	SFR_UNSIGNED_SHORT_INT	rpgacc42h;
}SFR_BYTE_RPGACC42;

typedef union{
	SFR_BYTE_RPGACC42	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC42;

SFR_GLOBAL	SFR_RPGACC42	rpgacc42;

#ifdef __RL78__
#else
	#define	RPGACC42	(rpgacc42.ALL)
#endif

/* RPGACC43L */
#ifdef __RL78__
#else
	#define	RPGACC43L	(rpgacc43.BYTE.rpgacc43l)
#endif

/* RPGACC43H */
#ifdef __RL78__
#else
	#define	RPGACC43H	(rpgacc43.BYTE.rpgacc43h)
#endif

/* RPGACC43 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc43l;
	SFR_UNSIGNED_SHORT_INT	rpgacc43h;
}SFR_BYTE_RPGACC43;

typedef union{
	SFR_BYTE_RPGACC43	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC43;

SFR_GLOBAL	SFR_RPGACC43	rpgacc43;

#ifdef __RL78__
#else
	#define	RPGACC43	(rpgacc43.ALL)
#endif

/* RPGACC44L */
#ifdef __RL78__
#else
	#define	RPGACC44L	(rpgacc44.BYTE.rpgacc44l)
#endif

/* RPGACC44H */
#ifdef __RL78__
#else
	#define	RPGACC44H	(rpgacc44.BYTE.rpgacc44h)
#endif

/* RPGACC44 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc44l;
	SFR_UNSIGNED_SHORT_INT	rpgacc44h;
}SFR_BYTE_RPGACC44;

typedef union{
	SFR_BYTE_RPGACC44	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC44;

SFR_GLOBAL	SFR_RPGACC44	rpgacc44;

#ifdef __RL78__
#else
	#define	RPGACC44	(rpgacc44.ALL)
#endif

/* RPGACC45L */
#ifdef __RL78__
#else
	#define	RPGACC45L	(rpgacc45.BYTE.rpgacc45l)
#endif

/* RPGACC45H */
#ifdef __RL78__
#else
	#define	RPGACC45H	(rpgacc45.BYTE.rpgacc45h)
#endif

/* RPGACC45 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc45l;
	SFR_UNSIGNED_SHORT_INT	rpgacc45h;
}SFR_BYTE_RPGACC45;

typedef union{
	SFR_BYTE_RPGACC45	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC45;

SFR_GLOBAL	SFR_RPGACC45	rpgacc45;

#ifdef __RL78__
#else
	#define	RPGACC45	(rpgacc45.ALL)
#endif

/* RPGACC46L */
#ifdef __RL78__
#else
	#define	RPGACC46L	(rpgacc46.BYTE.rpgacc46l)
#endif

/* RPGACC46H */
#ifdef __RL78__
#else
	#define	RPGACC46H	(rpgacc46.BYTE.rpgacc46h)
#endif

/* RPGACC46 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc46l;
	SFR_UNSIGNED_SHORT_INT	rpgacc46h;
}SFR_BYTE_RPGACC46;

typedef union{
	SFR_BYTE_RPGACC46	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC46;

SFR_GLOBAL	SFR_RPGACC46	rpgacc46;

#ifdef __RL78__
#else
	#define	RPGACC46	(rpgacc46.ALL)
#endif

/* RPGACC47L */
#ifdef __RL78__
#else
	#define	RPGACC47L	(rpgacc47.BYTE.rpgacc47l)
#endif

/* RPGACC47H */
#ifdef __RL78__
#else
	#define	RPGACC47H	(rpgacc47.BYTE.rpgacc47h)
#endif

/* RPGACC47 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc47l;
	SFR_UNSIGNED_SHORT_INT	rpgacc47h;
}SFR_BYTE_RPGACC47;

typedef union{
	SFR_BYTE_RPGACC47	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC47;

SFR_GLOBAL	SFR_RPGACC47	rpgacc47;

#ifdef __RL78__
#else
	#define	RPGACC47	(rpgacc47.ALL)
#endif

/* RPGACC48L */
#ifdef __RL78__
#else
	#define	RPGACC48L	(rpgacc48.BYTE.rpgacc48l)
#endif

/* RPGACC48H */
#ifdef __RL78__
#else
	#define	RPGACC48H	(rpgacc48.BYTE.rpgacc48h)
#endif

/* RPGACC48 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc48l;
	SFR_UNSIGNED_SHORT_INT	rpgacc48h;
}SFR_BYTE_RPGACC48;

typedef union{
	SFR_BYTE_RPGACC48	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC48;

SFR_GLOBAL	SFR_RPGACC48	rpgacc48;

#ifdef __RL78__
#else
	#define	RPGACC48	(rpgacc48.ALL)
#endif

/* RPGACC49L */
#ifdef __RL78__
#else
	#define	RPGACC49L	(rpgacc49.BYTE.rpgacc49l)
#endif

/* RPGACC49H */
#ifdef __RL78__
#else
	#define	RPGACC49H	(rpgacc49.BYTE.rpgacc49h)
#endif

/* RPGACC49 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc49l;
	SFR_UNSIGNED_SHORT_INT	rpgacc49h;
}SFR_BYTE_RPGACC49;

typedef union{
	SFR_BYTE_RPGACC49	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC49;

SFR_GLOBAL	SFR_RPGACC49	rpgacc49;

#ifdef __RL78__
#else
	#define	RPGACC49	(rpgacc49.ALL)
#endif

/* RPGACC50L */
#ifdef __RL78__
#else
	#define	RPGACC50L	(rpgacc50.BYTE.rpgacc50l)
#endif

/* RPGACC50H */
#ifdef __RL78__
#else
	#define	RPGACC50H	(rpgacc50.BYTE.rpgacc50h)
#endif

/* RPGACC50 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc50l;
	SFR_UNSIGNED_SHORT_INT	rpgacc50h;
}SFR_BYTE_RPGACC50;

typedef union{
	SFR_BYTE_RPGACC50	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC50;

SFR_GLOBAL	SFR_RPGACC50	rpgacc50;

#ifdef __RL78__
#else
	#define	RPGACC50	(rpgacc50.ALL)
#endif

/* RPGACC51L */
#ifdef __RL78__
#else
	#define	RPGACC51L	(rpgacc51.BYTE.rpgacc51l)
#endif

/* RPGACC51H */
#ifdef __RL78__
#else
	#define	RPGACC51H	(rpgacc51.BYTE.rpgacc51h)
#endif

/* RPGACC51 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc51l;
	SFR_UNSIGNED_SHORT_INT	rpgacc51h;
}SFR_BYTE_RPGACC51;

typedef union{
	SFR_BYTE_RPGACC51	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC51;

SFR_GLOBAL	SFR_RPGACC51	rpgacc51;

#ifdef __RL78__
#else
	#define	RPGACC51	(rpgacc51.ALL)
#endif

/* RPGACC52L */
#ifdef __RL78__
#else
	#define	RPGACC52L	(rpgacc52.BYTE.rpgacc52l)
#endif

/* RPGACC52H */
#ifdef __RL78__
#else
	#define	RPGACC52H	(rpgacc52.BYTE.rpgacc52h)
#endif

/* RPGACC52 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc52l;
	SFR_UNSIGNED_SHORT_INT	rpgacc52h;
}SFR_BYTE_RPGACC52;

typedef union{
	SFR_BYTE_RPGACC52	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC52;

SFR_GLOBAL	SFR_RPGACC52	rpgacc52;

#ifdef __RL78__
#else
	#define	RPGACC52	(rpgacc52.ALL)
#endif

/* RPGACC53L */
#ifdef __RL78__
#else
	#define	RPGACC53L	(rpgacc53.BYTE.rpgacc53l)
#endif

/* RPGACC53H */
#ifdef __RL78__
#else
	#define	RPGACC53H	(rpgacc53.BYTE.rpgacc53h)
#endif

/* RPGACC53 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc53l;
	SFR_UNSIGNED_SHORT_INT	rpgacc53h;
}SFR_BYTE_RPGACC53;

typedef union{
	SFR_BYTE_RPGACC53	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC53;

SFR_GLOBAL	SFR_RPGACC53	rpgacc53;

#ifdef __RL78__
#else
	#define	RPGACC53	(rpgacc53.ALL)
#endif

/* RPGACC54L */
#ifdef __RL78__
#else
	#define	RPGACC54L	(rpgacc54.BYTE.rpgacc54l)
#endif

/* RPGACC54H */
#ifdef __RL78__
#else
	#define	RPGACC54H	(rpgacc54.BYTE.rpgacc54h)
#endif

/* RPGACC54 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc54l;
	SFR_UNSIGNED_SHORT_INT	rpgacc54h;
}SFR_BYTE_RPGACC54;

typedef union{
	SFR_BYTE_RPGACC54	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC54;

SFR_GLOBAL	SFR_RPGACC54	rpgacc54;

#ifdef __RL78__
#else
	#define	RPGACC54	(rpgacc54.ALL)
#endif

/* RPGACC55L */
#ifdef __RL78__
#else
	#define	RPGACC55L	(rpgacc55.BYTE.rpgacc55l)
#endif

/* RPGACC55H */
#ifdef __RL78__
#else
	#define	RPGACC55H	(rpgacc55.BYTE.rpgacc55h)
#endif

/* RPGACC55 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc55l;
	SFR_UNSIGNED_SHORT_INT	rpgacc55h;
}SFR_BYTE_RPGACC55;

typedef union{
	SFR_BYTE_RPGACC55	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC55;

SFR_GLOBAL	SFR_RPGACC55	rpgacc55;

#ifdef __RL78__
#else
	#define	RPGACC55	(rpgacc55.ALL)
#endif

/* RPGACC56L */
#ifdef __RL78__
#else
	#define	RPGACC56L	(rpgacc56.BYTE.rpgacc56l)
#endif

/* RPGACC56H */
#ifdef __RL78__
#else
	#define	RPGACC56H	(rpgacc56.BYTE.rpgacc56h)
#endif

/* RPGACC56 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc56l;
	SFR_UNSIGNED_SHORT_INT	rpgacc56h;
}SFR_BYTE_RPGACC56;

typedef union{
	SFR_BYTE_RPGACC56	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC56;

SFR_GLOBAL	SFR_RPGACC56	rpgacc56;

#ifdef __RL78__
#else
	#define	RPGACC56	(rpgacc56.ALL)
#endif

/* RPGACC57L */
#ifdef __RL78__
#else
	#define	RPGACC57L	(rpgacc57.BYTE.rpgacc57l)
#endif

/* RPGACC57H */
#ifdef __RL78__
#else
	#define	RPGACC57H	(rpgacc57.BYTE.rpgacc57h)
#endif

/* RPGACC57 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc57l;
	SFR_UNSIGNED_SHORT_INT	rpgacc57h;
}SFR_BYTE_RPGACC57;

typedef union{
	SFR_BYTE_RPGACC57	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC57;

SFR_GLOBAL	SFR_RPGACC57	rpgacc57;

#ifdef __RL78__
#else
	#define	RPGACC57	(rpgacc57.ALL)
#endif

/* RPGACC58L */
#ifdef __RL78__
#else
	#define	RPGACC58L	(rpgacc58.BYTE.rpgacc58l)
#endif

/* RPGACC58H */
#ifdef __RL78__
#else
	#define	RPGACC58H	(rpgacc58.BYTE.rpgacc58h)
#endif

/* RPGACC58 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc58l;
	SFR_UNSIGNED_SHORT_INT	rpgacc58h;
}SFR_BYTE_RPGACC58;

typedef union{
	SFR_BYTE_RPGACC58	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC58;

SFR_GLOBAL	SFR_RPGACC58	rpgacc58;

#ifdef __RL78__
#else
	#define	RPGACC58	(rpgacc58.ALL)
#endif

/* RPGACC59L */
#ifdef __RL78__
#else
	#define	RPGACC59L	(rpgacc59.BYTE.rpgacc59l)
#endif

/* RPGACC59H */
#ifdef __RL78__
#else
	#define	RPGACC59H	(rpgacc59.BYTE.rpgacc59h)
#endif

/* RPGACC59 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc59l;
	SFR_UNSIGNED_SHORT_INT	rpgacc59h;
}SFR_BYTE_RPGACC59;

typedef union{
	SFR_BYTE_RPGACC59	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC59;

SFR_GLOBAL	SFR_RPGACC59	rpgacc59;

#ifdef __RL78__
#else
	#define	RPGACC59	(rpgacc59.ALL)
#endif

/* RPGACC60L */
#ifdef __RL78__
#else
	#define	RPGACC60L	(rpgacc60.BYTE.rpgacc60l)
#endif

/* RPGACC60H */
#ifdef __RL78__
#else
	#define	RPGACC60H	(rpgacc60.BYTE.rpgacc60h)
#endif

/* RPGACC60 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc60l;
	SFR_UNSIGNED_SHORT_INT	rpgacc60h;
}SFR_BYTE_RPGACC60;

typedef union{
	SFR_BYTE_RPGACC60	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC60;

SFR_GLOBAL	SFR_RPGACC60	rpgacc60;

#ifdef __RL78__
#else
	#define	RPGACC60	(rpgacc60.ALL)
#endif

/* RPGACC61L */
#ifdef __RL78__
#else
	#define	RPGACC61L	(rpgacc61.BYTE.rpgacc61l)
#endif

/* RPGACC61H */
#ifdef __RL78__
#else
	#define	RPGACC61H	(rpgacc61.BYTE.rpgacc61h)
#endif

/* RPGACC61 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc61l;
	SFR_UNSIGNED_SHORT_INT	rpgacc61h;
}SFR_BYTE_RPGACC61;

typedef union{
	SFR_BYTE_RPGACC61	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC61;

SFR_GLOBAL	SFR_RPGACC61	rpgacc61;

#ifdef __RL78__
#else
	#define	RPGACC61	(rpgacc61.ALL)
#endif

/* RPGACC62L */
#ifdef __RL78__
#else
	#define	RPGACC62L	(rpgacc62.BYTE.rpgacc62l)
#endif

/* RPGACC62H */
#ifdef __RL78__
#else
	#define	RPGACC62H	(rpgacc62.BYTE.rpgacc62h)
#endif

/* RPGACC62 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc62l;
	SFR_UNSIGNED_SHORT_INT	rpgacc62h;
}SFR_BYTE_RPGACC62;

typedef union{
	SFR_BYTE_RPGACC62	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC62;

SFR_GLOBAL	SFR_RPGACC62	rpgacc62;

#ifdef __RL78__
#else
	#define	RPGACC62	(rpgacc62.ALL)
#endif

/* RPGACC63L */
#ifdef __RL78__
#else
	#define	RPGACC63L	(rpgacc63.BYTE.rpgacc63l)
#endif

/* RPGACC63H */
#ifdef __RL78__
#else
	#define	RPGACC63H	(rpgacc63.BYTE.rpgacc63h)
#endif

/* RPGACC63 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc63l;
	SFR_UNSIGNED_SHORT_INT	rpgacc63h;
}SFR_BYTE_RPGACC63;

typedef union{
	SFR_BYTE_RPGACC63	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC63;

SFR_GLOBAL	SFR_RPGACC63	rpgacc63;

#ifdef __RL78__
#else
	#define	RPGACC63	(rpgacc63.ALL)
#endif

/* RPGACC64L */
#ifdef __RL78__
#else
	#define	RPGACC64L	(rpgacc64.BYTE.rpgacc64l)
#endif

/* RPGACC64H */
#ifdef __RL78__
#else
	#define	RPGACC64H	(rpgacc64.BYTE.rpgacc64h)
#endif

/* RPGACC64 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc64l;
	SFR_UNSIGNED_SHORT_INT	rpgacc64h;
}SFR_BYTE_RPGACC64;

typedef union{
	SFR_BYTE_RPGACC64	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC64;

SFR_GLOBAL	SFR_RPGACC64	rpgacc64;

#ifdef __RL78__
#else
	#define	RPGACC64	(rpgacc64.ALL)
#endif

/* RPGACC65L */
#ifdef __RL78__
#else
	#define	RPGACC65L	(rpgacc65.BYTE.rpgacc65l)
#endif

/* RPGACC65H */
#ifdef __RL78__
#else
	#define	RPGACC65H	(rpgacc65.BYTE.rpgacc65h)
#endif

/* RPGACC65 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc65l;
	SFR_UNSIGNED_SHORT_INT	rpgacc65h;
}SFR_BYTE_RPGACC65;

typedef union{
	SFR_BYTE_RPGACC65	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC65;

SFR_GLOBAL	SFR_RPGACC65	rpgacc65;

#ifdef __RL78__
#else
	#define	RPGACC65	(rpgacc65.ALL)
#endif

/* RPGACC66L */
#ifdef __RL78__
#else
	#define	RPGACC66L	(rpgacc66.BYTE.rpgacc66l)
#endif

/* RPGACC66H */
#ifdef __RL78__
#else
	#define	RPGACC66H	(rpgacc66.BYTE.rpgacc66h)
#endif

/* RPGACC66 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc66l;
	SFR_UNSIGNED_SHORT_INT	rpgacc66h;
}SFR_BYTE_RPGACC66;

typedef union{
	SFR_BYTE_RPGACC66	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC66;

SFR_GLOBAL	SFR_RPGACC66	rpgacc66;

#ifdef __RL78__
#else
	#define	RPGACC66	(rpgacc66.ALL)
#endif

/* RPGACC67L */
#ifdef __RL78__
#else
	#define	RPGACC67L	(rpgacc67.BYTE.rpgacc67l)
#endif

/* RPGACC67H */
#ifdef __RL78__
#else
	#define	RPGACC67H	(rpgacc67.BYTE.rpgacc67h)
#endif

/* RPGACC67 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc67l;
	SFR_UNSIGNED_SHORT_INT	rpgacc67h;
}SFR_BYTE_RPGACC67;

typedef union{
	SFR_BYTE_RPGACC67	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC67;

SFR_GLOBAL	SFR_RPGACC67	rpgacc67;

#ifdef __RL78__
#else
	#define	RPGACC67	(rpgacc67.ALL)
#endif

/* RPGACC68L */
#ifdef __RL78__
#else
	#define	RPGACC68L	(rpgacc68.BYTE.rpgacc68l)
#endif

/* RPGACC68H */
#ifdef __RL78__
#else
	#define	RPGACC68H	(rpgacc68.BYTE.rpgacc68h)
#endif

/* RPGACC68 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc68l;
	SFR_UNSIGNED_SHORT_INT	rpgacc68h;
}SFR_BYTE_RPGACC68;

typedef union{
	SFR_BYTE_RPGACC68	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC68;

SFR_GLOBAL	SFR_RPGACC68	rpgacc68;

#ifdef __RL78__
#else
	#define	RPGACC68	(rpgacc68.ALL)
#endif

/* RPGACC69L */
#ifdef __RL78__
#else
	#define	RPGACC69L	(rpgacc69.BYTE.rpgacc69l)
#endif

/* RPGACC69H */
#ifdef __RL78__
#else
	#define	RPGACC69H	(rpgacc69.BYTE.rpgacc69h)
#endif

/* RPGACC69 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc69l;
	SFR_UNSIGNED_SHORT_INT	rpgacc69h;
}SFR_BYTE_RPGACC69;

typedef union{
	SFR_BYTE_RPGACC69	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC69;

SFR_GLOBAL	SFR_RPGACC69	rpgacc69;

#ifdef __RL78__
#else
	#define	RPGACC69	(rpgacc69.ALL)
#endif

/* RPGACC70L */
#ifdef __RL78__
#else
	#define	RPGACC70L	(rpgacc70.BYTE.rpgacc70l)
#endif

/* RPGACC70H */
#ifdef __RL78__
#else
	#define	RPGACC70H	(rpgacc70.BYTE.rpgacc70h)
#endif

/* RPGACC70 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc70l;
	SFR_UNSIGNED_SHORT_INT	rpgacc70h;
}SFR_BYTE_RPGACC70;

typedef union{
	SFR_BYTE_RPGACC70	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC70;

SFR_GLOBAL	SFR_RPGACC70	rpgacc70;

#ifdef __RL78__
#else
	#define	RPGACC70	(rpgacc70.ALL)
#endif

/* RPGACC71L */
#ifdef __RL78__
#else
	#define	RPGACC71L	(rpgacc71.BYTE.rpgacc71l)
#endif

/* RPGACC71H */
#ifdef __RL78__
#else
	#define	RPGACC71H	(rpgacc71.BYTE.rpgacc71h)
#endif

/* RPGACC71 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc71l;
	SFR_UNSIGNED_SHORT_INT	rpgacc71h;
}SFR_BYTE_RPGACC71;

typedef union{
	SFR_BYTE_RPGACC71	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC71;

SFR_GLOBAL	SFR_RPGACC71	rpgacc71;

#ifdef __RL78__
#else
	#define	RPGACC71	(rpgacc71.ALL)
#endif

/* RPGACC72L */
#ifdef __RL78__
#else
	#define	RPGACC72L	(rpgacc72.BYTE.rpgacc72l)
#endif

/* RPGACC72H */
#ifdef __RL78__
#else
	#define	RPGACC72H	(rpgacc72.BYTE.rpgacc72h)
#endif

/* RPGACC72 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc72l;
	SFR_UNSIGNED_SHORT_INT	rpgacc72h;
}SFR_BYTE_RPGACC72;

typedef union{
	SFR_BYTE_RPGACC72	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC72;

SFR_GLOBAL	SFR_RPGACC72	rpgacc72;

#ifdef __RL78__
#else
	#define	RPGACC72	(rpgacc72.ALL)
#endif

/* RPGACC73L */
#ifdef __RL78__
#else
	#define	RPGACC73L	(rpgacc73.BYTE.rpgacc73l)
#endif

/* RPGACC73H */
#ifdef __RL78__
#else
	#define	RPGACC73H	(rpgacc73.BYTE.rpgacc73h)
#endif

/* RPGACC73 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc73l;
	SFR_UNSIGNED_SHORT_INT	rpgacc73h;
}SFR_BYTE_RPGACC73;

typedef union{
	SFR_BYTE_RPGACC73	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC73;

SFR_GLOBAL	SFR_RPGACC73	rpgacc73;

#ifdef __RL78__
#else
	#define	RPGACC73	(rpgacc73.ALL)
#endif

/* RPGACC74L */
#ifdef __RL78__
#else
	#define	RPGACC74L	(rpgacc74.BYTE.rpgacc74l)
#endif

/* RPGACC74H */
#ifdef __RL78__
#else
	#define	RPGACC74H	(rpgacc74.BYTE.rpgacc74h)
#endif

/* RPGACC74 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc74l;
	SFR_UNSIGNED_SHORT_INT	rpgacc74h;
}SFR_BYTE_RPGACC74;

typedef union{
	SFR_BYTE_RPGACC74	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC74;

SFR_GLOBAL	SFR_RPGACC74	rpgacc74;

#ifdef __RL78__
#else
	#define	RPGACC74	(rpgacc74.ALL)
#endif

/* RPGACC75L */
#ifdef __RL78__
#else
	#define	RPGACC75L	(rpgacc75.BYTE.rpgacc75l)
#endif

/* RPGACC75H */
#ifdef __RL78__
#else
	#define	RPGACC75H	(rpgacc75.BYTE.rpgacc75h)
#endif

/* RPGACC75 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc75l;
	SFR_UNSIGNED_SHORT_INT	rpgacc75h;
}SFR_BYTE_RPGACC75;

typedef union{
	SFR_BYTE_RPGACC75	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC75;

SFR_GLOBAL	SFR_RPGACC75	rpgacc75;

#ifdef __RL78__
#else
	#define	RPGACC75	(rpgacc75.ALL)
#endif

/* RPGACC76L */
#ifdef __RL78__
#else
	#define	RPGACC76L	(rpgacc76.BYTE.rpgacc76l)
#endif

/* RPGACC76H */
#ifdef __RL78__
#else
	#define	RPGACC76H	(rpgacc76.BYTE.rpgacc76h)
#endif

/* RPGACC76 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc76l;
	SFR_UNSIGNED_SHORT_INT	rpgacc76h;
}SFR_BYTE_RPGACC76;

typedef union{
	SFR_BYTE_RPGACC76	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC76;

SFR_GLOBAL	SFR_RPGACC76	rpgacc76;

#ifdef __RL78__
#else
	#define	RPGACC76	(rpgacc76.ALL)
#endif

/* RPGACC77L */
#ifdef __RL78__
#else
	#define	RPGACC77L	(rpgacc77.BYTE.rpgacc77l)
#endif

/* RPGACC77H */
#ifdef __RL78__
#else
	#define	RPGACC77H	(rpgacc77.BYTE.rpgacc77h)
#endif

/* RPGACC77 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc77l;
	SFR_UNSIGNED_SHORT_INT	rpgacc77h;
}SFR_BYTE_RPGACC77;

typedef union{
	SFR_BYTE_RPGACC77	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC77;

SFR_GLOBAL	SFR_RPGACC77	rpgacc77;

#ifdef __RL78__
#else
	#define	RPGACC77	(rpgacc77.ALL)
#endif

/* RPGACC78L */
#ifdef __RL78__
#else
	#define	RPGACC78L	(rpgacc78.BYTE.rpgacc78l)
#endif

/* RPGACC78H */
#ifdef __RL78__
#else
	#define	RPGACC78H	(rpgacc78.BYTE.rpgacc78h)
#endif

/* RPGACC78 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc78l;
	SFR_UNSIGNED_SHORT_INT	rpgacc78h;
}SFR_BYTE_RPGACC78;

typedef union{
	SFR_BYTE_RPGACC78	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC78;

SFR_GLOBAL	SFR_RPGACC78	rpgacc78;

#ifdef __RL78__
#else
	#define	RPGACC78	(rpgacc78.ALL)
#endif

/* RPGACC79L */
#ifdef __RL78__
#else
	#define	RPGACC79L	(rpgacc79.BYTE.rpgacc79l)
#endif

/* RPGACC79H */
#ifdef __RL78__
#else
	#define	RPGACC79H	(rpgacc79.BYTE.rpgacc79h)
#endif

/* RPGACC79 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc79l;
	SFR_UNSIGNED_SHORT_INT	rpgacc79h;
}SFR_BYTE_RPGACC79;

typedef union{
	SFR_BYTE_RPGACC79	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC79;

SFR_GLOBAL	SFR_RPGACC79	rpgacc79;

#ifdef __RL78__
#else
	#define	RPGACC79	(rpgacc79.ALL)
#endif

/* RPGACC80L */
#ifdef __RL78__
#else
	#define	RPGACC80L	(rpgacc80.BYTE.rpgacc80l)
#endif

/* RPGACC80H */
#ifdef __RL78__
#else
	#define	RPGACC80H	(rpgacc80.BYTE.rpgacc80h)
#endif

/* RPGACC80 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc80l;
	SFR_UNSIGNED_SHORT_INT	rpgacc80h;
}SFR_BYTE_RPGACC80;

typedef union{
	SFR_BYTE_RPGACC80	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC80;

SFR_GLOBAL	SFR_RPGACC80	rpgacc80;

#ifdef __RL78__
#else
	#define	RPGACC80	(rpgacc80.ALL)
#endif

/* RPGACC81L */
#ifdef __RL78__
#else
	#define	RPGACC81L	(rpgacc81.BYTE.rpgacc81l)
#endif

/* RPGACC81H */
#ifdef __RL78__
#else
	#define	RPGACC81H	(rpgacc81.BYTE.rpgacc81h)
#endif

/* RPGACC81 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc81l;
	SFR_UNSIGNED_SHORT_INT	rpgacc81h;
}SFR_BYTE_RPGACC81;

typedef union{
	SFR_BYTE_RPGACC81	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC81;

SFR_GLOBAL	SFR_RPGACC81	rpgacc81;

#ifdef __RL78__
#else
	#define	RPGACC81	(rpgacc81.ALL)
#endif

/* RPGACC82L */
#ifdef __RL78__
#else
	#define	RPGACC82L	(rpgacc82.BYTE.rpgacc82l)
#endif

/* RPGACC82H */
#ifdef __RL78__
#else
	#define	RPGACC82H	(rpgacc82.BYTE.rpgacc82h)
#endif

/* RPGACC82 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc82l;
	SFR_UNSIGNED_SHORT_INT	rpgacc82h;
}SFR_BYTE_RPGACC82;

typedef union{
	SFR_BYTE_RPGACC82	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC82;

SFR_GLOBAL	SFR_RPGACC82	rpgacc82;

#ifdef __RL78__
#else
	#define	RPGACC82	(rpgacc82.ALL)
#endif

/* RPGACC83L */
#ifdef __RL78__
#else
	#define	RPGACC83L	(rpgacc83.BYTE.rpgacc83l)
#endif

/* RPGACC83H */
#ifdef __RL78__
#else
	#define	RPGACC83H	(rpgacc83.BYTE.rpgacc83h)
#endif

/* RPGACC83 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc83l;
	SFR_UNSIGNED_SHORT_INT	rpgacc83h;
}SFR_BYTE_RPGACC83;

typedef union{
	SFR_BYTE_RPGACC83	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC83;

SFR_GLOBAL	SFR_RPGACC83	rpgacc83;

#ifdef __RL78__
#else
	#define	RPGACC83	(rpgacc83.ALL)
#endif

/* RPGACC84L */
#ifdef __RL78__
#else
	#define	RPGACC84L	(rpgacc84.BYTE.rpgacc84l)
#endif

/* RPGACC84H */
#ifdef __RL78__
#else
	#define	RPGACC84H	(rpgacc84.BYTE.rpgacc84h)
#endif

/* RPGACC84 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc84l;
	SFR_UNSIGNED_SHORT_INT	rpgacc84h;
}SFR_BYTE_RPGACC84;

typedef union{
	SFR_BYTE_RPGACC84	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC84;

SFR_GLOBAL	SFR_RPGACC84	rpgacc84;

#ifdef __RL78__
#else
	#define	RPGACC84	(rpgacc84.ALL)
#endif

/* RPGACC85L */
#ifdef __RL78__
#else
	#define	RPGACC85L	(rpgacc85.BYTE.rpgacc85l)
#endif

/* RPGACC85H */
#ifdef __RL78__
#else
	#define	RPGACC85H	(rpgacc85.BYTE.rpgacc85h)
#endif

/* RPGACC85 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc85l;
	SFR_UNSIGNED_SHORT_INT	rpgacc85h;
}SFR_BYTE_RPGACC85;

typedef union{
	SFR_BYTE_RPGACC85	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC85;

SFR_GLOBAL	SFR_RPGACC85	rpgacc85;

#ifdef __RL78__
#else
	#define	RPGACC85	(rpgacc85.ALL)
#endif

/* RPGACC86L */
#ifdef __RL78__
#else
	#define	RPGACC86L	(rpgacc86.BYTE.rpgacc86l)
#endif

/* RPGACC86H */
#ifdef __RL78__
#else
	#define	RPGACC86H	(rpgacc86.BYTE.rpgacc86h)
#endif

/* RPGACC86 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc86l;
	SFR_UNSIGNED_SHORT_INT	rpgacc86h;
}SFR_BYTE_RPGACC86;

typedef union{
	SFR_BYTE_RPGACC86	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC86;

SFR_GLOBAL	SFR_RPGACC86	rpgacc86;

#ifdef __RL78__
#else
	#define	RPGACC86	(rpgacc86.ALL)
#endif

/* RPGACC87L */
#ifdef __RL78__
#else
	#define	RPGACC87L	(rpgacc87.BYTE.rpgacc87l)
#endif

/* RPGACC87H */
#ifdef __RL78__
#else
	#define	RPGACC87H	(rpgacc87.BYTE.rpgacc87h)
#endif

/* RPGACC87 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc87l;
	SFR_UNSIGNED_SHORT_INT	rpgacc87h;
}SFR_BYTE_RPGACC87;

typedef union{
	SFR_BYTE_RPGACC87	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC87;

SFR_GLOBAL	SFR_RPGACC87	rpgacc87;

#ifdef __RL78__
#else
	#define	RPGACC87	(rpgacc87.ALL)
#endif

/* RPGACC88L */
#ifdef __RL78__
#else
	#define	RPGACC88L	(rpgacc88.BYTE.rpgacc88l)
#endif

/* RPGACC88H */
#ifdef __RL78__
#else
	#define	RPGACC88H	(rpgacc88.BYTE.rpgacc88h)
#endif

/* RPGACC88 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc88l;
	SFR_UNSIGNED_SHORT_INT	rpgacc88h;
}SFR_BYTE_RPGACC88;

typedef union{
	SFR_BYTE_RPGACC88	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC88;

SFR_GLOBAL	SFR_RPGACC88	rpgacc88;

#ifdef __RL78__
#else
	#define	RPGACC88	(rpgacc88.ALL)
#endif

/* RPGACC89L */
#ifdef __RL78__
#else
	#define	RPGACC89L	(rpgacc89.BYTE.rpgacc89l)
#endif

/* RPGACC89H */
#ifdef __RL78__
#else
	#define	RPGACC89H	(rpgacc89.BYTE.rpgacc89h)
#endif

/* RPGACC89 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc89l;
	SFR_UNSIGNED_SHORT_INT	rpgacc89h;
}SFR_BYTE_RPGACC89;

typedef union{
	SFR_BYTE_RPGACC89	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC89;

SFR_GLOBAL	SFR_RPGACC89	rpgacc89;

#ifdef __RL78__
#else
	#define	RPGACC89	(rpgacc89.ALL)
#endif

/* RPGACC90L */
#ifdef __RL78__
#else
	#define	RPGACC90L	(rpgacc90.BYTE.rpgacc90l)
#endif

/* RPGACC90H */
#ifdef __RL78__
#else
	#define	RPGACC90H	(rpgacc90.BYTE.rpgacc90h)
#endif

/* RPGACC90 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc90l;
	SFR_UNSIGNED_SHORT_INT	rpgacc90h;
}SFR_BYTE_RPGACC90;

typedef union{
	SFR_BYTE_RPGACC90	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC90;

SFR_GLOBAL	SFR_RPGACC90	rpgacc90;

#ifdef __RL78__
#else
	#define	RPGACC90	(rpgacc90.ALL)
#endif

/* RPGACC91L */
#ifdef __RL78__
#else
	#define	RPGACC91L	(rpgacc91.BYTE.rpgacc91l)
#endif

/* RPGACC91H */
#ifdef __RL78__
#else
	#define	RPGACC91H	(rpgacc91.BYTE.rpgacc91h)
#endif

/* RPGACC91 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc91l;
	SFR_UNSIGNED_SHORT_INT	rpgacc91h;
}SFR_BYTE_RPGACC91;

typedef union{
	SFR_BYTE_RPGACC91	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC91;

SFR_GLOBAL	SFR_RPGACC91	rpgacc91;

#ifdef __RL78__
#else
	#define	RPGACC91	(rpgacc91.ALL)
#endif

/* RPGACC92L */
#ifdef __RL78__
#else
	#define	RPGACC92L	(rpgacc92.BYTE.rpgacc92l)
#endif

/* RPGACC92H */
#ifdef __RL78__
#else
	#define	RPGACC92H	(rpgacc92.BYTE.rpgacc92h)
#endif

/* RPGACC92 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc92l;
	SFR_UNSIGNED_SHORT_INT	rpgacc92h;
}SFR_BYTE_RPGACC92;

typedef union{
	SFR_BYTE_RPGACC92	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC92;

SFR_GLOBAL	SFR_RPGACC92	rpgacc92;

#ifdef __RL78__
#else
	#define	RPGACC92	(rpgacc92.ALL)
#endif

/* RPGACC93L */
#ifdef __RL78__
#else
	#define	RPGACC93L	(rpgacc93.BYTE.rpgacc93l)
#endif

/* RPGACC93H */
#ifdef __RL78__
#else
	#define	RPGACC93H	(rpgacc93.BYTE.rpgacc93h)
#endif

/* RPGACC93 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc93l;
	SFR_UNSIGNED_SHORT_INT	rpgacc93h;
}SFR_BYTE_RPGACC93;

typedef union{
	SFR_BYTE_RPGACC93	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC93;

SFR_GLOBAL	SFR_RPGACC93	rpgacc93;

#ifdef __RL78__
#else
	#define	RPGACC93	(rpgacc93.ALL)
#endif

/* RPGACC94L */
#ifdef __RL78__
#else
	#define	RPGACC94L	(rpgacc94.BYTE.rpgacc94l)
#endif

/* RPGACC94H */
#ifdef __RL78__
#else
	#define	RPGACC94H	(rpgacc94.BYTE.rpgacc94h)
#endif

/* RPGACC94 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc94l;
	SFR_UNSIGNED_SHORT_INT	rpgacc94h;
}SFR_BYTE_RPGACC94;

typedef union{
	SFR_BYTE_RPGACC94	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC94;

SFR_GLOBAL	SFR_RPGACC94	rpgacc94;

#ifdef __RL78__
#else
	#define	RPGACC94	(rpgacc94.ALL)
#endif

/* RPGACC95L */
#ifdef __RL78__
#else
	#define	RPGACC95L	(rpgacc95.BYTE.rpgacc95l)
#endif

/* RPGACC95H */
#ifdef __RL78__
#else
	#define	RPGACC95H	(rpgacc95.BYTE.rpgacc95h)
#endif

/* RPGACC95 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc95l;
	SFR_UNSIGNED_SHORT_INT	rpgacc95h;
}SFR_BYTE_RPGACC95;

typedef union{
	SFR_BYTE_RPGACC95	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC95;

SFR_GLOBAL	SFR_RPGACC95	rpgacc95;

#ifdef __RL78__
#else
	#define	RPGACC95	(rpgacc95.ALL)
#endif

/* RPGACC96L */
#ifdef __RL78__
#else
	#define	RPGACC96L	(rpgacc96.BYTE.rpgacc96l)
#endif

/* RPGACC96H */
#ifdef __RL78__
#else
	#define	RPGACC96H	(rpgacc96.BYTE.rpgacc96h)
#endif

/* RPGACC96 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc96l;
	SFR_UNSIGNED_SHORT_INT	rpgacc96h;
}SFR_BYTE_RPGACC96;

typedef union{
	SFR_BYTE_RPGACC96	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC96;

SFR_GLOBAL	SFR_RPGACC96	rpgacc96;

#ifdef __RL78__
#else
	#define	RPGACC96	(rpgacc96.ALL)
#endif

/* RPGACC97L */
#ifdef __RL78__
#else
	#define	RPGACC97L	(rpgacc97.BYTE.rpgacc97l)
#endif

/* RPGACC97H */
#ifdef __RL78__
#else
	#define	RPGACC97H	(rpgacc97.BYTE.rpgacc97h)
#endif

/* RPGACC97 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc97l;
	SFR_UNSIGNED_SHORT_INT	rpgacc97h;
}SFR_BYTE_RPGACC97;

typedef union{
	SFR_BYTE_RPGACC97	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC97;

SFR_GLOBAL	SFR_RPGACC97	rpgacc97;

#ifdef __RL78__
#else
	#define	RPGACC97	(rpgacc97.ALL)
#endif

/* RPGACC98L */
#ifdef __RL78__
#else
	#define	RPGACC98L	(rpgacc98.BYTE.rpgacc98l)
#endif

/* RPGACC98H */
#ifdef __RL78__
#else
	#define	RPGACC98H	(rpgacc98.BYTE.rpgacc98h)
#endif

/* RPGACC98 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc98l;
	SFR_UNSIGNED_SHORT_INT	rpgacc98h;
}SFR_BYTE_RPGACC98;

typedef union{
	SFR_BYTE_RPGACC98	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC98;

SFR_GLOBAL	SFR_RPGACC98	rpgacc98;

#ifdef __RL78__
#else
	#define	RPGACC98	(rpgacc98.ALL)
#endif

/* RPGACC99L */
#ifdef __RL78__
#else
	#define	RPGACC99L	(rpgacc99.BYTE.rpgacc99l)
#endif

/* RPGACC99H */
#ifdef __RL78__
#else
	#define	RPGACC99H	(rpgacc99.BYTE.rpgacc99h)
#endif

/* RPGACC99 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc99l;
	SFR_UNSIGNED_SHORT_INT	rpgacc99h;
}SFR_BYTE_RPGACC99;

typedef union{
	SFR_BYTE_RPGACC99	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC99;

SFR_GLOBAL	SFR_RPGACC99	rpgacc99;

#ifdef __RL78__
#else
	#define	RPGACC99	(rpgacc99.ALL)
#endif

/* RPGACC100L */
#ifdef __RL78__
#else
	#define	RPGACC100L	(rpgacc100.BYTE.rpgacc100l)
#endif

/* RPGACC100H */
#ifdef __RL78__
#else
	#define	RPGACC100H	(rpgacc100.BYTE.rpgacc100h)
#endif

/* RPGACC100 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc100l;
	SFR_UNSIGNED_SHORT_INT	rpgacc100h;
}SFR_BYTE_RPGACC100;

typedef union{
	SFR_BYTE_RPGACC100	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC100;

SFR_GLOBAL	SFR_RPGACC100	rpgacc100;

#ifdef __RL78__
#else
	#define	RPGACC100	(rpgacc100.ALL)
#endif

/* RPGACC101L */
#ifdef __RL78__
#else
	#define	RPGACC101L	(rpgacc101.BYTE.rpgacc101l)
#endif

/* RPGACC101H */
#ifdef __RL78__
#else
	#define	RPGACC101H	(rpgacc101.BYTE.rpgacc101h)
#endif

/* RPGACC101 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc101l;
	SFR_UNSIGNED_SHORT_INT	rpgacc101h;
}SFR_BYTE_RPGACC101;

typedef union{
	SFR_BYTE_RPGACC101	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC101;

SFR_GLOBAL	SFR_RPGACC101	rpgacc101;

#ifdef __RL78__
#else
	#define	RPGACC101	(rpgacc101.ALL)
#endif

/* RPGACC102L */
#ifdef __RL78__
#else
	#define	RPGACC102L	(rpgacc102.BYTE.rpgacc102l)
#endif

/* RPGACC102H */
#ifdef __RL78__
#else
	#define	RPGACC102H	(rpgacc102.BYTE.rpgacc102h)
#endif

/* RPGACC102 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc102l;
	SFR_UNSIGNED_SHORT_INT	rpgacc102h;
}SFR_BYTE_RPGACC102;

typedef union{
	SFR_BYTE_RPGACC102	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC102;

SFR_GLOBAL	SFR_RPGACC102	rpgacc102;

#ifdef __RL78__
#else
	#define	RPGACC102	(rpgacc102.ALL)
#endif

/* RPGACC103L */
#ifdef __RL78__
#else
	#define	RPGACC103L	(rpgacc103.BYTE.rpgacc103l)
#endif

/* RPGACC103H */
#ifdef __RL78__
#else
	#define	RPGACC103H	(rpgacc103.BYTE.rpgacc103h)
#endif

/* RPGACC103 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc103l;
	SFR_UNSIGNED_SHORT_INT	rpgacc103h;
}SFR_BYTE_RPGACC103;

typedef union{
	SFR_BYTE_RPGACC103	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC103;

SFR_GLOBAL	SFR_RPGACC103	rpgacc103;

#ifdef __RL78__
#else
	#define	RPGACC103	(rpgacc103.ALL)
#endif

/* RPGACC104L */
#ifdef __RL78__
#else
	#define	RPGACC104L	(rpgacc104.BYTE.rpgacc104l)
#endif

/* RPGACC104H */
#ifdef __RL78__
#else
	#define	RPGACC104H	(rpgacc104.BYTE.rpgacc104h)
#endif

/* RPGACC104 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc104l;
	SFR_UNSIGNED_SHORT_INT	rpgacc104h;
}SFR_BYTE_RPGACC104;

typedef union{
	SFR_BYTE_RPGACC104	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC104;

SFR_GLOBAL	SFR_RPGACC104	rpgacc104;

#ifdef __RL78__
#else
	#define	RPGACC104	(rpgacc104.ALL)
#endif

/* RPGACC105L */
#ifdef __RL78__
#else
	#define	RPGACC105L	(rpgacc105.BYTE.rpgacc105l)
#endif

/* RPGACC105H */
#ifdef __RL78__
#else
	#define	RPGACC105H	(rpgacc105.BYTE.rpgacc105h)
#endif

/* RPGACC105 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc105l;
	SFR_UNSIGNED_SHORT_INT	rpgacc105h;
}SFR_BYTE_RPGACC105;

typedef union{
	SFR_BYTE_RPGACC105	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC105;

SFR_GLOBAL	SFR_RPGACC105	rpgacc105;

#ifdef __RL78__
#else
	#define	RPGACC105	(rpgacc105.ALL)
#endif

/* RPGACC106L */
#ifdef __RL78__
#else
	#define	RPGACC106L	(rpgacc106.BYTE.rpgacc106l)
#endif

/* RPGACC106H */
#ifdef __RL78__
#else
	#define	RPGACC106H	(rpgacc106.BYTE.rpgacc106h)
#endif

/* RPGACC106 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc106l;
	SFR_UNSIGNED_SHORT_INT	rpgacc106h;
}SFR_BYTE_RPGACC106;

typedef union{
	SFR_BYTE_RPGACC106	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC106;

SFR_GLOBAL	SFR_RPGACC106	rpgacc106;

#ifdef __RL78__
#else
	#define	RPGACC106	(rpgacc106.ALL)
#endif

/* RPGACC107L */
#ifdef __RL78__
#else
	#define	RPGACC107L	(rpgacc107.BYTE.rpgacc107l)
#endif

/* RPGACC107H */
#ifdef __RL78__
#else
	#define	RPGACC107H	(rpgacc107.BYTE.rpgacc107h)
#endif

/* RPGACC107 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc107l;
	SFR_UNSIGNED_SHORT_INT	rpgacc107h;
}SFR_BYTE_RPGACC107;

typedef union{
	SFR_BYTE_RPGACC107	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC107;

SFR_GLOBAL	SFR_RPGACC107	rpgacc107;

#ifdef __RL78__
#else
	#define	RPGACC107	(rpgacc107.ALL)
#endif

/* RPGACC108L */
#ifdef __RL78__
#else
	#define	RPGACC108L	(rpgacc108.BYTE.rpgacc108l)
#endif

/* RPGACC108H */
#ifdef __RL78__
#else
	#define	RPGACC108H	(rpgacc108.BYTE.rpgacc108h)
#endif

/* RPGACC108 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc108l;
	SFR_UNSIGNED_SHORT_INT	rpgacc108h;
}SFR_BYTE_RPGACC108;

typedef union{
	SFR_BYTE_RPGACC108	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC108;

SFR_GLOBAL	SFR_RPGACC108	rpgacc108;

#ifdef __RL78__
#else
	#define	RPGACC108	(rpgacc108.ALL)
#endif

/* RPGACC109L */
#ifdef __RL78__
#else
	#define	RPGACC109L	(rpgacc109.BYTE.rpgacc109l)
#endif

/* RPGACC109H */
#ifdef __RL78__
#else
	#define	RPGACC109H	(rpgacc109.BYTE.rpgacc109h)
#endif

/* RPGACC109 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc109l;
	SFR_UNSIGNED_SHORT_INT	rpgacc109h;
}SFR_BYTE_RPGACC109;

typedef union{
	SFR_BYTE_RPGACC109	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC109;

SFR_GLOBAL	SFR_RPGACC109	rpgacc109;

#ifdef __RL78__
#else
	#define	RPGACC109	(rpgacc109.ALL)
#endif

/* RPGACC110L */
#ifdef __RL78__
#else
	#define	RPGACC110L	(rpgacc110.BYTE.rpgacc110l)
#endif

/* RPGACC110H */
#ifdef __RL78__
#else
	#define	RPGACC110H	(rpgacc110.BYTE.rpgacc110h)
#endif

/* RPGACC110 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc110l;
	SFR_UNSIGNED_SHORT_INT	rpgacc110h;
}SFR_BYTE_RPGACC110;

typedef union{
	SFR_BYTE_RPGACC110	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC110;

SFR_GLOBAL	SFR_RPGACC110	rpgacc110;

#ifdef __RL78__
#else
	#define	RPGACC110	(rpgacc110.ALL)
#endif

/* RPGACC111L */
#ifdef __RL78__
#else
	#define	RPGACC111L	(rpgacc111.BYTE.rpgacc111l)
#endif

/* RPGACC111H */
#ifdef __RL78__
#else
	#define	RPGACC111H	(rpgacc111.BYTE.rpgacc111h)
#endif

/* RPGACC111 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc111l;
	SFR_UNSIGNED_SHORT_INT	rpgacc111h;
}SFR_BYTE_RPGACC111;

typedef union{
	SFR_BYTE_RPGACC111	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC111;

SFR_GLOBAL	SFR_RPGACC111	rpgacc111;

#ifdef __RL78__
#else
	#define	RPGACC111	(rpgacc111.ALL)
#endif

/* RPGACC112L */
#ifdef __RL78__
#else
	#define	RPGACC112L	(rpgacc112.BYTE.rpgacc112l)
#endif

/* RPGACC112H */
#ifdef __RL78__
#else
	#define	RPGACC112H	(rpgacc112.BYTE.rpgacc112h)
#endif

/* RPGACC112 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc112l;
	SFR_UNSIGNED_SHORT_INT	rpgacc112h;
}SFR_BYTE_RPGACC112;

typedef union{
	SFR_BYTE_RPGACC112	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC112;

SFR_GLOBAL	SFR_RPGACC112	rpgacc112;

#ifdef __RL78__
#else
	#define	RPGACC112	(rpgacc112.ALL)
#endif

/* RPGACC113L */
#ifdef __RL78__
#else
	#define	RPGACC113L	(rpgacc113.BYTE.rpgacc113l)
#endif

/* RPGACC113H */
#ifdef __RL78__
#else
	#define	RPGACC113H	(rpgacc113.BYTE.rpgacc113h)
#endif

/* RPGACC113 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc113l;
	SFR_UNSIGNED_SHORT_INT	rpgacc113h;
}SFR_BYTE_RPGACC113;

typedef union{
	SFR_BYTE_RPGACC113	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC113;

SFR_GLOBAL	SFR_RPGACC113	rpgacc113;

#ifdef __RL78__
#else
	#define	RPGACC113	(rpgacc113.ALL)
#endif

/* RPGACC114L */
#ifdef __RL78__
#else
	#define	RPGACC114L	(rpgacc114.BYTE.rpgacc114l)
#endif

/* RPGACC114H */
#ifdef __RL78__
#else
	#define	RPGACC114H	(rpgacc114.BYTE.rpgacc114h)
#endif

/* RPGACC114 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc114l;
	SFR_UNSIGNED_SHORT_INT	rpgacc114h;
}SFR_BYTE_RPGACC114;

typedef union{
	SFR_BYTE_RPGACC114	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC114;

SFR_GLOBAL	SFR_RPGACC114	rpgacc114;

#ifdef __RL78__
#else
	#define	RPGACC114	(rpgacc114.ALL)
#endif

/* RPGACC115L */
#ifdef __RL78__
#else
	#define	RPGACC115L	(rpgacc115.BYTE.rpgacc115l)
#endif

/* RPGACC115H */
#ifdef __RL78__
#else
	#define	RPGACC115H	(rpgacc115.BYTE.rpgacc115h)
#endif

/* RPGACC115 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc115l;
	SFR_UNSIGNED_SHORT_INT	rpgacc115h;
}SFR_BYTE_RPGACC115;

typedef union{
	SFR_BYTE_RPGACC115	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC115;

SFR_GLOBAL	SFR_RPGACC115	rpgacc115;

#ifdef __RL78__
#else
	#define	RPGACC115	(rpgacc115.ALL)
#endif

/* RPGACC116L */
#ifdef __RL78__
#else
	#define	RPGACC116L	(rpgacc116.BYTE.rpgacc116l)
#endif

/* RPGACC116H */
#ifdef __RL78__
#else
	#define	RPGACC116H	(rpgacc116.BYTE.rpgacc116h)
#endif

/* RPGACC116 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc116l;
	SFR_UNSIGNED_SHORT_INT	rpgacc116h;
}SFR_BYTE_RPGACC116;

typedef union{
	SFR_BYTE_RPGACC116	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC116;

SFR_GLOBAL	SFR_RPGACC116	rpgacc116;

#ifdef __RL78__
#else
	#define	RPGACC116	(rpgacc116.ALL)
#endif

/* RPGACC117L */
#ifdef __RL78__
#else
	#define	RPGACC117L	(rpgacc117.BYTE.rpgacc117l)
#endif

/* RPGACC117H */
#ifdef __RL78__
#else
	#define	RPGACC117H	(rpgacc117.BYTE.rpgacc117h)
#endif

/* RPGACC117 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc117l;
	SFR_UNSIGNED_SHORT_INT	rpgacc117h;
}SFR_BYTE_RPGACC117;

typedef union{
	SFR_BYTE_RPGACC117	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC117;

SFR_GLOBAL	SFR_RPGACC117	rpgacc117;

#ifdef __RL78__
#else
	#define	RPGACC117	(rpgacc117.ALL)
#endif

/* RPGACC118L */
#ifdef __RL78__
#else
	#define	RPGACC118L	(rpgacc118.BYTE.rpgacc118l)
#endif

/* RPGACC118H */
#ifdef __RL78__
#else
	#define	RPGACC118H	(rpgacc118.BYTE.rpgacc118h)
#endif

/* RPGACC118 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc118l;
	SFR_UNSIGNED_SHORT_INT	rpgacc118h;
}SFR_BYTE_RPGACC118;

typedef union{
	SFR_BYTE_RPGACC118	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC118;

SFR_GLOBAL	SFR_RPGACC118	rpgacc118;

#ifdef __RL78__
#else
	#define	RPGACC118	(rpgacc118.ALL)
#endif

/* RPGACC119L */
#ifdef __RL78__
#else
	#define	RPGACC119L	(rpgacc119.BYTE.rpgacc119l)
#endif

/* RPGACC119H */
#ifdef __RL78__
#else
	#define	RPGACC119H	(rpgacc119.BYTE.rpgacc119h)
#endif

/* RPGACC119 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc119l;
	SFR_UNSIGNED_SHORT_INT	rpgacc119h;
}SFR_BYTE_RPGACC119;

typedef union{
	SFR_BYTE_RPGACC119	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC119;

SFR_GLOBAL	SFR_RPGACC119	rpgacc119;

#ifdef __RL78__
#else
	#define	RPGACC119	(rpgacc119.ALL)
#endif

/* RPGACC120L */
#ifdef __RL78__
#else
	#define	RPGACC120L	(rpgacc120.BYTE.rpgacc120l)
#endif

/* RPGACC120H */
#ifdef __RL78__
#else
	#define	RPGACC120H	(rpgacc120.BYTE.rpgacc120h)
#endif

/* RPGACC120 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc120l;
	SFR_UNSIGNED_SHORT_INT	rpgacc120h;
}SFR_BYTE_RPGACC120;

typedef union{
	SFR_BYTE_RPGACC120	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC120;

SFR_GLOBAL	SFR_RPGACC120	rpgacc120;

#ifdef __RL78__
#else
	#define	RPGACC120	(rpgacc120.ALL)
#endif

/* RPGACC121L */
#ifdef __RL78__
#else
	#define	RPGACC121L	(rpgacc121.BYTE.rpgacc121l)
#endif

/* RPGACC121H */
#ifdef __RL78__
#else
	#define	RPGACC121H	(rpgacc121.BYTE.rpgacc121h)
#endif

/* RPGACC121 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc121l;
	SFR_UNSIGNED_SHORT_INT	rpgacc121h;
}SFR_BYTE_RPGACC121;

typedef union{
	SFR_BYTE_RPGACC121	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC121;

SFR_GLOBAL	SFR_RPGACC121	rpgacc121;

#ifdef __RL78__
#else
	#define	RPGACC121	(rpgacc121.ALL)
#endif

/* RPGACC122L */
#ifdef __RL78__
#else
	#define	RPGACC122L	(rpgacc122.BYTE.rpgacc122l)
#endif

/* RPGACC122H */
#ifdef __RL78__
#else
	#define	RPGACC122H	(rpgacc122.BYTE.rpgacc122h)
#endif

/* RPGACC122 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc122l;
	SFR_UNSIGNED_SHORT_INT	rpgacc122h;
}SFR_BYTE_RPGACC122;

typedef union{
	SFR_BYTE_RPGACC122	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC122;

SFR_GLOBAL	SFR_RPGACC122	rpgacc122;

#ifdef __RL78__
#else
	#define	RPGACC122	(rpgacc122.ALL)
#endif

/* RPGACC123L */
#ifdef __RL78__
#else
	#define	RPGACC123L	(rpgacc123.BYTE.rpgacc123l)
#endif

/* RPGACC123H */
#ifdef __RL78__
#else
	#define	RPGACC123H	(rpgacc123.BYTE.rpgacc123h)
#endif

/* RPGACC123 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc123l;
	SFR_UNSIGNED_SHORT_INT	rpgacc123h;
}SFR_BYTE_RPGACC123;

typedef union{
	SFR_BYTE_RPGACC123	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC123;

SFR_GLOBAL	SFR_RPGACC123	rpgacc123;

#ifdef __RL78__
#else
	#define	RPGACC123	(rpgacc123.ALL)
#endif

/* RPGACC124L */
#ifdef __RL78__
#else
	#define	RPGACC124L	(rpgacc124.BYTE.rpgacc124l)
#endif

/* RPGACC124H */
#ifdef __RL78__
#else
	#define	RPGACC124H	(rpgacc124.BYTE.rpgacc124h)
#endif

/* RPGACC124 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc124l;
	SFR_UNSIGNED_SHORT_INT	rpgacc124h;
}SFR_BYTE_RPGACC124;

typedef union{
	SFR_BYTE_RPGACC124	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC124;

SFR_GLOBAL	SFR_RPGACC124	rpgacc124;

#ifdef __RL78__
#else
	#define	RPGACC124	(rpgacc124.ALL)
#endif

/* RPGACC125L */
#ifdef __RL78__
#else
	#define	RPGACC125L	(rpgacc125.BYTE.rpgacc125l)
#endif

/* RPGACC125H */
#ifdef __RL78__
#else
	#define	RPGACC125H	(rpgacc125.BYTE.rpgacc125h)
#endif

/* RPGACC125 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc125l;
	SFR_UNSIGNED_SHORT_INT	rpgacc125h;
}SFR_BYTE_RPGACC125;

typedef union{
	SFR_BYTE_RPGACC125	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC125;

SFR_GLOBAL	SFR_RPGACC125	rpgacc125;

#ifdef __RL78__
#else
	#define	RPGACC125	(rpgacc125.ALL)
#endif

/* RPGACC126L */
#ifdef __RL78__
#else
	#define	RPGACC126L	(rpgacc126.BYTE.rpgacc126l)
#endif

/* RPGACC126H */
#ifdef __RL78__
#else
	#define	RPGACC126H	(rpgacc126.BYTE.rpgacc126h)
#endif

/* RPGACC126 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc126l;
	SFR_UNSIGNED_SHORT_INT	rpgacc126h;
}SFR_BYTE_RPGACC126;

typedef union{
	SFR_BYTE_RPGACC126	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC126;

SFR_GLOBAL	SFR_RPGACC126	rpgacc126;

#ifdef __RL78__
#else
	#define	RPGACC126	(rpgacc126.ALL)
#endif

/* RPGACC127L */
#ifdef __RL78__
#else
	#define	RPGACC127L	(rpgacc127.BYTE.rpgacc127l)
#endif

/* RPGACC127H */
#ifdef __RL78__
#else
	#define	RPGACC127H	(rpgacc127.BYTE.rpgacc127h)
#endif

/* RPGACC127 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rpgacc127l;
	SFR_UNSIGNED_SHORT_INT	rpgacc127h;
}SFR_BYTE_RPGACC127;

typedef union{
	SFR_BYTE_RPGACC127	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RPGACC127;

SFR_GLOBAL	SFR_RPGACC127	rpgacc127;

#ifdef __RL78__
#else
	#define	RPGACC127	(rpgacc127.ALL)
#endif
/* CAN用RAMテスト・レジスタここまで */

/* CAN受信FIFOアクセス・レジスタここから */
/* RFIDL0L */
#ifdef __RL78__
#else
	#define	RFIDL0L	(rfidl0.BYTE.rfidl0l)
#endif

/* RFIDL0H */
#ifdef __RL78__
#else
	#define	RFIDL0H	(rfidl0.BYTE.rfidl0h)
#endif

/* RFIDL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfidl0l;
	SFR_UNSIGNED_SHORT_INT	rfidl0h;
}SFR_BYTE_RFIDL0;

typedef union{
	SFR_BYTE_RFIDL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFIDL0;

SFR_GLOBAL	SFR_RFIDL0	rfidl0;

#ifdef __RL78__
#else
	#define	RFIDL0	(rfidl0.ALL)
#endif

/* RFIDH0L */
#ifdef __RL78__
#else
	#define	RFIDH0L	(rfidh0.BYTE.rfidh0l)
#endif

/* RFIDH0H */
#ifdef __RL78__
#else
	#define	RFIDH0H	(rfidh0.BYTE.rfidh0h)
#endif

/* RFIDH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfidh0l;
	SFR_UNSIGNED_SHORT_INT	rfidh0h;
}SFR_BYTE_RFIDH0;

typedef union{
	SFR_BYTE_RFIDH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFIDH0;

SFR_GLOBAL	SFR_RFIDH0	rfidh0;

#ifdef __RL78__
#else
	#define	RFIDH0	(rfidh0.ALL)
#endif

/* RFTS0L */
#ifdef __RL78__
#else
	#define	RFTS0L	(rfts0.BYTE.rfts0l)
#endif

/* RFTS0H */
#ifdef __RL78__
#else
	#define	RFTS0H	(rfts0.BYTE.rfts0h)
#endif

/* RFTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfts0l;
	SFR_UNSIGNED_SHORT_INT	rfts0h;
}SFR_BYTE_RFTS0;

typedef union{
	SFR_BYTE_RFTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFTS0;

SFR_GLOBAL	SFR_RFTS0	rfts0;

#ifdef __RL78__
#else
	#define	RFTS0	(rfts0.ALL)
#endif

/* RFPTR0L */
#ifdef __RL78__
#else
	#define	RFPTR0L	(rfptr0.BYTE.rfptr0l)
#endif

/* RFPTR0H */
#ifdef __RL78__
#else
	#define	RFPTR0H	(rfptr0.BYTE.rfptr0h)
#endif

/* RFPTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfptr0l;
	SFR_UNSIGNED_SHORT_INT	rfptr0h;
}SFR_BYTE_RFPTR0;

typedef union{
	SFR_BYTE_RFPTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFPTR0;

SFR_GLOBAL	SFR_RFPTR0	rfptr0;

#ifdef __RL78__
#else
	#define	RFPTR0	(rfptr0.ALL)
#endif

/* RFDF00L */
#ifdef __RL78__
#else
	#define	RFDF00L	(rfdf00.BYTE.rfdf00l)
#endif

/* RFDF00H */
#ifdef __RL78__
#else
	#define	RFDF00H	(rfdf00.BYTE.rfdf00h)
#endif

/* RFDF00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf00l;
	SFR_UNSIGNED_SHORT_INT	rfdf00h;
}SFR_BYTE_RFDF00;

typedef union{
	SFR_BYTE_RFDF00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF00;

SFR_GLOBAL	SFR_RFDF00	rfdf00;

#ifdef __RL78__
#else
	#define	RFDF00	(rfdf00.ALL)
#endif

/* RFDF10L */
#ifdef __RL78__
#else
	#define	RFDF10L	(rfdf10.BYTE.rfdf10l)
#endif

/* RFDF10H */
#ifdef __RL78__
#else
	#define	RFDF10H	(rfdf10.BYTE.rfdf10h)
#endif

/* RFDF10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf10l;
	SFR_UNSIGNED_SHORT_INT	rfdf10h;
}SFR_BYTE_RFDF10;

typedef union{
	SFR_BYTE_RFDF10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF10;

SFR_GLOBAL	SFR_RFDF10	rfdf10;

#ifdef __RL78__
#else
	#define	RFDF10	(rfdf10.ALL)
#endif

/* RFDF20L */
#ifdef __RL78__
#else
	#define	RFDF20L	(rfdf20.BYTE.rfdf20l)
#endif

/* RFDF20H */
#ifdef __RL78__
#else
	#define	RFDF20H	(rfdf20.BYTE.rfdf20h)
#endif

/* RFDF20 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf20l;
	SFR_UNSIGNED_SHORT_INT	rfdf20h;
}SFR_BYTE_RFDF20;

typedef union{
	SFR_BYTE_RFDF20	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF20;

SFR_GLOBAL	SFR_RFDF20	rfdf20;

#ifdef __RL78__
#else
	#define	RFDF20	(rfdf20.ALL)
#endif

/* RFDF30L */
#ifdef __RL78__
#else
	#define	RFDF30L	(rfdf30.BYTE.rfdf30l)
#endif

/* RFDF30H */
#ifdef __RL78__
#else
	#define	RFDF30H	(rfdf30.BYTE.rfdf30h)
#endif

/* RFDF30 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf30l;
	SFR_UNSIGNED_SHORT_INT	rfdf30h;
}SFR_BYTE_RFDF30;

typedef union{
	SFR_BYTE_RFDF30	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF30;

SFR_GLOBAL	SFR_RFDF30	rfdf30;

#ifdef __RL78__
#else
	#define	RFDF30	(rfdf30.ALL)
#endif

/* RFIDL1L */
#ifdef __RL78__
#else
	#define	RFIDL1L	(rfidl1.BYTE.rfidl1l)
#endif

/* RFIDL1H */
#ifdef __RL78__
#else
	#define	RFIDL1H	(rfidl1.BYTE.rfidl1h)
#endif

/* RFIDL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfidl1l;
	SFR_UNSIGNED_SHORT_INT	rfidl1h;
}SFR_BYTE_RFIDL1;

typedef union{
	SFR_BYTE_RFIDL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFIDL1;

SFR_GLOBAL	SFR_RFIDL1	rfidl1;

#ifdef __RL78__
#else
	#define	RFIDL1	(rfidl1.ALL)
#endif

/* RFIDH1L */
#ifdef __RL78__
#else
	#define	RFIDH1L	(rfidh1.BYTE.rfidh1l)
#endif

/* RFIDH1H */
#ifdef __RL78__
#else
	#define	RFIDH1H	(rfidh1.BYTE.rfidh1h)
#endif

/* RFIDH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfidh1l;
	SFR_UNSIGNED_SHORT_INT	rfidh1h;
}SFR_BYTE_RFIDH1;

typedef union{
	SFR_BYTE_RFIDH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFIDH1;

SFR_GLOBAL	SFR_RFIDH1	rfidh1;

#ifdef __RL78__
#else
	#define	RFIDH1	(rfidh1.ALL)
#endif

/* RFTS1L */
#ifdef __RL78__
#else
	#define	RFTS1L	(rfts1.BYTE.rfts1l)
#endif

/* RFTS1H */
#ifdef __RL78__
#else
	#define	RFTS1H	(rfts1.BYTE.rfts1h)
#endif

/* RFTS1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfts1l;
	SFR_UNSIGNED_SHORT_INT	rfts1h;
}SFR_BYTE_RFTS1;

typedef union{
	SFR_BYTE_RFTS1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFTS1;

SFR_GLOBAL	SFR_RFTS1	rfts1;

#ifdef __RL78__
#else
	#define	RFTS1	(rfts1.ALL)
#endif

/* RFPTR1L */
#ifdef __RL78__
#else
	#define	RFPTR1L	(rfptr1.BYTE.rfptr1l)
#endif

/* RFPTR1H */
#ifdef __RL78__
#else
	#define	RFPTR1H	(rfptr1.BYTE.rfptr1h)
#endif

/* RFPTR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfptr1l;
	SFR_UNSIGNED_SHORT_INT	rfptr1h;
}SFR_BYTE_RFPTR1;

typedef union{
	SFR_BYTE_RFPTR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFPTR1;

SFR_GLOBAL	SFR_RFPTR1	rfptr1;

#ifdef __RL78__
#else
	#define	RFPTR1	(rfptr1.ALL)
#endif

/* RFDF01L */
#ifdef __RL78__
#else
	#define	RFDF01L	(rfdf01.BYTE.rfdf01l)
#endif

/* RFDF01H */
#ifdef __RL78__
#else
	#define	RFDF01H	(rfdf01.BYTE.rfdf01h)
#endif

/* RFDF01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf01l;
	SFR_UNSIGNED_SHORT_INT	rfdf01h;
}SFR_BYTE_RFDF01;

typedef union{
	SFR_BYTE_RFDF01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF01;

SFR_GLOBAL	SFR_RFDF01	rfdf01;

#ifdef __RL78__
#else
	#define	RFDF01	(rfdf01.ALL)
#endif

/* RFDF11L */
#ifdef __RL78__
#else
	#define	RFDF11L	(rfdf11.BYTE.rfdf11l)
#endif

/* RFDF11H */
#ifdef __RL78__
#else
	#define	RFDF11H	(rfdf11.BYTE.rfdf11h)
#endif

/* RFDF11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf11l;
	SFR_UNSIGNED_SHORT_INT	rfdf11h;
}SFR_BYTE_RFDF11;

typedef union{
	SFR_BYTE_RFDF11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF11;

SFR_GLOBAL	SFR_RFDF11	rfdf11;

#ifdef __RL78__
#else
	#define	RFDF11	(rfdf11.ALL)
#endif

/* RFDF21L */
#ifdef __RL78__
#else
	#define	RFDF21L	(rfdf21.BYTE.rfdf21l)
#endif

/* RFDF21H */
#ifdef __RL78__
#else
	#define	RFDF21H	(rfdf21.BYTE.rfdf21h)
#endif

/* RFDF21 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf21l;
	SFR_UNSIGNED_SHORT_INT	rfdf21h;
}SFR_BYTE_RFDF21;

typedef union{
	SFR_BYTE_RFDF21	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF21;

SFR_GLOBAL	SFR_RFDF21	rfdf21;

#ifdef __RL78__
#else
	#define	RFDF21	(rfdf21.ALL)
#endif

/* RFDF31L */
#ifdef __RL78__
#else
	#define	RFDF31L	(rfdf31.BYTE.rfdf31l)
#endif

/* RFDF31H */
#ifdef __RL78__
#else
	#define	RFDF31H	(rfdf31.BYTE.rfdf31h)
#endif

/* RFDF31 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	rfdf31l;
	SFR_UNSIGNED_SHORT_INT	rfdf31h;
}SFR_BYTE_RFDF31;

typedef union{
	SFR_BYTE_RFDF31	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_RFDF31;

SFR_GLOBAL	SFR_RFDF31	rfdf31;

#ifdef __RL78__
#else
	#define	RFDF31	(rfdf31.ALL)
#endif
/* CAN受信FIFOアクセス・レジスタここまで */

/* CAN0送受信FIFOアクセス・レジスタここから */
/* CFIDL0L */
#ifdef __RL78__
#else
	#define	CFIDL0L	(cfidl0.BYTE.cfidl0l)
#endif

/* CFIDL0H */
#ifdef __RL78__
#else
	#define	CFIDL0H	(cfidl0.BYTE.cfidl0h)
#endif

/* CFIDL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfidl0l;
	SFR_UNSIGNED_SHORT_INT	cfidl0h;
}SFR_BYTE_CFIDL0;

typedef union{
	SFR_BYTE_CFIDL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFIDL0;

SFR_GLOBAL	SFR_CFIDL0	cfidl0;

#ifdef __RL78__
#else
	#define	CFIDL0	(cfidl0.ALL)
#endif

/* CFIDH0L */
#ifdef __RL78__
#else
	#define	CFIDH0L	(cfidh0.BYTE.cfidh0l)
#endif

/* CFIDH0H */
#ifdef __RL78__
#else
	#define	CFIDH0H	(cfidh0.BYTE.cfidh0h)
#endif

/* CFIDH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfidh0l;
	SFR_UNSIGNED_SHORT_INT	cfidh0h;
}SFR_BYTE_CFIDH0;

typedef union{
	SFR_BYTE_CFIDH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFIDH0;

SFR_GLOBAL	SFR_CFIDH0	cfidh0;

#ifdef __RL78__
#else
	#define	CFIDH0	(cfidh0.ALL)
#endif

/* CFTS0L */
#ifdef __RL78__
#else
	#define	CFTS0L	(cfts0.BYTE.cfts0l)
#endif

/* CFTS0H */
#ifdef __RL78__
#else
	#define	CFTS0H	(cfts0.BYTE.cfts0h)
#endif

/* CFTS0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfts0l;
	SFR_UNSIGNED_SHORT_INT	cfts0h;
}SFR_BYTE_CFTS0;

typedef union{
	SFR_BYTE_CFTS0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFTS0;

SFR_GLOBAL	SFR_CFTS0	cfts0;

#ifdef __RL78__
#else
	#define	CFTS0	(cfts0.ALL)
#endif

/* CFPTR0L */
#ifdef __RL78__
#else
	#define	CFPTR0L	(cfptr0.BYTE.cfptr0l)
#endif

/* CFPTR0H */
#ifdef __RL78__
#else
	#define	CFPTR0H	(cfptr0.BYTE.cfptr0h)
#endif

/* CFPTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfptr0l;
	SFR_UNSIGNED_SHORT_INT	cfptr0h;
}SFR_BYTE_CFPTR0;

typedef union{
	SFR_BYTE_CFPTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFPTR0;

SFR_GLOBAL	SFR_CFPTR0	cfptr0;

#ifdef __RL78__
#else
	#define	CFPTR0	(cfptr0.ALL)
#endif

/* CFDF00L */
#ifdef __RL78__
#else
	#define	CFDF00L	(cfdf00.BYTE.cfdf00l)
#endif

/* CFDF00H */
#ifdef __RL78__
#else
	#define	CFDF00H	(cfdf00.BYTE.cfdf00h)
#endif

/* CFDF00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfdf00l;
	SFR_UNSIGNED_SHORT_INT	cfdf00h;
}SFR_BYTE_CFDF00;

typedef union{
	SFR_BYTE_CFDF00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFDF00;

SFR_GLOBAL	SFR_CFDF00	cfdf00;

#ifdef __RL78__
#else
	#define	CFDF00	(cfdf00.ALL)
#endif

/* CFDF10L */
#ifdef __RL78__
#else
	#define	CFDF10L	(cfdf10.BYTE.cfdf10l)
#endif

/* CFDF10H */
#ifdef __RL78__
#else
	#define	CFDF10H	(cfdf10.BYTE.cfdf10h)
#endif

/* CFDF10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfdf10l;
	SFR_UNSIGNED_SHORT_INT	cfdf10h;
}SFR_BYTE_CFDF10;

typedef union{
	SFR_BYTE_CFDF10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFDF10;

SFR_GLOBAL	SFR_CFDF10	cfdf10;

#ifdef __RL78__
#else
	#define	CFDF10	(cfdf10.ALL)
#endif

/* CFDF20L */
#ifdef __RL78__
#else
	#define	CFDF20L	(cfdf20.BYTE.cfdf20l)
#endif

/* CFDF20H */
#ifdef __RL78__
#else
	#define	CFDF20H	(cfdf20.BYTE.cfdf20h)
#endif

/* CFDF20 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfdf20l;
	SFR_UNSIGNED_SHORT_INT	cfdf20h;
}SFR_BYTE_CFDF20;

typedef union{
	SFR_BYTE_CFDF20	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFDF20;

SFR_GLOBAL	SFR_CFDF20	cfdf20;

#ifdef __RL78__
#else
	#define	CFDF20	(cfdf20.ALL)
#endif

/* CFDF30L */
#ifdef __RL78__
#else
	#define	CFDF30L	(cfdf30.BYTE.cfdf30l)
#endif

/* CFDF30H */
#ifdef __RL78__
#else
	#define	CFDF30H	(cfdf30.BYTE.cfdf30h)
#endif

/* CFDF30 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	cfdf30l;
	SFR_UNSIGNED_SHORT_INT	cfdf30h;
}SFR_BYTE_CFDF30;

typedef union{
	SFR_BYTE_CFDF30	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_CFDF30;

SFR_GLOBAL	SFR_CFDF30	cfdf30;

#ifdef __RL78__
#else
	#define	CFDF30	(cfdf30.ALL)
#endif
/* CAN0送受信FIFOアクセス・レジスタここまで */

/* CAN0送信バッファ・レジスタここから */
/* TMIDL0L */
#ifdef __RL78__
#else
	#define	TMIDL0L	(tmidl0.BYTE.tmidl0l)
#endif

/* TMIDL0H */
#ifdef __RL78__
#else
	#define	TMIDL0H	(tmidl0.BYTE.tmidl0h)
#endif

/* TMIDL0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidl0l;
	SFR_UNSIGNED_SHORT_INT	tmidl0h;
}SFR_BYTE_TMIDL0;

typedef union{
	SFR_BYTE_TMIDL0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDL0;

SFR_GLOBAL	SFR_TMIDL0	tmidl0;

#ifdef __RL78__
#else
	#define	TMIDL0	(tmidl0.ALL)
#endif

/* TMIDH0L */
#ifdef __RL78__
#else
	#define	TMIDH0L	(tmidh0.BYTE.tmidh0l)
#endif

/* TMIDH0H */
#ifdef __RL78__
#else
	#define	TMIDH0H	(tmidh0.BYTE.tmidh0h)
#endif

/* TMIDH0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidh0l;
	SFR_UNSIGNED_SHORT_INT	tmidh0h;
}SFR_BYTE_TMIDH0;

typedef union{
	SFR_BYTE_TMIDH0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDH0;

SFR_GLOBAL	SFR_TMIDH0	tmidh0;

#ifdef __RL78__
#else
	#define	TMIDH0	(tmidh0.ALL)
#endif

/* TMPTR0L */
#ifdef __RL78__
#else
	#define	TMPTR0L	(tmptr0.BYTE.tmptr0l)
#endif

/* TMPTR0H */
#ifdef __RL78__
#else
	#define	TMPTR0H	(tmptr0.BYTE.tmptr0h)
#endif

/* TMPTR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmptr0l;
	SFR_UNSIGNED_SHORT_INT	tmptr0h;
}SFR_BYTE_TMPTR0;

typedef union{
	SFR_BYTE_TMPTR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMPTR0;

SFR_GLOBAL	SFR_TMPTR0	tmptr0;

#ifdef __RL78__
#else
	#define	TMPTR0	(tmptr0.ALL)
#endif

/* TMDF00L */
#ifdef __RL78__
#else
	#define	TMDF00L	(tmdf00.BYTE.tmdf00l)
#endif

/* TMDF00H */
#ifdef __RL78__
#else
	#define	TMDF00H	(tmdf00.BYTE.tmdf00h)
#endif

/* TMDF00 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf00l;
	SFR_UNSIGNED_SHORT_INT	tmdf00h;
}SFR_BYTE_TMDF00;

typedef union{
	SFR_BYTE_TMDF00	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF00;

SFR_GLOBAL	SFR_TMDF00	tmdf00;

#ifdef __RL78__
#else
	#define	TMDF00	(tmdf00.ALL)
#endif

/* TMDF10L */
#ifdef __RL78__
#else
	#define	TMDF10L	(tmdf10.BYTE.tmdf10l)
#endif

/* TMDF10H */
#ifdef __RL78__
#else
	#define	TMDF10H	(tmdf10.BYTE.tmdf10h)
#endif

/* TMDF10 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf10l;
	SFR_UNSIGNED_SHORT_INT	tmdf10h;
}SFR_BYTE_TMDF10;

typedef union{
	SFR_BYTE_TMDF10	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF10;

SFR_GLOBAL	SFR_TMDF10	tmdf10;

#ifdef __RL78__
#else
	#define	TMDF10	(tmdf10.ALL)
#endif

/* TMDF20L */
#ifdef __RL78__
#else
	#define	TMDF20L	(tmdf20.BYTE.tmdf20l)
#endif

/* TMDF20H */
#ifdef __RL78__
#else
	#define	TMDF20H	(tmdf20.BYTE.tmdf20h)
#endif

/* TMDF20 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf20l;
	SFR_UNSIGNED_SHORT_INT	tmdf20h;
}SFR_BYTE_TMDF20;

typedef union{
	SFR_BYTE_TMDF20	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF20;

SFR_GLOBAL	SFR_TMDF20	tmdf20;

#ifdef __RL78__
#else
	#define	TMDF20	(tmdf20.ALL)
#endif

/* TMDF30L */
#ifdef __RL78__
#else
	#define	TMDF30L	(tmdf30.BYTE.tmdf30l)
#endif

/* TMDF30H */
#ifdef __RL78__
#else
	#define	TMDF30H	(tmdf30.BYTE.tmdf30h)
#endif

/* TMDF30 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf30l;
	SFR_UNSIGNED_SHORT_INT	tmdf30h;
}SFR_BYTE_TMDF30;

typedef union{
	SFR_BYTE_TMDF30	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF30;

SFR_GLOBAL	SFR_TMDF30	tmdf30;

#ifdef __RL78__
#else
	#define	TMDF30	(tmdf30.ALL)
#endif

/* TMIDL1L */
#ifdef __RL78__
#else
	#define	TMIDL1L	(tmidl1.BYTE.tmidl1l)
#endif

/* TMIDL1H */
#ifdef __RL78__
#else
	#define	TMIDL1H	(tmidl1.BYTE.tmidl1h)
#endif

/* TMIDL1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidl1l;
	SFR_UNSIGNED_SHORT_INT	tmidl1h;
}SFR_BYTE_TMIDL1;

typedef union{
	SFR_BYTE_TMIDL1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDL1;

SFR_GLOBAL	SFR_TMIDL1	tmidl1;

#ifdef __RL78__
#else
	#define	TMIDL1	(tmidl1.ALL)
#endif

/* TMIDH1L */
#ifdef __RL78__
#else
	#define	TMIDH1L	(tmidh1.BYTE.tmidh1l)
#endif

/* TMIDH1H */
#ifdef __RL78__
#else
	#define	TMIDH1H	(tmidh1.BYTE.tmidh1h)
#endif

/* TMIDH1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidh1l;
	SFR_UNSIGNED_SHORT_INT	tmidh1h;
}SFR_BYTE_TMIDH1;

typedef union{
	SFR_BYTE_TMIDH1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDH1;

SFR_GLOBAL	SFR_TMIDH1	tmidh1;

#ifdef __RL78__
#else
	#define	TMIDH1	(tmidh1.ALL)
#endif

/* TMPTR1L */
#ifdef __RL78__
#else
	#define	TMPTR1L	(tmptr1.BYTE.tmptr1l)
#endif

/* TMPTR1H */
#ifdef __RL78__
#else
	#define	TMPTR1H	(tmptr1.BYTE.tmptr1h)
#endif

/* TMPTR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmptr1l;
	SFR_UNSIGNED_SHORT_INT	tmptr1h;
}SFR_BYTE_TMPTR1;

typedef union{
	SFR_BYTE_TMPTR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMPTR1;

SFR_GLOBAL	SFR_TMPTR1	tmptr1;

#ifdef __RL78__
#else
	#define	TMPTR1	(tmptr1.ALL)
#endif

/* TMDF01L */
#ifdef __RL78__
#else
	#define	TMDF01L	(tmdf01.BYTE.tmdf01l)
#endif

/* TMDF01H */
#ifdef __RL78__
#else
	#define	TMDF01H	(tmdf01.BYTE.tmdf01h)
#endif

/* TMDF01 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf01l;
	SFR_UNSIGNED_SHORT_INT	tmdf01h;
}SFR_BYTE_TMDF01;

typedef union{
	SFR_BYTE_TMDF01	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF01;

SFR_GLOBAL	SFR_TMDF01	tmdf01;

#ifdef __RL78__
#else
	#define	TMDF01	(tmdf01.ALL)
#endif

/* TMDF11L */
#ifdef __RL78__
#else
	#define	TMDF11L	(tmdf11.BYTE.tmdf11l)
#endif

/* TMDF11H */
#ifdef __RL78__
#else
	#define	TMDF11H	(tmdf11.BYTE.tmdf11h)
#endif

/* TMDF11 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf11l;
	SFR_UNSIGNED_SHORT_INT	tmdf11h;
}SFR_BYTE_TMDF11;

typedef union{
	SFR_BYTE_TMDF11	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF11;

SFR_GLOBAL	SFR_TMDF11	tmdf11;

#ifdef __RL78__
#else
	#define	TMDF11	(tmdf11.ALL)
#endif

/* TMDF21L */
#ifdef __RL78__
#else
	#define	TMDF21L	(tmdf21.BYTE.tmdf21l)
#endif

/* TMDF21H */
#ifdef __RL78__
#else
	#define	TMDF21H	(tmdf21.BYTE.tmdf21h)
#endif

/* TMDF21 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf21l;
	SFR_UNSIGNED_SHORT_INT	tmdf21h;
}SFR_BYTE_TMDF21;

typedef union{
	SFR_BYTE_TMDF21	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF21;

SFR_GLOBAL	SFR_TMDF21	tmdf21;

#ifdef __RL78__
#else
	#define	TMDF21	(tmdf21.ALL)
#endif

/* TMDF31L */
#ifdef __RL78__
#else
	#define	TMDF31L	(tmdf31.BYTE.tmdf31l)
#endif

/* TMDF31H */
#ifdef __RL78__
#else
	#define	TMDF31H	(tmdf31.BYTE.tmdf31h)
#endif

/* TMDF31 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf31l;
	SFR_UNSIGNED_SHORT_INT	tmdf31h;
}SFR_BYTE_TMDF31;

typedef union{
	SFR_BYTE_TMDF31	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF31;

SFR_GLOBAL	SFR_TMDF31	tmdf31;

#ifdef __RL78__
#else
	#define	TMDF31	(tmdf31.ALL)
#endif

/* TMIDL2L */
#ifdef __RL78__
#else
	#define	TMIDL2L	(tmidl2.BYTE.tmidl2l)
#endif

/* TMIDL2H */
#ifdef __RL78__
#else
	#define	TMIDL2H	(tmidl2.BYTE.tmidl2h)
#endif

/* TMIDL2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidl2l;
	SFR_UNSIGNED_SHORT_INT	tmidl2h;
}SFR_BYTE_TMIDL2;

typedef union{
	SFR_BYTE_TMIDL2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDL2;

SFR_GLOBAL	SFR_TMIDL2	tmidl2;

#ifdef __RL78__
#else
	#define	TMIDL2	(tmidl2.ALL)
#endif

/* TMIDH2L */
#ifdef __RL78__
#else
	#define	TMIDH2L	(tmidh2.BYTE.tmidh2l)
#endif

/* TMIDH2H */
#ifdef __RL78__
#else
	#define	TMIDH2H	(tmidh2.BYTE.tmidh2h)
#endif

/* TMIDH2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidh2l;
	SFR_UNSIGNED_SHORT_INT	tmidh2h;
}SFR_BYTE_TMIDH2;

typedef union{
	SFR_BYTE_TMIDH2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDH2;

SFR_GLOBAL	SFR_TMIDH2	tmidh2;

#ifdef __RL78__
#else
	#define	TMIDH2	(tmidh2.ALL)
#endif

/* TMPTR2L */
#ifdef __RL78__
#else
	#define	TMPTR2L	(tmptr2.BYTE.tmptr2l)
#endif

/* TMPTR2H */
#ifdef __RL78__
#else
	#define	TMPTR2H	(tmptr2.BYTE.tmptr2h)
#endif

/* TMPTR2 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmptr2l;
	SFR_UNSIGNED_SHORT_INT	tmptr2h;
}SFR_BYTE_TMPTR2;

typedef union{
	SFR_BYTE_TMPTR2	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMPTR2;

SFR_GLOBAL	SFR_TMPTR2	tmptr2;

#ifdef __RL78__
#else
	#define	TMPTR2	(tmptr2.ALL)
#endif

/* TMDF02L */
#ifdef __RL78__
#else
	#define	TMDF02L	(tmdf02.BYTE.tmdf02l)
#endif

/* TMDF02H */
#ifdef __RL78__
#else
	#define	TMDF02H	(tmdf02.BYTE.tmdf02h)
#endif

/* TMDF02 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf02l;
	SFR_UNSIGNED_SHORT_INT	tmdf02h;
}SFR_BYTE_TMDF02;

typedef union{
	SFR_BYTE_TMDF02	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF02;

SFR_GLOBAL	SFR_TMDF02	tmdf02;

#ifdef __RL78__
#else
	#define	TMDF02	(tmdf02.ALL)
#endif

/* TMDF12L */
#ifdef __RL78__
#else
	#define	TMDF12L	(tmdf12.BYTE.tmdf12l)
#endif

/* TMDF12H */
#ifdef __RL78__
#else
	#define	TMDF12H	(tmdf12.BYTE.tmdf12h)
#endif

/* TMDF12 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf12l;
	SFR_UNSIGNED_SHORT_INT	tmdf12h;
}SFR_BYTE_TMDF12;

typedef union{
	SFR_BYTE_TMDF12	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF12;

SFR_GLOBAL	SFR_TMDF12	tmdf12;

#ifdef __RL78__
#else
	#define	TMDF12	(tmdf12.ALL)
#endif

/* TMDF22L */
#ifdef __RL78__
#else
	#define	TMDF22L	(tmdf22.BYTE.tmdf22l)
#endif

/* TMDF22H */
#ifdef __RL78__
#else
	#define	TMDF22H	(tmdf22.BYTE.tmdf22h)
#endif

/* TMDF22 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf22l;
	SFR_UNSIGNED_SHORT_INT	tmdf22h;
}SFR_BYTE_TMDF22;

typedef union{
	SFR_BYTE_TMDF22	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF22;

SFR_GLOBAL	SFR_TMDF22	tmdf22;

#ifdef __RL78__
#else
	#define	TMDF22	(tmdf22.ALL)
#endif

/* TMDF32L */
#ifdef __RL78__
#else
	#define	TMDF32L	(tmdf32.BYTE.tmdf32l)
#endif

/* TMDF32H */
#ifdef __RL78__
#else
	#define	TMDF32H	(tmdf32.BYTE.tmdf32h)
#endif

/* TMDF32 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf32l;
	SFR_UNSIGNED_SHORT_INT	tmdf32h;
}SFR_BYTE_TMDF32;

typedef union{
	SFR_BYTE_TMDF32	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF32;

SFR_GLOBAL	SFR_TMDF32	tmdf32;

#ifdef __RL78__
#else
	#define	TMDF32	(tmdf32.ALL)
#endif

/* TMIDL3L */
#ifdef __RL78__
#else
	#define	TMIDL3L	(tmidl3.BYTE.tmidl3l)
#endif

/* TMIDL3H */
#ifdef __RL78__
#else
	#define	TMIDL3H	(tmidl3.BYTE.tmidl3h)
#endif

/* TMIDL3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidl3l;
	SFR_UNSIGNED_SHORT_INT	tmidl3h;
}SFR_BYTE_TMIDL3;

typedef union{
	SFR_BYTE_TMIDL3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDL3;

SFR_GLOBAL	SFR_TMIDL3	tmidl3;

#ifdef __RL78__
#else
	#define	TMIDL3	(tmidl3.ALL)
#endif

/* TMIDH3L */
#ifdef __RL78__
#else
	#define	TMIDH3L	(tmidh3.BYTE.tmidh3l)
#endif

/* TMIDH3H */
#ifdef __RL78__
#else
	#define	TMIDH3H	(tmidh3.BYTE.tmidh3h)
#endif

/* TMIDH3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmidh3l;
	SFR_UNSIGNED_SHORT_INT	tmidh3h;
}SFR_BYTE_TMIDH3;

typedef union{
	SFR_BYTE_TMIDH3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMIDH3;

SFR_GLOBAL	SFR_TMIDH3	tmidh3;

#ifdef __RL78__
#else
	#define	TMIDH3	(tmidh3.ALL)
#endif

/* TMPTR3L */
#ifdef __RL78__
#else
	#define	TMPTR3L	(tmptr3.BYTE.tmptr3l)
#endif

/* TMPTR3H */
#ifdef __RL78__
#else
	#define	TMPTR3H	(tmptr3.BYTE.tmptr3h)
#endif

/* TMPTR3 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmptr3l;
	SFR_UNSIGNED_SHORT_INT	tmptr3h;
}SFR_BYTE_TMPTR3;

typedef union{
	SFR_BYTE_TMPTR3	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMPTR3;

SFR_GLOBAL	SFR_TMPTR3	tmptr3;

#ifdef __RL78__
#else
	#define	TMPTR3	(tmptr3.ALL)
#endif

/* TMDF03L */
#ifdef __RL78__
#else
	#define	TMDF03L	(tmdf03.BYTE.tmdf03l)
#endif

/* TMDF03H */
#ifdef __RL78__
#else
	#define	TMDF03H	(tmdf03.BYTE.tmdf03h)
#endif

/* TMDF03 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf03l;
	SFR_UNSIGNED_SHORT_INT	tmdf03h;
}SFR_BYTE_TMDF03;

typedef union{
	SFR_BYTE_TMDF03	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF03;

SFR_GLOBAL	SFR_TMDF03	tmdf03;

#ifdef __RL78__
#else
	#define	TMDF03	(tmdf03.ALL)
#endif

/* TMDF13L */
#ifdef __RL78__
#else
	#define	TMDF13L	(tmdf13.BYTE.tmdf13l)
#endif

/* TMDF13H */
#ifdef __RL78__
#else
	#define	TMDF13H	(tmdf13.BYTE.tmdf13h)
#endif

/* TMDF13 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf13l;
	SFR_UNSIGNED_SHORT_INT	tmdf13h;
}SFR_BYTE_TMDF13;

typedef union{
	SFR_BYTE_TMDF13	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF13;

SFR_GLOBAL	SFR_TMDF13	tmdf13;

#ifdef __RL78__
#else
	#define	TMDF13	(tmdf13.ALL)
#endif

/* TMDF23L */
#ifdef __RL78__
#else
	#define	TMDF23L	(tmdf23.BYTE.tmdf23l)
#endif

/* TMDF23H */
#ifdef __RL78__
#else
	#define	TMDF23H	(tmdf23.BYTE.tmdf23h)
#endif

/* TMDF23 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf23l;
	SFR_UNSIGNED_SHORT_INT	tmdf23h;
}SFR_BYTE_TMDF23;

typedef union{
	SFR_BYTE_TMDF23	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF23;

SFR_GLOBAL	SFR_TMDF23	tmdf23;

#ifdef __RL78__
#else
	#define	TMDF23	(tmdf23.ALL)
#endif

/* TMDF33L */
#ifdef __RL78__
#else
	#define	TMDF33L	(tmdf33.BYTE.tmdf33l)
#endif

/* TMDF33H */
#ifdef __RL78__
#else
	#define	TMDF33H	(tmdf33.BYTE.tmdf33h)
#endif

/* TMDF33 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	tmdf33l;
	SFR_UNSIGNED_SHORT_INT	tmdf33h;
}SFR_BYTE_TMDF33;

typedef union{
	SFR_BYTE_TMDF33	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_TMDF33;

SFR_GLOBAL	SFR_TMDF33	tmdf33;

#ifdef __RL78__
#else
	#define	TMDF33	(tmdf33.ALL)
#endif
/* CAN0送信バッファ・レジスタここまで */

/* THLACC0L */
#ifdef __RL78__
#else
	#define	THLACC0L	(thlacc0.BYTE.thlacc0l)
#endif

/* THLACC0H */
#ifdef __RL78__
#else
	#define	THLACC0H	(thlacc0.BYTE.thlacc0h)
#endif

/* THLACC0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	thlacc0l;
	SFR_UNSIGNED_SHORT_INT	thlacc0h;
}SFR_BYTE_THLACC0;

typedef union{
	SFR_BYTE_THLACC0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_THLACC0;

SFR_GLOBAL	SFR_THLACC0	thlacc0;

#ifdef __RL78__
#else
	#define	THLACC0	(thlacc0.ALL)
#endif

/* LWBR0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lwbr0;

#ifdef __RL78__
#else
	#define	LWBR0	(lwbr0)
#endif

/* LWBR1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lwbr1;

#ifdef __RL78__
#else
	#define	LWBR1	(lwbr1)
#endif

/* LBRP00 */
#ifdef __RL78__
#else
	#define	LBRP00	(lbrp0.BYTE.lbrp00)
#endif

/* LBRP01 */
#ifdef __RL78__
#else
	#define	LBRP01	(lbrp0.BYTE.lbrp01)
#endif

/* LBRP0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lbrp00;
	SFR_UNSIGNED_SHORT_INT	lbrp01;
}SFR_BYTE_LBRP0;

typedef union{
	SFR_BYTE_LBRP0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LBRP0;

SFR_GLOBAL	SFR_LBRP0	lbrp0;

#ifdef __RL78__
#else
	#define	LBRP0	(lbrp0.ALL)
#endif

/* LBRP10 */
#ifdef __RL78__
#else
	#define	LBRP10	(lbrp1.BYTE.lbrp10)
#endif

/* LBRP11 */
#ifdef __RL78__
#else
	#define	LBRP11	(lbrp1.BYTE.lbrp11)
#endif

/* LBRP1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lbrp10;
	SFR_UNSIGNED_SHORT_INT	lbrp11;
}SFR_BYTE_LBRP1;

typedef union{
	SFR_BYTE_LBRP0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LBRP1;

SFR_GLOBAL	SFR_LBRP1	lbrp1;

#ifdef __RL78__
#else
	#define	LBRP1	(lbrp1.ALL)
#endif

/* LSTC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lstc0;

#ifdef __RL78__
#else
	#define	LSTC0	(lstc0)
#endif

/* LSTC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lstc1;

#ifdef __RL78__
#else
	#define	LSTC1	(lstc1)
#endif

/* LUSC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lusc0;

#ifdef __RL78__
#else
	#define	LUSC0	(lusc0)
#endif

/* LUSC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lusc1;

#ifdef __RL78__
#else
	#define	LUSC1	(lusc1)
#endif

/* LMD0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lmd0;

#ifdef __RL78__
#else
	#define	LMD0	(lmd0)
#endif

/* LMD1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lmd1;

#ifdef __RL78__
#else
	#define	LMD1	(lmd1)
#endif

/* LBFC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lbfc0;

#ifdef __RL78__
#else
	#define	LBFC0	(lbfc0)
#endif

/* LBFC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lbfc1;

#ifdef __RL78__
#else
	#define	LBFC1	(lbfc1)
#endif

/* LSC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lsc0;

#ifdef __RL78__
#else
	#define	LSC0	(lsc0)
#endif

/* LSC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lsc1;

#ifdef __RL78__
#else
	#define	LSC1	(lsc1)
#endif

/* LWUP0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lwup0;

#ifdef __RL78__
#else
	#define	LWUP0	(lwup0)
#endif

/* LWUP1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lwup1;

#ifdef __RL78__
#else
	#define	LWUP1	(lwup1)
#endif

/* LIE0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lie0;

#ifdef __RL78__
#else
	#define	LIE0	(lie0)
#endif

/* LIE1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lie1;

#ifdef __RL78__
#else
	#define	LIE1	(lie1)
#endif

/* LEDE0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lede0;

#ifdef __RL78__
#else
	#define	LEDE0	(lede0)
#endif

/* LEDE1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lede1;

#ifdef __RL78__
#else
	#define	LEDE1	(lede1)
#endif

/* LCUC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lcuc0;

#ifdef __RL78__
#else
	#define	LCUC0	(lcuc0)
#endif

/* LCUC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lcuc1;

#ifdef __RL78__
#else
	#define	LCUC1	(lcuc1)
#endif

/* LTRC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ltrc0;

#ifdef __RL78__
#else
	#define	LTRC0	(ltrc0)
#endif

/* LTRC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ltrc1;

#ifdef __RL78__
#else
	#define	LTRC1	(ltrc1)
#endif

/* LMST0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lmst0;

#ifdef __RL78__
#else
	#define	LMST0	(lmst0)
#endif

/* LMST1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lmst1;

#ifdef __RL78__
#else
	#define	LMST1	(lmst1)
#endif

/* LST0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lst0;

#ifdef __RL78__
#else
	#define	LST0	(lst0)
#endif

/* LST1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lst1;

#ifdef __RL78__
#else
	#define	LST1	(lst1)
#endif

/* LEST0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lest0;

#ifdef __RL78__
#else
	#define	LEST0	(lest0)
#endif

/* LEST1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lest1;

#ifdef __RL78__
#else
	#define	LEST1	(lest1)
#endif

/* LDFC0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldfc0;

#ifdef __RL78__
#else
	#define	LDFC0	(ldfc0)
#endif

/* LDFC1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldfc1;

#ifdef __RL78__
#else
	#define	LDFC1	(ldfc1)
#endif

/* LIDB0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lidb0;

#ifdef __RL78__
#else
	#define	LIDB0	(lidb0)
#endif

/* LIDB1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lidb1;

#ifdef __RL78__
#else
	#define	LIDB1	(lidb1)
#endif

/* LCBR0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lcbr0;

#ifdef __RL78__
#else
	#define	LCBR0	(lcbr0)
#endif

/* LCBR1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	lcbr1;

#ifdef __RL78__
#else
	#define	LCBR1	(lcbr1)
#endif

/* LUDB00 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ludb00;

#ifdef __RL78__
#else
	#define	LUDB00	(ludb00)
#endif

/* LUDB10 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ludb10;

#ifdef __RL78__
#else
	#define	LUDB10	(ludb10)
#endif

/* LDB01 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb01;

#ifdef __RL78__
#else
	#define	LDB01	(ldb01)
#endif

/* LDB11 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb11;

#ifdef __RL78__
#else
	#define	LDB11	(ldb11)
#endif

/* LDB02 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb02;

#ifdef __RL78__
#else
	#define	LDB02	(ldb02)
#endif

/* LDB12 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb12;

#ifdef __RL78__
#else
	#define	LDB12	(ldb12)
#endif

/* LDB03 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb03;

#ifdef __RL78__
#else
	#define	LDB03	(ldb03)
#endif

/* LDB13 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb13;

#ifdef __RL78__
#else
	#define	LDB13	(ldb13)
#endif

/* LDB04 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb04;

#ifdef __RL78__
#else
	#define	LDB04	(ldb04)
#endif

/* LDB14 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb14;

#ifdef __RL78__
#else
	#define	LDB14	(ldb14)
#endif

/* LDB05 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb05;

#ifdef __RL78__
#else
	#define	LDB05	(ldb05)
#endif

/* LDB15 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb15;

#ifdef __RL78__
#else
	#define	LDB15	(ldb15)
#endif

/* LDB06 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb06;

#ifdef __RL78__
#else
	#define	LDB06	(ldb06)
#endif

/* LDB16 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb16;

#ifdef __RL78__
#else
	#define	LDB16	(ldb16)
#endif

/* LDB07 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb07;

#ifdef __RL78__
#else
	#define	LDB07	(ldb07)
#endif

/* LDB17 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb17;

#ifdef __RL78__
#else
	#define	LDB17	(ldb17)
#endif

/* LDB08 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb08;

#ifdef __RL78__
#else
	#define	LDB08	(ldb08)
#endif

/* LDB18 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	ldb18;

#ifdef __RL78__
#else
	#define	LDB18	(ldb18)
#endif

/* LUOER0 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	luoer0;

#ifdef __RL78__
#else
	#define	LUOER0	(luoer0)
#endif

/* LUOER1 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	luoer1;

#ifdef __RL78__
#else
	#define	LUOER1	(luoer1)
#endif

/* LUOR01 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	luor01;

#ifdef __RL78__
#else
	#define	LUOR01	(luor01)
#endif

/* LUOR11 */
SFR_GLOBAL	SFR_UNSIGNED_CHAR	luor11;

#ifdef __RL78__
#else
	#define	LUOR11	(luor11)
#endif

/* LUTDR0L */
#ifdef __RL78__
#else
	#define	LUTDR0L	(lutdr0.BYTE.lutdr0l)
#endif

/* LUTDR0H */
#ifdef __RL78__
#else
	#define	LUTDR0H	(lutdr0.BYTE.lutdr0h)
#endif

/* LUTDR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lutdr0l;
	SFR_UNSIGNED_SHORT_INT	lutdr0h;
}SFR_BYTE_LUTDR0;

typedef union{
	SFR_BYTE_LUTDR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LUTDR0;

SFR_GLOBAL	SFR_LUTDR0	lutdr0;

#ifdef __RL78__
#else
	#define	LUTDR0	(lutdr0.ALL)
#endif

/* LUTDR1L */
#ifdef __RL78__
#else
	#define	LUTDR1L	(lutdr1.BYTE.lutdr1l)
#endif

/* LUTDR1H */
#ifdef __RL78__
#else
	#define	LUTDR1H	(lutdr1.BYTE.lutdr1h)
#endif

/* LUTDR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lutdr1l;
	SFR_UNSIGNED_SHORT_INT	lutdr1h;
}SFR_BYTE_LUTDR1;

typedef union{
	SFR_BYTE_LUTDR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LUTDR1;

SFR_GLOBAL	SFR_LUTDR1	lutdr1;

#ifdef __RL78__
#else
	#define	LUTDR1	(lutdr1.ALL)
#endif

/* LURDR0L */
#ifdef __RL78__
#else
	#define	LURDR0L	(lurdr0.BYTE.lurdr0l)
#endif

/* LURDR0H */
#ifdef __RL78__
#else
	#define	LURDR0H	(lurdr0.BYTE.lurdr0h)
#endif

/* LURDR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lurdr0l;
	SFR_UNSIGNED_SHORT_INT	lurdr0h;
}SFR_BYTE_LURDR0;

typedef union{
	SFR_BYTE_LURDR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LURDR0;

SFR_GLOBAL	SFR_LURDR0	lurdr0;

#ifdef __RL78__
#else
	#define	LURDR0	(lurdr0.ALL)
#endif

/* LURDR1L */
#ifdef __RL78__
#else
	#define	LURDR1L	(lurdr1.BYTE.lurdr1l)
#endif

/* LURDR1H */
#ifdef __RL78__
#else
	#define	LURDR1H	(lurdr1.BYTE.lurdr1h)
#endif

/* LURDR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	lurdr1l;
	SFR_UNSIGNED_SHORT_INT	lurdr1h;
}SFR_BYTE_LURDR1;

typedef union{
	SFR_BYTE_LURDR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LURDR1;

SFR_GLOBAL	SFR_LURDR1	lurdr1;

#ifdef __RL78__
#else
	#define	LURDR1	(lurdr1.ALL)
#endif

/* LUWTDR0L */
#ifdef __RL78__
#else
	#define	LUWTDR0L	(luwtdr0.BYTE.luwtdr0l)
#endif

/* LUWTDR0H */
#ifdef __RL78__
#else
	#define	LUWTDR0H	(luwtdr0.BYTE.luwtdr0h)
#endif

/* LUWTDR0 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	luwtdr0l;
	SFR_UNSIGNED_SHORT_INT	luwtdr0h;
}SFR_BYTE_LUWTDR0;

typedef union{
	SFR_BYTE_LUWTDR0	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LUWTDR0;

SFR_GLOBAL	SFR_LUWTDR0	luwtdr0;

#ifdef __RL78__
#else
	#define	LUWTDR0	(luwtdr0.ALL)
#endif

/* LUWTDR1L */
#ifdef __RL78__
#else
	#define	LUWTDR1L	(luwtdr1.BYTE.luwtdr1l)
#endif

/* LUWTDR1H */
#ifdef __RL78__
#else
	#define	LUWTDR1H	(luwtdr1.BYTE.luwtdr1h)
#endif

/* LUWTDR1 */
typedef struct{
	SFR_UNSIGNED_SHORT_INT	luwtdr1l;
	SFR_UNSIGNED_SHORT_INT	luwtdr1h;
}SFR_BYTE_LUWTDR1;

typedef union{
	SFR_BYTE_LUWTDR1	BYTE;
	SFR_UNSIGNED_SHORT_INT	ALL;
}SFR_LUWTDR1;

SFR_GLOBAL	SFR_LUWTDR1	luwtdr1;

#ifdef __RL78__
#else
	#define	LUWTDR1	(luwtdr1.ALL)
#endif

/*TRJ0*/
SFR_GLOBAL SFR_UNSIGNED_SHORT_INT trj0;
#ifdef __RL78__
#else
	#define	TRJ0	(trj0)
#endif

/* ELSELR00 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR00;

SFR_GLOBAL	SFR_ELSELR00	elselr00;

#ifdef __RL78__
	#define	ELSELR00_0	(ELSELR00.0)
	#define	ELSELR00_1	(ELSELR00.1)
	#define	ELSELR00_2	(ELSELR00.2)
	#define	ELSELR00_3	(ELSELR00.3)
	#define	ELSELR00_4	(ELSELR00.4)
	#define	ELSELR00_5	(ELSELR00.5)
	#define	ELSELR00_6	(ELSELR00.6)
	#define	ELSELR00_7	(ELSELR00.7)
#else
	#define	ELSELR00_0	(elselr00.BIT_NUMBER.bit0)
	#define	ELSELR00_1	(elselr00.BIT_NUMBER.bit1)
	#define	ELSELR00_2	(elselr00.BIT_NUMBER.bit2)
	#define	ELSELR00_3	(elselr00.BIT_NUMBER.bit3)
	#define	ELSELR00_4	(elselr00.BIT_NUMBER.bit4)
	#define	ELSELR00_5	(elselr00.BIT_NUMBER.bit5)
	#define	ELSELR00_6	(elselr00.BIT_NUMBER.bit6)
	#define	ELSELR00_7	(elselr00.BIT_NUMBER.bit7)
	#define	ELSELR00	(elselr00.ALL)
#endif

/* ELSELR01 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR01;

SFR_GLOBAL	SFR_ELSELR01	elselr01;

#ifdef __RL78__
	#define	ELSELR01_0	(ELSELR01.0)
	#define	ELSELR01_1	(ELSELR01.1)
	#define	ELSELR01_2	(ELSELR01.2)
	#define	ELSELR01_3	(ELSELR01.3)
	#define	ELSELR01_4	(ELSELR01.4)
	#define	ELSELR01_5	(ELSELR01.5)
	#define	ELSELR01_6	(ELSELR01.6)
	#define	ELSELR01_7	(ELSELR01.7)
#else
	#define	ELSELR01_0	(elselr01.BIT_NUMBER.bit0)
	#define	ELSELR01_1	(elselr01.BIT_NUMBER.bit1)
	#define	ELSELR01_2	(elselr01.BIT_NUMBER.bit2)
	#define	ELSELR01_3	(elselr01.BIT_NUMBER.bit3)
	#define	ELSELR01_4	(elselr01.BIT_NUMBER.bit4)
	#define	ELSELR01_5	(elselr01.BIT_NUMBER.bit5)
	#define	ELSELR01_6	(elselr01.BIT_NUMBER.bit6)
	#define	ELSELR01_7	(elselr01.BIT_NUMBER.bit7)
	#define	ELSELR01	(elselr01.ALL)
#endif

/* ELSELR02 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR02;

SFR_GLOBAL	SFR_ELSELR02	elselr02;

#ifdef __RL78__
	#define	ELSELR02_0	(ELSELR02.0)
	#define	ELSELR02_1	(ELSELR02.1)
	#define	ELSELR02_2	(ELSELR02.2)
	#define	ELSELR02_3	(ELSELR02.3)
	#define	ELSELR02_4	(ELSELR02.4)
	#define	ELSELR02_5	(ELSELR02.5)
	#define	ELSELR02_6	(ELSELR02.6)
	#define	ELSELR02_7	(ELSELR02.7)
#else
	#define	ELSELR02_0	(elselr02.BIT_NUMBER.bit0)
	#define	ELSELR02_1	(elselr02.BIT_NUMBER.bit1)
	#define	ELSELR02_2	(elselr02.BIT_NUMBER.bit2)
	#define	ELSELR02_3	(elselr02.BIT_NUMBER.bit3)
	#define	ELSELR02_4	(elselr02.BIT_NUMBER.bit4)
	#define	ELSELR02_5	(elselr02.BIT_NUMBER.bit5)
	#define	ELSELR02_6	(elselr02.BIT_NUMBER.bit6)
	#define	ELSELR02_7	(elselr02.BIT_NUMBER.bit7)
	#define	ELSELR02	(elselr02.ALL)
#endif

/* ELSELR03 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR03;

SFR_GLOBAL	SFR_ELSELR03	elselr03;

#ifdef __RL78__
	#define	ELSELR03_0	(ELSELR03.0)
	#define	ELSELR03_1	(ELSELR03.1)
	#define	ELSELR03_2	(ELSELR03.2)
	#define	ELSELR03_3	(ELSELR03.3)
	#define	ELSELR03_4	(ELSELR03.4)
	#define	ELSELR03_5	(ELSELR03.5)
	#define	ELSELR03_6	(ELSELR03.6)
	#define	ELSELR03_7	(ELSELR03.7)
#else
	#define	ELSELR03_0	(elselr03.BIT_NUMBER.bit0)
	#define	ELSELR03_1	(elselr03.BIT_NUMBER.bit1)
	#define	ELSELR03_2	(elselr03.BIT_NUMBER.bit2)
	#define	ELSELR03_3	(elselr03.BIT_NUMBER.bit3)
	#define	ELSELR03_4	(elselr03.BIT_NUMBER.bit4)
	#define	ELSELR03_5	(elselr03.BIT_NUMBER.bit5)
	#define	ELSELR03_6	(elselr03.BIT_NUMBER.bit6)
	#define	ELSELR03_7	(elselr03.BIT_NUMBER.bit7)
	#define	ELSELR03	(elselr03.ALL)
#endif

/* ELSELR04 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR04;

SFR_GLOBAL	SFR_ELSELR04	elselr04;

#ifdef __RL78__
	#define	ELSELR04_0	(ELSELR04.0)
	#define	ELSELR04_1	(ELSELR04.1)
	#define	ELSELR04_2	(ELSELR04.2)
	#define	ELSELR04_3	(ELSELR04.3)
	#define	ELSELR04_4	(ELSELR04.4)
	#define	ELSELR04_5	(ELSELR04.5)
	#define	ELSELR04_6	(ELSELR04.6)
	#define	ELSELR04_7	(ELSELR04.7)
#else
	#define	ELSELR04_0	(elselr04.BIT_NUMBER.bit0)
	#define	ELSELR04_1	(elselr04.BIT_NUMBER.bit1)
	#define	ELSELR04_2	(elselr04.BIT_NUMBER.bit2)
	#define	ELSELR04_3	(elselr04.BIT_NUMBER.bit3)
	#define	ELSELR04_4	(elselr04.BIT_NUMBER.bit4)
	#define	ELSELR04_5	(elselr04.BIT_NUMBER.bit5)
	#define	ELSELR04_6	(elselr04.BIT_NUMBER.bit6)
	#define	ELSELR04_7	(elselr04.BIT_NUMBER.bit7)
	#define	ELSELR04	(elselr04.ALL)
#endif

/* ELSELR05 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR05;

SFR_GLOBAL	SFR_ELSELR05	elselr05;

#ifdef __RL78__
	#define	ELSELR05_0	(ELSELR05.0)
	#define	ELSELR05_1	(ELSELR05.1)
	#define	ELSELR05_2	(ELSELR05.2)
	#define	ELSELR05_3	(ELSELR05.3)
	#define	ELSELR05_4	(ELSELR05.4)
	#define	ELSELR05_5	(ELSELR05.5)
	#define	ELSELR05_6	(ELSELR05.6)
	#define	ELSELR05_7	(ELSELR05.7)
#else
	#define	ELSELR05_0	(elselr05.BIT_NUMBER.bit0)
	#define	ELSELR05_1	(elselr05.BIT_NUMBER.bit1)
	#define	ELSELR05_2	(elselr05.BIT_NUMBER.bit2)
	#define	ELSELR05_3	(elselr05.BIT_NUMBER.bit3)
	#define	ELSELR05_4	(elselr05.BIT_NUMBER.bit4)
	#define	ELSELR05_5	(elselr05.BIT_NUMBER.bit5)
	#define	ELSELR05_6	(elselr05.BIT_NUMBER.bit6)
	#define	ELSELR05_7	(elselr05.BIT_NUMBER.bit7)
	#define	ELSELR05	(elselr05.ALL)
#endif

/* ELSELR06 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR06;

SFR_GLOBAL	SFR_ELSELR06	elselr06;

#ifdef __RL78__
	#define	ELSELR06_0	(ELSELR06.0)
	#define	ELSELR06_1	(ELSELR06.1)
	#define	ELSELR06_2	(ELSELR06.2)
	#define	ELSELR06_3	(ELSELR06.3)
	#define	ELSELR06_4	(ELSELR06.4)
	#define	ELSELR06_5	(ELSELR06.5)
	#define	ELSELR06_6	(ELSELR06.6)
	#define	ELSELR06_7	(ELSELR06.7)
#else
	#define	ELSELR06_0	(elselr06.BIT_NUMBER.bit0)
	#define	ELSELR06_1	(elselr06.BIT_NUMBER.bit1)
	#define	ELSELR06_2	(elselr06.BIT_NUMBER.bit2)
	#define	ELSELR06_3	(elselr06.BIT_NUMBER.bit3)
	#define	ELSELR06_4	(elselr06.BIT_NUMBER.bit4)
	#define	ELSELR06_5	(elselr06.BIT_NUMBER.bit5)
	#define	ELSELR06_6	(elselr06.BIT_NUMBER.bit6)
	#define	ELSELR06_7	(elselr06.BIT_NUMBER.bit7)
	#define	ELSELR06	(elselr06.ALL)
#endif

/* ELSELR07 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR07;

SFR_GLOBAL	SFR_ELSELR07	elselr07;

#ifdef __RL78__
	#define	ELSELR07_0	(ELSELR07.0)
	#define	ELSELR07_1	(ELSELR07.1)
	#define	ELSELR07_2	(ELSELR07.2)
	#define	ELSELR07_3	(ELSELR07.3)
	#define	ELSELR07_4	(ELSELR07.4)
	#define	ELSELR07_5	(ELSELR07.5)
	#define	ELSELR07_6	(ELSELR07.6)
	#define	ELSELR07_7	(ELSELR07.7)
#else
	#define	ELSELR07_0	(elselr07.BIT_NUMBER.bit0)
	#define	ELSELR07_1	(elselr07.BIT_NUMBER.bit1)
	#define	ELSELR07_2	(elselr07.BIT_NUMBER.bit2)
	#define	ELSELR07_3	(elselr07.BIT_NUMBER.bit3)
	#define	ELSELR07_4	(elselr07.BIT_NUMBER.bit4)
	#define	ELSELR07_5	(elselr07.BIT_NUMBER.bit5)
	#define	ELSELR07_6	(elselr07.BIT_NUMBER.bit6)
	#define	ELSELR07_7	(elselr07.BIT_NUMBER.bit7)
	#define	ELSELR07	(elselr07.ALL)
#endif

/* ELSELR08 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR08;

SFR_GLOBAL	SFR_ELSELR08	elselr08;

#ifdef __RL78__
	#define	ELSELR08_0	(ELSELR08.0)
	#define	ELSELR08_1	(ELSELR08.1)
	#define	ELSELR08_2	(ELSELR08.2)
	#define	ELSELR08_3	(ELSELR08.3)
	#define	ELSELR08_4	(ELSELR08.4)
	#define	ELSELR08_5	(ELSELR08.5)
	#define	ELSELR08_6	(ELSELR08.6)
	#define	ELSELR08_7	(ELSELR08.7)
#else
	#define	ELSELR08_0	(elselr08.BIT_NUMBER.bit0)
	#define	ELSELR08_1	(elselr08.BIT_NUMBER.bit1)
	#define	ELSELR08_2	(elselr08.BIT_NUMBER.bit2)
	#define	ELSELR08_3	(elselr08.BIT_NUMBER.bit3)
	#define	ELSELR08_4	(elselr08.BIT_NUMBER.bit4)
	#define	ELSELR08_5	(elselr08.BIT_NUMBER.bit5)
	#define	ELSELR08_6	(elselr08.BIT_NUMBER.bit6)
	#define	ELSELR08_7	(elselr08.BIT_NUMBER.bit7)
	#define	ELSELR08	(elselr08.ALL)
#endif

/* ELSELR09 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR09;

SFR_GLOBAL	SFR_ELSELR09	elselr09;

#ifdef __RL78__
	#define	ELSELR09_0	(ELSELR09.0)
	#define	ELSELR09_1	(ELSELR09.1)
	#define	ELSELR09_2	(ELSELR09.2)
	#define	ELSELR09_3	(ELSELR09.3)
	#define	ELSELR09_4	(ELSELR09.4)
	#define	ELSELR09_5	(ELSELR09.5)
	#define	ELSELR09_6	(ELSELR09.6)
	#define	ELSELR09_7	(ELSELR09.7)
#else
	#define	ELSELR09_0	(elselr09.BIT_NUMBER.bit0)
	#define	ELSELR09_1	(elselr09.BIT_NUMBER.bit1)
	#define	ELSELR09_2	(elselr09.BIT_NUMBER.bit2)
	#define	ELSELR09_3	(elselr09.BIT_NUMBER.bit3)
	#define	ELSELR09_4	(elselr09.BIT_NUMBER.bit4)
	#define	ELSELR09_5	(elselr09.BIT_NUMBER.bit5)
	#define	ELSELR09_6	(elselr09.BIT_NUMBER.bit6)
	#define	ELSELR09_7	(elselr09.BIT_NUMBER.bit7)
	#define	ELSELR09	(elselr09.ALL)
#endif

/* ADTRGS0 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADTRGS0;

SFR_GLOBAL	SFR_ADTRGS0	adtrgs0;

#ifdef __RL78__
	#define	ADTRGS0_0	(ADTRGS0.0)
	#define	ADTRGS0_1	(ADTRGS0.1)
	#define	ADTRGS0_2	(ADTRGS0.2)
	#define	ADTRGS0_3	(ADTRGS0.3)
	#define	ADTRGS0_4	(ADTRGS0.4)
	#define	ADTRGS0_5	(ADTRGS0.5)
	#define	ADTRGS0_6	(ADTRGS0.6)
	#define	ADTRGS0_7	(ADTRGS0.7)
#else
	#define	ADTRGS0_0	(adtrgs0.BIT_NUMBER.bit0)
	#define	ADTRGS0_1	(adtrgs0.BIT_NUMBER.bit1)
	#define	ADTRGS0_2	(adtrgs0.BIT_NUMBER.bit2)
	#define	ADTRGS0_3	(adtrgs0.BIT_NUMBER.bit3)
	#define	ADTRGS0_4	(adtrgs0.BIT_NUMBER.bit4)
	#define	ADTRGS0_5	(adtrgs0.BIT_NUMBER.bit5)
	#define	ADTRGS0_6	(adtrgs0.BIT_NUMBER.bit6)
	#define	ADTRGS0_7	(adtrgs0.BIT_NUMBER.bit7)
	#define	ADTRGS0	(adtrgs0.ALL)
#endif

/* ELSELR10 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR10;

SFR_GLOBAL	SFR_ELSELR10	elselr10;

#ifdef __RL78__
	#define	ELSELR10_0	(ELSELR10.0)
	#define	ELSELR10_1	(ELSELR10.1)
	#define	ELSELR10_2	(ELSELR10.2)
	#define	ELSELR10_3	(ELSELR10.3)
	#define	ELSELR10_4	(ELSELR10.4)
	#define	ELSELR10_5	(ELSELR10.5)
	#define	ELSELR10_6	(ELSELR10.6)
	#define	ELSELR10_7	(ELSELR10.7)
#else
	#define	ELSELR10_0	(elselr10.BIT_NUMBER.bit0)
	#define	ELSELR10_1	(elselr10.BIT_NUMBER.bit1)
	#define	ELSELR10_2	(elselr10.BIT_NUMBER.bit2)
	#define	ELSELR10_3	(elselr10.BIT_NUMBER.bit3)
	#define	ELSELR10_4	(elselr10.BIT_NUMBER.bit4)
	#define	ELSELR10_5	(elselr10.BIT_NUMBER.bit5)
	#define	ELSELR10_6	(elselr10.BIT_NUMBER.bit6)
	#define	ELSELR10_7	(elselr10.BIT_NUMBER.bit7)
	#define	ELSELR10	(elselr10.ALL)
#endif

/* ELSELR11 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR11;

SFR_GLOBAL	SFR_ELSELR11	elselr11;

#ifdef __RL78__
	#define	ELSELR11_0	(ELSELR11.0)
	#define	ELSELR11_1	(ELSELR11.1)
	#define	ELSELR11_2	(ELSELR11.2)
	#define	ELSELR11_3	(ELSELR11.3)
	#define	ELSELR11_4	(ELSELR11.4)
	#define	ELSELR11_5	(ELSELR11.5)
	#define	ELSELR11_6	(ELSELR11.6)
	#define	ELSELR11_7	(ELSELR11.7)
#else
	#define	ELSELR11_0	(elselr11.BIT_NUMBER.bit0)
	#define	ELSELR11_1	(elselr11.BIT_NUMBER.bit1)
	#define	ELSELR11_2	(elselr11.BIT_NUMBER.bit2)
	#define	ELSELR11_3	(elselr11.BIT_NUMBER.bit3)
	#define	ELSELR11_4	(elselr11.BIT_NUMBER.bit4)
	#define	ELSELR11_5	(elselr11.BIT_NUMBER.bit5)
	#define	ELSELR11_6	(elselr11.BIT_NUMBER.bit6)
	#define	ELSELR11_7	(elselr11.BIT_NUMBER.bit7)
	#define	ELSELR11	(elselr11.ALL)
#endif

/* ELSELR12 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR12;

SFR_GLOBAL	SFR_ELSELR12	elselr12;

#ifdef __RL78__
	#define	ELSELR12_0	(ELSELR12.0)
	#define	ELSELR12_1	(ELSELR12.1)
	#define	ELSELR12_2	(ELSELR12.2)
	#define	ELSELR12_3	(ELSELR12.3)
	#define	ELSELR12_4	(ELSELR12.4)
	#define	ELSELR12_5	(ELSELR12.5)
	#define	ELSELR12_6	(ELSELR12.6)
	#define	ELSELR12_7	(ELSELR12.7)
#else
	#define	ELSELR12_0	(elselr12.BIT_NUMBER.bit0)
	#define	ELSELR12_1	(elselr12.BIT_NUMBER.bit1)
	#define	ELSELR12_2	(elselr12.BIT_NUMBER.bit2)
	#define	ELSELR12_3	(elselr12.BIT_NUMBER.bit3)
	#define	ELSELR12_4	(elselr12.BIT_NUMBER.bit4)
	#define	ELSELR12_5	(elselr12.BIT_NUMBER.bit5)
	#define	ELSELR12_6	(elselr12.BIT_NUMBER.bit6)
	#define	ELSELR12_7	(elselr12.BIT_NUMBER.bit7)
	#define	ELSELR12	(elselr12.ALL)
#endif

/* ELSELR13 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR13;

SFR_GLOBAL	SFR_ELSELR13	elselr13;

#ifdef __RL78__
	#define	ELSELR13_0	(ELSELR13.0)
	#define	ELSELR13_1	(ELSELR13.1)
	#define	ELSELR13_2	(ELSELR13.2)
	#define	ELSELR13_3	(ELSELR13.3)
	#define	ELSELR13_4	(ELSELR13.4)
	#define	ELSELR13_5	(ELSELR13.5)
	#define	ELSELR13_6	(ELSELR13.6)
	#define	ELSELR13_7	(ELSELR13.7)
#else
	#define	ELSELR13_0	(elselr13.BIT_NUMBER.bit0)
	#define	ELSELR13_1	(elselr13.BIT_NUMBER.bit1)
	#define	ELSELR13_2	(elselr13.BIT_NUMBER.bit2)
	#define	ELSELR13_3	(elselr13.BIT_NUMBER.bit3)
	#define	ELSELR13_4	(elselr13.BIT_NUMBER.bit4)
	#define	ELSELR13_5	(elselr13.BIT_NUMBER.bit5)
	#define	ELSELR13_6	(elselr13.BIT_NUMBER.bit6)
	#define	ELSELR13_7	(elselr13.BIT_NUMBER.bit7)
	#define	ELSELR13	(elselr13.ALL)
#endif

/* ADTRGS1 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ADTRGS1;

SFR_GLOBAL	SFR_ADTRGS1	adtrgs1;

#ifdef __RL78__
	#define	ADTRGS1_0	(ADTRGS1.0)
	#define	ADTRGS1_1	(ADTRGS1.1)
	#define	ADTRGS1_2	(ADTRGS1.2)
	#define	ADTRGS1_3	(ADTRGS1.3)
	#define	ADTRGS1_4	(ADTRGS1.4)
	#define	ADTRGS1_5	(ADTRGS1.5)
	#define	ADTRGS1_6	(ADTRGS1.6)
	#define	ADTRGS1_7	(ADTRGS1.7)
#else
	#define	ADTRGS1_0	(adtrgs1.BIT_NUMBER.bit0)
	#define	ADTRGS1_1	(adtrgs1.BIT_NUMBER.bit1)
	#define	ADTRGS1_2	(adtrgs1.BIT_NUMBER.bit2)
	#define	ADTRGS1_3	(adtrgs1.BIT_NUMBER.bit3)
	#define	ADTRGS1_4	(adtrgs1.BIT_NUMBER.bit4)
	#define	ADTRGS1_5	(adtrgs1.BIT_NUMBER.bit5)
	#define	ADTRGS1_6	(adtrgs1.BIT_NUMBER.bit6)
	#define	ADTRGS1_7	(adtrgs1.BIT_NUMBER.bit7)
	#define	ADTRGS1	(adtrgs1.ALL)
#endif

/* ELSELR14 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR14;

SFR_GLOBAL	SFR_ELSELR14	elselr14;

#ifdef __RL78__
	#define	ELSELR14_0	(ELSELR14.0)
	#define	ELSELR14_1	(ELSELR14.1)
	#define	ELSELR14_2	(ELSELR14.2)
	#define	ELSELR14_3	(ELSELR14.3)
	#define	ELSELR14_4	(ELSELR14.4)
	#define	ELSELR14_5	(ELSELR14.5)
	#define	ELSELR14_6	(ELSELR14.6)
	#define	ELSELR14_7	(ELSELR14.7)
#else
	#define	ELSELR14_0	(elselr14.BIT_NUMBER.bit0)
	#define	ELSELR14_1	(elselr14.BIT_NUMBER.bit1)
	#define	ELSELR14_2	(elselr14.BIT_NUMBER.bit2)
	#define	ELSELR14_3	(elselr14.BIT_NUMBER.bit3)
	#define	ELSELR14_4	(elselr14.BIT_NUMBER.bit4)
	#define	ELSELR14_5	(elselr14.BIT_NUMBER.bit5)
	#define	ELSELR14_6	(elselr14.BIT_NUMBER.bit6)
	#define	ELSELR14_7	(elselr14.BIT_NUMBER.bit7)
	#define	ELSELR14	(elselr14.ALL)
#endif

/* ELSELR15 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR15;

SFR_GLOBAL	SFR_ELSELR15	elselr15;

#ifdef __RL78__
	#define	ELSELR15_0	(ELSELR15.0)
	#define	ELSELR15_1	(ELSELR15.1)
	#define	ELSELR15_2	(ELSELR15.2)
	#define	ELSELR15_3	(ELSELR15.3)
	#define	ELSELR15_4	(ELSELR15.4)
	#define	ELSELR15_5	(ELSELR15.5)
	#define	ELSELR15_6	(ELSELR15.6)
	#define	ELSELR15_7	(ELSELR15.7)
#else
	#define	ELSELR15_0	(elselr15.BIT_NUMBER.bit0)
	#define	ELSELR15_1	(elselr15.BIT_NUMBER.bit1)
	#define	ELSELR15_2	(elselr15.BIT_NUMBER.bit2)
	#define	ELSELR15_3	(elselr15.BIT_NUMBER.bit3)
	#define	ELSELR15_4	(elselr15.BIT_NUMBER.bit4)
	#define	ELSELR15_5	(elselr15.BIT_NUMBER.bit5)
	#define	ELSELR15_6	(elselr15.BIT_NUMBER.bit6)
	#define	ELSELR15_7	(elselr15.BIT_NUMBER.bit7)
	#define	ELSELR15	(elselr15.ALL)
#endif

/* ELSELR16 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR16;

SFR_GLOBAL	SFR_ELSELR16	elselr16;

#ifdef __RL78__
	#define	ELSELR16_0	(ELSELR16.0)
	#define	ELSELR16_1	(ELSELR16.1)
	#define	ELSELR16_2	(ELSELR16.2)
	#define	ELSELR16_3	(ELSELR16.3)
	#define	ELSELR16_4	(ELSELR16.4)
	#define	ELSELR16_5	(ELSELR16.5)
	#define	ELSELR16_6	(ELSELR16.6)
	#define	ELSELR16_7	(ELSELR16.7)
#else
	#define	ELSELR16_0	(elselr16.BIT_NUMBER.bit0)
	#define	ELSELR16_1	(elselr16.BIT_NUMBER.bit1)
	#define	ELSELR16_2	(elselr16.BIT_NUMBER.bit2)
	#define	ELSELR16_3	(elselr16.BIT_NUMBER.bit3)
	#define	ELSELR16_4	(elselr16.BIT_NUMBER.bit4)
	#define	ELSELR16_5	(elselr16.BIT_NUMBER.bit5)
	#define	ELSELR16_6	(elselr16.BIT_NUMBER.bit6)
	#define	ELSELR16_7	(elselr16.BIT_NUMBER.bit7)
	#define	ELSELR16	(elselr16.ALL)
#endif

/* ELSELR17 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR17;

SFR_GLOBAL	SFR_ELSELR17	elselr17;

#ifdef __RL78__
	#define	ELSELR17_0	(ELSELR17.0)
	#define	ELSELR17_1	(ELSELR17.1)
	#define	ELSELR17_2	(ELSELR17.2)
	#define	ELSELR17_3	(ELSELR17.3)
	#define	ELSELR17_4	(ELSELR17.4)
	#define	ELSELR17_5	(ELSELR17.5)
	#define	ELSELR17_6	(ELSELR17.6)
	#define	ELSELR17_7	(ELSELR17.7)
#else
	#define	ELSELR17_0	(elselr17.BIT_NUMBER.bit0)
	#define	ELSELR17_1	(elselr17.BIT_NUMBER.bit1)
	#define	ELSELR17_2	(elselr17.BIT_NUMBER.bit2)
	#define	ELSELR17_3	(elselr17.BIT_NUMBER.bit3)
	#define	ELSELR17_4	(elselr17.BIT_NUMBER.bit4)
	#define	ELSELR17_5	(elselr17.BIT_NUMBER.bit5)
	#define	ELSELR17_6	(elselr17.BIT_NUMBER.bit6)
	#define	ELSELR17_7	(elselr17.BIT_NUMBER.bit7)
	#define	ELSELR17	(elselr17.ALL)
#endif

/* ELSELR18 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR18;

SFR_GLOBAL	SFR_ELSELR18	elselr18;

#ifdef __RL78__
	#define	ELSELR18_0	(ELSELR18.0)
	#define	ELSELR18_1	(ELSELR18.1)
	#define	ELSELR18_2	(ELSELR18.2)
	#define	ELSELR18_3	(ELSELR18.3)
	#define	ELSELR18_4	(ELSELR18.4)
	#define	ELSELR18_5	(ELSELR18.5)
	#define	ELSELR18_6	(ELSELR18.6)
	#define	ELSELR18_7	(ELSELR18.7)
#else
	#define	ELSELR18_0	(elselr18.BIT_NUMBER.bit0)
	#define	ELSELR18_1	(elselr18.BIT_NUMBER.bit1)
	#define	ELSELR18_2	(elselr18.BIT_NUMBER.bit2)
	#define	ELSELR18_3	(elselr18.BIT_NUMBER.bit3)
	#define	ELSELR18_4	(elselr18.BIT_NUMBER.bit4)
	#define	ELSELR18_5	(elselr18.BIT_NUMBER.bit5)
	#define	ELSELR18_6	(elselr18.BIT_NUMBER.bit6)
	#define	ELSELR18_7	(elselr18.BIT_NUMBER.bit7)
	#define	ELSELR18	(elselr18.ALL)
#endif

/* ELSELR19 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR19;

SFR_GLOBAL	SFR_ELSELR19	elselr19;

#ifdef __RL78__
	#define	ELSELR19_0	(ELSELR19.0)
	#define	ELSELR19_1	(ELSELR19.1)
	#define	ELSELR19_2	(ELSELR19.2)
	#define	ELSELR19_3	(ELSELR19.3)
	#define	ELSELR19_4	(ELSELR19.4)
	#define	ELSELR19_5	(ELSELR19.5)
	#define	ELSELR19_6	(ELSELR19.6)
	#define	ELSELR19_7	(ELSELR19.7)
#else
	#define	ELSELR19_0	(elselr19.BIT_NUMBER.bit0)
	#define	ELSELR19_1	(elselr19.BIT_NUMBER.bit1)
	#define	ELSELR19_2	(elselr19.BIT_NUMBER.bit2)
	#define	ELSELR19_3	(elselr19.BIT_NUMBER.bit3)
	#define	ELSELR19_4	(elselr19.BIT_NUMBER.bit4)
	#define	ELSELR19_5	(elselr19.BIT_NUMBER.bit5)
	#define	ELSELR19_6	(elselr19.BIT_NUMBER.bit6)
	#define	ELSELR19_7	(elselr19.BIT_NUMBER.bit7)
	#define	ELSELR19	(elselr19.ALL)
#endif

/* ELSELR20 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR20;

SFR_GLOBAL	SFR_ELSELR20	elselr20;

#ifdef __RL78__
	#define	ELSELR20_0	(ELSELR20.0)
	#define	ELSELR20_1	(ELSELR20.1)
	#define	ELSELR20_2	(ELSELR20.2)
	#define	ELSELR20_3	(ELSELR20.3)
	#define	ELSELR20_4	(ELSELR20.4)
	#define	ELSELR20_5	(ELSELR20.5)
	#define	ELSELR20_6	(ELSELR20.6)
	#define	ELSELR20_7	(ELSELR20.7)
#else
	#define	ELSELR20_0	(elselr20.BIT_NUMBER.bit0)
	#define	ELSELR20_1	(elselr20.BIT_NUMBER.bit1)
	#define	ELSELR20_2	(elselr20.BIT_NUMBER.bit2)
	#define	ELSELR20_3	(elselr20.BIT_NUMBER.bit3)
	#define	ELSELR20_4	(elselr20.BIT_NUMBER.bit4)
	#define	ELSELR20_5	(elselr20.BIT_NUMBER.bit5)
	#define	ELSELR20_6	(elselr20.BIT_NUMBER.bit6)
	#define	ELSELR20_7	(elselr20.BIT_NUMBER.bit7)
	#define	ELSELR20	(elselr20.ALL)
#endif

/* ELSELR21 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR21;

SFR_GLOBAL	SFR_ELSELR21	elselr21;

#ifdef __RL78__
	#define	ELSELR21_0	(ELSELR21.0)
	#define	ELSELR21_1	(ELSELR21.1)
	#define	ELSELR21_2	(ELSELR21.2)
	#define	ELSELR21_3	(ELSELR21.3)
	#define	ELSELR21_4	(ELSELR21.4)
	#define	ELSELR21_5	(ELSELR21.5)
	#define	ELSELR21_6	(ELSELR21.6)
	#define	ELSELR21_7	(ELSELR21.7)
#else
	#define	ELSELR21_0	(elselr21.BIT_NUMBER.bit0)
	#define	ELSELR21_1	(elselr21.BIT_NUMBER.bit1)
	#define	ELSELR21_2	(elselr21.BIT_NUMBER.bit2)
	#define	ELSELR21_3	(elselr21.BIT_NUMBER.bit3)
	#define	ELSELR21_4	(elselr21.BIT_NUMBER.bit4)
	#define	ELSELR21_5	(elselr21.BIT_NUMBER.bit5)
	#define	ELSELR21_6	(elselr21.BIT_NUMBER.bit6)
	#define	ELSELR21_7	(elselr21.BIT_NUMBER.bit7)
	#define	ELSELR21	(elselr21.ALL)
#endif

/* ELSELR22 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR22;

SFR_GLOBAL	SFR_ELSELR22	elselr22;

#ifdef __RL78__
	#define	ELSELR22_0	(ELSELR22.0)
	#define	ELSELR22_1	(ELSELR22.1)
	#define	ELSELR22_2	(ELSELR22.2)
	#define	ELSELR22_3	(ELSELR22.3)
	#define	ELSELR22_4	(ELSELR22.4)
	#define	ELSELR22_5	(ELSELR22.5)
	#define	ELSELR22_6	(ELSELR22.6)
	#define	ELSELR22_7	(ELSELR22.7)
#else
	#define	ELSELR22_0	(elselr22.BIT_NUMBER.bit0)
	#define	ELSELR22_1	(elselr22.BIT_NUMBER.bit1)
	#define	ELSELR22_2	(elselr22.BIT_NUMBER.bit2)
	#define	ELSELR22_3	(elselr22.BIT_NUMBER.bit3)
	#define	ELSELR22_4	(elselr22.BIT_NUMBER.bit4)
	#define	ELSELR22_5	(elselr22.BIT_NUMBER.bit5)
	#define	ELSELR22_6	(elselr22.BIT_NUMBER.bit6)
	#define	ELSELR22_7	(elselr22.BIT_NUMBER.bit7)
	#define	ELSELR22	(elselr22.ALL)
#endif

/* ELSELR23 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR23;

SFR_GLOBAL	SFR_ELSELR23	elselr23;

#ifdef __RL78__
	#define	ELSELR23_0	(ELSELR23.0)
	#define	ELSELR23_1	(ELSELR23.1)
	#define	ELSELR23_2	(ELSELR23.2)
	#define	ELSELR23_3	(ELSELR23.3)
	#define	ELSELR23_4	(ELSELR23.4)
	#define	ELSELR23_5	(ELSELR23.5)
	#define	ELSELR23_6	(ELSELR23.6)
	#define	ELSELR23_7	(ELSELR23.7)
#else
	#define	ELSELR23_0	(elselr23.BIT_NUMBER.bit0)
	#define	ELSELR23_1	(elselr23.BIT_NUMBER.bit1)
	#define	ELSELR23_2	(elselr23.BIT_NUMBER.bit2)
	#define	ELSELR23_3	(elselr23.BIT_NUMBER.bit3)
	#define	ELSELR23_4	(elselr23.BIT_NUMBER.bit4)
	#define	ELSELR23_5	(elselr23.BIT_NUMBER.bit5)
	#define	ELSELR23_6	(elselr23.BIT_NUMBER.bit6)
	#define	ELSELR23_7	(elselr23.BIT_NUMBER.bit7)
	#define	ELSELR23	(elselr23.ALL)
#endif

/* ELSELR24 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR24;

SFR_GLOBAL	SFR_ELSELR24	elselr24;

#ifdef __RL78__
	#define	ELSELR24_0	(ELSELR24.0)
	#define	ELSELR24_1	(ELSELR24.1)
	#define	ELSELR24_2	(ELSELR24.2)
	#define	ELSELR24_3	(ELSELR24.3)
	#define	ELSELR24_4	(ELSELR24.4)
	#define	ELSELR24_5	(ELSELR24.5)
	#define	ELSELR24_6	(ELSELR24.6)
	#define	ELSELR24_7	(ELSELR24.7)
#else
	#define	ELSELR24_0	(elselr24.BIT_NUMBER.bit0)
	#define	ELSELR24_1	(elselr24.BIT_NUMBER.bit1)
	#define	ELSELR24_2	(elselr24.BIT_NUMBER.bit2)
	#define	ELSELR24_3	(elselr24.BIT_NUMBER.bit3)
	#define	ELSELR24_4	(elselr24.BIT_NUMBER.bit4)
	#define	ELSELR24_5	(elselr24.BIT_NUMBER.bit5)
	#define	ELSELR24_6	(elselr24.BIT_NUMBER.bit6)
	#define	ELSELR24_7	(elselr24.BIT_NUMBER.bit7)
	#define	ELSELR24	(elselr24.ALL)
#endif

/* ELSELR25 */
typedef union{
	SFR_BIT8	BIT_NUMBER;
	SFR_UNSIGNED_CHAR	ALL;
}SFR_ELSELR25;

SFR_GLOBAL	SFR_ELSELR25	elselr25;

#ifdef __RL78__
	#define	ELSELR25_0	(ELSELR25.0)
	#define	ELSELR25_1	(ELSELR25.1)
	#define	ELSELR25_2	(ELSELR25.2)
	#define	ELSELR25_3	(ELSELR25.3)
	#define	ELSELR25_4	(ELSELR25.4)
	#define	ELSELR25_5	(ELSELR25.5)
	#define	ELSELR25_6	(ELSELR25.6)
	#define	ELSELR25_7	(ELSELR25.7)
#else
	#define	ELSELR25_0	(elselr25.BIT_NUMBER.bit0)
	#define	ELSELR25_1	(elselr25.BIT_NUMBER.bit1)
	#define	ELSELR25_2	(elselr25.BIT_NUMBER.bit2)
	#define	ELSELR25_3	(elselr25.BIT_NUMBER.bit3)
	#define	ELSELR25_4	(elselr25.BIT_NUMBER.bit4)
	#define	ELSELR25_5	(elselr25.BIT_NUMBER.bit5)
	#define	ELSELR25_6	(elselr25.BIT_NUMBER.bit6)
	#define	ELSELR25_7	(elselr25.BIT_NUMBER.bit7)
	#define	ELSELR25	(elselr25.ALL)
#endif

/* 16進数表現,CPU制御命令,DI/EI命令の置換を追加 20150715 kurokawa */
/******************************************************************************/
/*                       2進表現を16進表現に変換                              */
/******************************************************************************/

	/* 1 bit */
	#define	b0		(0x00)	/* 0 */
	#define	b1		(0x01)	/* 1 */

	/* 2 bit */
	#define	b00		(0x00)	/* 0 */
	#define	b01		(0x01)	/* 1 */
	#define	b10		(0x02)	/* 2 */
	#define	b11		(0x03)	/* 3 */

	/*  3bit */
	#define	b000	(0x00)	/* 0 */
	#define	b001	(0x01)	/* 1 */
	#define	b010	(0x02)	/* 2 */
	#define	b011	(0x03)	/* 3 */
	#define	b100	(0x04)	/* 4 */
	#define	b101	(0x05)	/* 5 */
	#define	b110	(0x06)	/* 6 */
	#define	b111	(0x07)	/* 7 */

	/*  4bit */
	#define	b0000	(0x00)	/* 0 */
	#define	b0001	(0x01)	/* 1 */
	#define	b0010	(0x02)	/* 2 */
	#define	b0011	(0x03)	/* 3 */
	#define	b0100	(0x04)	/* 4 */
	#define	b0101	(0x05)	/* 5 */
	#define	b0110	(0x06)	/* 6 */
	#define	b0111	(0x07)	/* 7 */
	#define	b1000	(0x08)	/* 8 */
	#define	b1001	(0x09)	/* 9 */
	#define	b1010	(0x0A)	/* 10 */
	#define	b1011	(0x0B)	/* 11 */
	#define	b1100	(0x0C)	/* 12 */
	#define	b1101	(0x0D)	/* 13 */
	#define	b1110	(0x0E)	/* 14 */
	#define	b1111	(0x0F)	/* 15 */

	/*  5bit */
	#define	b00000	(0x00)	/* 0 */
	#define	b00001	(0x01)	/* 1 */
	#define	b00010	(0x02)	/* 2 */
	#define	b00011	(0x03)	/* 3 */
	#define	b00100	(0x04)	/* 4 */
	#define	b00101	(0x05)	/* 5 */
	#define	b00110	(0x06)	/* 6 */
	#define	b00111	(0x07)	/* 7 */
	#define	b01000	(0x08)	/* 8 */
	#define	b01001	(0x09)	/* 9 */
	#define	b01010	(0x0A)	/* 10 */
	#define	b01011	(0x0B)	/* 11 */
	#define	b01100	(0x0C)	/* 12 */
	#define	b01101	(0x0D)	/* 13 */
	#define	b01110	(0x0E)	/* 14 */
	#define	b01111	(0x0F)	/* 15 */
	#define	b10000	(0x10)	/* 16 */
	#define	b10001	(0x11)	/* 17 */
	#define	b10010	(0x12)	/* 18 */
	#define	b10011	(0x13)	/* 19 */
	#define	b10100	(0x14)	/* 20 */
	#define	b10101	(0x15)	/* 21 */
	#define	b10110	(0x16)	/* 22 */
	#define	b10111	(0x17)	/* 23 */
	#define	b11000	(0x18)	/* 24 */
	#define	b11001	(0x19)	/* 25 */
	#define	b11010	(0x1A)	/* 26 */
	#define	b11011	(0x1B)	/* 27 */
	#define	b11100	(0x1C)	/* 28 */
	#define	b11101	(0x1D)	/* 29 */
	#define	b11110	(0x1E)	/* 30 */
	#define	b11111	(0x1F)	/* 31 */

	/*  6bit */
	#define	b000000	(0x00)	/* 0 */
	#define	b000001	(0x01)	/* 1 */
	#define	b000010	(0x02)	/* 2 */
	#define	b000011	(0x03)	/* 3 */
	#define	b000100	(0x04)	/* 4 */
	#define	b000101	(0x05)	/* 5 */
	#define	b000110	(0x06)	/* 6 */
	#define	b000111	(0x07)	/* 7 */
	#define	b001000	(0x08)	/* 8 */
	#define	b001001	(0x09)	/* 9 */
	#define	b001010	(0x0A)	/* 10 */
	#define	b001011	(0x0B)	/* 11 */
	#define	b001100	(0x0C)	/* 12 */
	#define	b001101	(0x0D)	/* 13 */
	#define	b001110	(0x0E)	/* 14 */
	#define	b001111	(0x0F)	/* 15 */
	#define	b010000	(0x10)	/* 16 */
	#define	b010001	(0x11)	/* 17 */
	#define	b010010	(0x12)	/* 18 */
	#define	b010011	(0x13)	/* 19 */
	#define	b010100	(0x14)	/* 20 */
	#define	b010101	(0x15)	/* 21 */
	#define	b010110	(0x16)	/* 22 */
	#define	b010111	(0x17)	/* 23 */
	#define	b011000	(0x18)	/* 24 */
	#define	b011001	(0x19)	/* 25 */
	#define	b011010	(0x1A)	/* 26 */
	#define	b011011	(0x1B)	/* 27 */
	#define	b011100	(0x1C)	/* 28 */
	#define	b011101	(0x1D)	/* 29 */
	#define	b011110	(0x1E)	/* 30 */
	#define	b011111	(0x1F)	/* 31 */
	#define	b100000	(0x20)	/* 32 */
	#define	b100001	(0x21)	/* 33 */
	#define	b100010	(0x22)	/* 34 */
	#define	b100011	(0x23)	/* 35 */
	#define	b100100	(0x24)	/* 36 */
	#define	b100101	(0x25)	/* 37 */
	#define	b100110	(0x26)	/* 38 */
	#define	b100111	(0x27)	/* 39 */
	#define	b101000	(0x28)	/* 40 */
	#define	b101001	(0x29)	/* 41 */
	#define	b101010	(0x2A)	/* 42 */
	#define	b101011	(0x2B)	/* 43 */
	#define	b101100	(0x2C)	/* 44 */
	#define	b101101	(0x2D)	/* 45 */
	#define	b101110	(0x2E)	/* 46 */
	#define	b101111	(0x2F)	/* 47 */
	#define	b110000	(0x30)	/* 48 */
	#define	b110001	(0x31)	/* 49 */
	#define	b110010	(0x32)	/* 50 */
	#define	b110011	(0x33)	/* 51 */
	#define	b110100	(0x34)	/* 52 */
	#define	b110101	(0x35)	/* 53 */
	#define	b110110	(0x36)	/* 54 */
	#define	b110111	(0x37)	/* 55 */
	#define	b111000	(0x38)	/* 56 */
	#define	b111001	(0x39)	/* 57 */
	#define	b111010	(0x3A)	/* 58 */
	#define	b111011	(0x3B)	/* 59 */
	#define	b111100	(0x3C)	/* 60 */
	#define	b111101	(0x3D)	/* 61 */
	#define	b111110	(0x3E)	/* 62 */
	#define	b111111	(0x3F)	/* 63 */

	/*  7bit */
	#define	b0000000	(0x00)	/* 0 */
	#define	b0000001	(0x01)	/* 1 */
	#define	b0000010	(0x02)	/* 2 */
	#define	b0000011	(0x03)	/* 3 */
	#define	b0000100	(0x04)	/* 4 */
	#define	b0000101	(0x05)	/* 5 */
	#define	b0000110	(0x06)	/* 6 */
	#define	b0000111	(0x07)	/* 7 */
	#define	b0001000	(0x08)	/* 8 */
	#define	b0001001	(0x09)	/* 9 */
	#define	b0001010	(0x0A)	/* 10 */
	#define	b0001011	(0x0B)	/* 11 */
	#define	b0001100	(0x0C)	/* 12 */
	#define	b0001101	(0x0D)	/* 13 */
	#define	b0001110	(0x0E)	/* 14 */
	#define	b0001111	(0x0F)	/* 15 */
	#define	b0010000	(0x10)	/* 16 */
	#define	b0010001	(0x11)	/* 17 */
	#define	b0010010	(0x12)	/* 18 */
	#define	b0010011	(0x13)	/* 19 */
	#define	b0010100	(0x14)	/* 20 */
	#define	b0010101	(0x15)	/* 21 */
	#define	b0010110	(0x16)	/* 22 */
	#define	b0010111	(0x17)	/* 23 */
	#define	b0011000	(0x18)	/* 24 */
	#define	b0011001	(0x19)	/* 25 */
	#define	b0011010	(0x1A)	/* 26 */
	#define	b0011011	(0x1B)	/* 27 */
	#define	b0011100	(0x1C)	/* 28 */
	#define	b0011101	(0x1D)	/* 29 */
	#define	b0011110	(0x1E)	/* 30 */
	#define	b0011111	(0x1F)	/* 31 */
	#define	b0100000	(0x20)	/* 32 */
	#define	b0100001	(0x21)	/* 33 */
	#define	b0100010	(0x22)	/* 34 */
	#define	b0100011	(0x23)	/* 35 */
	#define	b0100100	(0x24)	/* 36 */
	#define	b0100101	(0x25)	/* 37 */
	#define	b0100110	(0x26)	/* 38 */
	#define	b0100111	(0x27)	/* 39 */
	#define	b0101000	(0x28)	/* 40 */
	#define	b0101001	(0x29)	/* 41 */
	#define	b0101010	(0x2A)	/* 42 */
	#define	b0101011	(0x2B)	/* 43 */
	#define	b0101100	(0x2C)	/* 44 */
	#define	b0101101	(0x2D)	/* 45 */
	#define	b0101110	(0x2E)	/* 46 */
	#define	b0101111	(0x2F)	/* 47 */
	#define	b0110000	(0x30)	/* 48 */
	#define	b0110001	(0x31)	/* 49 */
	#define	b0110010	(0x32)	/* 50 */
	#define	b0110011	(0x33)	/* 51 */
	#define	b0110100	(0x34)	/* 52 */
	#define	b0110101	(0x35)	/* 53 */
	#define	b0110110	(0x36)	/* 54 */
	#define	b0110111	(0x37)	/* 55 */
	#define	b0111000	(0x38)	/* 56 */
	#define	b0111001	(0x39)	/* 57 */
	#define	b0111010	(0x3A)	/* 58 */
	#define	b0111011	(0x3B)	/* 59 */
	#define	b0111100	(0x3C)	/* 60 */
	#define	b0111101	(0x3D)	/* 61 */
	#define	b0111110	(0x3E)	/* 62 */
	#define	b0111111	(0x3F)	/* 63 */
	#define	b1000000	(0x40)	/* 64 */
	#define	b1000001	(0x41)	/* 65 */
	#define	b1000010	(0x42)	/* 66 */
	#define	b1000011	(0x43)	/* 67 */
	#define	b1000100	(0x44)	/* 68 */
	#define	b1000101	(0x45)	/* 69 */
	#define	b1000110	(0x46)	/* 70 */
	#define	b1000111	(0x47)	/* 71 */
	#define	b1001000	(0x48)	/* 72 */
	#define	b1001001	(0x49)	/* 73 */
	#define	b1001010	(0x4A)	/* 74 */
	#define	b1001011	(0x4B)	/* 75 */
	#define	b1001100	(0x4C)	/* 76 */
	#define	b1001101	(0x4D)	/* 77 */
	#define	b1001110	(0x4E)	/* 78 */
	#define	b1001111	(0x4F)	/* 79 */
	#define	b1010000	(0x50)	/* 80 */
	#define	b1010001	(0x51)	/* 81 */
	#define	b1010010	(0x52)	/* 82 */
	#define	b1010011	(0x53)	/* 83 */
	#define	b1010100	(0x54)	/* 84 */
	#define	b1010101	(0x55)	/* 85 */
	#define	b1010110	(0x56)	/* 86 */
	#define	b1010111	(0x57)	/* 87 */
	#define	b1011000	(0x58)	/* 88 */
	#define	b1011001	(0x59)	/* 89 */
	#define	b1011010	(0x5A)	/* 90 */
	#define	b1011011	(0x5B)	/* 91 */
	#define	b1011100	(0x5C)	/* 92 */
	#define	b1011101	(0x5D)	/* 93 */
	#define	b1011110	(0x5E)	/* 94 */
	#define	b1011111	(0x5F)	/* 95 */
	#define	b1100000	(0x60)	/* 96 */
	#define	b1100001	(0x61)	/* 97 */
	#define	b1100010	(0x62)	/* 98 */
	#define	b1100011	(0x63)	/* 99 */
	#define	b1100100	(0x64)	/* 100 */
	#define	b1100101	(0x65)	/* 101 */
	#define	b1100110	(0x66)	/* 102 */
	#define	b1100111	(0x67)	/* 103 */
	#define	b1101000	(0x68)	/* 104 */
	#define	b1101001	(0x69)	/* 105 */
	#define	b1101010	(0x6A)	/* 106 */
	#define	b1101011	(0x6B)	/* 107 */
	#define	b1101100	(0x6C)	/* 108 */
	#define	b1101101	(0x6D)	/* 109 */
	#define	b1101110	(0x6E)	/* 110 */
	#define	b1101111	(0x6F)	/* 111 */
	#define	b1110000	(0x70)	/* 112 */
	#define	b1110001	(0x71)	/* 113 */
	#define	b1110010	(0x72)	/* 114 */
	#define	b1110011	(0x73)	/* 115 */
	#define	b1110100	(0x74)	/* 116 */
	#define	b1110101	(0x75)	/* 117 */
	#define	b1110110	(0x76)	/* 118 */
	#define	b1110111	(0x77)	/* 119 */
	#define	b1111000	(0x78)	/* 120 */
	#define	b1111001	(0x79)	/* 121 */
	#define	b1111010	(0x7A)	/* 122 */
	#define	b1111011	(0x7B)	/* 123 */
	#define	b1111100	(0x7C)	/* 124 */
	#define	b1111101	(0x7D)	/* 125 */
	#define	b1111110	(0x7E)	/* 126 */
	#define	b1111111	(0x7F)	/* 127 */

	/*  8bit */
	#define	b00000000	(0x00)	/* 0 */
	#define	b00000001	(0x01)	/* 1 */
	#define	b00000010	(0x02)	/* 2 */
	#define	b00000011	(0x03)	/* 3 */
	#define	b00000100	(0x04)	/* 4 */
	#define	b00000101	(0x05)	/* 5 */
	#define	b00000110	(0x06)	/* 6 */
	#define	b00000111	(0x07)	/* 7 */
	#define	b00001000	(0x08)	/* 8 */
	#define	b00001001	(0x09)	/* 9 */
	#define	b00001010	(0x0A)	/* 10 */
	#define	b00001011	(0x0B)	/* 11 */
	#define	b00001100	(0x0C)	/* 12 */
	#define	b00001101	(0x0D)	/* 13 */
	#define	b00001110	(0x0E)	/* 14 */
	#define	b00001111	(0x0F)	/* 15 */
	#define	b00010000	(0x10)	/* 16 */
	#define	b00010001	(0x11)	/* 17 */
	#define	b00010010	(0x12)	/* 18 */
	#define	b00010011	(0x13)	/* 19 */
	#define	b00010100	(0x14)	/* 20 */
	#define	b00010101	(0x15)	/* 21 */
	#define	b00010110	(0x16)	/* 22 */
	#define	b00010111	(0x17)	/* 23 */
	#define	b00011000	(0x18)	/* 24 */
	#define	b00011001	(0x19)	/* 25 */
	#define	b00011010	(0x1A)	/* 26 */
	#define	b00011011	(0x1B)	/* 27 */
	#define	b00011100	(0x1C)	/* 28 */
	#define	b00011101	(0x1D)	/* 29 */
	#define	b00011110	(0x1E)	/* 30 */
	#define	b00011111	(0x1F)	/* 31 */
	#define	b00100000	(0x20)	/* 32 */
	#define	b00100001	(0x21)	/* 33 */
	#define	b00100010	(0x22)	/* 34 */
	#define	b00100011	(0x23)	/* 35 */
	#define	b00100100	(0x24)	/* 36 */
	#define	b00100101	(0x25)	/* 37 */
	#define	b00100110	(0x26)	/* 38 */
	#define	b00100111	(0x27)	/* 39 */
	#define	b00101000	(0x28)	/* 40 */
	#define	b00101001	(0x29)	/* 41 */
	#define	b00101010	(0x2A)	/* 42 */
	#define	b00101011	(0x2B)	/* 43 */
	#define	b00101100	(0x2C)	/* 44 */
	#define	b00101101	(0x2D)	/* 45 */
	#define	b00101110	(0x2E)	/* 46 */
	#define	b00101111	(0x2F)	/* 47 */
	#define	b00110000	(0x30)	/* 48 */
	#define	b00110001	(0x31)	/* 49 */
	#define	b00110010	(0x32)	/* 50 */
	#define	b00110011	(0x33)	/* 51 */
	#define	b00110100	(0x34)	/* 52 */
	#define	b00110101	(0x35)	/* 53 */
	#define	b00110110	(0x36)	/* 54 */
	#define	b00110111	(0x37)	/* 55 */
	#define	b00111000	(0x38)	/* 56 */
	#define	b00111001	(0x39)	/* 57 */
	#define	b00111010	(0x3A)	/* 58 */
	#define	b00111011	(0x3B)	/* 59 */
	#define	b00111100	(0x3C)	/* 60 */
	#define	b00111101	(0x3D)	/* 61 */
	#define	b00111110	(0x3E)	/* 62 */
	#define	b00111111	(0x3F)	/* 63 */
	#define	b01000000	(0x40)	/* 64 */
	#define	b01000001	(0x41)	/* 65 */
	#define	b01000010	(0x42)	/* 66 */
	#define	b01000011	(0x43)	/* 67 */
	#define	b01000100	(0x44)	/* 68 */
	#define	b01000101	(0x45)	/* 69 */
	#define	b01000110	(0x46)	/* 70 */
	#define	b01000111	(0x47)	/* 71 */
	#define	b01001000	(0x48)	/* 72 */
	#define	b01001001	(0x49)	/* 73 */
	#define	b01001010	(0x4A)	/* 74 */
	#define	b01001011	(0x4B)	/* 75 */
	#define	b01001100	(0x4C)	/* 76 */
	#define	b01001101	(0x4D)	/* 77 */
	#define	b01001110	(0x4E)	/* 78 */
	#define	b01001111	(0x4F)	/* 79 */
	#define	b01010000	(0x50)	/* 80 */
	#define	b01010001	(0x51)	/* 81 */
	#define	b01010010	(0x52)	/* 82 */
	#define	b01010011	(0x53)	/* 83 */
	#define	b01010100	(0x54)	/* 84 */
	#define	b01010101	(0x55)	/* 85 */
	#define	b01010110	(0x56)	/* 86 */
	#define	b01010111	(0x57)	/* 87 */
	#define	b01011000	(0x58)	/* 88 */
	#define	b01011001	(0x59)	/* 89 */
	#define	b01011010	(0x5A)	/* 90 */
	#define	b01011011	(0x5B)	/* 91 */
	#define	b01011100	(0x5C)	/* 92 */
	#define	b01011101	(0x5D)	/* 93 */
	#define	b01011110	(0x5E)	/* 94 */
	#define	b01011111	(0x5F)	/* 95 */
	#define	b01100000	(0x60)	/* 96 */
	#define	b01100001	(0x61)	/* 97 */
	#define	b01100010	(0x62)	/* 98 */
	#define	b01100011	(0x63)	/* 99 */
	#define	b01100100	(0x64)	/* 100 */
	#define	b01100101	(0x65)	/* 101 */
	#define	b01100110	(0x66)	/* 102 */
	#define	b01100111	(0x67)	/* 103 */
	#define	b01101000	(0x68)	/* 104 */
	#define	b01101001	(0x69)	/* 105 */
	#define	b01101010	(0x6A)	/* 106 */
	#define	b01101011	(0x6B)	/* 107 */
	#define	b01101100	(0x6C)	/* 108 */
	#define	b01101101	(0x6D)	/* 109 */
	#define	b01101110	(0x6E)	/* 110 */
	#define	b01101111	(0x6F)	/* 111 */
	#define	b01110000	(0x70)	/* 112 */
	#define	b01110001	(0x71)	/* 113 */
	#define	b01110010	(0x72)	/* 114 */
	#define	b01110011	(0x73)	/* 115 */
	#define	b01110100	(0x74)	/* 116 */
	#define	b01110101	(0x75)	/* 117 */
	#define	b01110110	(0x76)	/* 118 */
	#define	b01110111	(0x77)	/* 119 */
	#define	b01111000	(0x78)	/* 120 */
	#define	b01111001	(0x79)	/* 121 */
	#define	b01111010	(0x7A)	/* 122 */
	#define	b01111011	(0x7B)	/* 123 */
	#define	b01111100	(0x7C)	/* 124 */
	#define	b01111101	(0x7D)	/* 125 */
	#define	b01111110	(0x7E)	/* 126 */
	#define	b01111111	(0x7F)	/* 127 */
	#define	b10000000	(0x80)	/* 128 */
	#define	b10000001	(0x81)	/* 129 */
	#define	b10000010	(0x82)	/* 130 */
	#define	b10000011	(0x83)	/* 131 */
	#define	b10000100	(0x84)	/* 132 */
	#define	b10000101	(0x85)	/* 133 */
	#define	b10000110	(0x86)	/* 134 */
	#define	b10000111	(0x87)	/* 135 */
	#define	b10001000	(0x88)	/* 136 */
	#define	b10001001	(0x89)	/* 137 */
	#define	b10001010	(0x8A)	/* 138 */
	#define	b10001011	(0x8B)	/* 139 */
	#define	b10001100	(0x8C)	/* 140 */
	#define	b10001101	(0x8D)	/* 141 */
	#define	b10001110	(0x8E)	/* 142 */
	#define	b10001111	(0x8F)	/* 143 */
	#define	b10010000	(0x90)	/* 144 */
	#define	b10010001	(0x91)	/* 145 */
	#define	b10010010	(0x92)	/* 146 */
	#define	b10010011	(0x93)	/* 147 */
	#define	b10010100	(0x94)	/* 148 */
	#define	b10010101	(0x95)	/* 149 */
	#define	b10010110	(0x96)	/* 150 */
	#define	b10010111	(0x97)	/* 151 */
	#define	b10011000	(0x98)	/* 152 */
	#define	b10011001	(0x99)	/* 153 */
	#define	b10011010	(0x9A)	/* 154 */
	#define	b10011011	(0x9B)	/* 155 */
	#define	b10011100	(0x9C)	/* 156 */
	#define	b10011101	(0x9D)	/* 157 */
	#define	b10011110	(0x9E)	/* 158 */
	#define	b10011111	(0x9F)	/* 159 */
	#define	b10100000	(0xA0)	/* 160 */
	#define	b10100001	(0xA1)	/* 161 */
	#define	b10100010	(0xA2)	/* 162 */
	#define	b10100011	(0xA3)	/* 163 */
	#define	b10100100	(0xA4)	/* 164 */
	#define	b10100101	(0xA5)	/* 165 */
	#define	b10100110	(0xA6)	/* 166 */
	#define	b10100111	(0xA7)	/* 167 */
	#define	b10101000	(0xA8)	/* 168 */
	#define	b10101001	(0xA9)	/* 169 */
	#define	b10101010	(0xAA)	/* 170 */
	#define	b10101011	(0xAB)	/* 171 */
	#define	b10101100	(0xAC)	/* 172 */
	#define	b10101101	(0xAD)	/* 173 */
	#define	b10101110	(0xAE)	/* 174 */
	#define	b10101111	(0xAF)	/* 175 */
	#define	b10110000	(0xB0)	/* 176 */
	#define	b10110001	(0xB1)	/* 177 */
	#define	b10110010	(0xB2)	/* 178 */
	#define	b10110011	(0xB3)	/* 179 */
	#define	b10110100	(0xB4)	/* 180 */
	#define	b10110101	(0xB5)	/* 181 */
	#define	b10110110	(0xB6)	/* 182 */
	#define	b10110111	(0xB7)	/* 183 */
	#define	b10111000	(0xB8)	/* 184 */
	#define	b10111001	(0xB9)	/* 185 */
	#define	b10111010	(0xBA)	/* 186 */
	#define	b10111011	(0xBB)	/* 187 */
	#define	b10111100	(0xBC)	/* 188 */
	#define	b10111101	(0xBD)	/* 189 */
	#define	b10111110	(0xBE)	/* 190 */
	#define	b10111111	(0xBF)	/* 191 */
	#define	b11000000	(0xC0)	/* 192 */
	#define	b11000001	(0xC1)	/* 193 */
	#define	b11000010	(0xC2)	/* 194 */
	#define	b11000011	(0xC3)	/* 195 */
	#define	b11000100	(0xC4)	/* 196 */
	#define	b11000101	(0xC5)	/* 197 */
	#define	b11000110	(0xC6)	/* 198 */
	#define	b11000111	(0xC7)	/* 199 */
	#define	b11001000	(0xC8)	/* 200 */
	#define	b11001001	(0xC9)	/* 201 */
	#define	b11001010	(0xCA)	/* 202 */
	#define	b11001011	(0xCB)	/* 203 */
	#define	b11001100	(0xCC)	/* 204 */
	#define	b11001101	(0xCD)	/* 205 */
	#define	b11001110	(0xCE)	/* 206 */
	#define	b11001111	(0xCF)	/* 207 */
	#define	b11010000	(0xD0)	/* 208 */
	#define	b11010001	(0xD1)	/* 209 */
	#define	b11010010	(0xD2)	/* 210 */
	#define	b11010011	(0xD3)	/* 211 */
	#define	b11010100	(0xD4)	/* 212 */
	#define	b11010101	(0xD5)	/* 213 */
	#define	b11010110	(0xD6)	/* 214 */
	#define	b11010111	(0xD7)	/* 215 */
	#define	b11011000	(0xD8)	/* 216 */
	#define	b11011001	(0xD9)	/* 217 */
	#define	b11011010	(0xDA)	/* 218 */
	#define	b11011011	(0xDB)	/* 219 */
	#define	b11011100	(0xDC)	/* 220 */
	#define	b11011101	(0xDD)	/* 221 */
	#define	b11011110	(0xDE)	/* 222 */
	#define	b11011111	(0xDF)	/* 223 */
	#define	b11100000	(0xE0)	/* 224 */
	#define	b11100001	(0xE1)	/* 225 */
	#define	b11100010	(0xE2)	/* 226 */
	#define	b11100011	(0xE3)	/* 227 */
	#define	b11100100	(0xE4)	/* 228 */
	#define	b11100101	(0xE5)	/* 229 */
	#define	b11100110	(0xE6)	/* 230 */
	#define	b11100111	(0xE7)	/* 231 */
	#define	b11101000	(0xE8)	/* 232 */
	#define	b11101001	(0xE9)	/* 233 */
	#define	b11101010	(0xEA)	/* 234 */
	#define	b11101011	(0xEB)	/* 235 */
	#define	b11101100	(0xEC)	/* 236 */
	#define	b11101101	(0xED)	/* 237 */
	#define	b11101110	(0xEE)	/* 238 */
	#define	b11101111	(0xEF)	/* 239 */
	#define	b11110000	(0xF0)	/* 240 */
	#define	b11110001	(0xF1)	/* 241 */
	#define	b11110010	(0xF2)	/* 242 */
	#define	b11110011	(0xF3)	/* 243 */
	#define	b11110100	(0xF4)	/* 244 */
	#define	b11110101	(0xF5)	/* 245 */
	#define	b11110110	(0xF6)	/* 246 */
	#define	b11110111	(0xF7)	/* 247 */
	#define	b11111000	(0xF8)	/* 248 */
	#define	b11111001	(0xF9)	/* 249 */
	#define	b11111010	(0xFA)	/* 250 */
	#define	b11111011	(0xFB)	/* 251 */
	#define	b11111100	(0xFC)	/* 252 */
	#define	b11111101	(0xFD)	/* 253 */
	#define	b11111110	(0xFE)	/* 254 */
	#define	b11111111	(0xFF)	/* 255 */

/******************************************************************************/
/*                       CPU制御命令,DI/EI命令の置換                          */
/******************************************************************************/
#ifdef __RL78__
#else
	void	HALT(void);
	void	BRK(void);
	void	STOP(void);
	void	NOP(void);
	void	EI(void);
	void	DI(void);
	#ifdef DEFINE_SFR_GLOBAL
		void	HALT(void){}
		void	BRK(void){}
		void	STOP(void){}
		void	NOP(void){}
		void	EI(void){}
		void	DI(void){}
	#endif
#endif

/* 16進数表現,CPU制御命令,DI/EI命令の置換を追加 end 20150715 kurokawa */

#endif	/* rl78_ca78k0r_h */
