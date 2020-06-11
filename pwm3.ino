const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;
int timer = 800;
int powa = 255;


void setup() {
 pinMode(motorPin, OUTPUT);
 pinMode(switchPin, INPUT);
}

void loop(){

  
 switchState = digitalRead(switchPin);
 
 if (switchState == HIGH) {
   
    for(int i = 0; i <= 60000; i++){
      if(i < 1000){
        analogWrite(motorPin, powa);
        delay(timer);
        analogWrite(motorPin, 0);
      }else if(i == 10000 && i < 20000){
       analogWrite(motorPin, powa);
       delay(timer - 100);
       analogWrite(motorPin, 0); 
     }else if(i == 20000 && i < 30000){
      analogWrite(motorPin, powa);
      delay(timer -200);
      analogWrite(motorPin, 0);
    }else if(i == 30000 && i < 40000){
      analogWrite(motorPin, powa);
      delay(timer - 300);
      analogWrite(motorPin, 0);
    }else if(i == 40000 && i < 50000){
      analogWrite(motorPin, powa);
      delay(timer -350);
      analogWrite(motorPin, 0);
    }else if(i == 50000 && i < 60000){
      analogWrite(motorPin, powa);
      delay(timer - 375);
      analogWrite(motorPin, 0);
    }else {
      analogWrite(motorPin, powa);
      delay(timer -385);
      analogWrite(motorPin, 0);
 }
}
 }else{
  analogWrite(motorPin, 0);
 }
}
