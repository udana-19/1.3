#include "mbed.h"

// Define the three LEDs on the board [cite: 134]
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

int main() {
    while (true) {
        // --- LED 1 ---
        led1 = 1;                     // Turn LED1 ON
        ThisThread::sleep_for(200ms); // Wait 200ms 
        led1 = 0;                     // Turn LED1 OFF
        ThisThread::sleep_for(200ms); // Wait 200ms before next LED 

        // --- LED 2 ---
        led2 = 1;                     // Turn LED2 ON
        ThisThread::sleep_for(200ms); 
        led2 = 0;                     // Turn LED2 OFF
        ThisThread::sleep_for(200ms);

        // --- LED 3 ---
        led3 = 1;                     // Turn LED3 ON
        ThisThread::sleep_for(200ms); 
        led3 = 0;                     // Turn LED3 OFF
        ThisThread::sleep_for(200ms);

        // --- LED 2 (Returning back) ---
        led2 = 1;                     // Turn LED2 ON again 
        ThisThread::sleep_for(200ms); 
        led2 = 0;                     // Turn LED2 OFF
        ThisThread::sleep_for(200ms);
        
        // The loop repeats, so LED1 will turn on next!
    }
}