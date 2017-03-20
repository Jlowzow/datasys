//Komplexklasse.cpp

#include <cmath>


class komplex{
public:
	void Sett(double Nyreal, double Nyimag);
	double FinnReal() const;
	double FinnImag() const;
	double Abs() const;
	double Vinkel() const;
	komplex Ganger( komplex DetAndre);
	void Konjugert();

private:
	double real;
	double imag;
}
;
void komplex::Sett(double Nyreal, double Nyimag)
{
	real=Nyreal;
	imag=Nyimag;
}

double komplex::FinnReal() const
{
	return real;
}

double komplex:: FinnImag() const
{
	return imag;
}

double komplex::Abs() const
{
	return sqrt(real*real+imag*imag);
}


double komplex::Vinkel() const
{
	double const pi=3.1415;
	if (real>0) return atan(imag/real);
	else	if (real<0) return pi-atan(imag/real);
			else	if (imag>0) return pi/2;
					else return -pi/2;
}

komplex komplex::Ganger( komplex DetAndre)
{
	komplex Svar;
	double R=real*DetAndre.FinnReal()-imag*DetAndre.FinnImag();
	double I=imag*DetAndre.FinnReal()+real*DetAndre.FinnImag();
	Svar.Sett(R,I);
	return Svar;
}

void komplex::Konjugert()
{
	imag=-imag;
}



