#include "MCP4922.h"

const uint16_t createDACFrame(MCP4922_Handle_Typedef *dac) {
    const uint16_t dacFrame =   dac->channel         |
                                dac->inputState      |
                                dac->gain            |
                                dac->shutdownStatus  | 
                                dac->channelValue    ;

    return dacFrame;
}