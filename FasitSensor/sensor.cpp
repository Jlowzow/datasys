//Sensor.cpp
//implementerer klassen Sensor


#include "sensor.h"


Sensor::Sensor() //Konstruktør utan arg
{
	sensorNr=0;
	sensorRom=Rom();
	sensorKonsoll=Konsoll();
	type='Z';
}
Sensor::Sensor(int NysensorNr,char NyType, int NyKnr, int NyKRnr, char NyKRdekk, int SRnr,char SRdekk)
{
	sensorNr=NysensorNr;
	type=NyType;
	sensorRom=Rom(SRnr,SRdekk);//Rom-konstruktøren
	sensorKonsoll=Konsoll(NyKnr,NyKRnr,NyKRdekk);
}
void Sensor::settSensornr(int NyttSensornr)
	{
		sensorNr=NyttSensornr;
	}
void Sensor::settRom(Rom NyttRom)
{
	sensorRom=NyttRom;
}
void Sensor::settKonsoll(Konsoll NyttKonsoll)
{
	sensorKonsoll=NyttKonsoll;
}
void Sensor::settType(char NyType)
{
	type=NyType;
}
int Sensor::finnSensornr() const
{
	return sensorNr;
}
char Sensor::finnType() const
{
	return type;
}
Rom Sensor::finnRom() const
{
	return sensorRom;
}
Konsoll Sensor::finnKonsoll() const
{
	return sensorKonsoll;
}