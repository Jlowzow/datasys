#include <string>
using namespace std;
//Definisjon av klasse lagrar vi på ei  xxx.h  fil
class Navn{
public:
	Navn();
	void settFornavn(string nyttFornavn);
	string finnFornavn() const;
	void settEtternavn(string nyttEtternavn);
	string finnEtternavn() const;
private:
	string fornavn;
	string etternavn;

};
class Student{
public:
	Student();
	void settNavn(Navn nyttNavn);
	Navn finnNavn()const;
	void settKarakter(char nyKarakter);
	char finnKarakter()const;
private:
	char karakter;
	Navn Studentnavn;
};
class Prosjektoppgave{
public:
	Prosjektoppgave();
	void settStudent(Student nyStudent);
	Student finnStudent()const;
	void settVeileder(Navn NyVeileder);
	Navn FinnVeileder()const;
	void settNr(int NyttNr);
	int FinnNr()const;
	void settKar(char NyKar);
	char FinnKar()const;
	void settTittel(string NyTittel);
	string FinnTittel()const;

private:
	int oppgNr;
	string Tittel;
	Navn Veileder;
	Student studenten;

};
