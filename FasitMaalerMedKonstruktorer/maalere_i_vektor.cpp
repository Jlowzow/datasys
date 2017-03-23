//-------------------------------------------------------------------
//
// maalere_i_vektor.cpp
//
// Pekere til Maaler-objekter legges inn i en vektor
//
#include <vector>
#include "maaler.cpp"
using namespace std;

int main()
{
  vector<Maaler *> maalere;
  maalere.push_back(new Barometer(10, 100, 104.5));
  maalere.push_back(new Termometer(11, 100, 15.6));
  maalere.push_back(new Vindmaaler(12, 101, 80, 15));

  for (int i = 0; i < maalere.size(); i++) {
    maalere[i]->skrivData();
    delete maalere[i];
    }
  return 0;
} // main
