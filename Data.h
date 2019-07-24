#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
using namespace std;

    class Data{
        private:
            int dia, mes, ano;

        public:
            Data();
            Data(int dia, int mes, int ano);

            Compara(Data objeto);

            string getMesExtenso();

            bool isBissexto();

            int getDia();
            int getMes();
            int getAno();

            void setDia(int dia);
            void setMes(int mes);
            void setAno(int ano);
    };

    #endif // DATA_H_INCLUDED
