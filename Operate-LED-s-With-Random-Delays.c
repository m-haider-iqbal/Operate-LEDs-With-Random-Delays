
#include <Arduino.h>
void setup() 
{
DDRB = 1 << PB4;
DDRD = 1 << PD2;
DDRC = 1 << PC1;
}
void loop() 
{
PORTB = 1 << PB4;
delay(100);
PORTB = 0 << PB4;
delay(100);
PORTD = 1 << PD2;
delay(1000);
PORTD = 0 << PD2;
delay(1000);
PORTC = 1 << PC1;
delay(500);
PORTC = 0 << PC1;
delay(500);
}

