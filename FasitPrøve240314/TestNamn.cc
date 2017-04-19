//TestNamn.cpp

#include <iostream>
#include <string>
using namespace std;
#include "NamnKlasse.cpp"


void main(void)
{
	Namn N;
	string F,E;
	cout<<"Skriv inn fornamn og etternamn med mellomrom mellom:";
	cin>>F>>E;
	N.Sett(F,E);
	cout<<"Namnet er= "<<N.FinnFornamn()<<" "<<N.FinnEtternamn()<<endl;
	
}
