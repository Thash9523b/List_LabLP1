#include "Empregado.h"
#include <string>
using namespace std;

        Empregado::Empregado(){};
        Empregado::Empregado(string nome, string sobrenome, double salario){
            setNome(nome);
            setSobrenome(sobrenome);
            setSalario(salario);
        }

        void Empregado::setNome(string nome){
            this->nome=nome;
        }
        void Empregado::setSobrenome(string sobrenome){
            this->sobrenome=sobrenome;
        }
        void Empregado::setSalario(double salario){
            this->salario=salario;
            if(salario<0)
                this->salario=0;
        }

        string Empregado::getNome(){
            return nome;
        }
        string Empregado::getSobrenome(){
            return sobrenome;
        }
        double Empregado::getSalario(){
            return salario;
        }
