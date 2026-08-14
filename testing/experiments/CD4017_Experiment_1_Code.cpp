#include <Arduino.h>

const int timer_pin = 4;
const int delay_time = 500;
int output_state;

void setup() {

    pinMode(timer_pin, OUTPUT);
    output_state = LOW;
    digitalWrite(timer_pin, output_state);

}

void loop() {

    output_state = !output_state;
    digitalWrite(timer_pin, output_state);
    delay(delay_time);
    
}