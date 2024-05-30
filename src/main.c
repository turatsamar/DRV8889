/*********************************************************************************************************************/
/*���쏊�L�� �F�����v���X�H��(��) �d�q�Z�p�� �d�q�݌v��                                                              */
/*�e�[�}��   �FSTEP3                                                                           �@�@�@�@�@�@�@�@�@�@  */
/*���[�J     �F���l�T�X�G���N�g���j�N�X                                                                              */
/*�f�o�C�X   �FR5F10PPJ(RL78/F14)                                                                                    */
/*�t�@�C���� �Fmain.c                                                                                                */
/*�d�l       �F�V�X�e�����C������                                                                                    */
/*********************************************************************************************************************/
/*����                                                                                                               */
/* 2024.**.**�F�V�K�쐬                                                                                  �@�g���x�b�N */
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
/*    �֐���          : ram_error()                                                                                  */
/*    �@�\            : RAM�`�F�b�N�̌��ʃG���[�������̏���                                                          */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : �Ȃ�                                                                                         */
/*    �Ăяo���֐���  : �X�^�[�g�A�b�v���[�`��                                                                       */
/*********************************************************************************************************************/
void ram_error(void){
    
    WDTE = WDTE_RESET;    /* RAM�`�F�b�N�ɂăG���[�������̓E�H�b�`�h�b�O�^�C�}�ɂ��}�C�R�����Z�b�g�����{ */
    
}
#endif
/*********************************************************************************************************************/
/*    �֐���          : hdwinit()                                                                                    */
/*    �@�\            : �n�[�h�E�F�A�̃��W�X�^�ݒ�                                                                   */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : �Ȃ�                                                                                         */
/*    �Ăяo���֐���  : �X�^�[�g�A�b�v���[�`��                                                                       */
/*********************************************************************************************************************/
void hdwinit(void){
    
    Uchar  func_chk     = OK;          /* �֐��̐���I���`�F�b�N�p�̐錾�Ə����� */
#if 0    
    /* �N���b�N������H�̐ݒ� */
    /* CPU�N���b�N��X1���i��3���{ 24MHz�ɐݒ肷�� */
    CMC = SET_CMC;                     /* ���C���V�X�e���N���b�N��X1���U���[�h��I�� */
    OSTS = SET_OSTS;                   /* X1���U���莞��256usec�ɐݒ� */
    MSTOP = CLEAR;                     /* X1���U�J�n */
    /* X1���U����҂� */
    while(OSTC < READ_OSTC){
        NOP();
    }                                  /* 256usec�o�߂���܂�while����NOP���߂ɂăE�F�C�g���Ԃ��m�� */ 
    MCM0 = SET;                        /* PLL�N���b�N���g�� fPLL��32MHz�ɐݒ� */
    CSS = CLEAR;                       /* CPU�N���b�N���g��fCLK = fMP���C��/PLL�N���b�N���g���ɐݒ� */

    /* PLL�N���b�N���莞�Ԃ�512/fMAIN = 64usec�ɐݒ� */
    LCKSEL1 = SET;
    LCKSEL0 = CLEAR;
    PLLDIV0 = SET;                     /* PLL������4�����ɐݒ� */
    PLLMUL = CLEAR;                    /* PLL���{��12���{�ɐݒ� */ 
    
    /* 1usec�o�߂�҂� (1/8MHz)�~8���� = 1usec */
    NOP();NOP();NOP();NOP();
    NOP();NOP();NOP();NOP();
    
    PLLON = SET;                       /* PLL�N���b�N���U�J�n */
    /* PLL�N���b�N���U����҂� */
    while(LOCK == CLEAR){
        NOP();
    }                                  /* 64usec�o�߂���܂�while����NOP���߂ɂăE�F�C�g���Ԃ��m�� */      
    MDIV = SET_MDIV;                   /* fMP�͕����Ȃ��ɐݒ� */
    SELPLL = SET;                      /* fMP = fPLL�ɐݒ�(fCLK = fPLL 24MHz) */
    HIOSTOP = SET;                     /* �����I���`�b�v�I�V���[�^��~ */
    OSMC = SET_OSMC;                   /* ���Ӌ@�\�ւ̒ᑬ�I���`�b�v�I�V���[�^�N���b�N������~�ɐݒ� */
#endif
    PER0 = SET_PER0;                   /* SAU0�փN���b�N���� */
    PER1 = SET_PER1;                   /* �N���b�N�������� */
    PER2 = SET_PER2;                   /* LIN0,LIN1,CAN0�փN���b�N������~ */
    
    
    WDTE = WDTE_CLEAR;                 /* �E�H�b�`�h�b�O�^�C�}���N���A */
    

    
    /* ���荞�݃}�X�N�t���O�̏����ݒ� hdw_init�ł͑S�ċ֎~ */
    MK0L = SET_MK0L;                   /* 0xFF MK0L�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    MK0H = SET_MK0H;                   /* 0xFF MK0H�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    MK1L = SET_MK1L;                   /* 0xFF MK1H�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    MK1H = SET_MK1H;                   /* 0xFF MK1L�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    MK2L = SET_MK2L;                   /* 0xFF MK2L�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    MK2H = SET_MK2H;                   /* 0xFF MK2H�ɕR�t����ꂽ���荞�݂�S�ċ֎~�ɐݒ� */
    
    /* �A�i���O����/�f�W�^�����o�͂̐؂�ւ� */
    ADPC = SET_ADPC;                   /* �S�Ă̒[�q���f�W�^�����o�͒[�q�ɐݒ� */
    
    /* �|�[�g�o�̓��b�`�̏����� */
    func_chk &= Reg_Latch_Set();       /* �|�[�g�o�̓��b�`�̏����ݒ� */
    
    /* �|�[�g���[�h�A�����v���A�b�v��R�̏����� */
    func_chk &= Reg_Port_Set();        /* �|�[�g���[�h�A�����v���A�b�v��R�̏����ݒ� */

    /* ����I/O���_�C���N�V�������W�X�^�̏����� */
    func_chk &= Reg_Func_Set();        /* �[�q�@�\�̏����ݒ� */
    
    
    

    /* ��d�����o��H�̐ݒ� */
    LVIM = SET_LVIM;                   /* �d�����o���x�����W�X�^�͏��������֎~�i�I�v�V�����o�C�g�ݒ�̂܂܁j*/
    
    Reg_SPI_Set();
     
    DRV_wakeup();
    
      
    DRV_enable();



    /* ���荞�ݗv���t���O�̃N���A */
    IF0L = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    IF0H = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    IF1L = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    IF1H = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    IF2L = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    IF2H = CLEAR;                      /* 0x00 �ʏ퓮��J�n�O�Ɋ��荞�ݗv���t���O��S�ăN���A���� */
    
    /* ���荞�ݗD�揇�ʂ̎w�� */
    PR00L = SET_PR00L;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR10L = SET_PR10L;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR00H = SET_PR00H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR10H = SET_PR10H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR01L = SET_PR01L;                 /* 0xFC CXPI��M���������݁A�X�e�[�^�X���荞�݂����D��ɐݒ� */
    PR11L = SET_PR11L;                 /* 0xFC CXPI��M���������݁A�X�e�[�^�X���荞�݂����D��ɐݒ� */
    PR01H = SET_PR01H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR11H = SET_PR11H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR02L = SET_PR02L;                 /* 0xF7 CXPI�O�������݂����D��ɐݒ� */
    PR12L = SET_PR12L;                 /* 0xF7 CXPI�O�������݂����D��ɐݒ� */
    PR02H = SET_PR02H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
    PR12H = SET_PR12H;                 /* 0xFF �D�揇�ʂ̎w�薳�� */
       
    if(func_chk == OK){
        WDTE = WDTE_CLEAR;             /* �֐�������I�����̓E�H�b�`�h�b�O�^�C�}�̃J�E���g�l���N���A */
    }
    else{
        WDTE = WDTE_RESET;             /* �֐����ُ�I�����̓E�H�b�`�h�b�O�^�C�}�ɂ��}�C�R�����Z�b�g */
    }
    
    EI();                              /* ���荞�ݏ��������� */
    
}





/*********************************************************************************************************************/
/*    �֐���          : main()                                                                                       */
/*    �@�\            : ���C������                                                                                   */
/*                      ���C������:MAX 5msec�ȓ�                                                                     */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : �Ȃ�                                                                                         */
/*    �Ăяo���֐���  : �X�^�[�g�A�b�v���[�`��                                                                       */
/*********************************************************************************************************************/
 Uint loop = 1U;
 Uint step_num = 0x05;
 Uint freq = 0x0640;

 
void main(void){
	
	
	
		
	 while(freq)
	   {	
		   if(freq == 1)
		   {
			   DRV_one_step(DRV_STEP_FORWARD, DRV_SET_FULLSTEP); /* motor run 1khz or 1 second 1000 step*/
			   freq = 0x0640;
		   }
				
		freq--;
           }
	
		

}



/*********************************************************************************************************************/
/*    �֐���          : SPI_interrupt()                                                                               */
/*    �@�\            : SPI �o�[�t�@�󂫂̊����ݔ������̃C�x���g                                          �@�@�@�@     */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          :                                                                         �@�@�@�@�@�@�@�@�@�@�@*/
/*                                                                                          �@�@�@�@�@�@�@�@�@�@�@�@�@ */
/*    �Ăяo���֐���  :                                                                 �@�@�@�@�@�@�@�@�@�@�@�@�@�@�@ */
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
/*    �֐���          : Reg_Port_Set()                                                                               */
/*    �@�\            : �|�[�g���[�h���W�X�^�A�����v���A�b�v��R�̐ݒ�                                               */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : unsigned char result                                                                         */
/*                      �֐��̐���I����1��Ԃ�                                                                      */
/*    �Ăяo���֐���  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Port_Set(void){
    
    Uchar result = NG;     /* �߂�l�̏������A����I����1�ɂ��� */
    
    /* �|�[�g���[�h�̐ݒ� */
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
    
   
    
    result = OK;         /* �֐��̐���I���Ŗ߂�l��1�ɐݒ� */
    return result;
    
}

/*********************************************************************************************************************/
/*    �֐���          : Reg_Latch_Set()                                                                              */
/*    �@�\            : �|�[�g�̏o�̓��b�`�̏���������                                                               */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : unsigned char result                                                                         */
/*                      �֐��̐���I����1��Ԃ�                                                                      */
/*    �Ăяo���֐���  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Latch_Set(void){
    
    Uchar result = NG;     /* �߂�l�̏������A����I����1�ɂ��� */
    
    /* �|�[�g�o�̓��b�`�̐ݒ� */
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
    
    result = OK;          /* �֐��̐���I���Ŗ߂�l��1�ɐݒ� */
    return result;
    
}

/*********************************************************************************************************************/
/*    �֐���          : Reg_Func_Set()                                                                               */
/*    �@�\            : ����I/O���_�C���N�V�������W�X�^�̐ݒ�                                                        */
/*    ����            : �Ȃ�                                                                                         */
/*    �߂�l          : unsigned char result                                                                         */
/*                      �֐��̐���I����1��Ԃ�                                                                      */
/*    �Ăяo���֐���  : hdwinit() Reg_Stop_Refresh()                                                                 */
/*********************************************************************************************************************/
Uchar Reg_Func_Set(void){

    Uchar result = NG;     /* �߂�l�̏������A����I����1�ɂ��� */
    
    PIOR0 = SET_PIOR0;
    PIOR1 = SET_PIOR1;
    PIOR2 = SET_PIOR2;
    PIOR3 = SET_PIOR3;
    PIOR4 = SET_PIOR4;
    PIOR5 = SET_PIOR5;
    PIOR6 = SET_PIOR6;
    PIOR7 = SET_PIOR7;
    
    result = OK;           /* �֐��̐���I���Ŗ߂�l��1�ɐݒ� */
    return result;
    
}






