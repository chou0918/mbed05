#include "mbed.h"


DigitalOut blueLED(LED3);

Timer t;

float interval = 0.5;

float previous_time = 0;

int led_state = 0;

int main(){

  t.start();

  while(1){

    
    float current_time = t.read();  

    if(current_time - previous_time > interval){
        previous_time = current_time;
        if(led_state == 0){
            led_state = 1;    
        } else {
            led_state = 0;
        }
    }
    blueLED = led_state;
  }

}