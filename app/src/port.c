#include "port.h"

void PortPCR(PORT_Type * const PortAddr,GPIO_PIN Pin) {
    PortAddr->PCR[Pin] = PORT_PCR_MUX(1);
}