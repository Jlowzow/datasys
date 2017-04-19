#include "broek.cpp"
#include <iostream>


const int n=5;

template <class Type1> class Busk1
{
public:
	void sort();
	Type1 tab[n];
private:
	void byttom(Type1 &a, Type1 &b);
};

//-------Implementering template----------
template <class Type1> void Busk1<Type1>::sort()
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(tab[i]<tab[j])
				byttom(tab[i], tab[j]);
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
	Broek B;
	int teller, nevner;

	Busk1<Broek> reknmedbroek;

	cout<<"Skriv inn 5 broeker: ";
	for(int i=0;i<n;i++)
	{
		cin>>teller>>nevner;
		B.settBroek(teller,nevner);
		reknmedbroek.tab[i]=B;
	}
	reknmedbroek.sort();
	cout<<"Sorteringen er: "<<endl;
	for(int i=0;i<n;i++)
	{
		B=reknmedbroek.tab[i];
		cout<<B.finnTeller()<<"/"<<B.finnNevner()<<" ";
	}
	system ("pause");
}