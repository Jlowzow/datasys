//TabellmedNamn.cc
/*d)	Lag eit nytt hovedprogram der du definerer ein tabell
med 3 objekt av klassen Namn, fyller ut fornamn og etternamn 
for alle objekta og tar utskrift av fullt namn 
for alle objekta, sorterer namna alfabetisk og tar ny utskrift
av alle namna
*/
#include <iostream>
#include "NamnKlasse.cc"

Namn LagNamn();
void SkrivUt(Namn Y);
void Sorter(Namn *n, int a);

void main(void)
{
	const int Antal = 3;
	Namn N[Antal];
	for(int i=0;i<Antal;i++)N[i]=LagNamn();
	Sorter(N, Antal);
	for (int i = 0; i<Antal; i++)SkrivUt(N[i]);
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

void ByttOm(Namn &n1, Namn &n2)
{
	Namn hjelp;
	hjelp = n1;
	n1 = n2;
	n2 = hjelp;
}
void Sorter(Namn *n, int a)
{
	for (int i = 0; i < a - 1; i++)
		for (int j = i + 1; j < a; j++)
			if ((n[i].FinnEtternamn() > n[j].FinnEtternamn()) || ((n[i].FinnEtternamn() == n[j].FinnEtternamn()) && (n[i].FinnFornamn() > n[j].FinnFornamn())))
				ByttOm(n[i], n[j]);
			
}