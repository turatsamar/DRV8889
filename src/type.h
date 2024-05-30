/*********************************************************************************************************************/
/*���쏊�L�� �F�����v���X�H��(��) �d�q�Z�p�� �d�q�݌v��                                                              */
/*�e�[�}��   �FCXPI RRCN�����^�����׊J��                                                                              */
/*���[�J     �F���l�T�X�G���N�g���j�N�X                                                                              */
/*�f�o�C�X   �FR5F10PPJ(RL78/F14)                                                                                    */
/*�t�@�C���� �Ftype.h                                                                                                */
/*�d�l       �F�ėp�^��`�t�@�C��                                                                                    */
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
#ifndef rl_type
#define rl_type

/* �ėp�^�錾 */
typedef unsigned char Uchar;
typedef unsigned int  Uint;

/* �r�b�g�t�B�[���h�^ */
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


/* �r�b�g�A�N�Z�X�p���p�̐錾 */
/*----8bit�p----*/
typedef union{
    BITF8    BIT;
    Uchar    ALL;
} RL_8BIT;

/*----16bit�p----*/
typedef union{
    BITF16   BIT;
    Uint   ALL;
} RL_16BIT;



#endif /* rl_type */

