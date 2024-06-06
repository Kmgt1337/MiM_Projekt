#include "LedBlinking.h"
#include "Buzzer.h"
#include "Timer.h"
#include "ADXL345.h"

void setup(void) 
{
  setupBuzzer();
  setupLed();
  setupSensor();
}

void loop(void) 
{

}