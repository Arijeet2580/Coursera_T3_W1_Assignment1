int button1=11, byte button2=12,byte led=13, byte buttonState1=0,byte buttonState2=0;
void setup(){
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
  buttonState1= digitalRead(button1);  
  buttonState2= digitalRead(button2);
  if(buttonState1 == LOW || buttonState2 == LOW)
  {
    delay(1000);
    digitalWrite(led,HIGH);
    delay(1000);
  }
  else
  {
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
  }
}
