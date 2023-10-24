#include "startup.h"
/**************************************************/
/*             System Interrupt Handling          */
/**************************************************/
void DefaultHandler(void) {
    while(1); /* Never returns from here */
}

void NMI_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void HardFault_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void MemManage_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void BusFault_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void UsageFault_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void SVC_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));  
void DebugMon_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));  
void PendSV_Handler(void) __attribute__ ((weak, alias("DefaultHandler")));
void SysTick_Handler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));   
void DMA1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));   
void DMA2_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA4_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA5_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA6_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA7_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA8_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA9_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DMA10_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA11_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA12_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA13_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA14_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA15_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void DMA_Error_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void MCM_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));              
void FTFC_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void Read_Collision_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));   
void LVD_LVW_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));          
void FTFC_Fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void WDOG_EWM_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));         
void RCM_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));              
void LPI2C0_Master_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));    
void LPI2C0_Slave_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void LPSPI0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));           
void LPSPI1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));           
void LPSPI2_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));           
void Reserved45_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved46_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void LPUART0_RxTx_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void Reserved48_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void LPUART1_RxTx_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void Reserved50_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void LPUART2_RxTx_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void Reserved52_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved53_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved54_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void ADC0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void ADC1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void CMP0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void Reserved58_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved59_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void ERM_single_fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void ERM_double_fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void RTC_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));              
void RTC_Seconds_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void LPIT0_Ch0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void LPIT0_Ch1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void LPIT0_Ch2_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void LPIT0_Ch3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void PDB0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void Reserved69_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved70_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved71_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved72_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void SCG_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));              
void LPTMR0_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));           
void PORTA_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));            
void PORTB_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));            
void PORTC_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));            
void PORTD_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));            
void PORTE_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));            
void SWI_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));              
void Reserved81_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved82_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved83_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void PDB1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));             
void FLEXIO_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));           
void Reserved86_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved87_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved88_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved89_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved90_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved91_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved92_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved93_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void CAN0_ORed_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void CAN0_Error_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void CAN0_Wake_Up_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void CAN0_ORed_0_15_MB_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void CAN0_ORed_16_31_MB_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void Reserved99_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved100_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void CAN1_ORed_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void CAN1_Error_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved103_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void CAN1_ORed_0_15_MB_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void Reserved105_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void Reserved106_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void Reserved107_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void CAN2_ORed_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));        
void CAN2_Error_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void Reserved110_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void CAN2_ORed_0_15_MB_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));
void Reserved112_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void Reserved113_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void Reserved114_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));      
void FTM0_Ch0_Ch1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM0_Ch2_Ch3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM0_Ch4_Ch5_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM0_Ch6_Ch7_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM0_Fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void FTM0_Ovf_Reload_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));  
void FTM1_Ch0_Ch1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM1_Ch2_Ch3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM1_Ch4_Ch5_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM1_Ch6_Ch7_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM1_Fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void FTM1_Ovf_Reload_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));  
void FTM2_Ch0_Ch1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM2_Ch2_Ch3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM2_Ch4_Ch5_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM2_Ch6_Ch7_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM2_Fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void FTM2_Ovf_Reload_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));  
void FTM3_Ch0_Ch1_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM3_Ch2_Ch3_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM3_Ch4_Ch5_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM3_Ch6_Ch7_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));     
void FTM3_Fault_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler")));       
void FTM3_Ovf_Reload_IRQHandler(void) __attribute__ ((weak, alias("DefaultHandler"))); 
void DefaultISR(void) __attribute__ ((weak, alias("DefaultHandler")));  

uint32_t vectorTable[] __attribute__ ((section (".intvec"))) = {
     (uint32_t) 0x20007000,                                           /* Top of Stack */
     (uint32_t) Reset_Handler,                                        /* Reset Handler */
     (uint32_t) NMI_Handler,                                          /* NMI Handler*/
     (uint32_t) HardFault_Handler,                                    /* Hard Fault Handler*/
     (uint32_t) MemManage_Handler,                                    /* MPU Fault Handler*/
     (uint32_t) BusFault_Handler,                                     /* Bus Fault Handler*/
     (uint32_t) UsageFault_Handler,                                   /* Usage Fault Handler*/
     (uint32_t) 0 ,                                                                 /* Reserved*/
     (uint32_t) 0 ,                                                                 /* Reserved*/
     (uint32_t) 0 ,                                                                 /* Reserved*/
     (uint32_t) 0 ,                                                                 /* Reserved*/
     (uint32_t) SVC_Handler,                                          /* SVCall Handler*/
     (uint32_t) DebugMon_Handler,                                     /* Debug Monitor Handler*/
     (uint32_t) 0 ,                                                       /* Reserved*/
     (uint32_t) PendSV_Handler,                                       /* PendSV Handler*/
     (uint32_t) SysTick_Handler,                                      /* SysTick Handler*/
                                          /* External Interrupts*/
     (uint32_t) DMA0_IRQHandler,                                       /* DMA channel 0 transfer complete*/
     (uint32_t) DMA1_IRQHandler,                                       /* DMA channel 1 transfer complete*/
     (uint32_t) DMA2_IRQHandler,                                       /* DMA channel 2 transfer complete*/
     (uint32_t) DMA3_IRQHandler,                                       /* DMA channel 3 transfer complete*/
     (uint32_t) DMA4_IRQHandler,                                       /* DMA channel 4 transfer complete*/
     (uint32_t) DMA5_IRQHandler,                                       /* DMA channel 5 transfer complete*/
     (uint32_t) DMA6_IRQHandler,                                       /* DMA channel 6 transfer complete*/
     (uint32_t) DMA7_IRQHandler,                                       /* DMA channel 7 transfer complete*/
     (uint32_t) DMA8_IRQHandler,                                       /* DMA channel 8 transfer complete*/
     (uint32_t) DMA9_IRQHandler,                                       /* DMA channel 9 transfer complete*/
     (uint32_t) DMA10_IRQHandler,                                      /* DMA channel 10 transfer complete*/
     (uint32_t) DMA11_IRQHandler,                                      /* DMA channel 11 transfer complete*/
     (uint32_t) DMA12_IRQHandler,                                      /* DMA channel 12 transfer complete*/
     (uint32_t) DMA13_IRQHandler,                                      /* DMA channel 13 transfer complete*/
     (uint32_t) DMA14_IRQHandler,                                      /* DMA channel 14 transfer complete*/
     (uint32_t) DMA15_IRQHandler,                                      /* DMA channel 15 transfer complete*/
     (uint32_t) DMA_Error_IRQHandler,                                  /* DMA error interrupt channels 0-15*/
     (uint32_t) MCM_IRQHandler,                                        /* FPU sources*/
     (uint32_t) FTFC_IRQHandler,                                       /* FTFC Command complete*/
     (uint32_t) Read_Collision_IRQHandler,                             /* FTFC Read collision*/
     (uint32_t) LVD_LVW_IRQHandler,                                    /* PMC Low voltage detect interrupt*/
     (uint32_t) FTFC_Fault_IRQHandler,                                 /* FTFC Double bit fault detect*/
     (uint32_t) WDOG_EWM_IRQHandler,                                   /* Single interrupt vector for WDOG and EWM*/
     (uint32_t) RCM_IRQHandler,                                        /* RCM Asynchronous Interrupt*/
     (uint32_t) LPI2C0_Master_IRQHandler,                              /* LPI2C0 Master Interrupt*/
     (uint32_t) LPI2C0_Slave_IRQHandler,                               /* LPI2C0 Slave Interrupt*/
     (uint32_t) LPSPI0_IRQHandler,                                     /* LPSPI0 Interrupt*/
     (uint32_t) LPSPI1_IRQHandler,                                     /* LPSPI1 Interrupt*/
     (uint32_t) LPSPI2_IRQHandler,                                     /* LPSPI2 Interrupt*/
     (uint32_t) Reserved45_IRQHandler,                                 /* Reserved Interrupt 45*/
     (uint32_t) Reserved46_IRQHandler,                                 /* Reserved Interrupt 46*/
     (uint32_t) LPUART0_RxTx_IRQHandler,                               /* LPUART0 Transmit / Receive Interrupt*/
     (uint32_t) Reserved48_IRQHandler,                                 /* Reserved Interrupt 48*/
     (uint32_t) LPUART1_RxTx_IRQHandler,                               /* LPUART1 Transmit / Receive  Interrupt*/
     (uint32_t) Reserved50_IRQHandler,                                 /* Reserved Interrupt 50*/
     (uint32_t) LPUART2_RxTx_IRQHandler,                               /* LPUART2 Transmit / Receive  Interrupt*/
     (uint32_t) Reserved52_IRQHandler,                                 /* Reserved Interrupt 52*/
     (uint32_t) Reserved53_IRQHandler,                                 /* Reserved Interrupt 53*/
     (uint32_t) Reserved54_IRQHandler,                                 /* Reserved Interrupt 54*/
     (uint32_t) ADC0_IRQHandler,                                       /* ADC0 interrupt request.*/
     (uint32_t) ADC1_IRQHandler,                                       /* ADC1 interrupt request.*/
     (uint32_t) CMP0_IRQHandler,                                       /* CMP0 interrupt request*/
     (uint32_t) Reserved58_IRQHandler,                                 /* Reserved Interrupt 58*/
     (uint32_t) Reserved59_IRQHandler,                                 /* Reserved Interrupt 59*/
     (uint32_t) ERM_single_fault_IRQHandler,                           /* ERM single bit error correction*/
     (uint32_t) ERM_double_fault_IRQHandler,                           /* ERM double bit error non-correctable*/
     (uint32_t) RTC_IRQHandler,                                        /* RTC alarm interrupt*/
     (uint32_t) RTC_Seconds_IRQHandler,                                /* RTC seconds interrupt*/
     (uint32_t) LPIT0_Ch0_IRQHandler,                                  /* LPIT0 channel 0 overflow interrupt*/
     (uint32_t) LPIT0_Ch1_IRQHandler,                                  /* LPIT0 channel 1 overflow interrupt*/
     (uint32_t) LPIT0_Ch2_IRQHandler,                                  /* LPIT0 channel 2 overflow interrupt*/
     (uint32_t) LPIT0_Ch3_IRQHandler,                                  /* LPIT0 channel 3 overflow interrupt*/
     (uint32_t) PDB0_IRQHandler,                                       /* PDB0 interrupt*/
     (uint32_t) Reserved69_IRQHandler,                                 /* Reserved Interrupt 69*/
     (uint32_t) Reserved70_IRQHandler,                                 /* Reserved Interrupt 70*/
     (uint32_t) Reserved71_IRQHandler,                                 /* Reserved Interrupt 71*/
     (uint32_t) Reserved72_IRQHandler,                                 /* Reserved Interrupt 72*/
     (uint32_t) SCG_IRQHandler,                                        /* SCG bus interrupt request*/
     (uint32_t) LPTMR0_IRQHandler,                                     /* LPTIMER interrupt request*/
     (uint32_t) PORTA_IRQHandler,                                      /* Port A pin detect interrupt*/
     (uint32_t) PORTB_IRQHandler,                                      /* Port B pin detect interrupt*/
     (uint32_t) PORTC_IRQHandler,                                      /* Port C pin detect interrupt*/
     (uint32_t) PORTD_IRQHandler,                                      /* Port D pin detect interrupt*/
     (uint32_t) PORTE_IRQHandler,                                      /* Port E pin detect interrupt*/
     (uint32_t) SWI_IRQHandler,                                        /* Software interrupt*/
     (uint32_t) Reserved81_IRQHandler,                                 /* Reserved Interrupt 81*/
     (uint32_t) Reserved82_IRQHandler,                                 /* Reserved Interrupt 82*/
     (uint32_t) Reserved83_IRQHandler,                                 /* Reserved Interrupt 83*/
     (uint32_t) PDB1_IRQHandler,                                       /* PDB1 interrupt*/
     (uint32_t) FLEXIO_IRQHandler,                                     /* FlexIO Interrupt*/
     (uint32_t) Reserved86_IRQHandler,                                 /* Reserved Interrupt 86*/
     (uint32_t) Reserved87_IRQHandler,                                 /* Reserved Interrupt 87*/
     (uint32_t) Reserved88_IRQHandler,                                 /* Reserved Interrupt 88*/
     (uint32_t) Reserved89_IRQHandler,                                 /* Reserved Interrupt 89*/
     (uint32_t) Reserved90_IRQHandler,                                 /* Reserved Interrupt 90*/
     (uint32_t) Reserved91_IRQHandler,                                 /* Reserved Interrupt 91*/
     (uint32_t) Reserved92_IRQHandler,                                 /* Reserved Interrupt 92*/
     (uint32_t) Reserved93_IRQHandler,                                 /* Reserved Interrupt 93*/
     (uint32_t) CAN0_ORed_IRQHandler,                                  /* CAN0 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
     (uint32_t) CAN0_Error_IRQHandler,                                 /* CAN0 Interrupt indicating that errors were detected on the CAN bus*/
     (uint32_t) CAN0_Wake_Up_IRQHandler,                               /* CAN0 Interrupt asserted when Pretended Networking operation is enabled       and a valid message matches the selected filter criteria during Low Power mode*/
     (uint32_t) CAN0_ORed_0_15_MB_IRQHandler,                          /* CAN0 OR'ed Message buffer (0-15)*/
     (uint32_t) CAN0_ORed_16_31_MB_IRQHandler,                         /* CAN0 OR'ed Message buffer (16-31)*/
     (uint32_t) Reserved99_IRQHandler,                                 /* Reserved Interrupt 99*/
     (uint32_t) Reserved100_IRQHandler,                                /* Reserved Interrupt 100*/
     (uint32_t) CAN1_ORed_IRQHandler,                                  /* CAN1 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
     (uint32_t) CAN1_Error_IRQHandler,                                 /* CAN1 Interrupt indicating that errors were detected on the CAN bus*/
     (uint32_t) Reserved103_IRQHandler,                                /* Reserved Interrupt 103*/
     (uint32_t) CAN1_ORed_0_15_MB_IRQHandler,                          /* CAN1 OR'ed Interrupt for Message buffer (0-15)*/
     (uint32_t) Reserved105_IRQHandler,                                /* Reserved Interrupt 105*/
     (uint32_t) Reserved106_IRQHandler,                                /* Reserved Interrupt 106*/
     (uint32_t) Reserved107_IRQHandler,                                /* Reserved Interrupt 107*/
     (uint32_t) CAN2_ORed_IRQHandler,                                  /* CAN2 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
     (uint32_t) CAN2_Error_IRQHandler,                                 /* CAN2 Interrupt indicating that errors were detected on the CAN bus*/
     (uint32_t) Reserved110_IRQHandler,                                /* Reserved Interrupt 110*/
     (uint32_t) CAN2_ORed_0_15_MB_IRQHandler,                          /* CAN2 OR'ed Message buffer (0-15)*/
     (uint32_t) Reserved112_IRQHandler,                                /* Reserved Interrupt 112*/
     (uint32_t) Reserved113_IRQHandler,                                /* Reserved Interrupt 113*/
     (uint32_t) Reserved114_IRQHandler,                                /* Reserved Interrupt 114*/
     (uint32_t) FTM0_Ch0_Ch1_IRQHandler,                               /* FTM0 Channel 0 and 1 interrupt*/
     (uint32_t) FTM0_Ch2_Ch3_IRQHandler,                               /* FTM0 Channel 2 and 3 interrupt*/
     (uint32_t) FTM0_Ch4_Ch5_IRQHandler,                               /* FTM0 Channel 4 and 5 interrupt*/
     (uint32_t) FTM0_Ch6_Ch7_IRQHandler,                               /* FTM0 Channel 6 and 7 interrupt*/
     (uint32_t) FTM0_Fault_IRQHandler,                                 /* FTM0 Fault interrupt*/
     (uint32_t) FTM0_Ovf_Reload_IRQHandler,                            /* FTM0 Counter overflow and Reload interrupt*/
     (uint32_t) FTM1_Ch0_Ch1_IRQHandler,                               /* FTM1 Channel 0 and 1 interrupt*/
     (uint32_t) FTM1_Ch2_Ch3_IRQHandler,                               /* FTM1 Channel 2 and 3 interrupt*/
     (uint32_t) FTM1_Ch4_Ch5_IRQHandler,                               /* FTM1 Channel 4 and 5 interrupt*/
     (uint32_t) FTM1_Ch6_Ch7_IRQHandler,                               /* FTM1 Channel 6 and 7 interrupt*/
     (uint32_t) FTM1_Fault_IRQHandler,                                 /* FTM1 Fault interrupt*/
     (uint32_t) FTM1_Ovf_Reload_IRQHandler,                            /* FTM1 Counter overflow and Reload interrupt*/
     (uint32_t) FTM2_Ch0_Ch1_IRQHandler,                               /* FTM2 Channel 0 and 1 interrupt*/
     (uint32_t) FTM2_Ch2_Ch3_IRQHandler,                               /* FTM2 Channel 2 and 3 interrupt*/
     (uint32_t) FTM2_Ch4_Ch5_IRQHandler,                               /* FTM2 Channel 4 and 5 interrupt*/
     (uint32_t) FTM2_Ch6_Ch7_IRQHandler,                               /* FTM2 Channel 6 and 7 interrupt*/
     (uint32_t) FTM2_Fault_IRQHandler,                                 /* FTM2 Fault interrupt*/
     (uint32_t) FTM2_Ovf_Reload_IRQHandler,                            /* FTM2 Counter overflow and Reload interrupt*/
     (uint32_t) FTM3_Ch0_Ch1_IRQHandler,                               /* FTM3 Channel 0 and 1 interrupt*/
     (uint32_t) FTM3_Ch2_Ch3_IRQHandler,                               /* FTM3 Channel 2 and 3 interrupt*/
     (uint32_t) FTM3_Ch4_Ch5_IRQHandler,                               /* FTM3 Channel 4 and 5 interrupt*/
     (uint32_t) FTM3_Ch6_Ch7_IRQHandler,                               /* FTM3 Channel 6 and 7 interrupt*/
     (uint32_t) FTM3_Fault_IRQHandler,                                 /* FTM3 Fault interrupt*/
     (uint32_t) FTM3_Ovf_Reload_IRQHandler,                            /* FTM3 Counter overflow and Reload interrupt*/
     (uint32_t) DefaultISR,                                            /* 139*/
     (uint32_t) DefaultISR,                                            /* 140*/
     (uint32_t) DefaultISR,                                            /* 141*/
     (uint32_t) DefaultISR,                                            /* 142*/
     (uint32_t) DefaultISR,                                            /* 143*/
     (uint32_t) DefaultISR,                                            /* 144*/
     (uint32_t) DefaultISR,                                            /* 145*/
     (uint32_t) DefaultISR,                                            /* 146*/
     (uint32_t) DefaultISR,                                            /* 147*/
     (uint32_t) DefaultISR,                                            /* 148*/
     (uint32_t) DefaultISR,                                            /* 149*/
     (uint32_t) DefaultISR,                                            /* 150*/
     (uint32_t) DefaultISR,                                            /* 151*/
     (uint32_t) DefaultISR,                                            /* 152*/
     (uint32_t) DefaultISR,                                            /* 153*/
     (uint32_t) DefaultISR,                                            /* 154*/
     (uint32_t) DefaultISR,                                            /* 155*/
     (uint32_t) DefaultISR,                                            /* 156*/
     (uint32_t) DefaultISR,                                            /* 157*/
     (uint32_t) DefaultISR,                                            /* 158*/
     (uint32_t) DefaultISR,                                            /* 159*/
     (uint32_t) DefaultISR,                                            /* 160*/
     (uint32_t) DefaultISR,                                            /* 161*/
     (uint32_t) DefaultISR,                                            /* 162*/
     (uint32_t) DefaultISR,                                            /* 163*/
     (uint32_t) DefaultISR,                                            /* 164*/
     (uint32_t) DefaultISR,                                            /* 165*/
     (uint32_t) DefaultISR,                                            /* 166*/
     (uint32_t) DefaultISR,                                            /* 167*/
     (uint32_t) DefaultISR,                                            /* 168*/
     (uint32_t) DefaultISR,                                            /* 169*/
     (uint32_t) DefaultISR,                                            /* 170*/
     (uint32_t) DefaultISR,                                            /* 171*/
     (uint32_t) DefaultISR,                                            /* 172*/
     (uint32_t) DefaultISR,                                            /* 173*/
     (uint32_t) DefaultISR,                                            /* 174*/
     (uint32_t) DefaultISR,                                            /* 175*/
     (uint32_t) DefaultISR,                                            /* 176*/
     (uint32_t) DefaultISR,                                            /* 177*/
     (uint32_t) DefaultISR,                                            /* 178*/
     (uint32_t) DefaultISR,                                            /* 179*/
     (uint32_t) DefaultISR,                                            /* 180*/
     (uint32_t) DefaultISR,                                            /* 181*/
     (uint32_t) DefaultISR,                                            /* 182*/
     (uint32_t) DefaultISR,                                            /* 183*/
     (uint32_t) DefaultISR,                                            /* 184*/
     (uint32_t) DefaultISR,                                            /* 185*/
     (uint32_t) DefaultISR,                                            /* 186*/
     (uint32_t) DefaultISR,                                            /* 187*/
     (uint32_t) DefaultISR,                                            /* 188*/
     (uint32_t) DefaultISR,                                            /* 189*/
     (uint32_t) DefaultISR,                                            /* 190*/
     (uint32_t) DefaultISR,                                            /* 191*/
     (uint32_t) DefaultISR,                                            /* 192*/
     (uint32_t) DefaultISR,                                            /* 193*/
     (uint32_t) DefaultISR,                                            /* 194*/
     (uint32_t) DefaultISR,                                            /* 195*/
     (uint32_t) DefaultISR,                                            /* 196*/
     (uint32_t) DefaultISR,                                            /* 197*/
     (uint32_t) DefaultISR,                                            /* 198*/
     (uint32_t) DefaultISR,                                            /* 199*/
     (uint32_t) DefaultISR,                                            /* 200*/
     (uint32_t) DefaultISR,                                            /* 201*/
     (uint32_t) DefaultISR,                                            /* 202*/
     (uint32_t) DefaultISR,                                            /* 203*/
     (uint32_t) DefaultISR,                                            /* 204*/
     (uint32_t) DefaultISR,                                            /* 205*/
     (uint32_t) DefaultISR,                                            /* 206*/
     (uint32_t) DefaultISR,                                            /* 207*/
     (uint32_t) DefaultISR,                                            /* 208*/
     (uint32_t) DefaultISR,                                            /* 209*/
     (uint32_t) DefaultISR,                                            /* 210*/
     (uint32_t) DefaultISR,                                            /* 211*/
     (uint32_t) DefaultISR,                                            /* 212*/
     (uint32_t) DefaultISR,                                            /* 213*/
     (uint32_t) DefaultISR,                                            /* 214*/
     (uint32_t) DefaultISR,                                            /* 215*/
     (uint32_t) DefaultISR,                                            /* 216*/
     (uint32_t) DefaultISR,                                            /* 217*/
     (uint32_t) DefaultISR,                                            /* 218*/
     (uint32_t) DefaultISR,                                            /* 219*/
     (uint32_t) DefaultISR,                                            /* 220*/
     (uint32_t) DefaultISR,                                            /* 221*/
     (uint32_t) DefaultISR,                                            /* 222*/
     (uint32_t) DefaultISR,                                            /* 223*/
     (uint32_t) DefaultISR,                                            /* 224*/
     (uint32_t) DefaultISR,                                            /* 225*/
     (uint32_t) DefaultISR,                                            /* 226*/
     (uint32_t) DefaultISR,                                            /* 227*/
     (uint32_t) DefaultISR,                                            /* 228*/
     (uint32_t) DefaultISR,                                            /* 229*/
     (uint32_t) DefaultISR,                                            /* 230*/
     (uint32_t) DefaultISR,                                            /* 231*/
     (uint32_t) DefaultISR,                                            /* 232*/
     (uint32_t) DefaultISR,                                            /* 233*/
     (uint32_t) DefaultISR,                                            /* 234*/
     (uint32_t) DefaultISR,                                            /* 235*/
     (uint32_t) DefaultISR,                                            /* 236*/
     (uint32_t) DefaultISR,                                            /* 237*/
     (uint32_t) DefaultISR,                                            /* 238*/
     (uint32_t) DefaultISR,                                            /* 239*/
     (uint32_t) DefaultISR,                                            /* 240*/
     (uint32_t) DefaultISR,                                            /* 241*/
     (uint32_t) DefaultISR,                                            /* 242*/
     (uint32_t) DefaultISR,                                            /* 243*/
     (uint32_t) DefaultISR,                                            /* 244*/
     (uint32_t) DefaultISR,                                            /* 245*/
     (uint32_t) DefaultISR,                                            /* 246*/
     (uint32_t) DefaultISR,                                            /* 247*/
     (uint32_t) DefaultISR,                                            /* 248*/
     (uint32_t) DefaultISR,                                            /* 249*/
     (uint32_t) DefaultISR,                                            /* 250*/
     (uint32_t) DefaultISR,                                            /* 251*/
     (uint32_t) DefaultISR,                                            /* 252*/
     (uint32_t) DefaultISR,                                            /* 253*/
     (uint32_t) DefaultISR,                                            /* 254*/
     (uint32_t) 0xFFFFFFFF                                      /*  Reserved for user TRIM value*/
};