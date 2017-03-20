//Elevklasse_med_tabell_test.cc
#include <iostream>
#include <string>
#include "elevoppg1.cpp"

using namespace std;

elev LagKadett();
void SkrivUt(elev Kadetten);

void main(void)
{
	elev Kadett;
	Kadett=LagKadett();
	SkrivUt(Kadett);
}
elev LagKadett()
{
	elev Kadetten;
	string Fnamn;
	double Karaktertabellen[3];
	int alder;
	cout<<"Oppgi fornamn: (eitt ord) og alder";
	cin>>Fnamn>>alder;
	Kadetten.SettNavn(Fnamn);  //Berre fornamn
	Kadetten.SettAlder(alder);
	for(int i=0;i<3;i++){
		cout<<"Oppgi karakter: "<<i+1<<":";
		cin>>Karaktertabellen[i];
	}
	Kadetten.SettKarakterar(Karaktertabellen);

	return Kadetten;
}

void SkrivUt(elev Kadetten)
{
	cout<< Kadetten.FinnNavn()<<" "<<" er "<<Kadetten.FinnAlder()<<" år gamal"<<endl;
	double Ktab[3];
	Kadetten.FinnKarakterar(Ktab);
	for(int i=0;i<3;i++)
		cout<<"Karakter i fag: "<<i+1<<":"<<Ktab[i]<<endl;
		
}


/*
Oppgåve 3
Lag ein klasse trekant og eit testprogram 
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppgåve 4
Lag klassen punkt og eit testprogram
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppgåve 5
Lag klassen kompleks og eit testprogram.
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppgåve 6
Lag ein ny klasse trekant der dei private dataene er side[0],side[1] og side[2] som
utgjer ein tabell double side[3].
Settfunksjonen skal leggja inn tabellen og Finnfunksjonen skal hente ut heile tabellen.
Arealfunksjonen skal bruke Herons formel til å rekne ut arealet.
Lag eit testprogram for å lage eit objekt Mintrekant og for utskrift av sidene og areal.


*/