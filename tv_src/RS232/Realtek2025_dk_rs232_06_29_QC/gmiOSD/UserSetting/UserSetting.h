//--------------------------------------------------
// Eeprom Version Code
//--------------------------------------------------
//��������汾��
#define _VERSION_CODE               0x33       /*�仯��Χ0x00~0xFA */   

//*********************************************************************************************************
//**I:SOURCE ͨ��ѡ����������*****************************************************************************
//***************************************************************************************************
//ͨ�������������_ON  _OFF ������ͨ��
//
//ע�ⲻҪ���������õ�Ĭ��SOURCE �ص�
//-------------------------------------------------------------
#define _VGA_SUPPORT_EN                                           _ON
#define _VIDEO_AV_SUPPORT_EN                                 _ON
#define _VIDEO_SV_SUPPORT_EN                                 _ON
#define _VIDEO_TV_SUPPORT_EN                                 _ON



//*********************************************************************************************************
//**ͨ���л�������ɫ*****************************************************************************
//------------------------------------------------
//_CHANGE_SOURCE_BACKGROUCD_COLORѡ�� _BACK_COLOR ͨ���л��ر���,�Һ���
//_CHANGE_SOURCE_BACKGROUCD_COLORѡ��  _BLUE_COLOR    ͨ���л����ر���,������
#define _BACK_COLOR     0
#define _BLUE_COLOR     1

#define _CHANGE_SOURCE_BACKGROUCD_COLOR       _BACK_COLOR

//*********************************************************************************************************
//**H:SOURCE Ĭ��������*****************************************************************************
//------------------------------------------------
//  _SOURCE_VGA               //  _SOURCE_VIDEO_AV  //  _SOURCE_VIDEO_SV   //  _SOURCE_VIDEO_TV
// ��������ʱ, _NORMAL_SOURCE ����ʲôͨ����ѡ��ʲô, �����ṩѡ��  
//---------------------------------------
#define _INPUTSOURCE                        _SOURCE_VIDEO_TV  


//*********************************************************************************************************
//**A: ��������*****************************************************************************
//---------------------------------
//���   ����������Ӧλ��ѡ��RedLED
//�̵�  ����������Ӧλ��ѡ��GreenLED
//�ȵ�  ����������Ӧλ��ѡ��OrangeLED
//����  ����������Ӧλ��ѡ��BlackLED
//--------------------------- 
#define    RedLED        0
#define    GreenLED      1
#define    OrangeLED     2
#define    BlackLED        3         
//-----------------------------------------------------------
//���ݿͻ�����������ѡ��ÿ��״̬��Ҫ�ĵ�
//-----------------------------------------------------------
#define KeyPowerUpLED     /* ң�ذ��������Ƶ���ɫ*/     RedLED
#define PowerUpLED           /* �ϵ�Ƶ���ɫ*/                                   RedLED
#define PowerDownLED      /* �ػ��Ƶ���ɫ*/                                    BlackLED
#define RunLED                   /* ����(���ź���TV)�Ƶ���ɫ*/        GreenLED
#define NosignalStateLED    /* ���еƵ���ɫ*/                                   RedLED


//*********************************************************************************************************
//**C: ����������*****************************************************************************
//-------------------------------------------------
//  ����ѡ�񼸼��İ���
//��Ҫ��7��������ʱ, _KEY_TYPE_OSD007 Ҫѡ��_6KEY_SUPPORT
//��Ҫ��6��������ʱ ,_KEY_TYPE_OSD007 Ҫѡ��_6KEY_SUPPORT 
//��Ҫ��5��������ʱ ,_KEY_TYPE_OSD007 Ҫѡ��_5KEY_SUPPORT
//---------------------------------------------------
//        _DISABLE        //_ENABLE  
#define  _5KEY_SUPPORT       0
#define  _6KEY_SUPPORT       1
#define  _7KEY_SUPPORT       2    /*ע�⣺��ң��������һ��*/
#define  _KEY_TYPE_OSD007                               _7KEY_SUPPORT



//*********************************************************************************************************
//**D: �ϵ翪��������*****************************************************************************
//---------------------------------
//�ϵ�ػ�POWERUPSTATE  ����Ϊ0,
//�ϵ翪��POWERUPSTATE ����Ϊ1,
//�ϵ籣��POWERUPSTATE ����Ϊ2,
//--------------------------- 
#define POWERUPSTATE                      2



//*********************************************************************************************************
//**E2: ����ѡ��������*****************************************************************************
//-----------------------------------------------------------
//��Ҫ����������Ϊ1,����Ҫ������Ϊ0.
//-----------------------------------------------------------
#define ENGLISH_EN                  1 //  1 : open_this_language  0: close_this_language
#define LNG_DEU_EN                  1 //  1 : open_this_language  0: close_this_language
#define LNG_FRA_EN                  1 //  1 : open_this_language  0: close_this_language
#define LNG_ITA_EN                  1 //  1 : open_this_language  0: close_this_language
#define LNG_SPA_EN                  1 //  1 : open_this_language  0: close_this_language
#define LNG_CHI_S_EN                1 //  1 : open_this_language  0: close_this_language
#define LNG_CHI_T_EN                1 //  1 : open_this_language  0: close_this_language
#define LNG_PORT_EN                 1 //  1 : open_this_language  0: close_this_language
#define LNG_RUSS_EN		            1 //  1 : open_this_language  0: close_this_language
#define LNG_KOREAN_EN               0 //  1 : open_this_language  0: close_this_language
#define LNG_ARABIC_EN               0 //  1 : open_this_language  0: close_this_language

//*********************************************************************************************************
//**E: Ĭ������������*****************************************************************************
//---------------------------------------------------
//  ����Ĭ������
//----------------------------------------------------
#define _DEFAULT_ENG		 0    //  
#define _DEFAULT_DEU	       1
#define _DEFAULT_RUSS		 2
#define _DEFAULT_FRA		 3
#define _DEFAULT_ITA		 4
#define _DEFAULT_SPA		 5
#define _DEFAULT_CHI_S	      6
#define _DEFAULT_CHI_T		 7
#define _DEFAULT_PORT		 8
#define _DEFAULT_KOREAN		 9
#define _DEFAULT_ARABIC		 0x0a
//---------------------------------------------------
//���� _LANGUAGEѡ��Ϊ_DEFAULT_ENG,����������,Ĭ��Ϊ_DEFAULT_ENG(����)
//----------------------------------------------------
#define _LANGUAGE                   _DEFAULT_ENG

//*********************************************************************************************************
//**G: ��λ�����Ƿ񱣴�������*****************************************************************************
//-----------------------------------------
//���LANGUAGE_SAVE_ENABLE����Ϊ1,��λ��Ϊ�����Ĭ������
//���LANGUAGE_SAVE_ENABLE����Ϊ0,��λ��Ϊ�������������õ�����
//---------------------------------
#define LANGUAGE_SAVE_ENABLE               1


//***************************************************************************************************
//LOGO ����***************************************************************
//***************************************************************************************************
//��Ҫ�ͻ���ҪLOGO, _LOGO_ENABLE Ҫѡ��_DISABLE
//��Ҫ�ͻ�ҪLOGO,      _LOGO_ENABLE Ҫѡ��_ENABLE
//        _DISABLE        //_ENABLE  
//-----------------------------------------------------------
/*LOGO ��������*/#define _LOGO_EN                                    _DISABLE//
#define _LOGO_1_BIT           0         
#define _LOGO_2_BIT           1
/*LOGO     BIT����*/#define _LOGO_BIT_SET                                 _LOGO_1_BIT
/*LOGO �������*/#define _LOGO_WIDTH                                 40
/*LOGO �߶�����*/#define _LOGO_HEIGHT                                4
/*LOGO �Ŵ�����*/#define _LOGO_DOUBLE_OSD                       _DISABLE//
//����LOGO��ɫ��Ӧ��ϵ 0x00( ��)    0x01(�� )     0x02( ��)    0x03(��)   0x04(��)
//                                                     0x05(��)          0x06(����ɫ)        0x07( ��)
/*LOGO ��0 ����ɫ����*/#define _LOGO_COLOR0                                    0x01       /*_LOGO_BIT_SETΪ_LOGO_2_BITʱ���������ã��仯��Χ0x00~0x0F */   
/*LOGO ��1 ����ɫ����*/#define _LOGO_COLOR1                                    0x02       /*_LOGO_BIT_SETΪ_LOGO_2_BITʱ���������ã��仯��Χ0x00~0x0F */   
/*LOGO ��2 ����ɫ����*/#define _LOGO_COLOR2                                    0x00     /*�仯��Χ0x00~0x0F */   
/*LOGO �ֵı�����ɫ����*/#define _LOGO_COLOR3                            0x03       /*�仯��Χ0x00~0x0F */   
/*����ı�����ɫ����*/#define LOGO_BackgroundColor_Red          0x00       /*�仯��Χ0x00~0xFF */   
/*����ı�����ɫ����*/#define LOGO_BackgroundColor_Green      0x00       /*�仯��Χ0x00~0xFF */   
/*����ı�����ɫ����*/#define LOGO_BackgroundColor_Blue         0xff       /*�仯��Χ0x00~0xFF */   
/*LOGO ��ʾʱ��*/#define LOGO_TIMER_DELAY              12      /*��λms*/

//-------------------------------------------------------------------
//������LOGO �˵���λ�õ���
//-------------------------------------------------------------------
/*ˮƽ����*/#define _LOGO_H_OFFSET          25   
/*��ֱ����*/#define _LOGO_V_OFFSET           50

//*********************************************************************************************************
//**J:�˵�λ��������*****************************************************************************
//-------------------------------------------------------------------
//���������Ͻ�ͨ��λ�õ�����, ֱ�Ӹı����������ƶ��˵�
//-------------------------------------------------------------------
/*ˮƽ����*/#define _LIFT_UP_H_OFFSET          0         /*һ�㲻Ϊ��ֵ*/
/*һ�㲻Ҫ����_OSD_HPOSITION_OFFSET,���_SOURCE_H_OFFSETΪ0��,ͨ����ʾ�˵���ƫ�Ҿ����Ӵ�ֵ,�����е�OSDλ�ö�Ҫ���µ���*/
/*ˮƽ����*/#define _OSD_HPOSITION_OFFSET           1
//-------------------------------------------------------------------
//���������˵�λ�õ�����, ֱ�Ӹı����������ƶ��˵�
//Ϊ����ˮƽ����������ƶ�, �����෴
//-------------------------------------------------------------------
/* ������ֱ����*/#define _MAINMENU_V_OFFSET          0                  /*���ֱ仯��Χ  -50 ��   50 */  
/* ����ˮƽ����*/#define _MAINMENU_H_OFFSET          0                   /*���ֱ仯��Χ  -50 ��   50 */  
/* ˫����ֱ����*/#define _MAINMENU_DOUBLE_V_OFFSET          0       /*���ֱ仯��Χ  -50 ��   50 */  
/* ˫��ˮƽ����*/#define _MAINMENU_DOUBLE_H_OFFSET         2        /*���ֱ仯��Χ  -50 ��   50 */     
//-------------------------------------------------------------------
//���������Ͻ�OSDλ�õ�����, ֱ�Ӹı����������ƶ��˵�
//-------------------------------------------------------------------
/* ˮƽ����*/#define _RIGHT_UP_OSD_H_OFFSET          40      /*���ֱ仯��Χ  0 ��   100 */
//-------------------------------------------------------------------
//���������ź�,�Զ�����λ�õ�����, ֱ�Ӹı����������ƶ��˵�
//-------------------------------------------------------------------
/*����ˮƽ����*/#define _AUTO_H_OFFSET          50         /*���ֱ仯��Χ  0 ��   100 */
/*������ֱ����*/#define _AUTO_V_OFFSET          50          /*���ֱ仯��Χ  0 ��   100 */
/*˫��ˮƽ����*/#define _AUTO_DOUBLE_H_OFFSET          50         /*���ֱ仯��Χ  0 ��   100 */
/*˫����ֱ����*/#define _AUTO_DOUBLE_V_OFFSET          50          /*���ֱ仯��Χ  0 ��   100 */
//-------------------------------------------------------------------
//���������ź�,�Զ�����λ�õ�����, ֱ�Ӹı����������ƶ��˵�
//-------------------------------------------------------------------
/*����ˮƽ����*/#define _VOLUME_H_OFFSET         50         /*���ֱ仯��Χ  0 ��   100 */
/*������ֱ����*/#define _VOLUME_V_OFFSET          100      /*���ֱ仯��Χ  0 ��   100 */
/* ˫��ˮƽ����*/#define _VOLUME_DOUBLE_H_OFFSET         50         /*���ֱ仯��Χ  0 ��   100 */
/* ˫����ֱ����*/#define _VOLUME_DOUBLE_V_OFFSET          100      /*���ֱ仯��Χ  0 ��   100 */



//*********************************************************************************************************
//**J:TV������***************************************************************************
//_TV_TYPE_SUPPORT              _TV_TYPE_NOT_SUPPORT

#define _TV_NTSC_M_SUPPORT       _TV_TYPE_NOT_SUPPORT    // 60Hz Sound 4.5M  NTSC M
#define _TV_NTSC_4_BG_SUPPORT    _TV_TYPE_NOT_SUPPORT    // 60Hz Sound 5.5M  NTSC 4/BG
#define _TV_NTSC_4_DK_SUPPORT    _TV_TYPE_NOT_SUPPORT    // 60Hz Sound 6.5M  NTSC 4/DK
#define _TV_NTSC_4_I_SUPPORT     _TV_TYPE_NOT_SUPPORT    // 60Hz Sound 6.0M  NTSC 4/I
#define _TV_PAL_M_SUPPORT        _TV_TYPE_NOT_SUPPORT    // 60Hz Sound 4.5M  PAL M

#define _TV_PAL_BG_SUPPORT       _TV_TYPE_SUPPORT        // 50Hz Sound 5.5M  PAL B/G
#define _TV_PAL_I_SUPPORT        _TV_TYPE_SUPPORT        // 50Hz Sound 6.0M  PAL I
#define _TV_PAL_DK_SUPPORT       _TV_TYPE_SUPPORT        // 50Hz Sound 6.5M  PAL D/K
#define _TV_PAL_N_SUPPORT        _TV_TYPE_NOT_SUPPORT    // 50Hz Sound 4.5M  PAL N

#define _TV_SECAM_BG_SUPPORT     _TV_TYPE_SUPPORT    // 50Hz Sound 5.5M  SECAM B/G
#define _TV_SECAM_DK_SUPPORT     _TV_TYPE_SUPPORT    // 50Hz Sound 6.5M  SECAM D/K
#define _TV_SECAM_L_SUPPORT      _TV_TYPE_NOT_SUPPORT        // 50Hz Sound 6.5M  SECAM L
#define _TV_SECAM_LL_SUPPORT     _TV_TYPE_NOT_SUPPORT        // 50Hz Sound 6.5M  Secam L'
//------------------------------------
 //������_CARRIER_SELECT  ѡ��_INTER_CARRIER  
 //˫����_CARRIER_SELECT  ѡ��_SPLIT_CARRIER
//��Ƶ_PIF_FREQֱ��ѡ��
//-----------------------------------
//33400,33900,34200,38000,38900,45750 KHz
#define _PIF_FREQ               38000  // KHz  38900
//_SPLIT_CARRIER,_INTER_CARRIER 
#define _CARRIER_SELECT          _INTER_CARRIER
//-----------------------------------------------------
//_NTSC_SEARCH_TABLE ѡ��_ENABLE Ϊ�����̨
//_NTSC_SEARCH_TABLE ѡ��_DISABLE Ϊ������̨,
//        _DISABLE        //_ENABLE  
#define _NTSC_SEARCH_TABLE       _DISABLE

/*
��ƵΪ38000MHZ ���ָ�Ƶͷ�ͺţ�TNF8317��TDQ-6FT-116k1�� TDQ-6F6-116CW1 �� AFT16000�� AFT7W004�� AFT7W001 �� AFT7W001G�� AFT7W000G�� AFT1W005G �� AFT1W000 .
��ƵΪ38900MHZ ���ָ�Ƶͷ�ͺţ�TDTG-S122D �� TDQ-6F6-W125�� TDQ-6F6-126CWA��AFT17009�� AFT13100�� AFT7W105G �� AFT7W103 �� AFT7W100G�� AFT1W108G �� AFT1W107G .
��ƵΪ45750MHZ ���ָ�Ƶͷ�ͺţ�TNF5337�� TNF5331 �� AFT1L301 .

��ƵΪ38000MHZ ���������ͺţ� SY3806 �� SY3809 �� SY3819 .
��ƵΪ38900MHZ ���������ͺţ� SY8919�� SY8920�� SY8924 .
��ƵΪ45750MHZ ���������ͺţ� SY4502 �� SY4504 .
*/
//     
//----------------------------------------------------
//   input tv number mode    
//---------------------------------------------
#define DirectnessInputNumber       1         //ֱ�ӳ���̨
#define IndirectInputNumber            0        //������-/--  ������̨
#define _INPUT_NUMBER_MODE   IndirectInputNumber 


//*********************************************************************************************************
//����IR_Test_EN Ϊ_ENABLE  ��ʾ ��ʱΪ����ң����
//����IR_Test_EN Ϊ_DISABLE  ��ʾ ����Ϊ��������
//        _DISABLE        //_ENABLE  
//������ң�����,һ��Ҫ��IR_Test_EN����Ϊ_DISABLE
//*****************************************************************************
#define IR_Test_EN          _DISABLE


//*********************************************************************************************************
//����DVD_EN  Ϊ_ENABLE  ��ʾ ��ʱΪ���������DVD���Ƶ�·
//����DVD_EN Ϊ_DISABLE  ��ʾ ����Ϊ��������
//        _DISABLE        //_ENABLE  
//*****************************************************************************
#define DVD_EN          _ENABLE

//----------------------------------------------------------
// ���빤���˵����� : �����˵�ѡ��Resetʱ,
//��ң��������2025
//-----------------------------------------------------
//#define _UARTIR      _ENABLE          //Ϊ�ͻ����趨��
//#define  _UARTTX    _DISABLE//Ϊ�����ͺͽ��ܵ�
//#define  _AT020

