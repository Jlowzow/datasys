
#include "punktclass.h"


punkt::punkt() //Konstruktør utan argument
{
	x=0;
	y=0;
}

punkt::punkt(double Nyx,double Nyy) //Konstruktør med 2 argument
{
	x=Nyx;
	y=Nyy;
}

void punkt::Sett(double NyX, double NyY)
{
	x=NyX;
	y=NyY;
}

double punkt::Finnx()
{
	return x;
}

double punkt::Finny()
{
	return y;
}

double punkt::Origoavstand()
{
	double r=sqrt(x*x+y*y);
	return r;
}

double punkt::AvstandFra(punkt DetAndre)
{
	double X2=DetAndre.x;
	double Y2=DetAndre.y;
	double d=sqrt((x-X2)*(x-X2)+(y-Y2)*(y-Y2));
	return d;
}

pixel::pixel(string NyFarge,punkt NyttPunkt)
{
	farge=NyFarge;
	posisjon=NyttPunkt;
}
void pixel::sett(string NyFarge,punkt Nyttpunkt)
{
	farge=NyFarge;
	posisjon=Nyttpunkt;
}
punkt pixel::FinnPosisjon() const
{
return posisjon;
}
string pixel::FinnFarge() const
{
	return farge;
}