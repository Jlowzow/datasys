//rom.h
//definerer klassen Rom

class Rom{
public:
	Rom(); //Konstrukt�r utan argument
	Rom(int defaultromnr,char defaultdekk);//Konstrukt�r med 2 argument
	void settRomnr(int NyttRomnr);
	void settDekk(char NyttDekk);
	int finnRomnr() const;
	char finnDekk() const;

private:
	int romnr;
	char dekk;
};


