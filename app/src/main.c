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

volatile uint32_t dlyCnt;
volatile uint32_t counter;
//volatile uint32_t a=10;

void delay(uint32_t a) {
  while(a>0){
    a--;
    dlyCnt=a;
  }
}

int main(void) {
  initClk();
  DisableWDOG();

  PortPCR(PORTA,PIN6);
  DataDirectionGPIO(PTA,PIN6);

  while(1)
  {
    ToggleGPIO(PTA,PIN6);
    delay(720);
    // Never returns from this loop 
  }
  return 0;
}