#include "LedBlinking.h"

void setupLed(uint8_t gpio)
{
    pinMode(gpio, OUTPUT);
}

void blinkLed(uint8_t gpio, uint32_t timeout)
{
    digitalWrite(gpio, HIGH);
    delay(timeout);
    digitalWrite(gpio, LOW);
    delay(timeout);
}