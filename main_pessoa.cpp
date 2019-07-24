#include "Pessoa.cpp"
#include <iostream>
#include <string>
using namespace std;

int main (){

    Pessoa h1 = Pessoa("Italo");
    Pessoa h2 = Pessoa("Matheus", 19, "(83)99828-3892");

    cout<<"Nome: "<<h2.getNome()<<endl;
    cout<<"Idade: "<<h2.getIdade()<<endl;
    cout<<"Telefone: "<<h2.getTelefone()<<"\n"<<endl;

    Pessoa h3 = Pessoa ("Gustavo", 20, "(83)99287-0192");

    cout<<"Nome: "<<h3.getNome()<<endl;
    cout<<"Idade: "<<h3.getIdade()<<endl;
    cout<<"Telefone: "<<h3.getTelefone()<<"\n"<<endl;



    return 0;
}
