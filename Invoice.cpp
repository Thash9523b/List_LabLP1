#include "Invoice.h"
#include <iostream>
#include <string>
using namespace std;

        Invoice::Invoice(int num_item, int quant, double preco, string descricao){
            setNum_item(num_item);
            setQuant(quant);
            setPreco(preco);
            setDescricao(descricao);
        };

        void Invoice::setDescricao(string descricao){
            this->descricao = descricao;
        };
        void Invoice::setNum_item(int num_item){
            this->num_item = num_item;
        };
        void Invoice::setQuant(int quant){
            if(quant < 1)
                this -> quant = 0;
            else
                this -> quant = quant;
        };
        void Invoice::setPreco(double preco){
           if(preco < 0)
                this -> preco = 0;
            else
                this -> preco = preco;
        };

        string Invoice::getDescricao(){
            return descricao;
        };
        int Invoice::getNum_item(){
            return num_item;
        };
        int Invoice::getQuant(){
            return quant;
        };
        double Invoice::getPreco(){
            return preco;
        };

        double Invoice::getInvoiceAmount(){
            return quant * preco;
        };
