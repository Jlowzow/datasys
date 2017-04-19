//-------------------------------------------------------------------
//
// doublevektor.cpp
//
// Tall leses inn i en vektor, sorteres og skrives ut.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;

int main()
{
  vector<double> posTall;
 
  double tall;
  cout << "Skriv positive tall (avslutt med 0): ";
  cin >> tall;

  while (tall > 0) {
    posTall.push_back(tall);
	cout<<"Antal tal det er plass til i vektoren: "<<posTall.capacity()<<endl;
	cout<<"Antal tal det maksimalt er plass til i vektoren: "<<posTall.max_size()<<endl;
    cin >> tall;
    }

  cout << "Du har skrevet " << posTall.size() << " tall.\n";

  sort(posTall.begin(), posTall.end());

  cout << "Tallene i sortert rekkefølge: " ;
  for (int i = 0; i < posTall.size(); i++) {
    cout << posTall[i] << " ";     //indeksering berre til element som er lagt inn
    }
  cout << endl;
  cout<<"Antal tal lagt inn i vektoren: "<<posTall.size()<<endl;
  cout<<"Antal tal det er plass til i vektoren: "<<posTall.capacity()<<endl;
  cout<<"Antal tal det maksimalt er plass til i vektoren: "<<posTall.max_size()<<endl;
  if(posTall.empty())cout<<"Vektoren er tom"<<endl;
  else cout<<"Vektoren er ikkje tom!"<<endl;
  vector<double> Ny;
  Ny=posTall;  
  vector<double> Ny2;
  Ny2.assign(10,1); //Legg inn 10 1-tal
  Ny2.swap(Ny);  //Byter om innhald i dei to vektorane
  for (int i = 0; i < Ny.size(); i++) {
    cout << Ny[i] << " ";     //indeksering berre til element som er lagt inn
    }
  cout<<endl;
 for (int i = 0; i < Ny2.size(); i++) {
    cout << Ny2[i] << " ";     //indeksering berre til element som er lagt inn
    }
 cout<<endl;
 cout<<"Siste element: "<<Ny2.back()<<endl;
 cout<<"Første element: "<<Ny2.front()<<endl;
 
  return 0;
} // main

/*Oppgåve 1
Lag ein vektor med element av typen int.
Legg inn 5 tal i vektoren
Ta utskrift av første og siste element i vektoren
Sorter tala i vektoren i stigande rekkjefølgje og ta ny utskrift
Finn size() og capasity() for vektoren
Lag ein ny vektor med 5 like tal og bruk swap() mellom vektorane
Tøm begge vektorane og sjekk size() og capasity() for begge no.

Oppgåve 2
Lag ein vektor med element av klassen Broek.
Legg inn 5 brøkar i vektoren
Ta utskrift av første og siste element i vektoren
Sorter elementa i vektoren i stigande rekkjefølgje og ta ny utskrift.
Finn size() og capasity() for vektoren
Lag ein ny vektor med 5 like brøkar (= defaultkonstruktøren) og bruk swap() mellom vektorane
Tøm begge vektorane og sjekk size() og capasity() for begge no.

*/
