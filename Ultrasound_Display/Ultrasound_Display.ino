#include <LiquidCrystal.h>

// LCD pins <--> Arduino pins
const int RS = 11, EN = 12, D4 = 2, D5 = 3, D6 = 4, D7 = 5;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor

void setup()
{

  Serial.begin(9600); // Starting Serial Terminal
  
  lcd.begin(16, 2); // set up number of columns and rows

  lcd.setCursor(0, 0);         // move cursor to   (0, 0)
  lcd.print("Hassan");        // print message at (0, 0)
  lcd.setCursor(2, 1);         // move cursor to   (2, 1)
  lcd.print("IM Project"); // print message at (2, 1)
delay(3000);


}


void display_sensor_value(long distance){
  lcd.clear();
    lcd.setCursor(0, 0);         // move cursor to   (0, 0)
  lcd.print("Distance in cm");        // print message at (0, 0)
  lcd.setCursor(2, 1);         // move cursor to   (2, 1)
  lcd.print(distance); // print message at (2, 1)
}


void ultrasound_sense(){
     long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
   display_sensor_value(cm);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}


void loop()
{
  ultrasound_sense();
  
}
