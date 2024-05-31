/*********************************************************************************************************************/
/*著作所有権 ：                                                              */
/*テーマ名   ：STEP3                                                                             */
/*メーカ     ：ルネサスエレクトロニクス                                                                              */
/*デバイス   ：R5F10PPJ(RL78/F14)                                                                                    */
/*ファイル名 ：drv_mac.h                                                                                                 */
/*仕様       ：汎用マクロ定義                                                                                        */
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

#ifndef drv_mac_h
#define drv_mac_h


/* DRV8889 SPI read, write comand*/

#define READ_CMD		     ((Drv_char)0x40U)
#define WRITE_CMD		     ((Drv_char)0x00U)

/*  DRV8889 register map*/

#define DRV_FAULT_REGISTER_ADDRESS   ((Drv_char)0x00)
#define DRV_DIAG1_REGISTER_ADDRESS   ((Drv_char)0x01)
#define DRV_DIAG2_REGISTER_ADDRESS   ((Drv_char)0x02)
#define DRV_CTRL1_REGISTER_ADDRESS   ((Drv_char)0x03)
#define DRV_CTRL2_REGISTER_ADDRESS   ((Drv_char)0x04)
#define DRV_CTRL3_REGISTER_ADDRESS   ((Drv_char)0x05)
#define DRV_CTRL4_REGISTER_ADDRESS   ((Drv_char)0x06)
#define DRV_CTRL5_REGISTER_ADDRESS   ((Drv_char)0x07)
#define DRV_CTRL6_REGISTER_ADDRESS   ((Drv_char)0x08)
#define DRV_CTRL7_REGISTER_ADDRESS   ((Drv_char)0x09)
#define DRV_CTRL8_REGISTER_ADDRESS   ((Drv_char)0x0A)

/* DRV_CTRL3_REGISTER_ADDRESS を設定*/

#define DRV_SET_SPI_MODE	((Drv_char)0x50)
#define DRV_STEP_BACK	        ((Drv_char)0x20)
#define DRV_STEP_FORWARD	((Drv_char)0xA0)

#define DRV_SET_FULLSTEP	((Drv_char)0x00)
#define DRV_SET_70FULLSTEP	((Drv_char)0x01)
#define DRV_SET_HALFSTEP	((Drv_char)0x03)
#define DRV_SET_1_4_STEP	((Drv_char)0x04)
#define DRV_SET_1_8_STEP	((Drv_char)0x05)
#define DRV_SET_1_16_STEP	((Drv_char)0x06)
#define DRV_SET_1_32_STEP	((Drv_char)0x07)
#define DRV_SET_1_64_STEP	((Drv_char)0x08)
#define DRV_SET_1_128_STEP	((Drv_char)0x09)
#define DRV_SET_1_256_STEP	((Drv_char)0x0A)



/*F_Step_Calculat関数用*/
#define MICROSTEP_1_1 		((Drv_int)0x0438)		/* MICROSTEP_1_1 = (18 * (1/1) * 60) */
#define MICROSTEP_1_2		((Drv_int)0x021C)		/* MICROSTEP_1_2 = (18 * (1/2) * 60) */
#define MICROSTEP_1_4		((Drv_int)0x010E)		/* MICROSTEP_1_4 = (18 * (1/4) * 60) */
#define MICROSTEP_1_6		((Drv_int)0x00B4)		/* MICROSTEP_1_6 = (18 * (1/6) * 60) */
#define MICROSTEP_1_8		((Drv_int)0x0088)		/* MICROSTEP_1_8 = (18 * (1/8) * 60) */
#define MICROSTEP_1_16		((Drv_int)0x0044)		/* MICROSTEP_1_16 = (18 * (1/16) * 60) */
#define MICROSTEP_1_32		((Drv_int)0x0022)		/* MICROSTEP_1_32 = (18 * (1/32) * 60) */
#define MICROSTEP_1_64		((Drv_int)0x0010)		/* MICROSTEP_1_64 = (18 * (1/64) * 60) */
#define MICROSTEP_1_128		((Drv_int)0x0008)		/* MICROSTEP_1_128 = (18 * (1/128) * 60) */
#define MICROSTEP_1_256		((Drv_int)0x0004)		/* MICROSTEP_1_256 = (18 * (1/256) * 60) */


#define ONE_ROTATION    	((Drv_int)0x0168)		/*360角度*/
#define ONESTEP_ANGLE  		((Drv_int)0x12)			/*Nidec stepmotor one step angle is 18*/
#define LOOP_COUNT		((Drv_int)0x00A0)			/* 160 is  100us */



#endif /*drv_mac_h*/
