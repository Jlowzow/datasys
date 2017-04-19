//NamnKlasse.cc


class Namn{
public:
	void Sett(string NyttF, string NyttE);
	string FinnFornamn()const;
	string FinnEtternamn()const;
	
	
private:
	string fornamn;
	string etternamn;
}
;
void Namn::Sett(string NyttF, string NyttE)
{
	fornamn=NyttF;
	etternamn=NyttE;
}

string Namn::FinnFornamn() const
{
	return fornamn;
}

string Namn:: FinnEtternamn() const
{
	return etternamn;
}


