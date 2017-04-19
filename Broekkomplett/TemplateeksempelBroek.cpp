//STL: Standard Template Library
//Kva er ein Template?  Ein Mal!
/*"Templates are a way of making your classes more abstract
by letting you define the behavior of the class 
without actually knowing what datatype will be handled by the operations of the class"
*/
//Eksempel:

#include <iostream>
#include "broek.cpp"
using namespace std;

//Definerer template-klassen calc
template <class A_Type> class calc
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};

//Implementerer dei to funksjonane
template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}

//Vi kan også ha template for funksjonar:
//Eksempel:
//Definerer ein template-funksjon divider
template <class type> type divider(type a, type b)
{
	return a/b;
}


void main()
{
	Broek a(2,3);
	Broek b(3,5);
	calc<Broek>reknemedbroek; //reknemedbroek er eit objekt av klassen calc der A-Type er Broek
	Broek svar=reknemedbroek.multiply(a,b);  //2/3 * 3/5
	cout<<"Svaret er. "<<svar.finnTeller()<<"/"<<svar.finnNevner()<<endl;
	Broek resultat=reknemedbroek.add(svar,b);// 2/3*3/5 + 3/5
	cout<<"Svaret er. "<<resultat.finnTeller()<<"/"<<resultat.finnNevner()<<endl;
	//Brukar dividerfunksjonen med brøkar
	Broek x=divider<Broek>(a,b);
	cout<<"Svaret er. "<<x.finnTeller()<<"/"<<x.finnNevner()<<endl;
	//Enklare dersom det er intuitivt kva type som skal brukast:
	Broek r=divider(svar,b); //Vi ser at type er Broek
	cout<<"Svaret er. "<<r.finnTeller()<<"/"<<r.finnNevner()<<endl;
}

//Oppgåve 1
/*Utvid templateklassen calc til også å ha funksjon for samanlikning som returnerer -1, 0 eller 1
  ettersom eit objekt er mindre, lik eller større enn eit anna. Bruk denne funksjonen i hovedprogrammet.
 
 
 Oppgåve 2
 Skriv om hovedprogrammet og template-ane slik at dei opererer på komplekse tal med dei 
 funksjonane som du har lagt inn i klassen kompleks
 */