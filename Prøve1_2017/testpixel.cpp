//testpunkt.cpp
//Testar ut funksjonane i klassen punkt

#include <iostream>
#include "punktclass.h"

using namespace std;

void main(void)
{
	punkt p1;  //Konstruktørfunksjonen utan argument blir kjørt
	punkt p2(5,1);//Konstruktørfunksjonen med argument blir kjørt
	p1.Sett(3,4);
	cout<<"Punkt 1 er: ("<<p1.Finnx()<<","<<p1.Finny()<<")"<<endl;
	cout<<"Punkt 2 er: ("<<p2.Finnx()<<","<<p2.Finny()<<")"<<endl;
	pixel Pix1;
	Pix1.sett("blue",p1); //blått punkt i posisjon (3,4)
	pixel Pix2; //blir sett til defaultverdi "black" i posisjon (1.0,1.0)
	pixel Pix3("red",p2);//raudt punkt i posisjon (5.0,1.0)
	cout<<Pix1.FinnFarge()<<" pixel i posisjon ("<<Pix1.FinnPosisjon().Finnx()<<","<<Pix1.FinnPosisjon().Finny()<<")\n";
	cout<<Pix2.FinnFarge()<<" pixel i posisjon ("<<Pix2.FinnPosisjon().Finnx()<<","<<Pix2.FinnPosisjon().Finny()<<")\n";
	cout<<Pix3.FinnFarge()<<" pixel i posisjon ("<<Pix3.FinnPosisjon().Finnx()<<","<<Pix3.FinnPosisjon().Finny()<<")\n";

}
