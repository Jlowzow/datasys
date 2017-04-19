#include "komp.cpp"
#include <iostream>


const int n=5;
//Definering av template:

template <class Type1> class Busk1
{
public:
	void sort();
	Type1 tabell[n];  //public tabell tilgjengeleg direkte i aplikasjon
private:
	void byttom(Type1 &a, Type1 &b);
};

//-------Implementering av funksjonar i template----------
template <class Type1> void Busk1<Type1>::sort()
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(tabell[i]<tabell[j])
				byttom(tabell[i], tabell[j]);
}

template <class Type1> void Busk1<Type1>::byttom(Type1 &a, Type1 &b)
{
	Type1 hjelp=a;
	a=b;
	b=hjelp;
}

//-------HovedProg--------
void main()
{
	Kompleks B;
	double realdel, imagdel;

	Busk1<Kompleks> reknmedKompleks;

	cout<<"Skriv inn 5 Komplekse tal: ";
	for(int i=0;i<n;i++)
	{
		cin>>realdel>>imagdel;
		B.sett(realdel,imagdel);
		reknmedKompleks.tabell[i]=B;
	}
	reknmedKompleks.sort();
	cout<<"Sorteringen er: "<<endl;
	for(int i=0;i<n;i++)
	{
		B=reknmedKompleks.tabell[i];
		cout<<B.finnRealdel()<<"+j"<<B.finnImagdel()<<"\n ";
	}
	system ("pause");
}

//Oppgåve: Bruk template Busk1 til å sortere ein tabell med komplekse tal.
//Du må då ha ein operator <  som f.eks. betyr mindre modulus.
//Lagre programmet i ein kaalog der klassen Kompleks er definert og implementert