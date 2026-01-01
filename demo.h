#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);
  delay(200);

  tft.init();
  tft.setRotation(0);

  tft.fillScreen(TFT_RED);
  delay(400);
  tft.fillScreen(TFT_GREEN);
  delay(400);
  tft.fillScreen(TFT_BLUE);
  delay(400);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(20, 110);
  tft.print("ESP32 + TFT OK");
}

void loop() {}

