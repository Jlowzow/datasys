#include "Posisjonsklasse.cpp"
#include <iostream>
void main(void)
{
	Posisjon A,B;
	A.SettPosisjon(60,23.670,5,15.950);  
	//Sjøkrigsskolens posisjon er 60 grader,23.670 minutt Nord,5 grader,15.950 minutt Øst
	cout<<"Posisjonen kan også skrivast slik: ";
	cout<<A.DesimalverdiBreidde()<<" grader N ,"<<A.DesimalverdiLengde()<<" grader Ø"<<endl;
	//Gir utskrift 60.3945 grader N ,5.26583 grader Ø
	B.SettPosisjon(60,24.670,5,16.950); 
	//1 minutt lenger Nord og 1 minutt lenger Øst enn A
	cout<<"Kurs frå A til B: "<<A.KursTil(B)<<endl;
}


