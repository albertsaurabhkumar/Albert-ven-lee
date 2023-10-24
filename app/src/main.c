/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Main program file for the GCC Compiler
*/
#include "main.h"
#include "clock.h"
#include "common.h"

volatile uint32_t dlyCnt;
volatile uint32_t counter;
//volatile uint32_t a=10;
void WDOG_disable (void) {
 WDOG->CNT=0xD928C520; /*Unlock watchdog*/
 WDOG->TOVAL=0x0000FFFF; /*Maximum timeout value*/
 WDOG->CS = 0x00002100; /*Disable watchdog*/
}

void delay(uint32_t a) {
  while(a>0){
    a--;
    dlyCnt=a;
  }
}

int main(void) {
 initClk();
 WDOG_disable();
 PORTA->PCR[6] = 0x00000100;
 PORTA->PCR[11] = 0x00000100;
 PORTB->PCR[4] = 0x00000100;

  PTA->PDDR = GPIO_PDDR_PDD(0x840);
  PTB->PDDR = GPIO_PDDR_PDD(0x10);

  while(1)
  {
    PTB->PSOR = GPIO_PSOR_PTSO(0x10);
    delay(720000);
    PTA->PTOR = GPIO_PTOR_PTTO(0x40);
    delay(720000);
    PTA->PTOR = GPIO_PTOR_PTTO(0x800);
    delay(720000);
    // Never returns from this loop 
  }
  return 0;
}