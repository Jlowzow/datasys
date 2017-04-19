//-------------------------------------------------------------------
//
// broek.cpp - implementasjonsfil
//
#include "broek.h"
//#include "nytte.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;

//-------------------------------------------------------------------
Broek::Broek() {
  teller = 0;
  nevner = 1;
} // Broek

//-------------------------------------------------------------------
Broek::Broek(int initTeller, int initNevner)
{
  settBroek(initTeller, initNevner);
} // Broek

//-------------------------------------------------------------------
void Broek::settBroek(int nyTeller, int nyNevner)
{
  if (nyNevner != 0) {
    teller = nyTeller;
    nevner = nyNevner;
    forkort();
    }
  else {
    cout<<"Nevneren ble null! Avslutter.\n";
  }
} // settBroek

//-------------------------------------------------------------------
int Broek::finnTeller() const
{
  return teller;
} // finnNevner

//-------------------------------------------------------------------
int Broek::finnNevner() const
{
  return nevner;
} // finnTeller

//-------------------------------------------------------------------
Broek Broek::operator+(const Broek &denAndre) const
{
  Broek hjelp = *this;
  hjelp += denAndre;  //hjelp=hjelp+denAndre
  return hjelp;
} // operator+

//-------------------------------------------------------------------
Broek &Broek::operator+=(const Broek &denAndre)
{
  settBroek(teller * denAndre.nevner + nevner * denAndre.teller,
            nevner * denAndre.nevner);
  return *this;
} // operator+=

//-------------------------------------------------------------------
Broek &Broek::operator++()
{
  teller += nevner;
  return *this;
} // operator++

//-------------------------------------------------------------------
Broek Broek::operator-(const Broek &denAndre) const
{
  Broek hjelp = *this;
  hjelp -= denAndre;
  return hjelp;
} // operator-

//-------------------------------------------------------------------
Broek &Broek::operator-=(const Broek &denAndre)
{
  settBroek(teller * denAndre.nevner - nevner * denAndre.teller,
            nevner * denAndre.nevner);
  return *this;
} // operator-=

//-------------------------------------------------------------------
Broek &Broek::operator--()
{
  teller -= nevner;
  return *this;
} // operator--

//-------------------------------------------------------------------
Broek Broek::operator-() const   //skift forteikn
{
  Broek hjelp;
  hjelp.teller = -teller;
  hjelp.nevner = nevner;
  return hjelp;
} // operator-

//-------------------------------------------------------------------
Broek Broek::operator*(const Broek &denAndre) const
{
  Broek hjelp = *this;
  hjelp *= denAndre;
  return hjelp;
} // operator*

//-------------------------------------------------------------------
Broek &Broek::operator*=(const Broek &denAndre)
{
  settBroek(teller * denAndre.teller, nevner * denAndre.nevner);
  return *this;
} // operator*=

//-------------------------------------------------------------------
Broek Broek::operator/(const Broek &denAndre) const
{
  Broek hjelp = *this;
  hjelp /= denAndre;
  return hjelp;
} // operator/

//-------------------------------------------------------------------
Broek &Broek::operator/=(const Broek &denAndre)
{
  settBroek(teller * denAndre.nevner, nevner * denAndre.teller);
  return *this;
} // operator/=

//-------------------------------------------------------------------
Broek &Broek::operator=(const Broek &original)
{
  teller = original.teller;
  nevner = original.nevner;
  return *this;
} // operator=

//-------------------------------------------------------------------
bool Broek::operator==(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) == 0) ? true : false;
} // operator==

//-------------------------------------------------------------------
bool Broek::operator!=(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) != 0) ? true : false;
} // operator!=

//-------------------------------------------------------------------
bool Broek::operator<=(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) <= 0) ? true : false;
} // operator<=

//-------------------------------------------------------------------
bool Broek::operator>=(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) >= 0) ? true : false;
} // operator>=

//-------------------------------------------------------------------
bool Broek::operator<(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) < 0) ? true : false;
} // operator<

//-------------------------------------------------------------------
bool Broek::operator>(const Broek &denAndre) const
{
  return (sammenlikn(denAndre) > 0) ? true : false;
} // operator>

//-------------------------------------------------------------------
//
// Sørger for at nevneren alltid er positiv, og brøken mest mulig
// forkortet. Bruker Euclids algoritme for å finne fellesnevneren.
//
void Broek::forkort()
{
  if (nevner < 0) {
    teller = -teller;
    nevner = -nevner;
    }
  int a = teller;
  int b = nevner;
  int c;
  if (a < 0) a = -a;

  while (b > 0) {
    c = a % b;
    a = b;
    b = c;
    }
  teller /= a;
  nevner /= a;
} // forkort

//-------------------------------------------------------------------
//
// Returnerer +1 hvis *this > denAndre, 0 hvis de er like, -1 ellers
//
int Broek::sammenlikn(const Broek &denAndre) const
{
  Broek hjelp = *this - denAndre;
  if (hjelp.teller > 0) return 1;
  else if (hjelp.teller == 0) return 0;
  else return -1;
} // sammenlikn
