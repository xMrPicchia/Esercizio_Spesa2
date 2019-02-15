#include "prodotto.h"
#define MAXCARRELLO 50
class Carrello
{
    private:
        Prodotto* elencoProd[MAXCARRELLO];
        int nProdotti;
        float importo;
    public:
        Carrello();       
    
        int getNProdotti();
        
        bool aggiungiProdotto(Prodotto* p);
        bool eliminaProdotto(Prodotto p);
        void elencaProdotti();
        float calcolaImporto();

};
