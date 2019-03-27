#ifndef LEDman_H
#define LEDman_H
#include <Arduino.h>
#include <FastLED.h>
#include "headers.h"


class LEDman {
  public:
    void setup();
    void loop();
    void strobe_all();
    void strobe_parts();
    void cylon();
    void solid_red();
    void chasers();
    void identify();
    void rainbow();
    void discoGlitter();
    void addGlitter( fract8 chanceOfGlitter);
    void fadeall(uint8_t fade_all_speed);

    CRGB leds[NUM_STRIPS * NUM_LEDS_PER_STRIP];
    ArduinoTapTempo tapTempo;
    OneButton button;
    int ledMode ;
    enum class Patterns {cylon, strobe_parts, strobe_all, rainbow, chasers, discoGlitter};
    Patterns pattern ;
}
#endif
