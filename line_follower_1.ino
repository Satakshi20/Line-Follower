const int motorRPin1 = 25;          
const int motorRPin2 = 24;
const int motorREnable = 5;

const int motorLPin1 = 28;        
const int motorLPin2 = 29;
const int motorLEnable = 6;

const int irPins[8] = {47,45,43,41,39,37,35,33};
int ir[8];
int irSensors = B00000000; 
int spd=65;

void setup(){
  Serial.begin(9600);
  
  pinMode(motorLPin1,OUTPUT);        
  pinMode(motorLPin2,OUTPUT);
  pinMode(motorLEnable,OUTPUT);
  
  pinMode(motorRPin1,OUTPUT);        
  pinMode(motorRPin2,OUTPUT);
  pinMode(motorREnable,OUTPUT);

  analogWrite(motorREnable, spd);
  analogWrite(motorLEnable, spd);

  for (int i = 0; i <= 7; i++) 
  {pinMode(irPins[i], INPUT);}

  
}

void loop(){
  for (int i = 0; i <= 7; i++){
    ir[i] = digitalRead(irPins[i]);
  }
  check();
}

void check(){
  
  if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    go();
  }
  else if(ir[0]==1 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==1 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==1 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==1 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==1 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==1 && ir[4]==1 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    go();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==1 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    go();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    go();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    go();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==0 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    go();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==1 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==0){
    leftS();
  }
  else if(ir[0]==0 && ir[1]==1 && ir[2]==1 && ir[3]==1 && ir[4]==1 && ir[5]==1 && ir[6]==1 && ir[7]==1){
    rightS();
  }
  else if(ir[0]==0 && ir[1]==0 && ir[2]==0 && ir[3]==0 && ir[4]==0 && ir[5]==0 && ir[6]==0 && ir[7]==0){
    stopme();
  }
  else{
    go();
  }
}

void rightS() 

{
     Serial.println("                         right motor forward (spin)");
     analogWrite(motorREnable, 0);
     digitalWrite(motorRPin1, HIGH);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLEnable, spd);
     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorLPin2,HIGH);
  
}


void leftS()  //turn left
{
     Serial.println("                         left  motor forward (spin)");
     analogWrite(motorREnable, spd);
     digitalWrite(motorRPin1, LOW);
     digitalWrite(motorRPin2, HIGH);
     
     analogWrite(motorLEnable, 0);
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorLPin2, LOW);
  
}

void go()
{
    Serial.println("                         forward ");
     analogWrite(motorREnable, spd);
     digitalWrite(motorRPin1, HIGH);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLEnable, spd);
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorLPin2, LOW);
  
}

void stopme()
{
     Serial.println("                         stop");
     analogWrite(motorREnable, spd);
     digitalWrite(motorRPin1, LOW);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLEnable, spd);
     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorLPin2, LOW);
  
}
