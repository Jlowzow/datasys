//broekvektorinitier.cpp
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "broek.cpp"
using namespace  std;
//Fr� tabell til vektor

int main()
{
  const int antall = 2;
  Broek tabell[antall] = {Broek(1,2),Broek(2,3)};
   // Bruker en spesialkonstrukt�r
  vector<Broek> bv(tabell, tabell + antall);


  cout<<"F�rste br�k: ";
  cout<<bv.front().finnTeller()<<"/"<<bv.front().finnNevner()<<endl;
  cout<<"Siste br�k: ";
  cout<<bv.back().finnTeller()<<"/"<<bv.back().finnNevner()<<endl;

   // Bruker assign direkte
  vector<Broek> v2;
  v2.assign(tabell, tabell + antall);
  cout<<"F�rste br�k: ";
  cout<<v2.front().finnTeller()<<"/"<<v2.front().finnNevner()<<endl;
  cout<<"Siste br�k: ";
  cout<<v2.back().finnTeller()<<"/"<<v2.back().finnNevner()<<endl;
 
  
  return 0;
} // main
