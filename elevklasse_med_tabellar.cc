//
//--------------------------------------------------------------------
#include <string>
using namespace std;

class elev {
public:
	elev();
	void SettNavn( string NyttFornavn);//Inn fornavn
	void SettAlder(int NyAlder);				//Inn alder
	void SettKarakterar(double *NyKar);	//Set alle 3 karakterane
	void FinnKarakterar(double *K); //Hentar tabell med 3 karakterar
	string FinnNavn( );	//Returnerer Fornavn
	int FinnAlder();					//Ut alder
	
private:
	string Fornavn;
	int Alder;
	double Karakter[3];   //Tabell med 3 karakterar(desimaltal)
	
};


elev::elev()
{
	Fornavn="Ola";
}
//--------------------------------------------------------------------
void elev::SettNavn( string NyttFornavn)
{
	Fornavn=NyttFornavn;
}
//SettNavn
//--------------------------------------------------------------------
void elev::SettAlder(int NyAlder)
{
	Alder = NyAlder;
}
//SettAlder
//--------------------------------------------------------------------

string elev::FinnNavn()
{
	
	return Fornavn;
}
//FinnNavn
//--------------------------------------------------------------------
int elev::FinnAlder()
{
	return Alder;
}
//FinnAlder
//--------------------------------------------------------------------
void elev::SettKarakterar(double *NyKar)
{
	for(int i=0;i<3;i++)Karakter[i]=NyKar[i];
}
void elev::FinnKarakterar(double *K)
{
	for(int i=0;i<3;i++)K[i]=Karakter[i];
}