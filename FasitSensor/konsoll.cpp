//Konsoll.cpp
//implementerer klassen Konsoll

#include "konsoll.h"



Konsoll::Konsoll()  //konsollkonstrukt�r utan argument
{
	konsollNr=0;
	konsollRom=Rom(); //Brukar konstrukt�r for Rom
	
}
Konsoll::Konsoll(int NyttKonsollnr,int nyttromnr,char nyttdekk) //Konstrukt�r med 3 argument
{
	konsollNr=NyttKonsollnr;
	konsollRom=Rom(nyttromnr,nyttdekk); //Brukar konstrukt�r for Rom
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