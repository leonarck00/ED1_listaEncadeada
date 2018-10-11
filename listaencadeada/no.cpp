#include "No.h"

No::No()
{
    proximo=nullptr;
    dados=nullptr;
}
void No::setproximo(No* aux)
{
    proximo=aux;
}

No* No::getproximo()const
{
    return proximo;
}
void No::setdados(Item* aux)
{
    dados=aux;
}

Item* No::getdados()const
{
    return dados;
}

No* No::montano(Item* aux)
{
    if(aux==nullptr)
        return 0;
    else
    {
        No* x=new No;
        x->setproximo(0);
        x->setdados(aux);
        return x;
    }
}

Item* No::desmontano(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Item* x=aux->getdados();
        delete aux;
        return x;
    }
}
