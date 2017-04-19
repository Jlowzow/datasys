//STL: Standard Template Library
//Kva er ein Template?
/*"Templates are a way of making your classes more abstract
by letting you define the behavior of the class 
without actually knowing what datatype will be handled by the operations of the class"
*/
//Eksempel:

#include <iostream>
#include "Komp.cpp"
using namespace std;

template <class A_Type> class calc
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};
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

template <class type> type divider(type a, type b)
{
	return a/b;
}


void main()
{
	Kompleks a;
	a.sett(2.5,3.5);
	Kompleks b;
	b.sett(3.5,3.5);
	calc<Kompleks>reknemedKompleks;
	Kompleks svar=reknemedKompleks.multiply(a,b);
	cout<<"Svaret er. "<<svar.finnRealdel()<<"+j"<<svar.finnImagdel()<<endl;
	Kompleks resultat=reknemedKompleks.multiply(svar,b);
	cout<<"Svaret er. "<<resultat.finnRealdel()<<"+j"<<resultat.finnImagdel()<<endl;
	Kompleks x=divider<Kompleks>(a,b);
	cout<<"Svaret er. "<<x.finnRealdel()<<"+j"<<x.finnImagdel()<<endl;
	//Enklare dersom det er intuitivt kva type som skal brukast:
	Kompleks r=divider(svar,b); //Vi ser at type er Kompleks
	cout<<"Svaret er. "<<r.finnRealdel()<<"+j"<<r.finnImagdel()<<endl;
}

/*
 Oppgåve 2
 Skriv om hovedprogrammet og template-ane slik at dei opererer på komplekse tal med dei 
 funksjonane som du har lagt inn i klassen kompleks
 */