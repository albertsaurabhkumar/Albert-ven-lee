/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Startup file for the GCC Compiler
**  Execution starts from here after the reset.
**  Startup Code Initialize the RAM and required peripherals
**  And then Jumps to the main() function
*/
#include "main.h"
#include "interrupt.h"
#include "startup.h"

uint32_t flashConfig[] __attribute__ ((section (".flashConfig"))) = {
 (uint32_t) 0xFFFFFFFF,
 (uint32_t) 0xFFFFFFFF,
 (uint32_t) 0xFFFFFFFF,
 (uint32_t) 0xFFFF7FFE
};

void Reset_Handler(){
    initData();
    initbss();
    main();
    /* Never returns back to here */
}

void initData() {
// _etext;
// _sdata_ram;
// _edata_ram;
    // uint32_t i;
    // for(i= (uint32_t) _sdata_ram;i< (uint32_t) _edata_ram;i++)
    // {

    // }
}

void initbss() {
    // uint32_t i;
    // for(i = _bss_start_; i<_bss_end_; i++)
    // {
        
    // }
}
