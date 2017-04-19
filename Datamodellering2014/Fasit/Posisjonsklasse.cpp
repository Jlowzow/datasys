#include <cmath>
using namespace std;
const double pi=acos(-1.0);

class Posisjon{
public:
	Posisjon();  //Konstruktør utan argument
	void SettPosisjon(int NyBreidegrad,double NyBreiddeminutt,int NyLengdegrad,double NyLengdeminutt);
	void FinnPosisjon(int &LG, double &LM,int &BG, double &BM) const;
	double DesimalverdiLengde() const;
	double DesimalverdiBreidde() const;
	double KursTil(Posisjon Neste) const;
private:
	int graderN,graderO;
	double minuttN,minuttO;
};


//Implementering--------------------------------
Posisjon::Posisjon()
{
	graderN=60;
	minuttN=23.67;
	graderO=5;
	minuttO=15.95;  //Sjøkrigsskolen
}

void Posisjon::SettPosisjon(int NyBreidegrad,double NyBreiddeminutt,int NyLengdegrad,double NyLengdeminutt)
{
	graderN=NyBreidegrad;
	minuttN=NyBreiddeminutt;
	graderO=NyLengdegrad;
	minuttO=NyLengdeminutt;
}
void Posisjon::FinnPosisjon(int &LG, double &LM,int &BG, double &BM) const
{
	LG=graderN;
	LM=minuttN;
	BG=graderO;
	BM=minuttO;
}
double Posisjon::DesimalverdiBreidde() const
{
	return graderN+minuttN/60;
}
double Posisjon::DesimalverdiLengde() const
{
	return graderO+minuttO/60;
}
double Posisjon::KursTil(Posisjon Neste) const
{
	double vinkel;
	double y1=DesimalverdiBreidde();
	double y2=Neste.DesimalverdiBreidde();
	double midtpunktradianar=(pi/180)*(y1+y2)/2;
	double x1=DesimalverdiLengde();
	double x2=Neste.DesimalverdiLengde();
	double dy=y2-y1;
	double dx=x2-x1;
	if (dy!=0)vinkel=180/pi*atan(cos(midtpunktradianar)*dx/dy);
		else if(dx>0)vinkel=90;
			else if(dx<0)vinkel=270; 
				else vinkel=0;   //dersom dei to posisjonane er lik, vel eg kurs 0
	return vinkel;
}


