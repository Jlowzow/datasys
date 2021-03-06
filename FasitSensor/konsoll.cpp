//Konsoll.cpp
//implementerer klassen Konsoll

#include "konsoll.h"



Konsoll::Konsoll()  //konsollkonstruktÝr utan argument
{
	konsollNr=0;
	konsollRom=Rom(); //Brukar konstruktÝr for Rom
	
}
Konsoll::Konsoll(int NyttKonsollnr,int nyttromnr,char nyttdekk) //KonstruktÝr med 3 argument
{
	konsollNr=NyttKonsollnr;
	konsollRom=Rom(nyttromnr,nyttdekk); //Brukar konstruktÝr for Rom
}
void Konsoll::settKonsollnr(int NyttKonsollnr)
{
	konsollNr=NyttKonsollnr;
}
void Konsoll::settRom(Rom NyttRom)
{
	konsollRom=NyttRom;
}
int Konsoll::finnKonsollnr() const
{
	return konsollNr;
}
Rom Konsoll::finnRom() const
{
	return konsollRom;
}