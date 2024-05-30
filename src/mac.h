/*********************************************************************************************************************/
/*���쏊�L�� �F�����v���X�H��(��) �d�q�Z�p�� �d�q�݌v��                                                              */
/*�e�[�}��   �FCXPI RRCN�����^�����׊J��                                                                             */
/*���[�J     �F���l�T�X�G���N�g���j�N�X                                                                              */
/*�f�o�C�X   �FR5F10PPJ(RL78/F14)                                                                                    */
/*�t�@�C���� �Fmac.h                                                                                                 */
/*�d�l       �F�ėp�}�N����`                                                                                        */
/*********************************************************************************************************************/
/*����                                                                                                               */
/* 2024.**.**�F�V�K�쐬                                                                                         ���� */
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

/* �ėp�}�N����` */
#define LO            (0u)
#define HI            (1u)
#define CLEAR         (0u)
#define SET           (1u)
#define NG            (0u)
#define OK            (1u)


/* �ėp�萔��` */
/* �����萔 */
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

/* 16�i�萔 */
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

/* �E�H�b�`�h�b�O�^�C�}����p�}�N����` */
#define WDTE_RESET    (0x00u)    /* �E�H�b�`�h�b�O�^�C�}�ɂ��}�C�R�����Z�b�g */
#define WDTE_CLEAR    (0xACu)    /* �E�H�b�`�h�b�O�^�C�}�̃N���A */

/* RAM�`�F�b�N�A�h���X�̃}�N����` */
#define EXP_RAM_ST_ADR    (0xFF700u)    /* R5F10BLCKFB��RAM�X�^�[�g�A�h���X */


/* hdwinit() �n�[�h�E�F�A�̃��W�X�^�ݒ���Ŏg�p����}�N����` */
/* ����N���b�N�̐ݒ� */
/* �N���b�N���샂�[�h���䃌�W�X�^ */
#define SET_CMC      (0x40u)     /* ���C���V�X�e���N���b�N�̃��[�h��X1���U���[�h�ɐݒ� */

/* ���U���莞�ԑI�����W�X�^ */
#define SET_OSTS     (0x03u)     /* ���U���莞�Ԃ�2^11/8MHz=256usec��I�� */

/*  ���U���莞�ԃJ�E���^��ԃ��W�X�^ */
#define READ_OSTC    (0xF0u)     /* ���U���莞��2^11/8MHz=256usec�o�ߎ��̃��W�X�^�l */

/* fMP�N���b�N�������W�X�^ */
#define SET_MDIV     (0x00u)     /* fMP�͕������Ȃ� */

/* ����X�s�[�h���[�h���W�X�^ */
#define SET_OSMC     (0x80u)     /* ���Ӌ@�\�ւ̒ᑬ�I���`�b�v�I�V���[�^�N���b�N������~ */

/* �N���b�N�I�����W�X�^ */
#define SET_CKSEL    (0x00u)     /* �^�C�}RD��fMP�N���b�N=24MHz��I�� */

/* ���ӃC�l�[�u�����W�X�^ */
#define SET_PER0     (0x04u)     /* SAU0�֓��̓N���b�N���� */
#define SET_PER1     (0x00u)     /* ���̓N���b�N�������� */
#define SET_PER2     (0x00u)     /* LIN0�ALIN1�ACAN0�ւ̓��̓N���b�N������~ */


/* PLL�N���b�N�ݒ� */
/* STOP���[�h�J�ڑOPLL�N���b�N��~�p */
#define PLLSTS_START (0x88u)    /* PLL�N���b�N�����U�J�n����Ă����� */ 


/* ���荞�݃}�X�N��t���O����W�X�^�ݒ�l */
#define SET_MK0L      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK0H      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK1L      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK1H      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK2L      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK2H      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */
#define SET_MK3L      (0xFFu)     /* �Y�����銄�荞�݂��ׂċ֎~ */

/* ���荞�ݗD�揇�ʎw��t���O�E���W�X�^�ݒ�l */
#define SET_PR00L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR10L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR00H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR10H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR01L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR11L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR01H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR11H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR02L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR12L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR02H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR12H     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR03L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */
#define SET_PR13L     (0xFFu)     /* �D�揇�ʂ̎w�薳�� */


/* �A�i���O����/�f�W�^�����o�͂̐؂�ւ� */
#define SET_ADPC      (0x01u)     /* �S�Ă̒[�q���f�W�^�����o�͒[�q�ɐݒ� */

/* ��d�����o��H�̐ݒ� */
#define SET_LVIM      (0x00u)     /* ��d�����o���x�����W�X�^�̏��������֎~ */

/* �|�[�g���[�h�����l�}�N����` */
/* 0:�o�́A1:���� */
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


/* �v���A�b�v��R�I�v�V�����̐ݒ� */
#define SET_PU0       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU1       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU3       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU4       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU5       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU6       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU7       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU9       (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU10      (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU12      (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU14      (0x00u)     /* �����v���A�b�v��R�Ȃ� */
#define SET_PU15      (0x00u)     /* �����v���A�b�v��R�Ȃ� */

/* �|�[�g�o�̓��b�`�̏����l */
#define SET_P0        (0x00u)
#define SET_P1        (0xA0u)    /* P15��P17��1�ɐݒ� */
#define SET_P3        (0x01u)
#define SET_P4        (0x00u)
#define SET_P5        (0x00u)
#define SET_P6        (0x00u)
#define SET_P7        (0x00u)
#define SET_P8        (0x00u)
#define SET_P9        (0x00u)
#define SET_P12       (0x00u)
#define SET_P14       (0x00u)

/* �|�[�g����́E���[�h����W�X�^�����l�}�N����` */
#define SET_PIM1      (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */
#define SET_PIM3      (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */
#define SET_PIM5      (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */
#define SET_PIM6      (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */
#define SET_PIM7      (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */
#define SET_PIM12     (0x00u)     /* �ʏ���̓o�b�t�@�Ƃ��Ďg�p */

/* �|�[�g��o�́E���[�h����W�X�^�����l�}�N����` */
#define SET_POM1      (0x00u)     /* �ʏ�o�̓��[�h�Ƃ��Ďg�p */
#define SET_POM6      (0x00u)     /* �ʏ�o�̓��[�h�Ƃ��Ďg�p */
#define SET_POM7      (0x00u)     /* �ʏ�o�̓��[�h�Ƃ��Ďg�p */
#define SET_POM12     (0x00u)     /* �ʏ�o�̓��[�h�Ƃ��Ďg�p */

/* �|�[�g����[�h��R���g���[���E���W�X�^�����l�}�N����` */
#define SET_PMC7      (0xE0u)     /* �f�W�^�����o�͂Ƃ��Ďg�p */
#define SET_PMC12     (0xDEu)     /* �f�W�^�����o�͂Ƃ��Ďg�p */

/* �|�[�g����臒l���䃌�W�X�^�����l�}�N����` */
#define SET_PITHL1    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL3    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL4    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL5    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL6    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL7    (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL10   (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL12   (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */
#define SET_PITHL15   (0x00u)     /* LO���x��臒l1.75V,HI���x��臒l3.25V�ɐݒ� */

/* ����I/O���_�C���N�V�������W�X�^�����l�}�N����` */

/* �^�C�}�A���C���j�b�g0�o�͒[�q�ݒ� */
/* TO00:P17 TO01:P30 TO02:P16 TO03:P125 TO04:P13 TO05:P15 TO06:P14 TO07:P120 */
/* TO10:P41 TO11:P12 TO12:P11 TO13:P10  TO14:P31 TO15:P70 TO16:P32 TO17:P71  */
#define SET_PIOR0     (0x00u)
#define SET_PIOR1     (0x00u)
#define SET_PIOR2     (0x00u)
#define SET_PIOR3     (0x00u)

/* �V���A���ʐM���o�͒[�q�ݒ� */
/* LRxD0:P14 LTxD0:P13 */
#define SET_PIOR4     (0x00u)

/* �O�������݁A�L�[�����ݒ[�q�ݒ� */
/* �O�������݁A�L�[�����݋@�\�͎g�p���Ȃ����߃f�t�H���g */
#define SET_PIOR5     (0x00u)

/* SNOOZE�X�e�[�^�X�o�͒[�q�ݒ� */
/* SNOOZE�X�e�[�^�X�@�\�͎g�p���Ȃ����߃f�t�H���g */
#define SET_PIOR6     (0x00u)

/* �^�C�}RD���o�͒[�q�ݒ� */
/* �^�C�}RD�@�\�͎g�p���Ȃ����߃f�t�H���g */
#define SET_PIOR7     (0x00u)

/* ���A���^�C���E�N���b�N�̕␳�N���b�N�o�͒[�q�ݒ� */
/* ���A���^�C���E�N���b�N�̕␳�N���b�N�o�͎͂g�p���Ȃ����߃f�t�H���g */
#define SET_PIOR8     (0x00u)

/* �|�[�g���[�h�I�����W�X�^�����l�}�N����` */
#define SET_PMS       (0x00u)    /* �o�̓��b�`�̏o�̓��x�������[�h���� */

/* TAU0�����l�}�N����` */
#define SET_TPS0      (0x3040u)  /* ����N���b�N��CK00:fclk/2^0 CK01:fclk/2^4 CK02:fclk/2^0 CK03:fclk/2^3��I�� */
#define SET_TOE0L     (0x00u)    /* TAU0�̏o�͋֎~ */
#define SET_TS0L      (0x02u)    /* TAU01�̓���J�n */

#define SET_TMR01     (0x8000u)  /* ����N���b�NCK01 (24MHz/16) �ɐݒ� */ 
#define SET_TDR01     (0x1D4Bu)  /* 5ms = (24MHz/16) * (TDR +1) (10�i:7499)*/ 

/* TAU1�����l�}�N����` */
#define SET_TPS1      (0x3000u)  /* ����N���b�N��CK10:fclk/2^0 CK11:fclk/2^0 CK12:fclk/2^0 CK13:fclk/2^3��I�� */





#endif  /* rl_mac */



