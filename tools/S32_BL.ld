/**************************************************
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Linker file for S32_App application for S32K144
**
***************************************************/

MEMORY
{
    VECTAB(rx): ORIGIN = 0x00000000, LENGTH = 0x00000400    /*1KB of is given as gap to avoid overlapping*/    /**FConfig(rx): ORIGIN = 0x00000400, LENGTH = 0x00000010**/
    FLASH_CONFIG(rx): ORIGIN = 0x00000400, LENGTH = 0x00000410   /*16Bytes of memory for Protection bytes*/
    FLASH(rx): ORIGIN = 0x00000410, LENGTH = 0x00007BF0    /*478KB ie (777FF+400 bytes) of Pflash available for the application and 80KB assigned to bootloader*/
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
    } > VECTAB
    
    .flashConfig :
    {
    *(.flashConfig)
    . = ALIGN(4);
    } > FLASH_CONFIG

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
    } > FLASH

    .data :
    {
    _sdata_ram = .;
    *(.data)
    . = ALIGN(4);
    _edata_ram = .;
    }> SRAM1 AT> FLASH

    .bss :
    {
    _bss_start_ = .;
    *(.bss)
    *(.bss*)
    *(.common)
    *(.common*)
    . = ALIGN(4);
    _bss_end_ = .;
    }> SRAM1 AT> FLASH
}