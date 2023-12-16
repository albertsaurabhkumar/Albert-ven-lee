/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Main program file for the GCC Compiler
*/

/*   PortPCR(PORTA,PIN11);
  PortPCR(PORTB,PIN4);
  DataDirectionGPIO(PTB,PIN4);
  DataDirectionGPIO(PTA,PIN11); */

#include "main.h"
#include "clock.h"
#include "port.h"
#include "wdog.h"
#include "common.h"

#define APP_ADD 0x00008404
#define VectorAdd 0x00008400
#define NEW_MSP 0x20007000

typedef void (*voidFunc)(void);

volatile uint32_t dlyCnt;
volatile uint32_t counter;

__attribute__ (( always_inline )) inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm__ volatile ("MSR msp, %0\n" : : "r" (topOfMainStack));
}

void delay(uint32_t a) {
  while(a>0){
    a--;
    dlyCnt=a;
  }
}

void JumpToApp() {
  uint32_t* jumpAddress = (uint32_t*)(APP_ADD);
  uint32_t* jumpAdd = (uint32_t*)(*jumpAddress);
  voidFunc jmpFn = (voidFunc)jumpAdd;
  S32_SCB->VTOR = (uint32_t)(0x8400);
  __set_MSP(NEW_MSP);
  jmpFn();
}


int main(void) {
  initClk();
  DisableWDOG();

  PortPCR(PORTA,PIN11);
  DataDirectionGPIO(PTA,PIN11);
  //PortPCR(PORTA,PIN6);
  //PORTA->PCR[6]|=0x3;

  while(1)
  {
    for(uint8_t temp = 0;temp<10;temp++)
    {
    ToggleGPIO(PTA,PIN11);
    delay(950000);
    }
    JumpToApp();           // Never returns from here
  }
  return 0;
}