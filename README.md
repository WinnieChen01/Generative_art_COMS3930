# Module 1: Generative art 
## Description
The generative art installation using ESP32 TTGO T-Display is a project in the Creative Embedded Systems (COMS BC 3930) course taught by Professor Mark Santolucito in Spring 2023. We started from getting to learn ESP32 TTGO T-Display, setting up Arduino and upload example files, to creating our own program on Arduino to visualize a text of our choice on the screen of the ESP32.

## Materials
- ESP32 TTGO T-Display 
- Platform with 14 Type C pins 

## Setting up
- Download and Arduino IDE from [Here](https://www.arduino.cc/en/software)
- Select `Preferences` under `Arduino IDE` in the corner of your screen
- Paste this link to the `Additonal Boards Manager URLs`: https://dl.espressif.com/dl/package_esp32_index.json 
- Select `Manage Libraries` under `Tools`, find and install `TFT_eSPI`
- Select `Boards > Boards Manager` under `Tools`, find and install `esp32`
- Select `Boards > ESP32 Arduino > TTGO T1` under `Tools`
- Find Arduino folder in your local file, open `Arduino -> libraries -> TFT_eSPI -> User_Setup_Select.h`
- Comment out the line `#include <User_Setup.h>` and Uncomment the line`#include <User_Setups/Setup25_TTGO_T_Display.h>`
- If your have trouble uploading example file (next section), download driver follow the link [Here](https://github.com/Xinyuan-LilyGO/LilyGo-T-Call-SIM800/issues/139#issuecomment-904390716)


## Example file
For example, if we want to upload the 'pong_v3' file to our ESP32 TTGO T-Display, here are the steps 
- Plug your ESP32 TTGO T-Display to the computer using USB-Type C cable that can transfer data
- In Arduino, select `Files > Examples > TFT_eSPI > 160 x 128 > Pong_v3`
- Select `Tools -> Port -> /dev/cu.wchusbserialXXXXXXXX`
- Select `Upload`


## Run Generative Art Program 

## Installation 

## Additional Links
- blog: 
- Youtube: 

