#include "sensor.cpp"
#include <iostream>
using namespace std;

void Utskrift(Sensor s);

void main(void)
{	
	Rom srom,konsollrom;

	srom.settRomnr(4);  //sensorrom
	srom.settDekk('B');

	//Rom srom(4,'B');  //med konstruktør

	konsollrom.settRomnr(1); //konsollrom
	konsollrom.settDekk('A');
	
	//Rom konsollrom(1,'A') //med konstruktør

	Konsoll k;
	k.settKonsollnr(3);
	k.settRom(konsollrom);

	//Konsoll k(3,1,'A'); //konstruktør

	Sensor s1;

	//Sensor s1(1,'T',3,1,'A',4,'B');  //Konstruktør
	s1.settSensornr(1);
	s1.settType('T');
	s1.settRom(srom);
	s1.settKonsoll(k);
	Utskrift(s1);
	//Alternativ: bruk av konstruktørar:
	//Sensor(int NysensorNr,char NyType, int NyKnr, int NyKRnr, char NyKRdekk, int SRnr,char SRdekk);
	Sensor s3(3,'R', 1,2, 'A', 10,'C');
	//Ny utskrift
	Utskrift(s3);
	
	
}

void Utskrift(Sensor s)
{
	cout<<"Sensor nr. "<<s.finnSensornr();
	cout<<" er av type "<<s.finnType();
	cout<<", står i rom "<<s.finnRom().finnDekk();
	cout<<s.finnRom().finnRomnr();
	cout<<" og blir styrt av konsoll nr. ";
	cout<<s.finnKonsoll().finnKonsollnr();
	cout<<" som står i rom ";
	cout<<s.finnKonsoll().finnRom().finnDekk();
	cout<<s.finnKonsoll().finnRom().finnRomnr()<<endl;
}