//STL: Standard Template Library
//Kva er ein Template?
/*"Templates are a way of making your classes more abstract
by letting you define the behavior of the class 
without actually knowing what datatype will be handled by the operations of the class"
*/
//Eksempel:

#include <iostream>
using namespace std;

template <class A_Type> class calc
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
	int samanlikn(A_Type x, A_Type y);
};
template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}
template <class A_Type> int calc<A_Type>::samanlikn(A_Type x, A_Type y)
{
	if(x>y)return 1;
	else if(x==y)return 0;
	else return -1;
}

//Vi kan også ha template for funksjonar:
//Eksempel:

template <class type> type divider(type a, type b)
{
	return a/b;
}


void main()
{
	calc<double>reknemeddouble;
	double svar=reknemeddouble.multiply(2.5,3.5);
	cout<<"Svaret er. "<<svar<<endl;
	int resultatet=reknemeddouble.samanlikn(3.5,3.5);
	cout<<"Resultat av samanlikning: "<<resultatet<<endl;
	calc<int>reknemedint;
	int resultat=reknemedint.samanlikn(2,3);
	cout<<"Resultatet er. "<<resultat<<endl;
	int x=divider<int>(5,2);
	cout<<"Svaret er: "<<x<<endl;
	//Enklare dersom det er intuitivt kva type som skal brukast:
	double r=divider(7.5,2.5); //Vi ser at type er double
	cout<<"Svaret er: "<<r<<endl;
}

