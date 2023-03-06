

#include <TFT_eSPI.h>
#include <time.h>
#include <stdlib.h>
#include "font.h"

inline uint16_t randomColor();
inline uint16_t getRGB(uint8_t r, uint8_t g, uint8_t b);

TFT_eSPI tft = TFT_eSPI();

TFT_eSprite stext1 = TFT_eSprite(&tft); // Sprite object stext1
TFT_eSprite stext2 = TFT_eSprite(&tft); // Sprite object stext2
TFT_eSprite stext3 = TFT_eSprite(&tft);
TFT_eSprite stext4 = TFT_eSprite(&tft);

int tcount = 0;

//==========================================================================================
void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setRotation(1);

  // Create a sprite for text
  stext1.setColorDepth(8);
  stext1.createSprite(1000, 30);
  // stext1.fillSprite(TFT_WHITE);
  stext1.setScrollRect(0, 0, 1000, 30, TFT_BLACK); // Scroll 
  //stext1.setTextColor(TFT_WHITE);
  stext1.setFreeFont(&Special_Elite_Regular_20);

  // Create a sprite for second line
  stext2.setColorDepth(8);
  stext2.createSprite(1000, 30);
  // stext2.fillSprite(TFT_DARKGREY);
  stext2.setScrollRect(0, 0, 1000, 30, TFT_BLACK); // Scroll 
  //stext2.setTextColor(TFT_WHITE); // White text, no background
  stext2.setFreeFont(&Special_Elite_Regular_20);

   // Create a sprite for third line
  stext3.setColorDepth(8);
  stext3.createSprite(1000, 30);
  // stext3.fillSprite(TFT_WHITE);
  stext3.setScrollRect(0, 0, 1000, 30, TFT_BLACK); // Scroll 
  //stext3.setTextColor(TFT_WHITE);
  stext3.setFreeFont(&Special_Elite_Regular_20);

   // Create a sprite froth text
  stext4.setColorDepth(8);
  stext4.createSprite(1000, 30);
  // stext4.fillSprite(TFT_WHITE);
  stext4.setScrollRect(0, 0, 1000, 30, TFT_BLACK); // Scroll 
  //stext4.setTextColor(TFT_WHITE);
  stext4.setFreeFont(&Special_Elite_Regular_20);

  // different seed 
  srand(time(NULL));
}

//==========================================================================================
void loop() {

  stext1.pushSprite(0, 0);
  stext1.setTextColor(randomColor());

  stext2.pushSprite(0, 30);
  stext2.setTextColor(randomColor());

  stext3.pushSprite(0, 60);
  stext3.setTextColor(randomColor());

  stext4.pushSprite(0, 90);
  stext4.setTextColor(randomColor());

  delay(30); // wait so things do not scroll too fast

  stext1.scroll(-1);
  stext2.scroll(-1);     // scroll stext 1 pixel right, up/down default is 0
  stext3.scroll(-1);
  stext4.scroll(-1);

 tcount--;
  if (tcount <=0)
  { // If we have scrolled 40 pixels the redraw text
    tcount = 400;
    int randomnumber = rand() % 3 + 1; // random number from 1 to 3
    random(randomnumber);
  }
} // Loop back and do it all again

void random(int value){
  if(value == 1){
    stext1.drawString("Had I not seen the Sun", 115, 5, 1);
    stext2.drawString("I could have borne the shade", 125, 5, 1); // draw at 6,0 in sprite, font 2
    stext3.drawString("But Light a newer Wilderness", 135, 5, 1);
    stext4.drawString("My Wilderness has made—", 145, 5, 1);
  } else if(value == 2){
    stext1.drawString("Light a newer Wilderness", 115, 5, 1);
    stext2.drawString("My Wilderness has made—", 125, 5, 1); // draw at 6,0 in sprite, font 2
    stext3.drawString("Had I not seen the Sun", 135, 5, 1);
    stext4.drawString("I could have borne the shade", 145, 5, 1);
  } else {
    stext1.drawString("I could have borne the shade", 115, 5, 1);
    stext2.drawString("But light a newer Wilderness", 125, 5, 1); // draw at 6,0 in sprite, font 2
    stext3.drawString("My Wilderness has made—", 135, 5, 1);
    stext4.drawString("Had I not seen the Sun", 145, 5, 1);
  } 
  
}
inline uint16_t randomColor() {
  return getRGB(random(0, 255), random(0, 255), random(0, 255));
}

inline uint16_t getRGB(uint8_t r, uint8_t g, uint8_t b) {
  uint16_t color = 0;
    color |= ((r >> 3) & 0x1F) << 11;
    color |= ((g >> 2) & 0x3F) << 5;
    color |= (b >> 3) & 0x1F;
    return color;
}
