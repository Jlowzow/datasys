//-------------------------------------------------------------------
// 
// komp_t.cpp
//
// Hovedprogram for komplekse tall
//             
#include <iostream>
#include <cmath>
#include <string>
#include "komp.cpp"
                            
void instruksjoner(void);
Kompleks lesTall(const string &ledetekst);

int main()
{   
  instruksjoner();
  
  Kompleks a;
  Kompleks b;
  Kompleks c;
  a = lesTall("\nGi inn a: ");
  b = lesTall("Gi inn b: ");
  c = lesTall("Gi inn c: ");
  Kompleks null;
  null.sett(0.0, 0.0);
  if (a == null) {
    cout << "\nFeil: Ikke en annengradslikning!\n";
    }
  else {                        
    Kompleks rot = (b * b - 4 * a * c).kvRot();
    Kompleks x1 = (-b + rot) / (2 * a);
    Kompleks x2 = (-b - rot) / (2 * a);
    cout << "\nSvaret er : x1 = " << x1;
    cout << "  og  x2 = " << x2 << endl;
    }
  return 0;
} // main                                                  

//-------------------------------------------------------------------
//
// Leser et tall fra tastatur
//
Kompleks lesTall(const string &ledetekst)
{
  Kompleks tallet;
  cout << ledetekst;
  cin >> tallet;
  return tallet;
} // lesTall

//-------------------------------------------------------------------
//
// Skriver ut instruksjoner 
//
void instruksjoner()
{
  cout << "Programmet løser andregradslikninger med komplekse tall";
  cout << "\n\nLikningen er på formen : ax^2 + bx + c = 0\n\n"; 
  cout << "Angi realdel og imaginærdel (0 hvis reelt tall)\n\n";
} // instruksjoner


/* kjøreresultater

Programmet løser andregradslikninger med komplekse tall

Likningen er på formen : ax^2 + bx + c = 0

Angi realdel og imaginærdel (0 hvis reelt tall)


Gi inn a: 1 0
Gi inn b: 2 0
Gi inn c: 4 0

Svaret er : x1 = -1 + 1.73205i   og  x2 = -1 - 1.73205i

*/
  
  