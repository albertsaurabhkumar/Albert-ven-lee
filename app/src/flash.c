/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Main program file for the GCC Compiler
*/

/****************************************************************
** 0x00 Read 1s Block 
** 0x01 Read 1s Section 
** 0x02 Program Check 
** 0x07 Program Phrase 
** 0x08 Erase Flash Block 
** 0x09 Erase Flash Sector 
** 0x0B Program Section 
** 0x40 Read 1s All Blocks 
** 0x41 Read Once 
** 0x43 Program Once 
** 0x44 Erase All Blocks 
** 0x45 Verify Backdoor Access Key 
** 0x49 Erase All Blocks Unsecure × × —
** 0x80 Program Partition 
** 0x81 Set FlexRAM Function 
****************************************************************/

#include "flash.h"

void CommandSequence() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FSTAT |= FTFC_FSTAT_FPVIOL(1) | FTFC_FSTAT_ACCERR(1);
    FTFC->FSTAT |= FTFC_FSTAT_CCIF(1);
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
 }

void Read1sBlock() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x00;
 }

void Read1sSection() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x01;
 }

void ProgramCheck() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x02;
 }

void ProgramPhrase() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x07;
    CommandSequence();
 }

void EraseFlashBlock() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x08;
 }

void EraseFlashSector() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x09;
 }

void ProgramSection() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x0B;
 }

void Read1sAllBlocks() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x40;
 }

void ReadOnce() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x41;
 }

void ProgramOnce() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x43;
 }

void EraseAllBlocks() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x44;
 }

void VerifyBackdoorAccessKey() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x45;
 }

void EraseAllBlocksUnsecure() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x49;    
 }

void ProgramPartition() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x80;
 }

void SetFlexRAM() {
    while(FTFC->FSTAT && FTFC_FSTAT_CCIF_MASK == 0);
    FTFC->FCCOB[0]=0x81;
 }