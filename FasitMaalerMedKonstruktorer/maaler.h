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
	  Maaler();  //Konstruktør utan argument
      Maaler(int initNr,         // Konstruktør med 2 arg
             int initPosisjon);  // 
	 

      void         settNr(
                     int nyttNr);              // Inn
      void         settPosisjon(
                     int nyPosisjon);          // Inn
      int          finnNr() const;
      int          finnPosisjon() const;
      virtual void skrivData() const = 0;

    protected:
      void skrivFelles() const;

    private:
      int nr;
      int posisjon;
    }; // Maaler

  //-----------------------------------------------------------------
  class Barometer: public Maaler {
    public:
	  Barometer();  //konstruktør utan argument
      Barometer(int    initNr,         // Inn
                int    initPosisjon,   // Inn
                double initTrykk);     // Inn

      void         settTrykk(
                     double nyttTrykk);        // Inn, kPa
      double       finnTrykk() const;
      virtual void skrivData() const;

    private:
      double trykk;
    }; // Barometer

  //-----------------------------------------------------------------
  class Termometer: public Maaler {
    public:
		Termometer();
      Termometer(int    initNr,            // Inn
                 int    initPosisjon,      // Inn
                 double initTemp);         // Inn

      void         setttemperatur(
                     double nytemperatur);     // Inn, Celsius
      double       finntemperatur() const;
      virtual void skrivData() const;

    private:
      double temperatur;
    }; // Termometer

  //-----------------------------------------------------------------
  class Vindmaaler: public Maaler {
    public:
		Vindmaaler();
      Vindmaaler(int initNr,           // Inn
                 int initPosisjon,     // Inn
                 int initRetn,         // Inn
                 int initHast);        // Inn
                     
      void        settVind(
                    double retning,            // Inn, grader
                    double hastighet);         // Inn, m/s
      void        finnVind(
                    double &retning,           // Ut
                    double &hastighet) const;  // Ut
      virtual void skrivData() const;

    private:
      double retning;
      double hastighet;
    }; // Vindmaaler
#endif
