//punktclass.cpp
//Definerer ein klasse punkt
//Med samanlikningsfunksjon til eit anna punkt
//og avstandsfunksjon til eit anna punkt
//

#include <cmath>


class punkt{
public:
	punkt(); //Konstruktør utan argument
	void Sett(double NyX, double NyY);
	double Finnx();
	double Finny();
	double Origoavstand();
    double AvstandFra(punkt DetAndre);
private:
	double x;
	double y;
};

punkt::punkt() //Konstruktør utan argument
{
	x=0;
	y=0;
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


