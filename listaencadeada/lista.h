#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "No.h"
#include "item.h"
#include <iostream>

using namespace std;

class lista
{
    No *inicio,*final;
public:
    lista();
    bool inserir(Item*);
    Item* retirar(Item*);
    Item* consultar(Item*);
    bool vazia()const;
    string getlista()const;
    void eliminarprimeiro();
    ~lista();
};

#endif // LISTAENCADEADA_H
