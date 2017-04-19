//Fri.cpp
//Testar ut funksjonane i klassen punkt
//Alle variablar i det frie lageret

#include <iostream>
#include "punktclass.cpp"

using namespace std;

void main(void)
{
	punkt *p1=new punkt;  
	punkt *p2=new punkt(5,1);
	p1->Sett(3,4);
	cout<<"Punkt 1 er: ("<<p1->Finnx()<<","<<p1->Finny()<<")"<<endl;
	cout<<"Punkt 2 er: ("<<p2->Finnx()<<","<<p2->Finny()<<")"<<endl;
	pixel *Pix1=new pixel;
	Pix1->sett("blue",*p1); 
	pixel *Pix2=new pixel; 
	pixel *Pix3=new pixel("red",*p2);
	cout<<Pix1->FinnFarge()<<" pixel i posisjon ("<<Pix1->FinnPosisjon().Finnx()<<","<<Pix1->FinnPosisjon().Finny()<<")\n";
	cout<<Pix2->FinnFarge()<<" pixel i posisjon ("<<Pix2->FinnPosisjon().Finnx()<<","<<Pix2->FinnPosisjon().Finny()<<")\n";
	cout<<Pix3->FinnFarge()<<" pixel i posisjon ("<<Pix3->FinnPosisjon().Finnx()<<","<<Pix3->FinnPosisjon().Finny()<<")\n";

}
