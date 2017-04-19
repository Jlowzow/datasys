#include <iostream>
using namespace std;


class Avdeling{
public:
	Avdeling();  //Konstruktør utan argument
	void SettAvdelingsNr(int Nyavdeling);
	int FinnAvdelingsnr() const;
	
private:
	int Avdelingsnummer;
	
};

class Offiser{
public:
	Offiser(); //konstruktør utan argument
	void SettAnsattnr(int Nyttnr);
	void SettAvdeling(Avdeling Nyavdeling);
	Avdeling FinnAvdeling() const;
	int FinnAnsattnr() const;
	virtual void skrivData() const=0;  //Ekte virtuell funksjon
protected:
	void skrivFelles() const;
private:
	int Ansattnr;
	Avdeling avdelingen;
};

class Kadett:public Offiser{
public:
	Kadett(); //konstruktør utan argument
	void SettEngelskkarakter(char Nykarakter);
	char FinnEngelskKarakter()const;
private:
	char Engelskkarakter;
};

class EDkadett:public Kadett{
public:
	EDkadett();//konstruktør utan argument
	void SettElektrokarakter(char Nykarakter);
	char FinnElektrokarakter() const;
	virtual void skrivData() const;
private:
	char Elektrokarakter;
};
	
//Implementering som blir kravd til eksamen--------------------------------

void Offiser::skrivFelles() const
{
	cout<<"Offiseren tilhøyrer avdeling med nr"<<avdelingen.FinnAvdelingsnr()<<endl;
	cout<<"Han har ansattnr: "<<Ansattnr<<endl;
}

void EDkadett::skrivData() const
{
	skrivFelles();
	cout<<"Engelskkarakter: "<<FinnEngelskKarakter()<<endl;
	cout<<"Elektrokarakter: "<<Elektrokarakter<<endl;
}

//Implementering som ikkje blir kravd til eksamen--------------------------------



	Avdeling::Avdeling()  //Konstruktør utan argument
	{
		Avdelingsnummer=9999;
	}
	void Avdeling::SettAvdelingsNr(int Nyavdeling)
	{
		Avdelingsnummer=Nyavdeling;
	}

	int Avdeling::FinnAvdelingsnr() const
	{
		return Avdelingsnummer;
	}


	Offiser::Offiser() //konstruktør utan argument
	{
		Ansattnr=9999;
	}
	void Offiser::SettAnsattnr(int Nyttnr)
	{
		Ansattnr=Nyttnr;
	}

	void Offiser::SettAvdeling(Avdeling Nyavdeling)
	{
		avdelingen=Nyavdeling;
	}

	Avdeling Offiser::FinnAvdeling() const
	{
		return avdelingen;
	}

	int Offiser::FinnAnsattnr() const
	{
		return Ansattnr;
	}

	Kadett::Kadett()
	{
		Engelskkarakter='X';
	}

	void Kadett::SettEngelskkarakter(char Nykarakter)
	{
		Engelskkarakter=Nykarakter;
	}

	char Kadett::FinnEngelskKarakter()const
	{
		return Engelskkarakter;
	}

	EDkadett::EDkadett()//konstruktør utan argument
	{
		Elektrokarakter='X';
	}

	void EDkadett::SettElektrokarakter(char Nykarakter)
	{
		Elektrokarakter=Nykarakter;
	}

	char EDkadett::FinnElektrokarakter() const
	{
		return Elektrokarakter;
	}
