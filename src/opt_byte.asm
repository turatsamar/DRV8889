;/********************************************************************************************************************/
;/*著作所有権      ：                                                          */
;/*テーマ名        ：CXPI RRCN向け疑似負荷開発                                                                       */
;/*メーカ          ：ルネサスエレクトロニクス                                                                        */
;/*デバイス        ：R5F10PPJ(RL78/F14)                                                                              */
;/*ファイル名      ：opt_byte.asm                                                                                    */
;/*仕様            ：オプションバイトの設定                                                                          */
;/********************************************************************************************************************/
;/*履歴                                                                                                              */
;/* 2024.**.**：新規作成                                                                                        松川 */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/*                                                                                                                  */
;/********************************************************************************************************************/
OPT CSEG    OPT_BYTE
    DB      069H    ; ウォッチドッグ・タイマのインターバル割り込みを使用しない，
                    ; ウォッチドッグ・タイマ動作許可，
                    ; ウォッチドッグ・タイマのウインドウ・オープン期間100％，
                    ; ウォッチドッグ・タイマのオーバフロー時間2^11/fwdi=118.72ms，
                    ; HALT/STOPモード時，ウォッチドッグ・タイマの動作許可
    DB      077H    ; 立上りVLVDに(min)3.13V ～ (typ)3.22 V ～ (max)3.39Vを選択,
                    ; 立下りVLVDに(min)3.07V ～ (typ)3.15 V ～ (max)3.31Vを選択,
                    ; LVDの動作モードにリセット・モードを選択,
    DB      0E0H    ; P130を通常ポートとして使用，
                    ; 高速オンチップ・オシレータ回路周波数 8 MHzを選択,
    DB      085H    ; オンチップ・デバッグ動作許可，セキュリティID認証失敗時に,
                    ; フラッシュ・メモリのデータを消去しない,

END

