//testpunktmedFunksjon.cpp


#include <iostream>
#include "punktclass.cpp"

using namespace std;
void Utskrift(punkt p);
void Utskrift(pixel P);

void main(void)
{
	punkt p1;  
	punkt p2(5,1);
	p1.Sett(3,4);

	cout<<"Punkt 1 er:";
	Utskrift(p1);
	cout<<"Punkt 2 er:";
	Utskrift(p2);

	pixel Pix1;
	Pix1.sett("blue",p1); 
	pixel Pix2; 
	pixel Pix3("red",p2);

	Utskrift(Pix1);
	Utskrift(Pix2);
	Utskrift(Pix3);

}

void Utskrift(punkt p)
{
	cout<<"("<<p.Finnx()<<","<<p.Finny()<<")"<<endl;
}

void Utskrift(pixel P)
{
	cout<<P.FinnFarge()<<" pixel i posisjon ("<<P.FinnPosisjon().Finnx()<<","<<P.FinnPosisjon().Finny()<<")\n";
}