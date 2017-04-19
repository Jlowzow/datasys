//Testprogram for Kadettklassane
//TestKadettklasse.cpp
#include "Kadettklasse.cpp"
void main(void)
{
	Avdeling a;
	a.SettAvdelingsNr(4752);
	EDkadett e;
	e.SettAvdeling(a);
	e.SettAnsattnr(12345);
	e.SettEngelskkarakter('C');
	e.SettElektrokarakter('B');
	e.skrivData();
}

