#include <string>
#include "ProsjektoppgaveImplementering.cpp"  //Implementering av klassane


#include <iostream>

int main(void)
{	Navn n;
	n.settFornavn("Lars");
	n.settEtternavn("Pettersen");
	Navn v;//veileder
	v.settFornavn("Barak");
	v.settEtternavn("Obama");
	Student s;
	s.settNavn(n);//Utvid med karakter
	s.settKarakter('B');
	Prosjektoppgave p;
	p.settStudent(s);//Utvid med oppgaveNr, tittel og veileder
	p.settNr(100);
	p.settTittel("Verdens undergang");
	p.settVeileder(v);
	cout<<"Prosjektoppgåva er skriven av "<<p.finnStudent().finnNavn().finnFornavn();
	cout<<"  "<<p.finnStudent().finnNavn().finnEtternavn()<<endl;
	cout<<"Veileder "<<p.FinnVeileder().finnFornavn()<<"  "<<p.FinnVeileder().finnEtternavn()<<endl;
	cout<<"Tittel: "<<p.FinnTittel()<<endl;
	cout<<"Karakter: "<<p.finnStudent().finnKarakter()<<endl;
	return 0;//Utvid utskrift med karakter, oppgaveNr, tittel og veileder
}