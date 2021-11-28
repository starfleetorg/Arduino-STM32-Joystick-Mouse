# Arduino-STM32-Joystick-Mouse
A simple Arduino and STM32 based joystick mouse

In order to use this program with the STM32, you will need Arduino IDE with the STMicroelectronics version of the STM32 Arduino core, which can be install from https://github.com/stm32duino/Arduino_Core_STM32. 

To use this, just install STM32 Arduino core from above, clone the repo to a local folder, and open the .ino file using the Arduino IDE, no need to install any additional libraries, as the Arduino <Mouse.h> and <keyboard.h> are already ported and included in the STM32 Arduino core

I only tested this program with the STM32F103C8 bluepill boards, not sure how well it would work with other boards and chips
