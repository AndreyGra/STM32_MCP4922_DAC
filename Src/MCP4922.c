#include "MCP4922.h"

const uint16_t createDACFrame(MCP4922_Handle_Typedef *dac) {
    const uint16_t dacFrame =   dac->_channel         |
                                dac->_inputState      |
                                dac->_gain            |
                                dac->_shutdownStatus  | 
                                dac->_channelValue    ;

    return dacFrame;
}

void MCP4922SetChannel(MCP4922_Handle_Typedef *dac, DAC_CHANNEL channel){
    dac->_channel = channel;
}

void MCP4922SetChannelStatus(MCP4922_Handle_Typedef *dac, DAC_CHANNEL_STATUS status) {
    dac->_shutdownStatus = status;
}

void MCP4922SetChannelValue(MCP4922_Handle_Typedef *dac, uint16_t value){
    dac->_channelValue = value & 0x0FFF;
}

void MCP4922SetChannelGain(MCP4922_Handle_Typedef *dac, DAC_OUTPUT_GAIN gain){
    dac->_gain = gain;
}
