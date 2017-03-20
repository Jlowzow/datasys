//FasitOppg5.cpp
#include <iostream>
#include <iomanip>
/*
Oppgåve 3:
Lag eit testprogram som lagar ein tabell av elevar, set karakterar på alle elevane og lagar utskrift av 
alle karakterane i kvart fag og av alle karakterane til kvar elev. 
Start f.eks. programmet slik:

*/

#include "FasitOppg1.cpp"

//using namespace std;

elev LagKadett();
void SkrivUt(elev Kadetten);
void SkrivUtEitFag(int k,elev *Kadett);

const int N=3;

void main(void)
{
	
	//Alle objekt i frie lager
	elev *kadett=new elev[N]; //tabell av klassen elev
	cout<<"Innlesing av data: \n";
	for(int i=0;i<N;i++)
		kadett[i]=LagKadett();//returnerer ein elev 
	cout<<"Utskrift for kvar kadett: \n";
	system("Pause");
	
	for(int i=0;i<N;i++){
		system("cls");
		SkrivUt(kadett[i]);
		system("Pause");
		
	}
	cout<<"Utskrift for kvart fag: \n";
	system("Pause");
	
	for(int k=0;k<5;k++){
		system("cls");
		SkrivUtEitFag(k,kadett);
		system("Pause");
	}
}
elev LagKadett()
{
	elev *Kadetten=new elev;
	string Fnamn;
	string Linja;
	char Karaktertabellen[5];
	cout<<"Oppgi fornamn: (eitt ord) og linje  ";
	cin>>Fnamn>>Linja;
	Kadetten->Sett(Fnamn,Linja);  //Berre fornamn og linje
	for(int i=0;i<5;i++){
		cout<<"Oppgi karakter: "<<i+1<<":";
		cin>>Karaktertabellen[i];
	}
	Kadetten->SettKarakterar(Karaktertabellen);
	return *Kadetten;
}

void SkrivUt(elev Kadetten)
{
	//Argumentet Kadetten ligg på SkrivUt() sitt område på stakken 
	cout<< Kadetten.FinnNavn()<<setw(10)<<Kadetten.FinnLinje()<<setw(10)<<endl<<endl;
	char Ktab[5];
	Kadetten.FinnKarakterar(Ktab);
	for(int i=0;i<5;i++)
		cout<<"Karakter i fag: "<<i+1<<" : "<<Ktab[i]<<endl;
	
		
}
void SkrivUtEitFag(int k,elev *K)
{
	//Skriv ut alle karakterar for fag nr. k
	//K[i] er adresseoverført og ligg på heapen
	for(int i=0;i<N;i++){
	cout<< K[i].FinnNavn()<<setw(10)<<K[i].FinnLinje();
	char Ktab[5];
	K[i].FinnKarakterar(Ktab);
	cout<<setw(10)<<"fag: "<<setw(10)<<k+1<<" : "<<Ktab[k]<<endl;
	}

}


