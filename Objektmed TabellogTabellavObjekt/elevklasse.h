


//#ifndef _ELEVKLASSE_H_INCLUDED
//#define _ELEVKLASSE_H_INCLUDED
//
//#include <iostream>
//#include <string>

//using namespace std;



//Definerer klassen elev



class elev{
public:
	void Sett(string NyttNavn, string NyLinje));
	void SettEinKarakter(char NyKarakter,int nr);
	void SettKarakterar(char *NyK);
	string FinnNavn() const;
	string FinnLinje() const;
	void	FinnKarakterar( char *Karakterane)const;
    
private:
	string navn;
	string linje;
	char K[5];
};


//#endif