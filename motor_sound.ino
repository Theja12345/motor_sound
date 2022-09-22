int sensorPin=7;
boolean val=0;
int out3 = 10;
int out4 = 12;

void setup() {
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  val=digitalRead(7);
  Serial.println(val);
  if(val==0)
  {  
  digitalWrite(out3, LOW);
  digitalWrite(out4, HIGH);
  delay(1000);
}
  else
  {
   digitalWrite(out3, LOW);
   digitalWrite(out4, LOW);
  }
}
  
