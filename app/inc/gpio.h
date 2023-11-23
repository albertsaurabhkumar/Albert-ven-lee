#include "common.h"

typedef enum {
PIN0=0,PIN1,PIN2,
PIN3,PIN4,PIN5,
PIN6,PIN7,PIN8,
PIN9,PIN10,PIN11,
PIN12,PIN13,PIN14,
PIN15,PIN16,PIN17,
PIN18,PIN19,PIN20,
PIN21,PIN22,PIN23,
PIN24,PIN25,PIN26,
PIN27,PIN28,PIN29,
PIN30,PIN31
} GPIO_PIN;


void ToggleGPIO(GPIO_Type * const GPIOAddr, GPIO_PIN Pin);
void SetGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin);
void ClearGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin);
void DataDirectionGPIO(GPIO_Type * const GPIOAddr,GPIO_PIN Pin);;
void DataOutGPIO(GPIO_Type * const GPIOAddr,uint32_t Data);
