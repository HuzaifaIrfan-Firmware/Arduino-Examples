#include "SerialTransfer.h"


SerialTransfer myTransfer;

struct __attribute__((packed)) STRUCT {
  char z;
  double y;
} testStruct;

char arr[] = "hello";


void setup()
{
  Serial.begin(115200);
  myTransfer.begin(Serial);

  testStruct.z = '$';
  testStruct.y = 4.5;
}


void loop()
{
  // use this variable to keep track of how many
  // bytes we're stuffing in the transmit buffer
  uint16_t sendSize = 0;

  ///////////////////////////////////////// Stuff buffer with struct
  sendSize = myTransfer.txObj(testStruct, sendSize);

  ///////////////////////////////////////// Stuff buffer with array
  sendSize = myTransfer.txObj(arr, sendSize, strlen(arr));

  ///////////////////////////////////////// Send buffer
  myTransfer.sendData(sendSize);
  delay(500);
}
