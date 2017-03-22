//rom.cpp
//implementerer klassen Rom

#include "rom.h"

Rom::Rom()
{
	romnr=0;
	dekk='X';
}
Rom::Rom(int defaultromnr, char defaultdekk)
{
	romnr=defaultromnr;
	dekk=defaultdekk;
}
void Rom::settRomnr(int NyttRomnr)
{
	romnr=NyttRomnr;
}
void Rom::settDekk(char NyttDekk)
{
	dekk=NyttDekk;
}
int Rom::finnRomnr() const
{
	return romnr;
}
char Rom::finnDekk() const
{
	return dekk;
}

