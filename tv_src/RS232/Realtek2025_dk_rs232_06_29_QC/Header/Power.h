//----------------------------------------------------------------------------------------------------
// ID Code      : Power.h No.0000
// Update Note  : 
//
//----------------------------------------------------------------------------------------------------

//--------------------------------------------------
// Definitions of
//--------------------------------------------------


//----------------------------------------------------------------------------------------------------

#ifdef __POWER__

//--------------------------------------------------
// Global Variables
//--------------------------------------------------                               
BYTE idata ucPowerControl;


//--------------------------------------------------
// Function Prototypes
//--------------------------------------------------
bit CPowerHandler(void);
void CPowerControl(void);
void CPowerPanelOn(void);
void CPowerPanelOff(void);
void CPowerPanelPowerOn(void);
void CPowerPanelPowerOff(void);
void CPowerLightPowerOn(void);
void CPowerLightPowerOff(void);
void CPowerDisplayPortOn(void);
void CPowerDisplayPortOff(void);
void CPowerLVDSOn(void);
void CPowerLVDSOff(void);
void CPowerRSDSOn(void);
void CPowerRSDSOff(void);
void CPowerADCAPLLOn(void);
void CPowerADCAPLLOff(void);
void CPowerTMDSOn(void);
void CPowerTMDSOff(void);
void CPowerDPLLOff(void);
#if (_SCALER_TYPE == _RTD2547D)
void CPowerMPLLOff(void);
#endif
void CPowerPWMOn(void);
void CPowerPWMOff(void);
void CPowerLedGreen(void);
void CPowerLedRed(void);
void CPowerLedOrange(void);
void CPowerLedBlack(void);


#else

//--------------------------------------------------
// Extern Global Variables
//--------------------------------------------------
extern BYTE idata ucPowerControl;


//--------------------------------------------------
// Extern Function Prototypes
//--------------------------------------------------
extern bit CPowerHandler(void);
extern void CPowerControl(void);
extern void CPowerPanelOn(void);
extern void CPowerPanelOff(void);
extern void CPowerPanelPowerOn(void);
extern void CPowerPanelPowerOff(void);
extern void CPowerLightPowerOn(void);
extern void CPowerLightPowerOff(void);
extern void CPowerLVDSOn(void);
extern void CPowerLVDSOff(void);
extern void CPowerRSDSOn(void);
extern void CPowerRSDSOff(void);
extern void CPowerADCAPLLOn(void);
extern void CPowerADCAPLLOff(void);
extern void CPowerTMDSOn(void);
extern void CPowerTMDSOff(void);
extern void CPowerDPLLOff(void);
#if (_SCALER_TYPE == _RTD2547D)
extern void CPowerMPLLOff(void);
#endif
extern void CPowerPWMOn(void);
extern void CPowerPWMOff(void);


extern void CPowerLedGreen(void);
extern void CPowerLedRed(void);
extern void CPowerLedOrange(void);
extern void CPowerLedBlack(void);


#endif


//----------------------------------------------------------------------------------------------------

//--------------------------------------------------
// Macro of Power Status
//--------------------------------------------------
#define GET_POWERSTATUS()           ((bit)(stSystemData.MonitorFlag & _BIT7))
#define SET_POWERSTATUS()           (stSystemData.MonitorFlag |= _BIT7)         // Power Up
#define CLR_POWERSTATUS()           (stSystemData.MonitorFlag &= ~_BIT7)        // Power Down


//--------------------------------------------------
// Macro of Power Switch Flag
//--------------------------------------------------
#define GET_POWERSWITCH()           ((bit)(ucPowerControl & _BIT0))
#define SET_POWERSWITCH()           (ucPowerControl |= _BIT0)
#define CLR_POWERSWITCH()           (ucPowerControl &= ~_BIT0)


//--------------------------------------------------
// Macro of Panel Power Status
//--------------------------------------------------
#define GET_PANELPOWERSTATUS()      ((bit)(ucPowerControl & _BIT1))
#define SET_PANELPOWERSTATUS()      (ucPowerControl |= _BIT1)                   // Power Up
#define CLR_PANELPOWERSTATUS()      (ucPowerControl &= ~_BIT1)                  // Power Down


//--------------------------------------------------
// Macro of Backlight Power Status
//--------------------------------------------------
#define GET_LIGHTPOWERSTATUS()      ((bit)(ucPowerControl & _BIT2))
#define SET_LIGHTPOWERSTATUS()      (ucPowerControl |= _BIT2)
#define CLR_LIGHTPOWERSTATUS()      (ucPowerControl &= ~_BIT2)


//--------------------------------------------------
// Macro of Load Font at First Power Up
//--------------------------------------------------
#define GET_FIRST_LOADFONT()        ((bit)(ucPowerControl & _BIT3))
#define SET_FIRST_LOADFONT()        (ucPowerControl |= _BIT3)
#define CLR_FIRST_LOADFONT()        (ucPowerControl &= ~_BIT3)


//--------------------------------------------------
// Macro of VGA Connect
//--------------------------------------------------
#define GET_PRE_VGA_CONNECT()        ((bit)(ucPowerControl & _BIT4))
#define SET_PRE_VGA_CONNECT(x)       (ucPowerControl = (ucPowerControl & ~_BIT4) | ((BYTE)x << 4))


//--------------------------------------------------
// Macro of DVI Connect
//--------------------------------------------------
#define GET_PRE_DVI_CONNECT()        ((bit)(ucPowerControl & _BIT5))
#define SET_PRE_DVI_CONNECT(x)       (ucPowerControl = (ucPowerControl & ~_BIT5) | ((BYTE)x << 5))


//--------------------------------------------------
// Macro of HDMI Connect
//--------------------------------------------------
#define GET_PRE_HDMI_CONNECT()        ((bit)(ucPowerControl & _BIT6))
#define SET_PRE_HDMI_CONNECT(x)       (ucPowerControl = (ucPowerControl & ~_BIT6) | ((BYTE)x << 6))


//--------------------------------------------------
// Macro of Panel Power Up/Down
//--------------------------------------------------
#define PANELPOWER_UP()             (bPANELPOWER  = _PANEL_ON)
#define PANELPOWER_DOWN()           (bPANELPOWER  = _PANEL_OFF)


//--------------------------------------------------
// Macro of Light Power Up/Down
//--------------------------------------------------
#define LIGHTPOWER_UP()             (bLIGHTPOWER  = _LIGHT_ON)
#define LIGHTPOWER_DOWN()           (bLIGHTPOWER  = _LIGHT_OFF)


