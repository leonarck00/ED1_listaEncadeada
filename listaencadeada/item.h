#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

class Item
{
private:
    string nome,telefone;
public:
    Item();
    void setnome(string);
    string getnome();
    string gettelefone();
    void settelefone(string);
    string getitem();
};

#endif // ITEM_H
