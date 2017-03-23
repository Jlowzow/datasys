//-------------------------------------------------------------------
//
// maaler_t.cpp
//
// Prøver ut de klassene som er avledet av klassen Maaler.
//
#include "Maaler.cpp"

int main()
{
	//Først eit lite eksempel på konstruktørar:
	int n(1);   //Brukar konstruktøren for klassen int
	double d(3.14);
	cout<<"n="<<n<<"   d="<<d<<endl;
 
//Så brukar vi konstruktørane for målarane:
  Barometer barometerdata;  //brukar konstruktør utan argument
  Termometer termometerdata(11, 100, 15.6);//Brukar konstruktør med 3 argument
  Vindmaaler vinddata(12, 101, 80, 15); //Brukar konstruktør med 4 argument
  //Gir nye verdiar med sett-funksjonar:
  vinddata.settNr(13);
  vinddata.settPosisjon(105);
  vinddata.settVind(180,20.5);

  const int antmaalere = 3;
  Maaler   *maalere[antmaalere];
  maalere[0] = &barometerdata;
  maalere[1] = &termometerdata;
  maalere[2] = &vinddata;

  for (int i = 0; i < antmaalere; i++) maalere[i]->skrivData();
  return 0;
} // main

/* Oppgåve arv:

Definer ein basisklasse kadett
Private data:  nr
Public sett- og finn funksjon
Ekte virtuell utskriftsfunksjon
Definer avleda klassar EVkadett, OMkadett og LOGkadett
Bruk kadett som public basisklasse
Dei har private data hhv:  ELkarakter, NAVkarakter og BEDkarakter
Public sett- og finnfunksjonar
Alle klassar skal ha konstruktørar med og utan argument
Konstruktørane av alle typar skal brukast i implementeringa og/eller i testprogrammet 
Lag program som definerer eit objekt av kvar klasse, set nr og karakter og skriv ut alle data.

*/