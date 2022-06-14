#define oneBTN    10
#define tenBTN    11
#define fifBTN    12
#define hundBTN   13
#define fillera   6 
#define fillerb   5

//Array used to store button pin values
int buttons[] = {oneBTN, tenBTN, fifBTN, hundBTN};

//Array used to set previous button states
int prevButtonState[] = {HIGH, HIGH, HIGH, HIGH};

//Determine how many buttons are being used
const int NUMBUTTONS = sizeof buttons / sizeof buttons[0];

//Arrays to hold temp button info
int buttonCheck[NUMBUTTONS];
int buttonRead[NUMBUTTONS];
int buttonState[NUMBUTTONS];

//Debounce Button Values
long prevDebounceTime = 0;
long debounceDelay = 50;

void setup()
{
  //setup Arduino Serial Port
  Serial.begin(115200);
  Serial.println("Start of Sketch");
  
  //Set buttons as inputs
  for (int i=0; i<NUMBUTTONS; i++) {
    pinMode(buttons[i], INPUT);
    digitalWrite(buttons[i], HIGH);
  }
}

int counter=0;

void checkStates(){


if(buttonCheck[0]){
  buttonCheck[0]=0;
  counter++;
}

if(buttonCheck[1]){
  buttonCheck[1]=0;
  counter--;
}

  if(buttonCheck[2]){
  buttonCheck[2]=0;
  counter=counter+10;
}

if(buttonCheck[3]){
  buttonCheck[3]=0;
  counter=counter-10;
}


}

void loop() 
{
  unsigned int time = 0;
  checkPhysButtons();
  checkStates();
  
//  //Serial.print("1 Button: ");
//  Serial.print(buttonCheck[0]);
//  //Serial.print("10 Button: ");
//  Serial.print(buttonCheck[1]);
//  //Serial.print("50 Button: ");
//  Serial.print(buttonCheck[2]);
//  //Serial.print("100 Button: ");
//  Serial.println(buttonCheck[3]);

Serial.println(counter);

delay(10);

}  
  
void checkPhysButtons()
{
  int j;
  
  for (j=0; j < NUMBUTTONS; j++) {
    buttonRead[j] = digitalRead(buttons[j]);
    
    if(buttonRead[j] != prevButtonState[j]) {
      prevDebounceTime = millis();
    }
    
    if ((millis() - prevDebounceTime) > debounceDelay) {
      if (buttonRead[j] != buttonState[j]) {
        buttonState[j] = buttonRead[j];
        if (buttonState[j] == LOW) {
          buttonCheck[j] = 1;
        }else{
          buttonCheck[j] = 0;
        }
      }
    }
    prevButtonState[j] = buttonRead[j];
  }
}
