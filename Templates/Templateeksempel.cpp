//STL: Standard Template Library
//Kva er ein Template? Norsk: Mal
/*"Templates are a way of making your classes more abstract
by letting you define the behavior of the class 
without actually knowing what datatype will be handled by the operations of the class"
*/
//Eksempel:

#include <iostream>
#include "broek.cpp"
//Kopier broek.cpp og broek.h  til katalogen der du jobbar
using namespace std;

//Definerer ein template-klasse calc:
template <class A_Type> class calc  //A_Type kan vera int, double eller broek osv.

{
  public:
    A_Type multiply(A_Type x, A_Type y);  //For.eks   int multiply(int x, int y)  
    A_Type add(A_Type x, A_Type y);
};

//implementerer to funksjonar i template-klassen calc  som returnerer A_Type:

template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}

//Vi kan ogs� ha template for funksjonar:
//Eksempel:

template <class type> type divider(type a, type b)
{
	return a/b;
}


void main()
{
	Broek a(2,3);
	Broek b(3,5);
	calc<Broek>reknemedbroek;  //reknemedbr�k er ein forekomst av template-klassen calc
	Broek svar=reknemedbroek.multiply(a,b);
	cout<<"Svaret er. "<<svar.finnTeller()<<"/"<<svar.finnNevner()<<endl;
	Broek resultat=reknemedbroek.multiply(svar,b);
	cout<<"Svaret er. "<<resultat.finnTeller()<<"/"<<resultat.finnNevner()<<endl;
	//Oppg�ve:Lag eit reknestykke som adderer to br�kar
	calc<int>reknemedint;
	//Oppg�ve:Lag ein multiplikasjon og ein addisjon som brukar forekomsten reknemedint
	//Oppg�ve:Lag ein multiplikasjon og ein addisjon som brukar A_Type double
	
	Broek x=divider<Broek>(a,b);
	cout<<"Svaret er. "<<x.finnTeller()<<"/"<<x.finnNevner()<<endl;
	//Enklare dersom det er intuitivt kva type som skal brukast:
	Broek r=divider(svar,b); //Vi ser at type er Broek
	cout<<"Svaret er. "<<r.finnTeller()<<"/"<<r.finnNevner()<<endl;
	//Oppg�ve: Lag divisjon med int og double
}

/*
Oppg�ve:
Utvid templateklassen med ein funksjon Samanlikn(a,b) som
returnerer hhv 1, 0, -1   n�r   a>b, a=b , a<b
Lag eit testprogram som les inn og samanliknar to heiltal, to desimaltal og to br�kar

Oppg�ve:
Utvid templateklassen med ein public sorteringsfunksjon sort() som sorterer 
ein tabell tab[n] som er public data i klassen (n kan vera ein global konstant).
Test templaten med � lage tabellar av int, double og broek som s� blir sortert.

*/
