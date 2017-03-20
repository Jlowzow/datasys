//Elevklasse_med_tabell_test.cc
#include <iostream>
/*
Oppgåve 3:
Lag eit testprogram som lagar ein tabell av elevar, set karakterar på alle elevane og lagar utskrift av 
alle karakterane i kvart fag og av alle karakterane til kvar elev. 
Start f.eks. programmet slik:

*/

#include "Fasitelevklasse.cpp"

using namespace std;

elev LagKadett();
void SkrivUt(elev Kadetten);
void SkrivUtEitFag(int k);
void SkrivUtFag(int nr,elev *k);
const int N=3;

void main(void)
{
	
	
	elev kadett[N]; //tabell av klassen elev
	cout<<"Innlesing av data: \n";
	for(int i=0;i<N;i++)
		kadett[i]=LagKadett();//returnerer ein elev 
	cout<<"Utskrift for kvar kadett: \n";
	for(int i=0;i<N;i++){
		SkrivUt(kadett[i]);
		system("Pause");
	}
	cout<<"Utskrift for kvart fag: \n";
	for(int j=0;j<5;j++){
		SkrivUtFag(j,kadett);
		system("Pause");
	}
}
elev LagKadett()
{
	elev Kadetten;
	string Fnamn;
	string Linja;
	char Karaktertabellen[5];
	cout<<"Oppgi fornamn: (eitt ord) og linje";
	cin>>Fnamn>>Linja;
	Kadetten.Sett(Fnamn,Linja);  //Berre fornamn og linje
	for(int i=0;i<5;i++){
		cout<<"Oppgi karakter: "<<i+1<<":";
		cin>>Karaktertabellen[i];
	}
	Kadetten.SettKarakterar(Karaktertabellen);
	return Kadetten;
}

void SkrivUt(elev Kadetten)
{
	cout<< Kadetten.FinnNavn()<<" "<<" går på "<<Kadetten.FinnLinje()<<"-linja"<<endl;
	char Ktab[5];
	Kadetten.FinnKarakterar(Ktab);
	for(int i=0;i<5;i++)
		cout<<"Karakter i fag: "<<i+1<<" : "<<Ktab[i]<<endl;
		
}
void SkrivUtEitFag(int k,elev *K)
{
	for(int i=0;i<N;i++){
	cout<< K[i].FinnNavn()<<" "<<" går på "<<K[i].FinnLinje()<<"-linja";
	char Ktab[5];
	K[i].FinnKarakterar(Ktab);
	cout<<"Karakter i fag: "<<k+1<<" : "<<Ktab[k]<<endl;
	}
}


void SkrivUtFag(int nr, elev *k)
{
	cout<<"Karakterar for fag nr "<<nr<<" : \n";
	for(int j=0;j<N;j++)SkrivUtEitFag(nr,k);
}
