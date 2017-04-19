//-------------------------------------------------------------------
// 
// komp_t.cpp
//
// Hovedprogram for komplekse tall
// Definer klassen Komplex og implementer funksjonane og operatorane som er i bruk i dette programmet.
// Det er nok å definere funksjonane og operatorane som er i bruk her.
#include <iostream>
#include <cmath>
#include <string>
#include "komp.cpp"  
                            


int main()
{   
  Kompleks a;
  Kompleks b;
  Kompleks c;
  a.sett(1.0, 2.0);
  b.sett(-1.0,2.0);
  c=a+b;
  cout<<"a+b ="<<c.finnRealdel()<<"+j"<<c.finnImagdel()<<endl;
  c=a-b;
  cout<<"a-b ="<<c.finnRealdel()<<"+j"<<c.finnImagdel()<<endl;
  if(a==b)cout<<"a og b er lik"<<endl;
  else cout<<"a og b er ulik"<<endl;
  a+=b;
  cout<<"a+=b gir a="<<a.finnRealdel()<<"+j"<<a.finnImagdel()<<endl;
}

	