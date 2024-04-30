#include "Buzzer.h"

//d4

void setupBuzzer(uint8_t gpio)
{
    pinMode(gpio, OUTPUT);
}

void setBuzzer(uint8_t gpio, uint32_t timeout)
{
    digitalWrite(gpio, HIGH);
    delay(timeout);
    digitalWrite(gpio, LOW);
    delay(timeout);
}