//Elevklasse_med_tabell_test.cc
#include <iostream>
/*Oppgåve 2:
Lag eit testprogram som definerer eit objekt av klassen elev, 
set karakter nr. 3 til 'A' og lagar utskrift 
av alle karakterane til eleven. Bruk funksjonar LagElev() og SkrivUtElev()
*/

#include "Fasitelevklasse.cpp"

using namespace std;

elev LagKadett();
void SkrivUt(elev Kadetten);

void main(void)
{
	elev Kadett;
	Kadett=LagKadett();//returnerer ein elev 
	SkrivUt(Kadett);
}
elev LagKadett()
{
	elev Kadetten;
	Kadetten.SettEinKarakter('A',3);
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


