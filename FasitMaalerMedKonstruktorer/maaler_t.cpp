//-------------------------------------------------------------------
//
// maaler_t.cpp
//
// Pr�ver ut de klassene som er avledet av klassen Maaler.
//
#include "Maaler.cpp"

int main()
{
	//F�rst eit lite eksempel p� konstrukt�rar:
	int n(1);   //Brukar konstrukt�ren for klassen int
	double d(3.14);
	cout<<"n="<<n<<"   d="<<d<<endl;
 
//S� brukar vi konstrukt�rane for m�larane:
  Barometer barometerdata;  //brukar konstrukt�r utan argument
  Termometer termometerdata(11, 100, 15.6);//Brukar konstrukt�r med 3 argument
  Vindmaaler vinddata(12, 101, 80, 15); //Brukar konstrukt�r med 4 argument
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

/* Oppg�ve arv:

Definer ein basisklasse kadett
Private data:  nr
Public sett- og finn funksjon
Ekte virtuell utskriftsfunksjon
Definer avleda klassar EVkadett, OMkadett og LOGkadett
Bruk kadett som public basisklasse
Dei har private data hhv:  ELkarakter, NAVkarakter og BEDkarakter
Public sett- og finnfunksjonar
Alle klassar skal ha konstrukt�rar med og utan argument
Konstrukt�rane av alle typar skal brukast i implementeringa og/eller i testprogrammet 
Lag program som definerer eit objekt av kvar klasse, set nr og karakter og skriv ut alle data.

*/