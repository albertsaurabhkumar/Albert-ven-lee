/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  C file for clock peripheral
*/

#include "common.h"
#include "clock.h"

void initClk() {
    PCC-> PCCn[PCC_PORTA_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock to PORT C */
    PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock to PORT D */
}