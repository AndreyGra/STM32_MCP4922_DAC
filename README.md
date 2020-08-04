# Code for MCP4922 DAC
This project features a some code intended to make a variable frequency periodic signal generator based on MCP4922 DAC
I did not include the "Drivers" files in order to keep the project light. You can generate them using STM32CubeMX Software

## Compilation 
Compile simply using Makefiles

```
cd $PATH_TO_THIS_PROJECT
make
```

## Uploading
I used stutil in order to upload the firmware.
Note: Ensure you have up to date stutil, otherwise you may experience weird stack crashes, just like me. 


