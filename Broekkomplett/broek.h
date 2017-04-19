//-------------------------------------------------------------------
//
// broek.h  
//
// Klasse for å behandle brøker.
// NB: Hvis en brøk får nevner 0 avluttes hele programmet!
//
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
      Broek   operator-(
                const Broek &denAndre) const;    // Inn
      Broek   operator*(
                const Broek &denAndre) const;    // Inn
      Broek   operator/(
                const Broek &denAndre) const;    // Inn
      Broek   operator-() const;
      Broek  &operator++();                      // Preinkrement  Returnerer referanse
      Broek  &operator--();                      // Predekrement 
      Broek  &operator+=(
                const Broek &denAndre);          // Inn
      Broek  &operator-=(
                const Broek &denAndre);          // Inn
      Broek  &operator*=(
                const Broek &denAndre);          // Inn
      Broek  &operator/=(
                const Broek &denAndre);          // Inn
      Broek  &operator=(
                const Broek &original);          // Inn
      bool    operator==(
                const Broek &denAndre) const;    // Inn
      bool    operator!=(
                const Broek &denAndre) const;    // Inn
      bool    operator<=(
                const Broek &denAndre) const;    // Inn
      bool    operator>=(
                const Broek &denAndre) const;    // Inn
      bool    operator<(
                const Broek &denAndre) const;    // Inn
      bool    operator>(
                const Broek &denAndre) const;    // Inn

    private:
      void forkort();
      int  sammenlikn(
                const Broek &denAndre) const;    // Inn
      int  teller;
      int  nevner;
    }; // Broek
#endif
