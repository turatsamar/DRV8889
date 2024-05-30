/*********************************************************************************************************************/
/*���쏊�L�� �F�����v���X�H��(��) �d�q�Z�p�� �d�q�݌v��                                                              */
/*�e�[�}��   �FSTEP3                                                                             */
/*���[�J     �F���l�T�X�G���N�g���j�N�X                                                                              */
/*�f�o�C�X   �FR5F10PPJ(RL78/F14)                                                                                    */
/*�t�@�C���� �Fdrv_mac.h                                                                                                 */
/*�d�l       �F�ėp�}�N����`                                                                                        */
/*********************************************************************************************************************/
/*����                                                                                                               */
/* 2024.**.**�F�V�K�쐬                                                                                   �g���x�b�N */
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

/* DRV_CTRL3_REGISTER_ADDRESS ��ݒ�*/

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







#endif /*drv_mac_h*/