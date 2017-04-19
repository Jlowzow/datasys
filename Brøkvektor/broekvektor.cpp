//-------------------------------------------------------------------
//
// broekvektor.cpp
//
// Brøkar leses inn i en vektor, sorteres og skrives ut.
/*Lag ein vektor med element av klassen Broek.
Legg inn 5 brøkar i vektoren
Ta utskrift av første og siste element i vektoren
Sorter elementa i vektoren i stigande rekkjefølgje og ta ny utskrift.
Finn size() og capasity() for vektoren
Lag ein ny vektor med 5 like brøkar (= defaultkonstruktøren) 
og bruk swap() mellom vektorane
Tøm begge vektorane og sjekk size() og capasity() for begge no.

*/
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "broek.cpp"
using namespace  std;

int main()
{
  vector<Broek>  bv;
  int t,n;
  Broek b;
  cout << "Skriv teljar (avslutt med 0): ";
  cin >> t;

  while (t > 0) {
	cout << "Skriv nemnar : ";
	cin >> n;
	b.settBroek(t,n);
    bv.push_back(b);
	cout << "Skriv teljar (avslutt med 0): ";
    cin >> t;
    }
  cout<<"Første brøk: ";
  cout<<bv.front().finnTeller()<<"/"<<bv.front().finnNevner()<<endl;
  cout<<"Siste brøk: ";
  cout<<bv.front().finnTeller()<<"/"<<bv.front().finnNevner()<<endl;

  //lag ein brøk soek 
  //søk etter den i vektoren bv

  sort(bv.begin(),bv.end());

  cout << "Brøkane i sortert rekkefølge: "<<endl ;
  for (int i = 0; i < bv.size(); i++) {
    cout<<bv[i].finnTeller()<<"/"<<bv[i].finnNevner()<<endl;
    }
  cout<<"Antal brøkar lagt inn i vektoren: "<<bv.size()<<endl;
  cout<<"Antal brøkar det er plass til i vektoren: "<<bv.capacity()<<endl;
  cout<<"Antal brøkar det maksimalt er plass til i vektoren: "<<bv.max_size()<<endl;
  vector<Broek>  ny;
  Broek c;
  ny.assign(5,c);
  bv.swap(ny);
  cout << "Brøkane etter swap(): "<<endl ;
  for (int i = 0; i < bv.size(); i++) {
    cout<<bv[i].finnTeller()<<"/"<<bv[i].finnNevner()<<endl;
    }
  bv.clear();
  ny.clear();
  cout<<"Antal brøkar i vektoren bv ettter clear(): "<<bv.size()<<endl;
  cout<<"Antal brøkar det er plass til i vektoren bv no: "<<bv.capacity()<<endl;
  cout<<"Antal brøkar i vektoren ny ettter clear(): "<<ny.size()<<endl;
  cout<<"Antal brøkar det er plass til i vektoren ny no: "<<ny.capacity()<<endl;
  return 0;
} // main

/*
Oppgåve 3
Legg inn sortering i programmet broekvektor.cpp
*/

/*
Oppgåve 4
Etter at du har lagt inn ei rekke brøkar i brøk-vektoren, 
skal du søke etter
ein brøk som du oppgir. 
*/