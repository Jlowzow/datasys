
#include "Prosjektoppgave.h"
#include <string>
using namespace std;

//Implementering av klassane 
//Implementering av Navn---------------------
Navn::Navn()  //Tom konstruktør
{
}
void Navn::settFornavn(string nyttFornavn)
	{
		fornavn=nyttFornavn;
} 
void Navn::settEtternavn(string nyttEtternavn)
	{
		etternavn=nyttEtternavn;
	}
string Navn::finnFornavn() const
{
	return fornavn;
}
	
string Navn::finnEtternavn() const
{
	return etternavn;
}



//Implementering av Student-------------------------

Student::Student()//Tom standardkonstruktør
{
}


void Student::settNavn(Navn nyttNavn)
{
	Studentnavn=nyttNavn;
}
	
Navn Student::finnNavn()const
	{
		return Studentnavn;
	}

void Student::settKarakter(char nyKarakter)
{
	karakter=nyKarakter;
}
char Student::finnKarakter()const
{
	return karakter;
}

// Implementering av Prosjektopgave ---------------

Prosjektoppgave::Prosjektoppgave() //Tom standardkonstruktør
{
}

void Prosjektoppgave::settStudent(Student nyStudent)
{
	studenten=nyStudent;
}
	Student Prosjektoppgave::finnStudent()const
{
		return studenten;
}

void Prosjektoppgave::settVeileder(Navn NyVeileder)
{
	Veileder=NyVeileder;
}
	Navn Prosjektoppgave::FinnVeileder()const
	{
		return Veileder;
	}
	void Prosjektoppgave::settNr(int NyttNr)
		{
			oppgNr=NyttNr;
	}
	int Prosjektoppgave::FinnNr()const
		{
			return oppgNr;
	}
	void Prosjektoppgave::settKar(char NyKar)
		{
			studenten.settKarakter(NyKar);
	}
	char Prosjektoppgave::FinnKar()const
		{
			return studenten.finnKarakter();
	}

	void Prosjektoppgave::settTittel(string NyTittel)
		{
			Tittel=NyTittel;
	}

	string Prosjektoppgave::FinnTittel()const
	{
			return Tittel;
	}



