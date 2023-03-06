# Module 1: Generative art 
## Description
The generative art installation using ESP32 TTGO T-Display is a project in the Creative Embedded Systems (COMS BC 3930) course taught by Professor Mark Santolucito in Spring 2023. We started from getting to learn ESP32 TTGO T-Display, setting up Arduino and upload example files, to creating our own program on Arduino to visualize a text of our choice on the screen of the ESP32.

![display](https://user-images.githubusercontent.com/104162702/223003139-5aed162a-9042-4e02-bd69-97b09b350693.jpeg)

## Design 
I glanced upon this poem by happenstance. Then, I came to know that there was this great American female poet called Emily Dickinson, who was little-known during her life. She lived much of her life in isolation, and was considered an eccentric by locals. In addition, by the analysis down on her poem, scholars have interpreted her relationship with Susan, her sister-in-law, as romantic. When I started to think about which text or content I wanted to include in this generative art installation, this poem popped into my mind. The poem about awareness of feelings, perception, and contrast between isolation and “light” used to touch me so well. Although we could never know what the true life of being a female poet living by her own was like at that time, we could still connect with a poet's soul by the work she created, which I thought will be a good theme for text visualization and generative art installation.

## Art Decision
- In order to display this four line poem, I decided to make a scrolling effect for each line. I also considered the typing effect, or popping word effect. However, when I rethought about the poem itself, instead of displaying a sense that the poem was ‘being written at the moment” or “generated”, I wanted it to be perceived just like a printed text. Also considering the readability of text size, I chose to use the scrolling text effect from right to left (i.e. the actual text will be in normal reading direction, which is from left to right) with a  relatively slow speed.
- In terms of text font, I tried several different fonts: one with more artistic looking, one with more hand-writing style, and so on. At last, I decided to use this current one called “Special Elite Regular 20”. The final font I chose gave me a sense of text being printed in a physical book, with some ink immersed into the paper or some stroke being heavier than others. Most importantly, it’s easy and clear to read.
- In addition to the regularity elements in this program, I also chose to include randomness in the sequence and the color of each line. From the text, the main contrast is between “not seen the Sun” and “light”. I wanted to examine the emotion and effect of putting these elements in different order. As a result, I created several sequences for the lines,  and the program generated the order randomly in each loop. The color for each line is also generated randomly.

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
- Plug your ESP32 TTGO T-Display to the computer using USB-Type C cable that can transfer data
- Open `module1.ino -> module1.ino` in the Arduino IDE
- Select `Upload`

## Installation 
- Plug ESP32 TTGO T-Display to the platform 
- Plug in the platform and adjust voltage 

## Technical Challenge 
- In the set up stage, I was unable to upload the example code to my device. I have tried several methods, including using a previous version of Arduino to see the error code, downing different drivers, and so on. With the help from Professor Mark Santolucito, we figured out that the UCB-Type C cable I used could only power the device instead of transferring data. After switching to another cable, the problem was resolved.
- For the programming part of the project, since I have little experience with C language before, it took me a while to learn from the example code and come up with my own. Once I decided to create a scrolling effect for the text, I tried several example files in order to learn which method or object to use. Then I found that the Sprite_scroll example selected from TFT_eSPI → Sprite under `Examples` was very helpful since it included a demonstration of how to scroll a small portion of text. Adapting from this, I was able to create my sprite object for my program to scroll lines.
- Regarding the installation, we planned to solder our batteries in order to power up our device during the installation. However, due to the battery problem (some students reported that there was smoke coming out while soldering, which was abnormal), we decided to not use the batteries but used the platform instead.

## Additional Links
- blog: https://billowy-mailman-a67.notion.site/Module-1-Generative-Art-663db22f652643688924c8afa24ac93d
- Youtube: https://youtu.be/3tDNlPCysUE (individual display) https://youtu.be/0vAbq-cCmgQ (Class Installation)

