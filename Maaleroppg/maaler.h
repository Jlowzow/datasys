//-------------------------------------------------------------------
//
// maaler.h
//
// Klasser for håndtering av værdata.
//
#ifndef MAALER_DEFINERT
  #define MAALER_DEFINERT
  class Maaler {
    public:
      void         settNr(
                     int nyttNr);              // Inn
      void         settPosisjon(
                     int nyPosisjon);          // Inn
      int          finnNr() const;
      int          finnPosisjon() const;
      virtual void skrivData() const = 0;

    protected:   //Kan berre brukast i underklassar
      void skrivFelles() const;

    private:
      int nr;
      int posisjon;
    }; // Maaler

  //-----------------------------------------------------------------
  class Barometer: public Maaler {
    public:
      void         settTrykk(double nyttTrykk);        // Inn, kPa
      double       finnTrykk() const;
      virtual void skrivData() const;   //

    private:
      double trykk;
    }; // Barometer

  //Oppgåve: Definer klassen Termometer med private data temperatur---------------------------------
  class Termometer: public Maaler {
  
  };

  //Oppgåve: Definer klassen Vindmaaler med private data retning og hastighet ------------------------------
  class Vindmaaler: public Maaler {
	 
  
  };

#endif

































