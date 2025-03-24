#include "../inc/led.h"
#include <Arduino.h>

void init_led1(void)
{
    pinMode(PIN_FLASHLIGHT, OUTPUT);
}

void led1(uint16_t status)
{
    if(status == 1)
    {
        digitalWrite(PIN_FLASHLIGHT, HIGH);
    }
    else
    {
        digitalWrite(PIN_FLASHLIGHT, LOW);
    }
}
