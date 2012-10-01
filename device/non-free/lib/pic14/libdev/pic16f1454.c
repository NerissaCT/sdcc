/*
 * This definitions of the PIC16F1454 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <proton7@freemail.hu> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-09-28 08:19:56 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16f1454.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x001A) __sfr TMR2;

__at(0x001B) __sfr PR2;

__at(0x001C) __sfr T2CON;
__at(0x001C) volatile __T2CONbits_t T2CONbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0098) __sfr OSCTUNE;
__at(0x0098) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x0116) __sfr BORCON;
__at(0x0116) volatile __BORCONbits_t BORCONbits;

__at(0x0117) __sfr FVRCON;
__at(0x0117) volatile __FVRCONbits_t FVRCONbits;

__at(0x011D) __sfr APFCON;
__at(0x011D) volatile __APFCONbits_t APFCONbits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018E) __sfr ANSELC;
__at(0x018E) volatile __ANSELCbits_t ANSELCbits;

__at(0x0191) __sfr PMADR;

__at(0x0191) __sfr PMADRL;

__at(0x0192) __sfr PMADRH;

__at(0x0193) __sfr PMDAT;

__at(0x0193) __sfr PMDATL;

__at(0x0194) __sfr PMDATH;

__at(0x0195) __sfr PMCON1;
__at(0x0195) volatile __PMCON1bits_t PMCON1bits;

__at(0x0196) __sfr PMCON2;

__at(0x0197) __sfr VREGCON;
__at(0x0197) volatile __VREGCONbits_t VREGCONbits;

__at(0x0199) __sfr RCREG;

__at(0x019A) __sfr TXREG;

__at(0x019B) __sfr SPBRGL;

__at(0x019C) __sfr SPBRGH;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x020C) __sfr WPUA;
__at(0x020C) volatile __WPUAbits_t WPUAbits;

__at(0x0211) __sfr SSP1BUF;

__at(0x0211) __sfr SSPBUF;

__at(0x0212) __sfr SSP1ADD;

__at(0x0212) __sfr SSPADD;

__at(0x0213) __sfr SSP1MSK;

__at(0x0213) __sfr SSPMSK;

__at(0x0214) __sfr SSP1STAT;
__at(0x0214) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0214) __sfr SSPSTAT;
__at(0x0214) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0215) __sfr SSP1CON1;
__at(0x0215) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0215) __sfr SSPCON;
__at(0x0215) volatile __SSPCONbits_t SSPCONbits;

__at(0x0215) __sfr SSPCON1;
__at(0x0215) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0216) __sfr SSP1CON2;
__at(0x0216) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0216) __sfr SSPCON2;
__at(0x0216) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0217) __sfr SSP1CON3;
__at(0x0217) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0217) __sfr SSPCON3;
__at(0x0217) volatile __SSPCON3bits_t SSPCON3bits;

__at(0x0391) __sfr IOCAP;
__at(0x0391) volatile __IOCAPbits_t IOCAPbits;

__at(0x0392) __sfr IOCAN;
__at(0x0392) volatile __IOCANbits_t IOCANbits;

__at(0x0393) __sfr IOCAF;
__at(0x0393) volatile __IOCAFbits_t IOCAFbits;

__at(0x039A) __sfr CLKRCON;
__at(0x039A) volatile __CLKRCONbits_t CLKRCONbits;

__at(0x039B) __sfr ACTCON;
__at(0x039B) volatile __ACTCONbits_t ACTCONbits;

__at(0x0611) __sfr PWM1DCL;
__at(0x0611) volatile __PWM1DCLbits_t PWM1DCLbits;

__at(0x0612) __sfr PWM1DCH;
__at(0x0612) volatile __PWM1DCHbits_t PWM1DCHbits;

__at(0x0613) __sfr PWM1CON;
__at(0x0613) volatile __PWM1CONbits_t PWM1CONbits;

__at(0x0613) __sfr PWM1CON0;
__at(0x0613) volatile __PWM1CON0bits_t PWM1CON0bits;

__at(0x0614) __sfr PWM2DCL;
__at(0x0614) volatile __PWM2DCLbits_t PWM2DCLbits;

__at(0x0615) __sfr PWM2DCH;
__at(0x0615) volatile __PWM2DCHbits_t PWM2DCHbits;

__at(0x0616) __sfr PWM2CON;
__at(0x0616) volatile __PWM2CONbits_t PWM2CONbits;

__at(0x0616) __sfr PWM2CON0;
__at(0x0616) volatile __PWM2CON0bits_t PWM2CON0bits;

__at(0x0E10) __sfr CRRC;

__at(0x0E10) __sfr TST_CRRCL;

__at(0x0E11) __sfr TST_CRRCH;

__at(0x0E12) __sfr TST_CRLT;

__at(0x0E8E) __sfr UCON;
__at(0x0E8E) volatile __UCONbits_t UCONbits;

__at(0x0E8F) __sfr USTAT;
__at(0x0E8F) volatile __USTATbits_t USTATbits;

__at(0x0E90) __sfr UIR;
__at(0x0E90) volatile __UIRbits_t UIRbits;

__at(0x0E91) __sfr UCFG;
__at(0x0E91) volatile __UCFGbits_t UCFGbits;

__at(0x0E92) __sfr UIE;
__at(0x0E92) volatile __UIEbits_t UIEbits;

__at(0x0E93) __sfr UEIR;
__at(0x0E93) volatile __UEIRbits_t UEIRbits;

__at(0x0E94) __sfr UFRM;

__at(0x0E94) __sfr UFRMH;
__at(0x0E94) volatile __UFRMHbits_t UFRMHbits;

__at(0x0E95) __sfr UFRML;
__at(0x0E95) volatile __UFRMLbits_t UFRMLbits;

__at(0x0E96) __sfr UADDR;
__at(0x0E96) volatile __UADDRbits_t UADDRbits;

__at(0x0E97) __sfr UEIE;
__at(0x0E97) volatile __UEIEbits_t UEIEbits;

__at(0x0E98) __sfr UEP0;
__at(0x0E98) volatile __UEP0bits_t UEP0bits;

__at(0x0E99) __sfr UEP1;
__at(0x0E99) volatile __UEP1bits_t UEP1bits;

__at(0x0E9A) __sfr UEP2;
__at(0x0E9A) volatile __UEP2bits_t UEP2bits;

__at(0x0E9B) __sfr UEP3;
__at(0x0E9B) volatile __UEP3bits_t UEP3bits;

__at(0x0E9C) __sfr UEP4;
__at(0x0E9C) volatile __UEP4bits_t UEP4bits;

__at(0x0E9D) __sfr UEP5;
__at(0x0E9D) volatile __UEP5bits_t UEP5bits;

__at(0x0E9E) __sfr UEP6;
__at(0x0E9E) volatile __UEP6bits_t UEP6bits;

__at(0x0E9F) __sfr UEP7;
__at(0x0E9F) volatile __UEP7bits_t UEP7bits;

__at(0x0F8C) __sfr ICDIO;
__at(0x0F8C) volatile __ICDIObits_t ICDIObits;

__at(0x0F8D) __sfr ICDCON0;
__at(0x0F8D) volatile __ICDCON0bits_t ICDCON0bits;

__at(0x0F91) __sfr ICDSTAT;
__at(0x0F91) volatile __ICDSTATbits_t ICDSTATbits;

__at(0x0F95) __sfr DEVSEL;
__at(0x0F95) volatile __DEVSELbits_t DEVSELbits;

__at(0x0F96) __sfr ICDINSTL;
__at(0x0F96) volatile __ICDINSTLbits_t ICDINSTLbits;

__at(0x0F97) __sfr ICDINSTH;
__at(0x0F97) volatile __ICDINSTHbits_t ICDINSTHbits;

__at(0x0F9C) __sfr ICDBK0CON;
__at(0x0F9C) volatile __ICDBK0CONbits_t ICDBK0CONbits;

__at(0x0F9D) __sfr ICDBK0L;
__at(0x0F9D) volatile __ICDBK0Lbits_t ICDBK0Lbits;

__at(0x0F9E) __sfr ICDBK0H;
__at(0x0F9E) volatile __ICDBK0Hbits_t ICDBK0Hbits;

__at(0x0FE3) __sfr BSRICDSHAD;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
