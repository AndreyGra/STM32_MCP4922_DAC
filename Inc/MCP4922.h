#ifndef MCP4922_H
#define MCP4922_H

#include <stdint.h>

//Packed definition for MCP4922
//Source: http://ww1.microchip.com/downloads/en/DeviceDoc/22250A.pdf
//| A'/B | BUF | GA' | SHDN' | D11 ... D0]

// A'/B: DACA or DACB Selection bit
enum MCP4922_CHANNEL_SELECTION {
    A = 0x0, B = 0x8000
};

// BUF: VREF Input Buffer Control bit
enum MCP4922_INPUT_STATE{
    BUFFERED = 0x4000, UNBUFFERED = 0
} ;

// GA: Output Gain Selection bit
enum MCP4922_OUTPUT_GAIN {
    X2 = 0, X1 = 0x2000
};

//SHDN': Output Shutdown Control bit
enum MCP4922_CHANNEL_STATUS {
    ACTIVE = 0x1000, SHUTDOWN = 0
};

typedef struct {
   enum MCP4922_CHANNEL_SELECTION channel;
   enum MCP4922_INPUT_STATE inputState;
   enum MCP4922_OUTPUT_GAIN gain;
   enum MCP4922_CHANNEL_STATUS shutdownStatus;
   uint16_t channelValue;
} MCP4922_Handle_Typedef ; 

#endif