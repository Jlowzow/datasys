//testpunkt.cpp
//Testar ut funksjonane i klassen punkt

#include <iostream>
#include "punktclass.cpp"

using namespace std;

punkt LagPunkt();
void SkrivUt(punkt *t, int n);

void main(void)
{
	int N;
	cout<<"Kor mange punkt vil du ha: ";
	cin>>N;
	punkt *T=new punkt[N];
	for(int i=0;i<N;i++)T[i]=LagPunkt();
	SkrivUt(T,N);  //Skriv ut alle punkta

}

punkt LagPunkt()
{
	double x,y;
	cout<<"Oppgi koordinatar x y :";
	cin>>x>>y;
	punkt P(x,y);
	return P;
}

void SkrivUt(punkt *t, int n)
{
	for(int i=0;i<n;i++){
		cout<<"Punkt nr "<<i+1<<" : ";
		cout<<"("<<t[i].Finnx()<<","<<t[i].Finny()<<")"<<endl;
	}
}