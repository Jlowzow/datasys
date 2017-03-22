//Sensor.h
//definerer klassen Sensor


#include "konsoll.cpp"


class Sensor{
public:
	Sensor();//Konstruktør utan argument
	Sensor(int NysensorNr,char NyType, int NyKnr, int NyKRnr, char NyKRdekk, int SRnr,char SRdekk);
	void settSensornr(int NyttSensornr);
	void settRom(Rom NyttRom);
	void settKonsoll(Konsoll NyttKonsoll);
	void settType(char NyType);
	int finnSensornr() const;
	char finnType() const;
	Rom finnRom() const;
	Konsoll finnKonsoll() const;


private:
	int sensorNr;
	Rom sensorRom;
	Konsoll sensorKonsoll;
	char type;
};


