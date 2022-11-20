#include "SerialTransfer.h"


SerialTransfer myTransfer;

struct __attribute__((packed)) STRUCT {
  char z;
  double y;
} testStruct;



void setup()
{
  Serial.begin(115200);
  myTransfer.begin(Serial);
    testStruct.z = '$';
  testStruct.y = 4.5;
}


void loop()
{
  if(myTransfer.available())
  {
    // use this variable to keep track of how many
    // bytes we've processed from the receive buffer
    uint16_t recSize = 0;
    recSize = myTransfer.rxObj(testStruct, recSize);
  }

    // use this variable to keep track of how many
  // bytes we're stuffing in the transmit buffer
  uint16_t sendSize = 0;
  ///////////////////////////////////////// Stuff buffer with struct
  sendSize = myTransfer.txObj(testStruct, sendSize);
  ///////////////////////////////////////// Send buffer
  myTransfer.sendData(sendSize);
  delay(20);
}
