#ifndef MCP4922_H
#define MCP4922_H

#include <stdint.h>

//Packed definition for MCP4922
//Source: http://ww1.microchip.com/downloads/en/DeviceDoc/22250A.pdf
//| A'/B | BUF | GA' | SHDN' | D11 ... D0]

// A'/B: DACA or DACB Selection bit
typedef enum MCP4922_CHANNEL_SELECTION {
    A = 0x0, B = 0x8000
} DAC_CHANNEL;

// BUF: VREF Input Buffer Control bit
typedef enum  MCP4922_INPUT_STATE{
    BUFFERED = 0x4000, UNBUFFERED = 0
}DAC_INPUT_STATE ;

// GA: Output Gain Selection bit
typedef enum  MCP4922_OUTPUT_GAIN {
    X2 = 0, X1 = 0x2000
}DAC_OUTPUT_GAIN;

//SHDN': Output Shutdown Control bit
typedef enum MCP4922_CHANNEL_STATUS {
    ACTIVE = 0x1000, SHUTDOWN = 0
}DAC_CHANNEL_STATUS;

typedef struct {
   DAC_CHANNEL _channel;
   DAC_INPUT_STATE _inputState;
   DAC_OUTPUT_GAIN _gain;
   DAC_CHANNEL_STATUS _shutdownStatus;
   uint16_t _channelValue;
} MCP4922_Handle_Typedef ; 

//DAC Frame Generation
const uint16_t createDACFrame(MCP4922_Handle_Typedef *dac);

//Interface that configures MCP4922
void MCP4922SetChannel(MCP4922_Handle_Typedef *dac, DAC_CHANNEL channel);
void MCP4922SetChannelValue(MCP4922_Handle_Typedef *dac, uint16_t value);
void MCP4922SetChannelStatus(MCP4922_Handle_Typedef *dac, DAC_CHANNEL_STATUS status);
void MCP4922SetChannelGain(MCP4922_Handle_Typedef *dac, DAC_OUTPUT_GAIN gain);

#endif