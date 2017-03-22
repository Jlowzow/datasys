//-----------------------------------------------------------------
//
// maaler.cpp - implementasjonsfil
//
#include <iostream>
#include "maaler.h"

using namespace std;

//-------------------------------------------------------------------
//
// Klassen Maaler
//
void Maaler::settNr(int nyttNr)
{
  nr = nyttNr;
} // settNr

//-------------------------------------------------------------------
void Maaler::settPosisjon(int nyPosisjon)
{
  posisjon = nyPosisjon;
} // settPosisjon

//-------------------------------------------------------------------
int Maaler::finnNr() const
{
  return nr;
} // finnNr

//-------------------------------------------------------------------
int Maaler::finnPosisjon() const
{
  return posisjon;
} // finnPosisjon

//-------------------------------------------------------------------
void Maaler::skrivFelles() const
{
  cout << "Måler nr. " << nr << " er plassert på posisjon nr. " <<
    posisjon << endl;
} // skrivFelles

//-------------------------------------------------------------------
//
// Avledete klasser
//
void Barometer::settTrykk(double nyttTrykk)
{
  trykk = nyttTrykk;
} // settTrykk

//-------------------------------------------------------------------
double Barometer::finnTrykk() const
{
  return trykk;
} // finnTrykk

//-------------------------------------------------------------------
void Barometer::skrivData() const
{
  skrivFelles();
  cout << "Denne måleren er et barometer. Trykk: " << trykk
    << " kPa.\n";
} // skrivData

//Oppgåve: Implementer klassen Termometer------------------------------


//Oppgåve: Implementer klassen Vindmaaler-------------------------------------------------------------------

