#include <Arduino.h>

#define PWM_PIN  3

#define MAX_PERCENT 0.8
#define MAX_PWM (255 * MAX_PERCENT)
#define DELAY    100


void setup()
{
   pinMode ( PWM_PIN, OUTPUT );
   digitalWrite (PWM_PIN, HIGH);
   delayMicroseconds (1100);
   digitalWrite (PWM_PIN, LOW);
   delay (100);
}

void loop()
{
   for ( int i = 0; i < MAX_PWM; i++ )
   {
      analogWrite (PWM_PIN, i);
      delay(DELAY);
   }
   delay (2000);
   digitalWrite (PWM_PIN, LOW);
}
