#include "Pessoa.h"
#include <string>

    Pessoa::Pessoa(string nome){
        //setNome();
        this->nome = nome;
    };

    Pessoa::Pessoa(string nome, int idade, string telefone){
        this->nome = nome;
        this->idade = idade;
        this->telefone = telefone;
    };

        void Pessoa::setNome(string nome){
            this->nome = nome;
        };
        void Pessoa::setIdade(int idade){
            this->idade = idade;
        };
        void Pessoa::setTelefone(string idade){
            this->telefone = telefone;
        };

        string Pessoa::getNome(){
            return nome;
        };
        int Pessoa::getIdade(){
            return idade;
        };
        string Pessoa::getTelefone(){
            return telefone;
        };
