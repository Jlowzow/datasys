//-------------------------------------------------------------------
//
// broek.h  
//
// Klasse for å behandle brøker. Kapittel 15
// NB: Hvis en brøk får nevner 0 avluttes hele programmet!
// Definer og implementer alle operatorar som manglar!!!
//Test ut med broek_t.cpp

#include <string>

using namespace std;

#ifndef BROEK_DEFINERT
  #define BROEK_DEFINERT

  class Broek {
    public:  
      Broek();
      Broek(
        int initTeller,                          // Inn
        int initNevner);                         // Inn
      void    settBroek(
                int nyTeller,                    // Inn
                int nyNevner = 1);               // Inn
      int     finnTeller() const;
      int     finnNevner() const;                   
      Broek   operator+(
                const Broek &denAndre) const;    // Inn  Kapittel 14.1 referanseargument
      
	  //Legg til ein operator -
	  
	  //Lag ein skiftforteikn-operator f.eks.   c=-c
	  // void   operator-() ;

      Broek  &operator++();                      // Preinkrement  Returnerer referanse
	  //Legg til ein operator --
	  
      Broek  &operator+=(
                const Broek &denAndre);          // Inn
	  //Legg til ein operator -=
               
      bool    operator==(
                const Broek &denAndre) const;    // Inn
      //Legg til ein operator !=
	  
	  //Legg til ein operator >

	        
    private:
      void forkort();
      int  sammenlikn(
                const Broek &denAndre) const;    // Inn
      int  teller;
      int  nevner;
    }; // Broek
#endif

