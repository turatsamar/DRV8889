/*********************************************************************************************************************/
/*���쏊�L�� �F�����v���X�H��(��) �d�q�Z�p�� �d�q�݌v��                                                              */
/*�e�[�}��   �FSTEP3                                                                            */
/*���[�J     �F���l�T�X�G���N�g���j�N�X                                                                              */
/*�f�o�C�X   �FR5F10PPJ(RL78/F14)                                                                                    */
/*�t�@�C���� �Fspi_glob.h                                                                                                */
/*�d�l       �F�O���[�o���ϐ��錾�t�@�C��                                                                            */
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
#ifndef spi_glob
#define spi_glob




GLOBAL volatile Spi_int *spi_rx_address;               /* SPI receive buffer address */
GLOBAL volatile Spi_int  spi_rx_length;                /* SPI receive data length */
GLOBAL volatile Spi_int  spi_rx_count;                 /* SPI receive data count */
GLOBAL volatile Spi_int *spi_tx_address;               /* SPI send buffer address */
GLOBAL volatile Spi_int  spi_send_length;              /* SPI send data length */
GLOBAL volatile Spi_int  spi_tx_count;                 /* SPI send data count */
 

#endif