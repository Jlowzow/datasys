//Konsoll.h
//definerer klassen Konsoll

#include "rom.cpp"

class Konsoll{
public:
	Konsoll(); //Konstrukt�r utan argument
	Konsoll(int NyttKonsollnr,int nyttromnr,char nyttdekk); //Konstrukt�r med 3 argument
	void settKonsollnr(int NyttKonsollnr);
	void settRom(Rom NyttRom);
	int finnKonsollnr() const;
	Rom finnRom() const;

private:
	int konsollNr;
	Rom konsollRom;
};


