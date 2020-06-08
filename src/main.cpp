#include <Arduino.h>
// inclus la librairie servo
#include <Servo.h>


Servo myservo;  // create servo object to control a servo

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Start");
  // indique que la servo est sur le pin 2 de la carte nano
  myservo.attach(2);

}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("High");
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Low");
   // wait for a second
  delay(1000);
  myservo.write(50);                  // sets the servo position according to the scaled value
  delay(550);
  myservo.write(250); 

}



