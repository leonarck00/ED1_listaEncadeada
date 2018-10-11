#include "testalista.h"
#include <iostream>

using namespace std;

Testalista::Testalista()
{

}
void Testalista::menu()
{
    unsigned int op;
    Item *aux;
    bool ok;
    do
    {

        cout <<(" 1 - Inserir \n");
        cout <<(" 2 - Remover \n");
        cout <<(" 3 - Procurar \n");
        cout <<(" 4 - Encerrar \n");
        cout <<(" Sua escolha [  ]\b\b\b");
        cin>>op;

        switch (op)
        {
            case 1:

                aux=criaitem();

                ok=obj.inserir(aux);
                if(ok)
                {
                    cout<<("Sucesso!");
                }
                else
                {
                    cout<<("Insucesso");
                }
                break;

            case 2:

                aux=criaitem();
                aux=obj.retirar(aux);
                if(aux)
                {
                    cout<<aux->getitem();
                }
                else
                {
                    cout<<("Insucesso!");
                }

                break;

            case 3:

                cout<<obj.getlista();

                break;

            case 4:

                cout<<("Encerrado!!!\n");

                break;

            default:
                cout<<("Digite um numero valido!");
                break;
        }
    }while(op!=4);

}

Item* Testalista::criaitem()
{
    Item *x=new Item;
    string aux;
    cin.ignore();

    cout<<("\nDigite o nome: ");
    getline(cin,aux);
    x->setnome(aux);

    puts("\nDigite o telefone: ");
    getline(cin,aux);
    x->settelefone(aux);


    return x;
}
