//-----------------------------------------------------------------
//
// maaler.cpp - implementasjonsfil
//
#include <iostream>
#include "maaler.h"

using namespace std;
Maaler::Maaler()
{
	nr=0;
	posisjon=0;
}

Maaler::Maaler(int initNr, int initPosisjon)
{ 
	nr=initNr;
	posisjon=initPosisjon;
} // Maaler
/*  
//Alternativ skrivem�te:
Maaler::Maaler(int initNr, int initPosisjon)
      : nr(initNr), posisjon(initPosisjon)
{ } // Maaler
*/
Barometer::Barometer()
{
	trykk=0;
}

Barometer::Barometer(int initNr, int initPosisjon, double initTrykk)
         : Maaler(initNr, initPosisjon),  //Brukar konstrukt�ren for Maaler
           trykk(initTrykk) //Brukar konstrukt�ren for double
{ } // Barometer

Termometer::Termometer():Maaler(),temperatur(0.0)
{
}

Termometer::Termometer(int initNr, int initPosisjon, double initTemp)
         : Maaler(initNr, initPosisjon),
           temperatur(initTemp)
{ } // Termometer

Vindmaaler::Vindmaaler():Maaler(),retning(0.0),hastighet(0.0)
{
	//retning=0;
	//hastighet=0;
}

Vindmaaler::Vindmaaler(int initNr, int initPosisjon, int initRetn, int initHast)
         : Maaler(initNr, initPosisjon),
           retning(initRetn), 
           hastighet(initHast)
{ } // Vindmaaler

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
  cout << "M�ler nr. " << nr << " er plassert p� posisjon nr. " <<
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
  cout << "Denne m�leren er et barometer. trykk: " << trykk
    << " kPa.\n";
} // skrivData

//-------------------------------------------------------------------
void Termometer::setttemperatur(double nytemperatur)
{
  temperatur = nytemperatur;
} // setttemperatur

//-------------------------------------------------------------------
double Termometer::finntemperatur() const
{
  return temperatur;
} // finntemperatur

//-------------------------------------------------------------------
void Termometer::skrivData() const
{
  skrivFelles();
  cout << "Denne m�leren er et termometer. temperatur: " <<
    temperatur << " gr. C.\n";
} // skrivData

//-------------------------------------------------------------------
void Vindmaaler::settVind(double Nyretning, double Nyhastighet)
{
  retning = Nyretning;
  hastighet = Nyhastighet;
} // settVind

//-------------------------------------------------------------------
void Vindmaaler::finnVind(double &retningen, double &hastigheten)
  const
{
  retningen = retning;
  hastigheten = hastighet;
} // finnVind

//-------------------------------------------------------------------
void Vindmaaler::skrivData() const
{
  skrivFelles();
  cout << "Denne m�leren er en vindm�ler. retning: " <<
    retning << " grader, hastighet: " << hastighet << " m/s.\n";
} // skrivData
