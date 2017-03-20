//Testkomplex.cpp

#include <iostream>
#include "Komplexklasse.cpp"
using namespace std;

void main(void)
{
	komplex A;
	A.Sett(1.5,2.5);
	cout<<"A= "<<A.FinnReal()<<" + j("<<A.FinnImag()<<")";
	cout<<"  = "<<A.Abs()<<"/_"<<A.Vinkel()<<endl;
	//Gir utskrift: A= 1.5 + j(2.5)  = 2.91458/_1.03038
	komplex B;
	B.Sett(2,2);
	komplex C;
	C=A.Ganger(B);
	C.Konjugert();
	cout<<"C= "<<C.FinnReal()<<" + j("<<C.FinnImag()<<")"<<endl;;
	//Gir utskrift:  C= -2 + j(-8)
}
