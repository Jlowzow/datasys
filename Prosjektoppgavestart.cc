#include <string>
using namespace std;
//-------------------------------------------------------
//Definering av klassen Navn
class Navn{
public:
	void settFornavn(string nyttFornavn);
	
	string finnFornavn();
	
private:
	string fornavn;
};
//Oppg�ve: Legg til etternamn ogs� med sett- og finn-funksjonar X

//--------------------------------------------------------------
//Definering av klassen Student

class Student{
public:
	void settNavn(Navn nyttNavn);
	Navn finnNavn();
	void settKarakter(char nyKarakter);
	char finnKarakter();
private:
	char karakter;
	Navn navnet;
};

//---------------------------------------------
//Definering av klassen Prosjektoppgave

class Prosjektoppgave{
public:
	void settStudent(Student nyStudent);
	Student finnStudent();
	
	
//Oppg�ve: Lag funksjonar for oppgaveNr, tittel og veileder X
private:
	
	Student studenten;
//Oppg�ve:  Utvid med tittel, veiledernavn, oppgaveNr	
};
//------------------------------------------------------------

//implementering ------------------------------------------

//Inmplementering av funksjonane i klassen Navn:

void Navn::settFornavn(string nyttFornavn)
	{
		fornavn=nyttFornavn;
} 
string Navn::finnFornavn()
{
	return fornavn;
}
void Navn::settetterNavn(string nyttetterNavn)
	{
		etternavn=nyttetterNavn;
} 

//Oppg�ve: Implementer funksjonar for etternamn X

//-------------------------------------------------------------------
//Implementering av funksjonane i klassen Student:

void Student::settNavn(Navn nyttNavn)
	{
		navnet=nyttNavn;
}
Navn Student::finnNavn()
	{
		return navnet;
}//Oppg�ve:  implementer funksjonar for karakter

//-------------------------------------------------------------
//Implementering av funksjonane i klassen Prosjektoppgave:

void Prosjektoppgave::settStudent(Student nyStudent)
{
	studenten=nyStudent;
}
Student Prosjektoppgave::finnStudent()
	{
		return studenten;
}//Oppg�ve: implementer funksjonar for oppgaveNr, tittel og veileder X

//Hovedprogram for Prosjektoppgave

#include <iostream>

int main(void)
{	Navn n;
	Navn v;
	n.settFornavn("Adrian");//Oppg�ve:  Utvid med etternamn
	
	v.settFornavn("Lars");
	
	Student s;
	s.settNavn(n);
	//Oppg�ve:  Utvid med karakter
	Prosjektoppgave p;
	p.settStudent(s);//Utvid med oppgaveNr, tittel og veileder
	
	cout<<"Prosjektoppg�va er skriven av "<<p.finnStudent().finnNavn().finnFornavn()<<endl;
	cout<<"Generell info om oppgaven: "<<endl;
	return 0;//Oppg�ve:  Utvid utskrift med karakter, oppgaveNr, tittel og veileder
}

//Oppg�ve:  Splitt opp fila i definisjonsfil:   xxxx.h,   implementeringsfil   xxxx.cpp 
//          og hovedprogram   xxxx.cpp