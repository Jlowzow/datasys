#include "Posisjonsklasse.cpp"
#include <iostream>
void main(void)
{
	Posisjon *A=new Posisjon;
	Posisjon *B=new Posisjon;
	A->SettPosisjon(60,23.670,5,15.950);  
	//Sj�krigsskolens posisjon er 60 grader,23.670 minutt Nord,5 grader,15.950 minutt �st
	cout<<"Posisjonen kan ogs� skrivast slik: ";
	cout<<A->DesimalverdiBreidde()<<" grader N ,"<<A->DesimalverdiLengde()<<" grader �"<<endl;
	//Gir utskrift 60.3945 grader N ,5.26583 grader �
	B->SettPosisjon(60,24.670,5,16.950); 
	//1 minutt lenger Nord og 1 minutt lenger �st enn A
	cout<<"Kurs fr� A til B: "<<A->KursTil(*B)<<endl;
}


