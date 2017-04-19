//TestNamn.cpp

#include <iostream>
#include <string>
#include "Telefonklasse.cc"
using namespace std;

void main(void)
{
	telefon T;
	cout << T.FinnNamn().FinnFornamn() << " " << T.FinnNamn().FinnEtternamn() << " " << T.FinnNummer() << endl;
	Namn N;
	telefon T2(N, "23456789");
	cout << T2.FinnNamn().FinnFornamn() << " " << T2.FinnNamn().FinnEtternamn() << " " << T2.FinnNummer() << endl;
	string F,E;
	cout<<"Skriv inn fornamn og etternamn med mellomrom mellom:";
	cin>>F>>E;
	N.Sett(F,E);
	telefon T3(N, "34567890");
	cout << T3.FinnNamn().FinnFornamn() << " " << T3.FinnNamn().FinnEtternamn() << " " << T3.FinnNummer() << endl;
	T3.Sett(N, "45678901");
	cout << T3.FinnNamn().FinnFornamn() << " " << T3.FinnNamn().FinnEtternamn() << " " << T3.FinnNummer() << endl;

}
