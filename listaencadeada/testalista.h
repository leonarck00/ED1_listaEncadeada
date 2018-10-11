#ifndef TESTALISTA_H
#define TESTALISTA_H
#include "lista.h"

class Testalista
{
private:
    lista obj;
public:
    Testalista();
    void menu();
    Item* criaitem();
};

#endif // TESTALISTA_H
