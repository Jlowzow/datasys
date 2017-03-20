//TestKomplexTabell.cpp

#include <iostream>
#include "Komplexklasse.cpp"
using namespace std;

void main(void)
{
	komplex K[3];
	K[0].Sett(1.5,2.5);
	cout<<"K[0]= "<<K[0].FinnReal()<<" + j("<<K[0].FinnImag()<<")";
	cout<<"  = "<<K[0].Abs()<<"/_"<<K[0].Vinkel()<<endl;
	//Gir utskrift: K[0]= 1.5 + j(2.5)  = 2.91458/_1.03038
	K[1].Sett(2,2);
	K[2]=K[0].Ganger(K[1]);
	K[2].Konjugert();
	cout<<"K[2]= "<<K[2].FinnReal()<<" + j("<<K[2].FinnImag()<<")"<<endl;;
	//Gir utskrift:  K[2]= -2 + j(-8)
}
