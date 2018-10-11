#ifndef NO_H
#define NO_H
#include "Item.h"

class No
{
    No* proximo;
    Item* dados;

public:
    No();
    void setproximo(No*);
    No* getproximo()const;
    Item* getdados()const;
    void setdados(Item*);
    static No* montano(Item* );
    static Item* desmontano(No* );


};

#endif // NO_H
