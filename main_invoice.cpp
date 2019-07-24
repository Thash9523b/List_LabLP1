#include "Invoice.cpp"
#include <string>
#include <iostream>
using namespace std;

int main (){

    Invoice i1 = Invoice(1, 10, 3.2, "cabo");
    Invoice i2 = Invoice(2, 14, 29.9, "teclado");
    Invoice i3 = Invoice(3, 2, 15.50, "mouse");

    cout<<"Descricao: "<<i1.getDescricao()<<endl;
    cout<<"Numero do item: "<<i1.getNum_item()<<endl;
    cout<<"Quantidade: "<<i1.getQuant()<<endl;
    cout<<"Preco: "<<i1.getPreco()<<endl;
    cout<<"Preco Total: "<<i1.getInvoiceAmount()<< "\n" << endl;

    cout<<"Descricao: "<<i2.getDescricao()<<endl;
    cout<<"Numero do item: "<<i2.getNum_item()<<endl;
    cout<<"Quantidade: "<<i2.getQuant()<<endl;
    cout<<"Preco: "<<i2.getPreco()<<endl;
    cout<<"Preco Total: "<<i2.getInvoiceAmount()<< "\n" << endl;

    cout<<"Descricao: "<<i3.getDescricao()<<endl;
    cout<<"Numero do item: "<<i3.getNum_item()<<endl;
    cout<<"Quantidade: "<<i3.getQuant()<<endl;
    cout<<"Preco: "<<i3.getPreco()<<endl;
    cout<<"Preco Total: "<<i3.getInvoiceAmount()<< "\n" << endl;


    return 0;
}
