//-------------------------------------------------------------------
//
// maaler_tenkelt.cpp
//
// Pr�ver ut de klassene som er avledet av klassen Maaler.
//
// F�r linking m� du kompilere Maaler.cpp 
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
  
  barometerdata.skrivData();
  return 0;
} // main

/*Oppg�ve:  Sett verdiar for termometerdata og vinddata, og ta utskrift av dei ogs�














