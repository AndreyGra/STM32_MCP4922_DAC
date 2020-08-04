#ifndef MCP4922_H
#define MCP4922_H

#include <stdint.h>

enum MCP4922_CHANNEL_SELECTION {
    A = 0, B = 1
};

enum MCP4922_OUTPUT_GAIN {
    X2 = 0, X1 = 1
};


enum MCP4922_INPUT_STATE{
    BUFFERED = 1, UNBUFFERED = 0
} ;


enum MCP4922_CHANNEL_STATUS {
    ACTIVE = 1, SHUTDOWN = 0
};

typedef struct {
   enum MCP4922_CHANNEL_SELECTION channel;
   enum MCP4922_INPUT_STATE inputState;
   enum MCP4922_OUTPUT_GAIN gain;
   enum MCP4922_CHANNEL_STATUS shutdownStatus;
   uint16_t channelValue;
} MCP4922_Handle_Typedef ; 

#endif