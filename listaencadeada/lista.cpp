#include "lista.h"
#include "no.h"

lista::lista()
{
    inicio=final=0;
}
bool lista::inserir(Item* aux)
{
    if(aux==0)
    {
        return false;
    }

    Item* busca=consultar(aux);
    if(busca!=0)
    {
        return false;
    }

    No* z=No::montano(aux);
    if(vazia())
    {
        inicio=final=z;
        return true;
    }

    final->setproximo(z);
    final=z;
    return true;
}
Item* lista::retirar(Item* aux)
{
    if(aux==0||vazia())return 0;

    No* p,*a;
    a=p=inicio;
    for( ; p!=0 && p->getdados()->getnome()!=aux->getnome();a=p,p=p->getproximo());

    if(p==0) return 0;

    a->setproximo(p->getproximo());
    p->setproximo(0);

    Item* z=No::desmontano(p);
    return z;
}

Item* lista::consultar(Item* aux)
{
    if(aux==0||vazia()) return 0;

    No *p;
    for(p=0 ;p!=0 && p->getdados()->getnome()!=aux->getnome(); p=p->getproximo());

    if(p==0) return 0;

    Item *x=new Item;
    *x=*p->getdados();

    return x;
}

bool lista::vazia()const
{
    return (inicio==0);
}

std::string lista::getlista()const
{
    if(vazia())return "vazia!\n";

    std::string aux=" ";
    No* p=inicio;
    while(p!=0)
    {
        aux=aux+p->getdados()->getitem();
        aux=aux+"\n";
    }

    return aux;
}

void lista::eliminarprimeiro()
{
    if(vazia()) return;

    No *p=inicio;
    inicio=inicio->getproximo();
    Item *x=No::desmontano(p);
    delete x;

}

lista::~lista()
{
    while(!vazia())
    {
        eliminarprimeiro();
    }

}
