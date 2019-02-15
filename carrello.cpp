#include "carrello.h"

Carrello::Carrello()
{
    nProdotti=0;
    importo=0;
    for(int i=0; i<MAXCARRELLO; i++)
        elencoProd[i]=NULL;
}

int Carrello::getNProdotti()
{
    return nProdotti;
}

bool Carrello::aggiungiProdotto(Prodotto* p)
{
    if(nProdotti>=MAXCARRELLO)
        return false;
    
    elencoProd[nProdotti++]=p;
    importo+=p->getPrezzo();
    return true;
}

bool Carrello::eliminaProdotto(Prodotto p)
{
    if(nProdotti==0)
        return false;
    int i;
    bool trovato=false;
    for(i=0;!trovato && i<nProdotti;i++)
    {
        if(p.getCodice()==elencoProd[i]->getCodice())
        {
            trovato=true;
            importo-=p.getPrezzo();
        }
    }
    
    if(trovato)
    {
        for(i;i<nProdotti;i++)
        {
            elencoProd[i-1]=elencoProd[i];
        }
        elencoProd[i-1]=NULL;
        nProdotti--;
        return true;
    }
    return false;
    
}

void Carrello::elencaProdotti()
{
    if(nProdotti==0)
    {
        cout<<"\n Carrello Vuoto";
        return;
    }
    
    cout<<"\n------ Carrello -----";
    
    for(int i=0; i<nProdotti;i++)
    {
        cout<<endl<<elencoProd[i]->getCodice()<<"\t"<<elencoProd[i]->getTitolo()<<"\t"<<elencoProd[i]->getPrezzo();
    }
    cout<<"\n---------------------\n";
    cout<<"Importo\t"<<importo;
        
    
}

float Carrello::calcolaImporto()
{
    return importo;
}