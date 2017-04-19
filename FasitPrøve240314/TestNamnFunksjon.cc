//TestNamnFunksjon.cpp

#include <iostream>
#include "NamnKlasse.cc"

Namn LagNamn();
void SkrivUt(Namn Y);

void main(void)
{
	Namn N;
	N=LagNamn();
	SkrivUt(N);
}

Namn LagNamn()
{	
	Namn X;
	string F,E;
	cout<<"Skriv inn fornamn og etternamn med mellomrom mellom:";
	cin>>F>>E;
	X.Sett(F,E);
	return X;
}
void SkrivUt(Namn Y)
{
	cout<<"Namnet er= "<<Y.FinnFornamn()<<" "<<Y.FinnEtternamn()<<endl;
	
}
