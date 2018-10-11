#include "Item.h"
#include<iostream>

using namespace std;

Item::Item()
{

}
void Item::setnome(string aux)
{
    nome=aux;
}

string Item::getnome()
{
    return nome;
}

void Item::settelefone(string aux)
{
    telefone=aux;
}

string Item::gettelefone()
{
    return telefone;
}

string Item::getitem()
{
    return nome+"\n"+telefone;
}
