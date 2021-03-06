//----------------------------------------------------------------------------------------------------
// ID Code      : Ddc.c No.0000
// Update Note  : 
//
//----------------------------------------------------------------------------------------------------
#define __DDC__

#include "Header\Include.h"

#if(_DDC_TYPE != _DDC_NONE)
//----------------------------------------------------------------
void DDCInit()
{
	BYTE uctemp;
     	BYTE code *pEdid ;
        if((Panel.DHWidth == 1920)&&(Panel.DVHeight == 1200))
	 	uctemp=0;
	 else if((Panel.DHWidth == 1920)&&(Panel.DVHeight == 1080))
	 	uctemp=1;
	 else if((Panel.DHWidth == 1680)&&(Panel.DVHeight == 1050))
	 	uctemp=2;
	 else if((Panel.DHWidth == 1440)&&(Panel.DVHeight == 900))
	 	uctemp=3;
	 else if((Panel.DHWidth == 1366)&&(Panel.DVHeight == 768))
	 	uctemp=4;
	 else if((Panel.DHWidth == 1280)&&(Panel.DVHeight == 1024))
	 	uctemp=5;
	 else if((Panel.DHWidth == 1280)&&(Panel.DVHeight == 800))
	 	uctemp=6;
	 else if((Panel.DHWidth == 1024)&&(Panel.DVHeight == 768))
	 	uctemp=7;
	 else if((Panel.DHWidth == 800)&&(Panel.DVHeight == 600))
	 	uctemp=8;
	 else 
	 	uctemp=0xff;
	 if(uctemp==0xff)
	 	pEdid=&uctemp;
	 else
		pEdid=&tEDID_TABLE_VGA[uctemp][0];
 #if(_DDC_TYPE == _DDC_RTD_CODE)

     #if(_VGA_SUPPORT)
     LoadCodeDDCToRTD(tEDID_TABLE_VGA,_DDC_ENABLE_FA);           //Load VGA DDC
     #endif

     #if(_TMDS_SUPPORT)
     LoadCodeDDCToRTD(tEDID_TABLE_DVI,_DDC_DVI_ENABLE_FD);       //Load DVI DDC
     #endif

 #endif   // #if(_DDC_TYPE == DDC_RTD_CODE)

 #if(_DDC_TYPE == _DCC_RTD_EEPROM)

     #if(_VGA_SUPPORT)
     LoadEEDDCToRTD(_EDID0_ADDRESS,_DDC_ENABLE_FA);
     #endif

     #if(_TMDS_SUPPORT)
     LoadEEDDCToRTD(_EDID1_ADDRESS,_DDC_DVI_ENABLE_FD);
     #endif

 #endif    // #if(_DDC_TYPE == DCC_RTD_EEPROM)

 #if(_DDC_TYPE == _DDC_MTV512)
     InitMTV512CodeDDC();
  #endif   // #if(_DDC_TYPE == DDC_MTV512)

#if(_DDC_TYPE == _DDC_MTV512 || _DDC_TYPE == _DDC_RTD2120)
     LoadCodeDDCToMCU(pEdid,MCU_DDCRAM_0);
  #if (_TMDS_SUPPORT)
     LoadCodeDDCToMCU(tEDID_TABLE_DVI,MCU_DDCRAM_1);
  #endif
#endif
}
//----------------------------------------------------------------
void DDCProc()
{
     #if(_DDC_TYPE == _DCC_RTD_EEPROM)     
     RTDDDCProc();
     #endif    // #if(_DDC_TYPE == DCC_RTD_EEPROM)

     #if(_DDC_TYPE == _DDC_MTV512)
     // Not Ready
     #endif   // #if(_DDC_TYPE == DDC_MTV512)
}
//----------------------------------------------------------------



#if(_DDC_TYPE == _DDC_RTD_CODE)
void LoadCodeDDCToRTD(BYTE code *tVGADDC, BYTE ucRTDAddr)
{
     BYTE i;

     CScalerSetByte(ucRTDAddr, 0x00);    // Disable DVI DDC
     CScalerSetByte(ucRTDAddr + 1, 0x00);     // Set DDC Index

     // Write 128 Byte DDC Infomation
     CScalerSendAddr(ucRTDAddr + 2, _WRITE, _NON_AUTOINC);
     for(i=0;i<128;i++)
     {
         CScalerSendByte(tVGADDC[i]);
     }
     CScalerSendWriteStop();

     CScalerSetByte(ucRTDAddr, 0x05);    // Enable DVI DDC
}
//--------------------------------------------------------
#endif

#if(_DDC_TYPE == _DDC_MTV512)
void InitMTV512CodeDDC()
{
    MCU_IICCTR_F00  = 0xc0;                                 // Enable IIC Interface and define ddc2 active at HSDA/HSCL
    MCU_INTEN_F04   = 0x00;                                 // Detect WslvA1 IIC Stop Condition
    MCU_INTFLG_F03  = 0x00;                                 // Clear IIC Interrupt register
    MCU_CTRSLVB_F0A = 0x00;                                 // Define IIC Protocal Slave Address Bit
    MCU_DDCCTRA1_F06 = 0x10;                                // Enable DDC1 and DDCRAM 128 Access
    MCU_SLVA1ADR_F07 = 0x80 | (0xa0 >> 1);                  // DDC Slave A1 address
    MCU_DDCCTRA2_F86 = 0x10;                                // Enable DDC1 and DDCRAM 128 Access
    MCU_SLVA2ADR_F87 = 0x80 | (0xa0 >> 1);                  // DDC Slave A2 address

    MCU_PADMODE_F52 = _MCU_PADMODE_F52_DEF | _BIT7 | _BIT5;  // SET PIN "HSCL1/P3.0/RX" IS HSDA1 

    CScalerSetByte(_DDC_ENABLE_FA, 0x00);                   // Disable  DDC
    CScalerSetByte(_DDC_DVI_ENABLE_FD, 0x00);               // Disable  DDC
}
#endif

//--------------------------------------------------------
#if(_DDC_TYPE == _DDC_MTV512 || _DDC_TYPE == _DDC_RTD2120)
void LoadCodeDDCToMCU(BYTE code *tDDC, BYTE xdata * ucMCUAddr)
{
     BYTE i;
     if(tDDC[0]==0xff)
     	{
		     for(i=0; i<128; i++)
		     {
		         *ucMCUAddr = 0xff;
		         ucMCUAddr++;
		     }     
     	}
	 else
	 	{
		     for(i=0; i<128; i++)
		     {
		         *ucMCUAddr = tDDC[i];
		         ucMCUAddr++;
		     }     
	 	}
}
#endif
#endif    //#if(_DDC_TYPE != DDC_NONE)
