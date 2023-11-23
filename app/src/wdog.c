#include "wdog.h"
#include "common.h"

void DisableWDOG() {
    WDOG->CNT=0xD928C520; /*Unlock watchdog*/
    WDOG->TOVAL=0x0000FFFF; /*Maximum timeout value*/
    WDOG->CS = 0x00002100; /*Disable watchdog*/
}

void RefreshWDOG() {
    WDOG->CNT=0xB480A602; /*Unlock watchdog*/
}

void CongiWDOG() {
    
}