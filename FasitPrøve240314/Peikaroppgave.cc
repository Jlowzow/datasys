//FasitPeikarar.cc

#include <iostream>
using namespace std;


void main(void)
{
	int N=100;
	double D=3.14;
	char C='A';
	int T[3]={1,2,3};
	int *Np=&N;
	double *Dp=&D;
	char *Cp=&C;
	int *Tp=T;
	cout<<"Heiltalet er: "<<*Np<<endl;
	cout<<"Desimaltalet er: "<<*Dp<<endl;
	cout<<"Bokstaven er :"<<*Cp<<endl;
	cout<<"Tala i tabellen er: ";
	for (int i=0;i<3;i++)cout<<*(Tp+i)<<" ";
	cout<<endl;
	int *Mp=new int;
	double *Kp=new double;
	char *Bp=new char;
	int *Tab=new int[3];
	*Mp=*Np;
	*Kp=*Dp;
	*Bp=*Cp;
	for (int i=0;i<3;i++)*(Tab+i)=*(Tp+i);
	cout<<"Heiltalet er: "<<*Np<<endl;
	cout<<"Desimaltalet er: "<<*Dp<<endl;
	cout<<"Bokstaven er :"<<*Cp<<endl;
	cout<<"Tala i tabellen i det frie lageret er: ";
	for (int i=0;i<3;i++)cout<<*(Tab+i)<<" ";
	cout<<endl;
}
