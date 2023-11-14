int sensorValue = 0;//variable para leer sensor o potenciometro como divisor de voltaje
int mapeado=0;//variable para guardar la varible mapeada a la cantidad de bits corrrespondientes

void setup()
{
  pinMode(A0, INPUT);//se lee el sensor en el analógico A0
  pinMode(0, OUTPUT);//Input to activate relay 1 bit menos significativo
  pinMode(1, OUTPUT);//Input to activate relay 2
  pinMode(2, OUTPUT);//Input to activate relay 3
  pinMode(3, OUTPUT);//Input to activate relay 4 bit más significativo

 }

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  mapeado = map(sensorValue, 0, 1023, 0, 15);//se mapea a 15 para 4bits 

 
  for (int i = 0; i <= 4; i++) {
  digitalWrite(i, (mapeado >> (i )) & 1);
	}
  
  delay(1); // delaytalvez inecesario
}
