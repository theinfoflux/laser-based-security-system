
int Ldr = 4;
int Laser = 3;
int buzzer = 2;

void setup() 
{   Serial.begin(9600);    
    pinMode(Laser,OUTPUT);
    pinMode(Ldr,INPUT);
    pinMode(buzzer,OUTPUT);
    
}

 void loop()
{ 
  digitalWrite(Laser,HIGH);

  if(digitalRead(Ldr)==LOW)
 {
  digitalWrite(buzzer,LOW);
 }
else
{
  digitalWrite(buzzer,HIGH);
  delay(5000);
}
}
