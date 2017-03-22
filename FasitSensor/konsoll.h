//Konsoll.h
//definerer klassen Konsoll

#include "rom.cpp"

class Konsoll{
public:
	Konsoll(); //Konstruktør utan argument
	Konsoll(int NyttKonsollnr,int nyttromnr,char nyttdekk); //Konstruktør med 3 argument
	void settKonsollnr(int NyttKonsollnr);
	void settRom(Rom NyttRom);
	int finnKonsollnr() const;
	Rom finnRom() const;

private:
	int konsollNr;
	Rom konsollRom;
};


