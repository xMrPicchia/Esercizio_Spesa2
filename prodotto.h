#include <iostream>
#include <string.h>
using namespace std;

class Prodotto
{
    private:
        int codice;
        string titolo;
        string descrizione;
        int anno;
        float prezzo;
        int quantita;
    public:
        Prodotto(int codice, string titolo, string descrizione, int anno, float prezzo, int quantita);

        void setCodice(int codice);
        void setTitolo(string titolo);
        void setDescrizione(string descrizione);
        void setAnno(int anno);
        void setPrezzo(float prezzo);
        void setQuantita(int quantita);

        int getCodice();
        string getTitolo();
        string getDescrizione();
        int getAnno();
        float getPrezzo();
        int getQuantita();

};