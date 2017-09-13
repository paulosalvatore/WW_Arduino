/*
 Name:		WW_Arduino.ino
 Created:	9/12/2017 8:11:08 PM
 Author:	Paulo Salvatore
*/

int sensorCisterna = 3;

int sensorCaixa = 2;

int rele = 6;

void setup()
{
	pinMode(sensorCisterna, INPUT);

	pinMode(sensorCaixa, INPUT);

	pinMode(rele, OUTPUT);

	Serial.begin(9600);
}

void LigarBomba()
{
	digitalWrite(rele, LOW);
}

void DesligarBomba()
{
	digitalWrite(rele, HIGH);
}

void loop()
{
	bool leituraCisterna = !digitalRead(sensorCisterna);

	bool leituraCaixa = digitalRead(sensorCaixa);

	if (leituraCaixa && leituraCisterna)
	{
		LigarBomba();
	}
	else
	{
		DesligarBomba();
	}

	delay(1000);
}
