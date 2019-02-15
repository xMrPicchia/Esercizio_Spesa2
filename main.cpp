#include "carrello.h"

int main()
{
    Carrello c;    
    Prodotto* p1=new Prodotto(1,"Pane", "Pane", 2019, 1.50, 10);
    Prodotto* p2=new Prodotto(2,"P2","P2", 2018, 21.50, 20);
    Prodotto* p3=new Prodotto(3,"P3","P3", 2018, 0.50, 10);
    Prodotto* p4=new Prodotto(4,"P4","P4", 2018, 7.0, 25);
    
    if(c.aggiungiProdotto(p1))
        cout<<"\nProdotto aggiunto al carrello";
    else
        cout<<"\nCarrello Pieno";
    if(c.aggiungiProdotto(p2))
        cout<<"\nProdotto aggiunto al carrello";
    else
        cout<<"\nCarrello Pieno";
    if(c.aggiungiProdotto(p3))
        cout<<"\nProdotto aggiunto al carrello";
    else
        cout<<"\nCarrello Pieno";
    if(c.aggiungiProdotto(p4))
        cout<<"\nProdotto aggiunto al carrello";
    else
        cout<<"\nCarrello Pieno";
    
    c.elencaProdotti();
    
    
    if(c.eliminaProdotto(*p2))
        cout<<"\nProdotto rimosso dal carrello";
    else
        cout<<"\nProdotto non presente";
    
    c.elencaProdotti();
	
	cout<<"\nStampa Prodotto P1"<<*p1;
	cin>>*p1;
	cout<<*p1;
}