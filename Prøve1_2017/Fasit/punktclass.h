
#include <cmath>
#include <string>
using namespace std;
class punkt{
public:
	punkt(); //Konstruktør utan argument
	punkt(double Nyx,double Nyy);
	void Sett(double NyX, double NyY);
	double Finnx();
	double Finny();
	double Origoavstand();
    double AvstandFra(punkt DetAndre);
private:
	double x;
	double y;
};

class pixel{
public:
	pixel(string NyFarge="black",punkt =punkt(1.0,1.0));
	void sett(string NyFarge,punkt Nyttpunkt);
	punkt FinnPosisjon() const;
	string FinnFarge() const;
private:
	punkt posisjon;
	string farge;
};
