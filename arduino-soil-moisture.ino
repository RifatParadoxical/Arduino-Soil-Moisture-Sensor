#define sensor A0
#define buzzer 9

int moisture = 0;

void setup()
{
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  moisture = analogRead(sensor);
  Serial.println(moisture);
  if(moisture<500) tone(buzzer, 1000);
  else noTone(buzzer);
  delay(500);
}