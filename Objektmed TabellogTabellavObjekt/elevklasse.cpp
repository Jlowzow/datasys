//Definerer klassen elev

#ifndef _ELEVKLASSE_H_INCLUDED
#define _ELEVKLASSE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class elev{
public:
	void Sett(string NyttNavn, string NyLinje));
	void SettEinKarakter(char NyKarakter,int nr);
	void SettKarakterar(char *NyK);
	string FinnNavn() const;
	string FinnLinje() const;
	void	FinnKarakterar( char *Karakterane)const;
    
private:
	string navn;
	string linje;
	char K[5];
};

//---------------------------
//Implementering:

void elev::SettKarakterar(char *NyK)
{
	for(int i=0;i<5;i++)
		K[i]=NyK[i];
}

void	elev::FinnKarakterar( char *Karakterane)const
{
	for(int i=0;i<5;i++)
		Karakterane[i]=K[i];
}

/*
Oppg�ve 1: 
Definer ein konstrukt�r som set namn til "Ola Nordmann", linje til "ED" og alle karakterane til 'X'
Implementer alle funksjonane

Oppg�ve 2:
Lag eit testprogram som definerer eit objekt av klassen elev, set karakter nr. 3 til 'A' og lagar utskrift 
av alle karakterane til eleven. Bruk funksjonar LagElev() og SkrivUtElev()

Oppg�ve 3:
Lag eit testprogram som lagar ein tabell av elevar, set karakterar p� alle elevane og lagar utskrift av 
alle karakterane i kvart fag og av alle karakterane til kvar elev. 
Start f.eks. programmet slik:

void main()
{
	const int N=3;
	elev kadett[N]; //tabell av klassen elev
	......

}

*/

#endif