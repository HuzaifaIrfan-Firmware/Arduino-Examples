#include <OnewireKeypad.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

char KEYS[] = {
  '1', '4', '7', '*',
  '2', '5', '8', '0',
  '3', '6', '9', '#',
  'A', 'B', 'C', 'D'
};

OnewireKeypad <Print, 16 > KP2(Serial, KEYS, 4, 4, A0, 4700, 1000 );

void setup () {

  lcd.begin(16, 2);

  Serial.begin(9600);

  KP2.SetKeypadVoltage(5.0);

}

void loop()

{

  char Key;

  byte KState = KP2.Key_State();

  if (KState == PRESSED)

  {

    if ( Key = KP2.Getkey() )

    {

      Serial << "Key: " << Key << "\n";

      lcd.setCursor(0, 0);

      lcd.clear();

      lcd.print(Key);

    }

  }

}