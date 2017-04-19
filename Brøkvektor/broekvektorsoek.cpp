//-------------------------------------------------------------------
//
// broekvektor.cpp
//
// Br�kar leses inn i en vektor, sorteres og skrives ut.
/*Lag ein vektor med element av klassen Broek.
Legg inn 5 br�kar i vektoren
Ta utskrift av f�rste og siste element i vektoren
Sorter elementa i vektoren i stigande rekkjef�lgje og ta ny utskrift.
Finn size() og capasity() for vektoren
Lag ein ny vektor med 5 like br�kar (= defaultkonstrukt�ren) og bruk swap() mellom vektorane
T�m begge vektorane og sjekk size() og capasity() for begge no.

*/

/*
Oppg�ve 3
Etter at du har lagt inn ei rekke br�kar i br�k-vektoren 
og f�r du sorterer, skal du s�ke etter
ein br�k som du oppgir. 
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
  cout<<"F�rste br�k: ";
  cout<<bv.front().finnTeller()<<"/"<<bv.front().finnNevner()<<endl;
  cout<<"Siste br�k: ";
  cout<<bv.front().finnTeller()<<"/"<<bv.front().finnNevner()<<endl;
  //S�king etter oppgitt br�k:
  Broek soek;
  cout<<"oppgi br�k du s�kjer etter:"<<endl;
  cout << "Skriv teljar : ";
  cin >> t;
  cout << "Skriv nemnar : ";
  cin >> n;
  soek.settBroek(t,n);
   // S�ker etter enkeltverdi med find()
  vector<Broek>::const_iterator pos = find(bv.begin(), bv.end(), soek);
  if (pos != bv.end()) {
	cout<<soek.finnTeller()<<"/"<<soek.finnNevner();
    cout << " fins i bv p� indeks " << (pos - bv.begin()) << endl;
  } else cout << " fins ikke i bv\n"<<endl;

  	


  sort(bv.begin(),bv.end());

  cout << "Br�kane i sortert rekkef�lge: "<<endl ;
  for (int i = 0; i < bv.size(); i++) {
    cout<<bv[i].finnTeller()<<"/"<<bv[i].finnNevner()<<endl;
    }
  cout<<"Antal br�kar lagt inn i vektoren: "<<bv.size()<<endl;
  cout<<"Antal br�kar det er plass til i vektoren: "<<bv.capacity()<<endl;
  cout<<"Antal br�kar det maksimalt er plass til i vektoren: "<<bv.max_size()<<endl;
  vector<Broek>  ny;
  Broek c;
  ny.assign(5,c);
  bv.swap(ny);
  cout << "Br�kane etter swap(): "<<endl ;
  for (int i = 0; i < bv.size(); i++) {
    cout<<bv[i].finnTeller()<<"/"<<bv[i].finnNevner()<<endl;
    }
  bv.clear();
  ny.clear();
  cout<<"Antal br�kar i vektoren bv ettter clear(): "<<bv.size()<<endl;
  cout<<"Antal br�kar det er plass til i vektoren bv no: "<<bv.capacity()<<endl;
  cout<<"Antal br�kar i vektoren ny ettter clear(): "<<ny.size()<<endl;
  cout<<"Antal br�kar det er plass til i vektoren ny no: "<<ny.capacity()<<endl;
  return 0;
} // main
