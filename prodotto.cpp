#include "prodotto.h"

ostream& operator<<(ostream& os, const Prodotto& p)
{
	os<<"\n--- Informazioni Prodotto ---";
	os<<"\nCod: "<<p.codice;
	os<<"\nNome: "<<p.titolo;
	os<<"\nDescrizione"<<p.descrizione;
	os<<"\nAnno: "<<p.anno;
	os<<"\nPrezzo: "<<p.prezzo;
	os<<"\nQuantità in magazzino: "<<p.quantita<<endl;
	return os;
}

istream& operator>>(istream& is, Prodotto& p)
{
	cout<<"Inserisci cod: ";
	is>>p.codice;
	cout<<"Inserisci Nome: ";
	is>>p.titolo;
	return is;
}

Prodotto::Prodotto(int codice, string titolo, string descrizione, int anno, float prezzo, int quantita)
{
    this->codice=codice;
    this->titolo=titolo;
    this->descrizione=descrizione;
    this->anno=anno;
    this->prezzo=prezzo;
    this->quantita=quantita;
}

void Prodotto::setCodice(int codice)
{
    this->codice=codice;
}

void Prodotto::setTitolo(string titolo)
{
    this->titolo=titolo;
}

void Prodotto::setDescrizione(string descrizione)
{
    this->descrizione=descrizione;
}

void Prodotto::setAnno(int anno)
{
    this->anno=anno;
}

void Prodotto::setPrezzo(float prezzo)
{
    this->prezzo=prezzo;
}

void Prodotto::setQuantita(int quantita)
{
    this->quantita=quantita;
}

int Prodotto::getCodice()
{
    return codice;
}

string Prodotto::getTitolo()
{
    return titolo;
}

string Prodotto::getDescrizione()
{
    return descrizione;
}

int Prodotto::getAnno()
{
    return anno;
}

float Prodotto::getPrezzo()
{
    return prezzo;
}
int Prodotto::getQuantita()
{
    return quantita;
}