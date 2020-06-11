//const int transistorPin = 9;    // connected to the base of the transistor
//


// void setup() {
//   // set  the transistor pin as output:
//   pinMode(transistorPin, OUTPUT);
// }
// 
// void loop() {
//   // read the potentiometer:
//   int sensorValue = analogRead(A0);
//   // map the sensor value to a range from 0 - 255:
//   int outputValue = map(sensorValue, 0, 1023, 0, 255);
//   // use that to control the transistor:
//   analogWrite(transistorPin, outputValue);
// }

//int btnState = 0;
//int state = 0;
//int atstart = 0;
//
//void setup(){
//  Serial.begin(9600);
//  pinMode(4, INPUT);
//  pinMode(9, OUTPUT);
//  digitalWrite(9, LOW);
//  }
//
//  void loop(){
//    btnState = digitalRead(4);
//
//    if(btnState != atstart && btnState == LOW){
//      if(state == 0){
//        digitalWrite(9, HIGH);
//        Serial.println("On");
//        state = 1;
//      }
//      else{
//        digitalWrite(9, LOW);
//        Serial.println("Off");
//        state = 0;
//        }
//      }
//      atstart = btnState;
//      delay(50);
//      }
