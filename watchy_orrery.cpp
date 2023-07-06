#include "watchy_orrery.h"


void WatchyOrrery::drawWatchFace() {
  display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);

  uint16_t offsets[9] = {0, 28, 38, 48, 58, 68, 78, 88, 98};

  uint16_t angles[9] = {0, 0, 10, 20, 30, 40, 50, 60, 70};

  //std::tuple<double, double, double, double, double, double> result = paPlanet.ApproximatePositionOfPlanet(0, 0, 0, false, 0, 22, 11, 2003, "Jupiter");

  // neptune
  display.drawCircle(100,  100,  offsets[8], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[8] * DEG2RAD) *  -3, 100 - cos(angles[8] * DEG2RAD) *  -3, offsets[8] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[8] * DEG2RAD) *  offsets[8], 100 - cos(angles[8] * DEG2RAD) *  offsets[8], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[8] * DEG2RAD) *  offsets[8] - 5, 100 - cos(angles[8] * DEG2RAD) *  offsets[8] - 5, x8_bits, 11, 11, GxEPD_BLACK);

  //uranus
  display.drawCircle(100,  100,  offsets[7], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[7] * DEG2RAD) *  -3, 100 - cos(angles[7] * DEG2RAD) *  -3, offsets[7] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[7] * DEG2RAD) *  offsets[7], 100 - cos(angles[7] * DEG2RAD) *  offsets[7], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[7] * DEG2RAD) *  offsets[7] - 5, 100 - cos(angles[7] * DEG2RAD) *  offsets[7] - 5, x7_bits, 11, 11, GxEPD_BLACK);

  //saturn
  display.drawCircle(100,  100,  offsets[6], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[6] * DEG2RAD) *  -3, 100 - cos(angles[6] * DEG2RAD) *  -3, offsets[6] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[6] * DEG2RAD) *  offsets[6], 100 - cos(angles[6] * DEG2RAD) *  offsets[6], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[6] * DEG2RAD) *  offsets[6] - 5, 100 - cos(angles[6] * DEG2RAD) *  offsets[6] - 5, x6_bits, 11, 11, GxEPD_BLACK);

  //jupiter
  display.drawCircle(100,  100,  offsets[5], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[5] * DEG2RAD) *  -3, 100 - cos(angles[5] * DEG2RAD) *  -3, offsets[5] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[5] * DEG2RAD) *  offsets[5], 100 - cos(angles[5] * DEG2RAD) *  offsets[5], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[5] * DEG2RAD) *  offsets[5] - 5, 100 - cos(angles[5] * DEG2RAD) *  offsets[5] - 5, x5_bits, 11, 11, GxEPD_BLACK);

  //mars
  display.drawCircle(100,  100,  offsets[4], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[4] * DEG2RAD) *  -3, 100 - cos(angles[4] * DEG2RAD) *  -3, offsets[4] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[4] * DEG2RAD) *  offsets[4], 100 - cos(angles[4] * DEG2RAD) *  offsets[4], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[4] * DEG2RAD) *  offsets[4] - 5, 100 - cos(angles[4] * DEG2RAD) *  offsets[4] - 5, x4_bits, 11, 11, GxEPD_BLACK);

  //earth
  display.drawCircle(100,  100,  offsets[3], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[3] * DEG2RAD) *  -3, 100 - cos(angles[3] * DEG2RAD) *  -3, offsets[3] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[3] * DEG2RAD) *  offsets[3], 100 - cos(angles[3] * DEG2RAD) *  offsets[3], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[3] * DEG2RAD) *  offsets[3] - 5, 100 - cos(angles[3] * DEG2RAD) *  offsets[3] - 5, x3_bits, 11, 11, GxEPD_BLACK);

  //venus
  display.drawCircle(100,  100,  offsets[2], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[2] * DEG2RAD) *  -3, 100 - cos(angles[2] * DEG2RAD) *  -3, offsets[2] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[2] * DEG2RAD) *  offsets[2], 100 - cos(angles[2] * DEG2RAD) *  offsets[2], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[2] * DEG2RAD) *  offsets[2] - 5, 100 - cos(angles[2] * DEG2RAD) *  offsets[2] - 5, x2_bits, 11, 11, GxEPD_BLACK);

  //mercury
  display.drawCircle(100,  100,  offsets[1], GxEPD_BLACK);
  display.fillCircle(100 + sin(angles[1] * DEG2RAD) *  -3, 100 - cos(angles[1] * DEG2RAD) *  -3, offsets[1] + 1, GxEPD_WHITE);
  display.fillCircle(100 + sin(angles[1] * DEG2RAD) *  offsets[1], 100 - cos(angles[1] * DEG2RAD) *  offsets[1], 6, GxEPD_WHITE);
  display.drawXBitmap(100 + sin(angles[1] * DEG2RAD) *  offsets[1] - 5, 100 - cos(angles[1] * DEG2RAD) *  offsets[1] - 5, x1_bits, 11, 11, GxEPD_BLACK);

  //the bright one
  display.drawXBitmap(100 - 5, 100 - 5, x0_bits, 11, 11, GxEPD_BLACK);

}
