 v/*
  Oppgåve 2
  Studer klassedefinisjonen i fila punktklasse.cpp.
  Lag funksjonen Lag() for innlesing av punktet- og punktet- verdi til eit punkt, og 
  setting av kooerdinatane til punktet.
  Lag funksjonen Utskrift() som skriv ut koordinatane til eit punkt f.eks. som (3.5 , 7.0).
  Lag funksjonen SkrivAvstand() som gir utskrift av avstanden mellom to punkt.
  Sett inn i dette programmet:
  
*/

#include "punktclass.cpp"
#include <iostream>
using namespace std;

void Lag(punkt &punktet);   //utargument
punkt Lagpunkt(void);		//returnerer eit punkt
void Utskrift(punkt punktet);  //inn-argument
void SkrivAvstand(punkt punktet1, punkt punktet2);  //2 innargument


void main(void)
{

	punkt P,Q,T;
	Lag(P);  //eller P=Lagpunkt();
	Lag(Q);	 //eller Q=Lagpunkt();
	Utskrift(P);
	Utskrift(Q);
	SkrivAvstand(P,Q);
}
void Lag(punkt &punktet)   //utargument
{
	double X,Y;  //Lokale variable
	cout<<"Skriv inn koordinatane til punktet: ";
	cin>>X>>Y;
	punktet.Sett(X,Y);
}
punkt Lagpunkt()		//returnerer eit punkt
{
	punkt punktet;  //Lokalt objekt
	double X,Y;  //Lokale variable
	cout<<"Skriv inn koordinatane til punktet: ";
	cin>>X>>Y;
	punktet.Sett(X,Y);
	return punktet;
}

void Utskrift(punkt punktet)  //inn-argument
{
	cout<<"Koordinatane til punktet: ";
	cout<<"("<<punktet.Finnx()<<","<<punktet.Finny()<<") \n";
}
void SkrivAvstand(punkt punktet1, punkt punktet2)  //2 innargument
{
	cout<<"Avstanden mellom ";
	cout<<"("<<punktet1.Finnx()<<","<<punktet1.Finny()<<") og ";
	cout<<"("<<punktet2.Finnx()<<","<<punktet2.Finny()<<") er ";
	cout<<punktet1.AvstandFra(punktet2)<<endl;
}


/*
Endre hovedprogrammet slik at det lagar ein tabell av N punkt og skriv ut avstandane
mellom alle punkta.

*/