void setup(){
  Serial.begin(9600);
  int TopPin = A0;
  int RightPin = A1;
  int BottomPin = A2;
  int LeftPin = A3;
  
  pinMode(TopPin, INPUT);
  pinMode(RightPin, INPUT);
  pinMode(BottonPin, INPUT);
  pinMode(LeftPin, INPUT);
  int TopValue, RightValue, BottomValue, LeftValue, TopLed, RightLed, BottomLed, LeftLed;
}

void loop(){
  TopValue = analogRead(TopPin)
  RightValue = analogRead(RightPin)
  BottomValue = analogRead(BottomPin)
  LeftValue = analogRead(LeftPin)

  if(TopValue<100){
   digitalWrite(TopLed, HIGH)
  }
  else{
  digitalWrite(TopLed, LOW)
  }
  if(BottomValue<100){
	digitWrite(BottomLed, HIGH)
  }
}
