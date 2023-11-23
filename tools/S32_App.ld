/**************************************************
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Linker file for S32_App application for S32K144
**
***************************************************/

ENTRY(Reset_Handler)

MEMORY
{
    FLASH1(rx): ORIGIN = 0X00000000, LENGTH = 0X00000400
    FLASH_CONFIG(rx): ORIGIN = 0x00000400, LENGTH = 0x00000010
    FLASH2(rx): ORIGIN = 0x00000410, LENGTH = 0x00013FFF
    SRAM1(rwx): ORIGIN = 0x1FFF8000, LENGTH = 0x00008000
    SRAM2(rwx): ORIGIN = 0x20000000, LENGTH = 0x00007000
}

SECTIONS
{
    .intvec :
    {
    _intvec_start_ = .;
    *(.intvec)
    . = ALIGN(4);
    _intvec_end_ = .;
    } > FLASH1

    .flashConfig :
    {
    KEEP(*(.flashConfig))
    . = ALIGN(4);
    } > FLASH1

    .text :
    {
    _stext = .;
    *(.text)                 /* .text sections (code) */
    *(.text*)                /* .text* sections (code) */
    *(.rodata)               /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
    *(.glue_7)               /* glue arm to thumb code */
    *(.glue_7t)              /* glue thumb to arm code */
    *(.eh_frame)
    KEEP (*(.init))
    KEEP (*(.fini))
    . = ALIGN(4);
    _etext = .;
    } > FLASH2

    .data :
    {
    _sdata_ram = .;
    *(.data)
    . = ALIGN(4);
    _edata_ram = .;
    }> SRAM1 AT> FLASH2

    .bss :
    {
    _bss_start_ = .;
    *(.bss)
    *(.bss*)
    *(.common)
    *(.common*)
    . = ALIGN(4);
    _bss_end_ = .;
    }> SRAM1 AT> FLASH2
}