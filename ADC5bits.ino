int sensorValue = 0;
int mapeado=0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  mapeado = map(sensorValue, 0, 1023, 0, 31);

  // print out the value you read:
  Serial.println(mapeado);
  delay(10); // 
}
