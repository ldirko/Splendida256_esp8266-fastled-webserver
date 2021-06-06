uint16_t physicalToFibonacci[NUM_LEDS] = { 0, 13, 26, 39, 52, 65, 78, 91, 104, 117, 130, 143, 156, 169, 182, 195, 208, 221, 234, 247, 252, 239, 226, 213, 200, 187, 174, 161, 148, 135, 122, 109, 96, 83, 70, 57, 44, 31, 18, 5, 10, 23, 36, 49, 62, 75, 88, 101, 114, 127, 140, 153, 166, 179, 192, 205, 218, 231, 244, 249, 236, 223, 210, 197, 184, 171, 158, 145, 132, 119, 106, 93, 80, 67, 54, 41, 28, 15, 2, 7, 20, 33, 46, 59, 72, 85, 98, 111, 124, 137, 150, 163, 176, 189, 202, 215, 228, 241, 254, 246, 233, 220, 207, 194, 181, 168, 155, 142, 129, 116, 103, 90, 77, 64, 51, 38, 25, 12, 4, 17, 30, 43, 56, 69, 82, 95, 108, 121, 134, 147, 160, 173, 186, 199, 212, 225, 238, 251, 243, 230, 217, 204, 191, 178, 165, 152, 139, 126, 113, 100, 87, 74, 61, 48, 35, 22, 9, 1, 14, 27, 40, 53, 66, 79, 92, 105, 118, 131, 144, 157, 170, 183, 196, 209, 222, 235, 248, 253, 240, 227, 214, 201, 188, 175, 162, 149, 136, 123, 110, 97, 84, 71, 58, 45, 32, 19, 6, 11, 24, 37, 50, 63, 76, 89, 102, 115, 128, 141, 154, 167, 180, 193, 206, 219, 232, 245, 250, 237, 224, 211, 198, 185, 172, 159, 146, 133, 120, 107, 94, 81, 68, 55, 42, 29, 16, 3, 8, 21, 34, 47, 60, 73, 86, 99, 112, 125, 138, 151, 164, 177, 190, 203, 216, 229, 242, 255 };
uint16_t fibonacciToPhysical[NUM_LEDS] = { 0, 157, 78, 235, 118, 39, 196, 79, 236, 156, 40, 197, 117, 1, 158, 77, 234, 119, 38, 195, 80, 237, 155, 41, 198, 116, 2, 159, 76, 233, 120, 37, 194, 81, 238, 154, 42, 199, 115, 3, 160, 75, 232, 121, 36, 193, 82, 239, 153, 43, 200, 114, 4, 161, 74, 231, 122, 35, 192, 83, 240, 152, 44, 201, 113, 5, 162, 73, 230, 123, 34, 191, 84, 241, 151, 45, 202, 112, 6, 163, 72, 229, 124, 33, 190, 85, 242, 150, 46, 203, 111, 7, 164, 71, 228, 125, 32, 189, 86, 243, 149, 47, 204, 110, 8, 165, 70, 227, 126, 31, 188, 87, 244, 148, 48, 205, 109, 9, 166, 69, 226, 127, 30, 187, 88, 245, 147, 49, 206, 108, 10, 167, 68, 225, 128, 29, 186, 89, 246, 146, 50, 207, 107, 11, 168, 67, 224, 129, 28, 185, 90, 247, 145, 51, 208, 106, 12, 169, 66, 223, 130, 27, 184, 91, 248, 144, 52, 209, 105, 13, 170, 65, 222, 131, 26, 183, 92, 249, 143, 53, 210, 104, 14, 171, 64, 221, 132, 25, 182, 93, 250, 142, 54, 211, 103, 15, 172, 63, 220, 133, 24, 181, 94, 251, 141, 55, 212, 102, 16, 173, 62, 219, 134, 23, 180, 95, 252, 140, 56, 213, 101, 17, 174, 61, 218, 135, 22, 179, 96, 253, 139, 57, 214, 100, 18, 175, 60, 217, 136, 21, 178, 97, 254, 138, 58, 215, 99, 19, 176, 59, 216, 137, 20, 177, 98, 255 };
uint8_t coordsX[NUM_LEDS]             = { 133, 156, 165, 168, 165, 158, 147, 132, 114, 95, 76, 57, 41, 28, 19, 15, 17, 24, 37, 56, 123, 96, 73, 53, 38, 28, 24, 25, 31, 41, 55, 71, 89, 106, 122, 136, 146, 152, 152, 143, 138, 136, 128, 115, 101, 85, 70, 56, 44, 37, 33, 34, 41, 53, 69, 90, 114, 140, 167, 226, 204, 180, 154, 129, 106, 85, 67, 54, 46, 43, 44, 50, 60, 72, 86, 100, 113, 123, 128, 117, 104, 90, 78, 67, 59, 54, 54, 59, 68, 82, 100, 121, 143, 167, 191, 212, 231, 246, 255, 251, 251, 245, 233, 218, 199, 178, 156, 134, 114, 96, 82, 73, 67, 66, 70, 78, 89, 103, 111, 94, 84, 80, 81, 86, 96, 109, 126, 145, 165, 185, 204, 220, 233, 241, 244, 241, 232, 217, 179, 201, 217, 229, 235, 235, 230, 220, 207, 190, 172, 154, 136, 121, 108, 99, 95, 96, 104, 120, 110, 111, 118, 130, 144, 160, 176, 192, 206, 217, 224, 227, 224, 216, 202, 184, 162, 137, 110, 44, 68, 94, 120, 145, 168, 187, 202, 212, 216, 216, 212, 203, 191, 177, 162, 148, 135, 126, 122, 136, 147, 161, 174, 186, 197, 204, 206, 205, 198, 187, 172, 152, 130, 106, 81, 58, 36, 17, 0, 5, 15, 30, 49, 71, 93, 116, 138, 157, 173, 185, 192, 195, 193, 187, 178, 166, 152, 137, 149, 164, 175, 180, 182, 179, 171, 159, 143, 125, 105, 83, 63, 44, 28, 16, 9, 7, 12, 23 };
uint8_t coordsY[NUM_LEDS]             = { 126, 120, 109, 96, 82, 69, 57, 49, 45, 45, 50, 59, 74, 92, 114, 138, 163, 188, 211, 231, 255, 248, 235, 218, 198, 175, 152, 129, 107, 89, 74, 63, 57, 56, 59, 66, 76, 88, 102, 116, 103, 88, 77, 71, 68, 70, 77, 88, 103, 121, 141, 163, 184, 205, 222, 236, 245, 249, 247, 208, 224, 235, 241, 240, 234, 223, 209, 191, 172, 152, 132, 115, 101, 90, 84, 82, 86, 95, 114, 107, 98, 98, 103, 112, 126, 142, 159, 177, 195, 210, 222, 230, 233, 230, 223, 209, 191, 168, 142, 98, 125, 151, 174, 194, 209, 219, 223, 223, 218, 208, 195, 180, 164, 148, 134, 122, 114, 112, 123, 128, 138, 151, 165, 180, 193, 203, 211, 214, 212, 206, 194, 178, 158, 134, 109, 83, 58, 35, 11, 28, 48, 71, 95, 120, 142, 163, 179, 192, 200, 203, 202, 196, 187, 175, 162, 148, 136, 133, 152, 166, 177, 186, 190, 191, 187, 178, 165, 148, 128, 107, 84, 62, 41, 24, 11, 2, 0, 28, 16, 9, 8, 13, 23, 37, 55, 75, 96, 116, 135, 151, 164, 173, 177, 177, 172, 162, 146, 153, 161, 163, 160, 152, 139, 124, 106, 87, 69, 51, 36, 25, 18, 16, 20, 29, 44, 64, 133, 106, 81, 60, 44, 32, 26, 25, 29, 38, 50, 65, 82, 99, 115, 129, 140, 147, 148, 138, 134, 131, 122, 110, 95, 80, 65, 52, 42, 36, 34, 37, 45, 59, 77, 98, 123, 149, 176, 202 };
uint8_t angles[NUM_LEDS]              = { 0, 247, 238, 229, 220, 211, 203, 194, 185, 176, 167, 159, 150, 141, 132, 123, 115, 106, 97, 88, 65, 74, 83, 92, 100, 109, 118, 127, 136, 144, 153, 162, 171, 180, 188, 197, 206, 215, 224, 232, 209, 201, 192, 183, 174, 165, 157, 148, 139, 130, 121, 113, 104, 95, 86, 77, 69, 60, 51, 28, 37, 46, 54, 63, 72, 81, 90, 98, 107, 116, 125, 134, 142, 151, 160, 169, 178, 186, 195, 172, 163, 155, 146, 137, 128, 119, 111, 102, 93, 84, 75, 67, 58, 49, 40, 31, 23, 14, 5, 246, 255, 8, 17, 26, 35, 44, 52, 61, 70, 79, 88, 96, 105, 114, 123, 132, 140, 149, 135, 126, 117, 108, 100, 91, 82, 73, 64, 56, 47, 38, 29, 20, 12, 3, 250, 241, 232, 223, 209, 218, 227, 235, 244, 253, 6, 15, 24, 33, 41, 50, 59, 68, 77, 85, 94, 103, 112, 98, 89, 80, 71, 62, 54, 45, 36, 27, 18, 10, 1, 247, 239, 230, 221, 212, 203, 195, 186, 163, 172, 180, 189, 198, 207, 216, 224, 233, 242, 251, 4, 13, 22, 31, 39, 48, 57, 66, 75, 52, 43, 34, 25, 16, 8, 254, 245, 237, 228, 219, 210, 201, 193, 184, 175, 166, 157, 149, 126, 134, 143, 152, 161, 170, 178, 187, 196, 205, 214, 222, 231, 240, 249, 2, 11, 20, 28, 37, 14, 5, 252, 243, 235, 226, 217, 208, 199, 191, 182, 173, 164, 155, 147, 138, 129, 120, 111, 103 };
uint16_t SplendidaTable [] = {         //this map i made for map Jason's real pcb layout to Splendida real pcb layout
0, 244, 242, 221, 217, 198, 191, 175, 166, 152, 140, 129, 115, 106, 89, 83,
64, 60, 38, 36, 12, 13, 35, 39, 59, 65, 82, 90, 105, 116, 128, 141, 151,
167, 174, 192, 197, 218, 220, 243, 219, 196, 193, 173, 168, 150, 142, 127,
117, 104, 91, 81, 66, 58, 40, 34, 14, 11, 255, 231, 232, 254, 10, 15, 33,
41, 57, 67, 80, 92, 103, 118, 126, 143, 149, 169, 172, 194, 195, 171, 170,
148, 144, 125, 119, 102, 93, 79, 68, 56, 42, 32, 16, 9, 253, 233, 230,
208, 207, 183, 206, 209, 229, 234, 252, 8, 17, 31, 43, 55, 69, 78, 94,
101, 120, 124, 145, 147, 146, 123, 121, 100, 95, 77, 70, 54, 44, 30, 18,
7, 251, 235, 228, 210, 205, 184, 182, 159, 158, 160, 181, 185, 204, 211,
227, 236, 250, 6, 19, 29, 45, 53, 71, 76, 96, 99, 122, 98, 97, 75, 72,
52, 46, 28, 20, 5, 249, 237, 226, 212, 203, 186, 180, 161, 157, 135, 134,
110, 111, 133, 136, 156, 162, 179, 187, 202, 213, 225, 238, 248, 4, 21, 27,
47, 51, 73, 74, 50, 48, 26, 22, 3, 247, 239, 224, 214, 201, 188, 178, 163,
155, 137, 132, 112, 109, 86, 62, 85, 87, 108, 113, 131, 138, 154, 164, 177,
189, 200, 215, 223, 240, 246, 2, 23, 25, 49, 24, 1, 245, 241, 222, 216, 199,
190, 176, 165, 153, 139, 130, 114, 107, 88, 84, 63, 61, 37};

void drawSpiralLine(uint8_t angle, int step, CRGB color)
{
  int startIndex = 0;
  int smallestAngleDifference = 255;

  // find the outermost led closest to the desired angle
  for (int i = 0; i < NUM_LEDS; i++) {
    int j = physicalToFibonacci[i];
    if (j < step) continue;
    if (!(j + step >= NUM_LEDS)) continue; // not outermost
    uint8_t a = angles[i];
    if (a == angle) startIndex = i;
    else if (angle - a > 0 && angle - a < smallestAngleDifference) {
      smallestAngleDifference = angle - a;
      startIndex = i;
    }
  }

  // draw the starting LED
  leds[SplendidaTable[startIndex]] += color;

  // draw to center from outer start
  int f = physicalToFibonacci[startIndex];
  while (f - step >= 0 && f - step < NUM_LEDS) {
    leds[SplendidaTable[fibonacciToPhysical[f]]] += color;
    f = f - step;
  }
}

void setPixelAR(uint8_t angle, uint8_t dAngle, uint8_t radius, uint8_t dRadius, CRGB color)
{
  uint16_t amax = qadd8(angle, dAngle);
  uint8_t amin = qsub8(angle, dAngle);

  uint16_t rmax = qadd8(radius, dRadius);
  uint16_t rmin = qsub8(radius, dRadius);

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint8_t o = i;

    uint8_t ao = angles[o];

    if (ao <= amax && ao >= amin) {
      uint8_t ro = physicalToFibonacci[o];

      if (ro <= rmax && ro >= rmin) {
        leds[SplendidaTable[i]] = color;
      }
    }
  }
}

void andPixelAR(uint8_t angle, uint8_t dAngle, uint8_t startRadius, uint8_t endRadius, CRGB color)
{
  uint16_t amax = qadd8(angle, dAngle);
  uint8_t amin = qsub8(angle, dAngle);

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint8_t o = i;

    uint8_t ao = angles[o];

    if (ao <= amax && ao >= amin) {
      uint8_t ro = physicalToFibonacci[o];

      if (ro <= endRadius && ro >= startRadius) {
        leds[SplendidaTable[i]] += color;
      }
    }
  }
}

void antialiasPixelAR(uint8_t angle, uint8_t dAngle, uint8_t startRadius, uint8_t endRadius, CRGB color, CRGB leds[] = leds, int _NUM_LEDS = NUM_LEDS)
{
  for (uint16_t i = 0; i < _NUM_LEDS; i++) {
    uint8_t o = i;

    uint8_t ao = angles[o];

    uint8_t adiff = min(sub8(ao,angle), sub8(angle, ao));
    uint8_t fade = map(adiff, 0, dAngle, 0, 255);
    CRGB faded = color;
    faded.fadeToBlackBy(fade);

    if (adiff <= dAngle) {
      uint8_t ro = physicalToFibonacci[o];

      if (ro <= endRadius && ro >= startRadius) {
        leds[SplendidaTable[i]] += faded;
      }
    }
  }
}

void anglePalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = angles[i];

    leds[SplendidaTable[i]] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (x * hues));
  }
}

void radiusPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t r = physicalToFibonacci[i];

    leds[SplendidaTable[i]] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (r * hues));
  }
}

void xPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = coordsX[i];

    leds[SplendidaTable[i]] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (x * hues));
  }
}

void yPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t y = coordsY[i];

    leds[SplendidaTable[i]] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (y * hues));
  }
}

void xyPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = coordsX[i];
    uint16_t y = coordsY[i];

    leds[SplendidaTable[i]] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - ((x + y) * hues));
  }
}

void angleGradientPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = angles[i];

    leds[SplendidaTable[i]] = ColorFromPalette(gCurrentPalette, beat8(speed) - (x * hues));
  }
}

void radiusGradientPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t r = physicalToFibonacci[i];

    leds[SplendidaTable[i]] = ColorFromPalette(gCurrentPalette, beat8(speed) - (r * hues));
  }
}

void xGradientPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = coordsX[i];

    leds[SplendidaTable[i]] = ColorFromPalette(gCurrentPalette, beat8(speed) - (x * hues));
  }
}

void yGradientPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t y = coordsY[i];

    leds[SplendidaTable[i]] = ColorFromPalette(gCurrentPalette, beat8(speed) - (y * hues));
  }
}

void xyGradientPalette() {
  uint16_t hues = 1;

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    uint16_t x = coordsX[i];
    uint16_t y = coordsY[i];

    leds[SplendidaTable[i]] = ColorFromPalette(gCurrentPalette, beat8(speed) - ((x + y) * hues));
  }
}

void drawAnalogClock() {
  float second = timeClient.getSeconds();
  float minute = timeClient.getMinutes() + (second / 60.0);
  float hour = timeClient.getHours() + (minute / 60.0);

  const uint8_t hourRadius = 96;
  const uint8_t minuteRadius = 192;
  const uint8_t secondRadius = 255;

  const uint8_t hourHandWidth = 8;
  const uint8_t minuteHandWidth = 7;
  const uint8_t secondHandWidth = 6;

  const float degreesPerSecond = 255.0 / 60.0;
  const float degreesPerMinute = 255.0 / 60.0;
  const float degreesPerHour = 255.0 / 12.0;

  static uint8_t hourAngle = 255 - hour * degreesPerHour;
  static uint8_t minuteAngle = 255 - minute * degreesPerMinute;
  static uint8_t secondAngle = 255 - second * degreesPerSecond;

  EVERY_N_MILLIS(100) {
    hourAngle = 64 - hour * degreesPerHour;
    minuteAngle = 64 - minute * degreesPerMinute;
    secondAngle = 64 - second * degreesPerSecond;
  }

  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);

  antialiasPixelAR(secondAngle, secondHandWidth, 0, secondRadius, CRGB::Blue);
  antialiasPixelAR(minuteAngle, minuteHandWidth, 0, minuteRadius, CRGB::Green);
  antialiasPixelAR(hourAngle, hourHandWidth, 0, hourRadius, CRGB::Red);
//  leds[0] = CRGB::Red;
}

void drawSpiralAnalogClock(uint8_t step) {
  float second = timeClient.getSeconds();
  float minute = timeClient.getMinutes() + (second / 60.0);
  float hour = timeClient.getHours() + (minute / 60.0);

  static uint8_t hourAngle = 0;
  static uint8_t minuteAngle = 0;
  static uint8_t secondAngle = 0;

  const float degreesPerSecond = 255.0 / 60.0;
  const float degreesPerMinute = 255.0 / 60.0;
  const float degreesPerHour = 255.0 / 12.0;

  EVERY_N_MILLIS(100) {
    hourAngle = 255 - hour * degreesPerHour;
    minuteAngle = 255 - minute * degreesPerMinute;
    secondAngle = 255 - second * degreesPerSecond;
  }

  drawSpiralLine(secondAngle, step, CRGB(0, 0, 2));
  drawSpiralLine(minuteAngle, step, CRGB(0, 2, 0));
  drawSpiralLine(hourAngle, step, CRGB(2, 0, 0));
}

void drawSpiralAnalogClock13() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(13);
}

void drawSpiralAnalogClock21() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(21);
}

void drawSpiralAnalogClock34() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(34);
}

void drawSpiralAnalogClock55() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(55);
}

void drawSpiralAnalogClock89() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(89);
}

void drawSpiralAnalogClock21and34() {
  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);
  drawSpiralAnalogClock(21);
  drawSpiralAnalogClock(34);
}

void drawSpiralAnalogClock13_21_and_34() {
  float second = timeClient.getSeconds();
  float minute = timeClient.getMinutes() + (second / 60.0);
  float hour = timeClient.getHours() + (minute / 60.0);

  static uint8_t hourAngle = 0;
  static uint8_t minuteAngle = 0;
  static uint8_t secondAngle = 0;

  const float degreesPerSecond = 255.0 / 60.0;
  const float degreesPerMinute = 255.0 / 60.0;
  const float degreesPerHour = 255.0 / 12.0;

  EVERY_N_MILLIS(100) {
    hourAngle = 255 - hour * degreesPerHour;
    minuteAngle = 255 - minute * degreesPerMinute;
    secondAngle = 255 - second * degreesPerSecond;
  }

  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);

  drawSpiralLine(secondAngle, 13, CRGB(0, 0, 2));
  drawSpiralLine(minuteAngle, 21, CRGB(0, 2, 0));
  drawSpiralLine(hourAngle, 34, CRGB(2, 0, 0));
}

void drawSpiralAnalogClock34_21_and_13() {
  float second = timeClient.getSeconds();
  float minute = timeClient.getMinutes() + (second / 60.0);
  float hour = timeClient.getHours() + (minute / 60.0);

  static uint8_t hourAngle = 0;
  static uint8_t minuteAngle = 0;
  static uint8_t secondAngle = 0;

  const float degreesPerSecond = 255.0 / 60.0;
  const float degreesPerMinute = 255.0 / 60.0;
  const float degreesPerHour = 255.0 / 12.0;

  EVERY_N_MILLIS(100) {
    hourAngle = 255 - hour * degreesPerHour;
    minuteAngle = 255 - minute * degreesPerMinute;
    secondAngle = 255 - second * degreesPerSecond;
  }

  fadeToBlackBy(leds, NUM_LEDS, clockBackgroundFade);

  drawSpiralLine(secondAngle, 34, CRGB(0, 0, 2));
  drawSpiralLine(minuteAngle, 21, CRGB(0, 2, 0));
  drawSpiralLine(hourAngle, 13, CRGB(2, 0, 0));
}
