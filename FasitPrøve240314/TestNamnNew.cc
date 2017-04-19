//TestNamnNew.cc

#include <iostream>
#include "NamnKlasse.cc"


void main(void)
{
	Namn *N=new Namn;
	string *F=new string;
	string *E=new string;
	cout<<"Skriv inn fornamn og etternamn med mellomrom mellom:";
	cin>>*F>>*E;
	N->Sett(*F,*E);
	cout<<"Namnet er= "<<N->FinnFornamn()<<" "<<N->FinnEtternamn()<<endl;
	
}
