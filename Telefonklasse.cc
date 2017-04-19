//TelefonKlasse.cc
/*e)	Definer og implementer ein klasse Telefon 
med private data nummer og namn, 
der namn skal vera objekt av klassen Namn.
*/
#include "Namnklasse.cc"

class telefon{
public:
	telefon();
	telefon(Namn initNamn, string initnummer);
	void Sett(Namn nyttnamn, string nyttnummer);
	Namn FinnNamn() const;
	string FinnNummer() const;
private:
	string nummer;
	Namn namn;
};

telefon::telefon()
{
	nummer = "12345678";
	namn = Namn();
}
telefon::telefon(Namn initNamn, string initnummer)
{
	nummer = initnummer;
	namn = initNamn;
}
void telefon::Sett(Namn nyttnamn, string nyttnummer)
{
	nummer = nyttnummer;
	namn = nyttnamn;
}
Namn telefon::FinnNamn() const
{
	return namn;
}
string telefon::FinnNummer() const
{
	return nummer;
}
