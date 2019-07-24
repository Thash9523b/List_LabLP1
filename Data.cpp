#include "data.h"
#include <iostream>
using namespace std;

    Data::Data(){
        dia = 1;
        mes = 1;
        ano = 1;
    }

    Data::Data(int dia, int mes, int ano){
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }

    int Data::Compara(Data objeto){
        if ((objeto.dia == dia) && (objeto.mes == mes) && (objeto.ano == ano)){
            return 0;
        }else if(ano > objeto.ano){
            return 1;
        }else if(ano == objeto.ano){
            if(mes > objeto.mes){
                return 1;
            }else if(mes == objeto.mes){
                if(dia > objeto.dia){
                    return 1;
                }else{
                    return -1;
                }
            }
        }
    }

    std::string Data::getMesExtenso(){
        switch(mes){
            case 1:
                return "Janeiro";
                break;
            case 2:
                return "Fevereiro";
                break;
            case 3:
                return "Marco";
                break;
            case 4:
                return "Abril";
                break;
            case 5:
                return "Maio";
                break;
            case 6:
                return "Junho";
                break;
            case 7:
                return "Julho";
                break;
            case 8:
                return "Agosto";
                break;
            case 9:
                return "Setembro";
                break;
            case 10:
                return "Outubro";
                break;
            case 11:
                return "Novembro";
                break;
            case 12:
                return "Dezembro";
        }
    }


    bool Data::isBissexto(){
        if(ano % 100 == 0){
            if(ano % 400 == 0){
                cout << "Eh Bissexto" << endl;
                return true;
            }
        }else if(ano % 4 == 0 ){
            cout << "Eh Bissexto" << endl;
            return true;
        }else{
            cout << "Nao eh Bissexto" << endl;
            return false;
        }
    }

    int Data::getDia(){
        return dia;
    }

    int Data::getMes(){
        return mes;
    }

    int Data::getAno(){
        return ano;
    }

    void Data::setDia(int dia){
        if(dia < 1 || dia > 31)
            dia = 1;
        else
            this->dia = dia;
    }

    void Data::setMes(int mes){
        if(mes < 1 || mes > 12)
            mes = 1;
        else
            this->mes = mes;
    }

    void Data::setAno(int ano){
        if(ano < 1)
            ano = 1;
        else
            this->ano = ano;
    }
