#include "gpio.h"

/// @brief Toggle a Port Pin
/// @param GPIOAddr 
/// @param Pin 
void ToggleGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin) {
    GPIOAddr->PTOR |= GPIO_PTOR_PTTO(1<<Pin);
}

/// @brief Set a Port Pin
/// @param GPIOAddr 
/// @param Pin 
void SetGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin) {
    GPIOAddr->PSOR |= GPIO_PSOR_PTSO(1<<Pin);
}

/// @brief Clear a Port Pin
/// @param GPIOAddr 
/// @param Pin 
void ClearGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin) {
    GPIOAddr->PCOR |= GPIO_PCOR_PTCO(1<<Pin);
}

/// @brief Set the Direction of Port Pin
/// @param GPIOAddr 
/// @param Pin 
void DataDirectionGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin) {
    GPIOAddr->PDDR |= GPIO_PDDR_PDD(1<<Pin);
}

/// @brief Set the Data to the output Port
/// @param GPIOAddr 
/// @param Data 
void DataOutGPIO(GPIO_Type * const GPIOAddr,uint32_t Data) {
    GPIOAddr->PDOR |= GPIO_PDOR_PDO(Data);
}