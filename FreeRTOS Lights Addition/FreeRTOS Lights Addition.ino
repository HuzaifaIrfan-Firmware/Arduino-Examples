#include <Arduino_FreeRTOS.h>

// define two tasks for Blink & AnalogRead

/*--------------------------------------------------*/
/*---------------------- Tasks ---------------------*/
/*--------------------------------------------------*/

void TaskBlink(void *pvParameters)  // This is a task.
{
  (void) pvParameters;

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, LEONARDO, MEGA, and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  
  The MICRO does not have a LED_BUILTIN available. For the MICRO board please substitute
  the LED_BUILTIN definition with either LED_BUILTIN_RX or LED_BUILTIN_TX.
  e.g. pinMode(LED_BUILTIN_RX, OUTPUT); etc.
  
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/

  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(2, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(2, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 15 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 15 / portTICK_PERIOD_MS ); // wait for one second
  }
}



void TaskBlink2(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(3, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(3, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 31 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(3, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 31 / portTICK_PERIOD_MS ); // wait for one second
  }
}


void TaskBlink3(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(4, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(4, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 62 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(4, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 62 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink4(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(5, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(5, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 125 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 125 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink5(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(6, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(6, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 250 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(6, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 250 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink6(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(7, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(7, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 500 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(7, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 500 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink7(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(8, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(8, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 1000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(8, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 1000 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink8(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(9, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(9, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 2000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(9, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 2000 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink9(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(10, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(10, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 4000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(10, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 4000 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink10(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(11, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(11, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 8000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(11, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 8000 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink11(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(12, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(12, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 16000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(12, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 16000 / portTICK_PERIOD_MS ); // wait for one second
  }
}

void TaskBlink12(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  // initialize digital LED_BUILTIN on pin 13 as an output.
  pinMode(13, OUTPUT);

  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(13, LOW);   // turn the LED on (LOW is the voltage level)
    vTaskDelay( 32000 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(13, HIGH);    // turn the LED off by making the voltage LOW
    vTaskDelay( 32000 / portTICK_PERIOD_MS ); // wait for one second
  }
}


// void TaskAnalogRead(void *pvParameters)  // This is a task.
// {
//   (void) pvParameters;
  
// /*
//   AnalogReadSerial
//   Reads an analog input on pin 0, prints the result to the serial monitor.
//   Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
//   Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

//   This example code is in the public domain.
// */

//   for (;;)
//   {
//     // read the input on analog pin 0:
//     int sensorValue = analogRead(A0);
//     // print out the value you read:
//     Serial.println(sensorValue);
//     vTaskDelay(1);  // one tick delay (15ms) in between reads for stability
//   }
// }

// the setup function runs once when you press reset or power the board
void setup() {
  
  // // initialize serial communication at 9600 bits per second:
  // Serial.begin(115200);
  
  // while (!Serial) {
  //   ; // wait for serial port to connect. Needed for native USB, on LEONARDO, MICRO, YUN, and other 32u4 based boards.
  // }

  // Now set up two tasks to run independently.
  xTaskCreate(
    TaskBlink
    ,  "Blink"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );
  xTaskCreate(
    TaskBlink2
    ,  "Blink2"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );
      xTaskCreate(
    TaskBlink3
    ,  "Blink3"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );

          xTaskCreate(
    TaskBlink4
    ,  "Blink4"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink5
    ,  "Blink5"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink6
    ,  "Blink6"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink7
    ,  "Blink7"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink8
    ,  "Blink8"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink9
    ,  "Blink9"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink10
    ,  "Blink10"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


      xTaskCreate(
    TaskBlink11
    ,  "Blink11"   // A name just for humans
    ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    ,  NULL );


    //   xTaskCreate(
    // TaskBlink12
    // ,  "Blink12"   // A name just for humans
    // ,  64  // This stack size can be checked & adjusted by reading the Stack LOWwater
    // ,  NULL
    // ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the LOWest, and 0 being the lowest.
    // ,  NULL );


  // xTaskCreate(
  //   TaskAnalogRead
  //   ,  "AnalogRead"
  //   ,  128  // Stack size
  //   ,  NULL
  //   ,  1  // Priority
  //   ,  NULL );

  // Now the task scheduler, which takes over control of scheduling individual tasks, is automatically started.
}

void loop()
{
  // Empty. Things are done in Tasks.
}
