//Testfrilager.cpp

#include <iostream>
#include "Komplexklasse.cpp"
using namespace std;

void main(void)
{
	komplex *A=new komplex;
	(*A).Sett(1.5,2.5);  //A->Sett(1.5,2.5)
	cout<<"A= "<<(*A).FinnReal()<<" + j("<<(*A).FinnImag()<<")";
	cout<<"  = "<<(*A).Abs()<<"<"<<(*A).Vinkel()<<endl;
	//Gir utskrift: A= 1.5 + j(2.5)  = 2.91458<1.03038
	komplex *B=new komplex;
	(*B).Sett(2,2);
	komplex *C=new komplex;
	*C=(*A).Ganger(*B);
	(*C).Konjugert();
	cout<<"C= "<<(*C).FinnReal()<<" + j("<<(*C).FinnImag()<<")"<<endl;;
	//Gir utskrift:  C= -2 + j(-8)
}
