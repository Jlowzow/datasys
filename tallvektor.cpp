//-------------------------------------------------------------------
//side 643-
// tallvektor.cpp
//
// Tall leses inn i en vektor, sorteres og skrives ut.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;

int main()
{
  vector<int> posTall;
  int tall;
  cout << "Skriv positive tall (avslutt med 0): ";
  cin >> tall;

  while (tall > 0) {
    posTall.push_back(tall);
    cin >> tall;
    }

  cout << "Du har skrevet " << posTall.size() << " tall.\n";

  sort(posTall.begin(), posTall.end());

  cout << "Tallene i sortert rekkefølge: " ;
  for (int i = 0; i < posTall.size(); i++) {
    cout << posTall[i] << " ";
    }
  cout << endl;
  return 0;
} // main
