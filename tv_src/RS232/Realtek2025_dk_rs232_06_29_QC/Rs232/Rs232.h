








#define _UARTIR      _ENABLE          //Ϊ�ͻ����趨��
#define  _UARTTX    _ENABLE//Ϊ�����ͺͽ��ܵ�
#define  _DISIRTRIS    _DISABLE//Ϊ�����ͺͽ��ܵ�

//-----------------ң�����ͺŶ���---------------------------------
#define  IR_AT020     0
#define  IR_AT002     1
#define  IR_TOPTECH  2 

#define IR_TYPE           IR_TOPTECH 






//---------------------------------------------------------------------------------------
extern void ProssMCUIRHandle(BYTE Keycode);
extern void ProssMCUTXHandle(BYTE Keycode);
extern void ProssMCU2DVDkeyHandle(BYTE Keycode);
extern void Trs2DVDIrSend(BYTE IRData);
extern void ProssMCUTXHandlePOWER(BYTE Keycode);// 2011_07_11
extern void Trs2DVDIrSendHead(void );
extern void SendByteData(BYTE ucValue);













