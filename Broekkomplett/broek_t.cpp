//-------------------------------------------------------------------
//
// broek_t.cpp 
//
// Program som tester noen av funksjonene i klassen brøk.
//
#include <iostream>
#include <string>
#include "broek.cpp"

using namespace std;

void skriv(const string &tekst, const Broek &Broek);

int main() 
{
  Broek a(10, 20); //a= 10/20
  Broek b(3, 4);	//b=3/4
  Broek c;			//c=0/1
  c.settBroek(5);	//c=5/1
  Broek d = a / b;	//d=(10/20)/(3/4)

  skriv("a = ", a);
  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  b += a;   //b=b+a
  ++c;		//c=c+1
  d *= d;   //d=d*d

  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  c = a + b - d * a; //c=(a+b)-(d*a)???
  c = -c;	// Skiftfortegn-operator

  skriv("c = ", c);

  if (a + b != c + d) cout << "a + b != c + d" << endl;
  else cout << " a + b == c + d" << endl;
  while ( b > a) b -= a;
  skriv("b = ", b); 

  return 0;
} // main

//-------------------------------------------------------------------
//
// Funksjon for å skrive en brøk.
//
void skriv(
  const string &tekst,        // Inn
  const Broek  &broek)        // Inn
{
  cout << tekst << broek.finnTeller() << " / ";
  cout << broek.finnNevner() << endl;
} // skriv

