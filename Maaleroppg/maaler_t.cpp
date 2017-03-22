//-------------------------------------------------------------------
//
// maaler_t.cpp
//
// Prøver ut de klassene som er avledet av klassen Maaler.
//
// Før linking må du kompilere Maaler.cpp 
// dersom du ikkje inkludererer den her:
#include "Maaler.cpp"

int main()
{
  
  Barometer barometerdata;
  Termometer termometerdata;
  Vindmaaler vinddata;
  //Sett verdier og ta utskrift av de.
  barometerdata.settNr(1);
  barometerdata.settPosisjon(127);
  barometerdata.settTrykk(1014);
  //Maaler er ein abstrakt klasse, kan ikkje lage objekt av klassen Maaler
  //Men vi kan lage peikarar til underklasseobjekter, og peikarane er av klassen Maaler
  const int antMaalere = 3;
  Maaler   *maalere[antMaalere];
  maalere[0] = &barometerdata;
  maalere[1] = &termometerdata;
  maalere[2] = &vinddata;

  for (int i = 0; i < antMaalere; i++) maalere[i]->skrivData();
  int nr;
  cout<<"Oppgi eit tal mellom 0 og 2: ";
  cin>>nr;
  maalere[nr]->skrivData();
  return 0;
} // main

/*Oppgåve:  Sett verdiar for vinddata og termometerdata også.*/














