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
  mapeado = map(sensorValue, 0, 1023, 0, 15);

  // print out the value you read:
  Serial.println(mapeado);
  for (int i = 0; i <= 5; i++) {
  digitalWrite(i, (mapeado >> (i - 2)) & 1);
}
  delay(10); // Delay a little bit to improve simulation performance
}
