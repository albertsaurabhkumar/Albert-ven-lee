#ifndef FLASH_H
#define FLASH_H
#endif

#include "common.h"

void CommandSequence();
void Read1sBlock();
void Read1sSection(); 
void ProgramCheck(); 
void ProgramPhrase(); 
void EraseFlashBlock(); 
void EraseFlashSector(); 
void ProgramSection(); 
void Read1sAllBlocks(); 
void ReadOnce();
void ProgramOnce();
void EraseAllBlocks(); 
void VerifyBackdoorAccessKey(); 
void EraseAllBlocksUnsecure();
void ProgramPartition(); 
void SetFlexRAM();