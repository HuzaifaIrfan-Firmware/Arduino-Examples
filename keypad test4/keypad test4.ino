#include <OnewireKeypad.h>


char KEYS0[] = {
  '1', '4', '7', '*'
};

char KEYS1[] = {
  '2', '5', '8', '0'
};

char KEYS2[] = {
  '3', '6', '9', '#'
};

char KEYS3[] = {
  'A', 'B', 'C', 'D'
};

OnewireKeypad <Print, 4 > KP0(Serial, KEYS0, 1, 4, A0, 1000, 1000 );
OnewireKeypad <Print, 4 > KP1(Serial, KEYS1, 1, 4, A1, 1000, 1000 );
OnewireKeypad <Print, 4 > KP2(Serial, KEYS2, 1, 4, A2, 1000, 1000 );
OnewireKeypad <Print, 4 > KP3(Serial, KEYS3, 1, 4, A3, 1000, 1000 );

void setup () {
  Serial.begin(9600);

  KP0.SetKeypadVoltage(5.0);
  KP1.SetKeypadVoltage(5.0);
  KP2.SetKeypadVoltage(5.0);
  KP3.SetKeypadVoltage(5.0);

}

void loop()

{

  char Key;
  if (KP0.Key_State() == PRESSED)
  {
    if ( Key = KP0.Getkey() )
    {
      Serial << "Key: " << Key << "\n";
    }
  }

    if (KP1.Key_State() == PRESSED)
  {
    if ( Key = KP1.Getkey() )
    {
      Serial << "Key: " << Key << "\n";
    }
  }

    if (KP2.Key_State() == PRESSED)
  {
    if ( Key = KP2.Getkey() )
    {
      Serial << "Key: " << Key << "\n";
    }
  }

  if (KP3.Key_State() == PRESSED)
  {
    if ( Key = KP3.Getkey() )
    {
      Serial << "Key: " << Key << "\n";
    }
  }

}