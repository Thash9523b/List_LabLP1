#include "Data.cpp"
#include <string>
#include <iostream>
using namespace std;

int main (){

    Data d1 = Data(03,01,2000);
    Data d2 = Data(05,07,1970);
    Data d3 = Data(03,10,1997);


    cout << "Data: " << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno()<< endl;
    cout << d1.isBissexto()<< "\n" << endl;

    cout << "Data: " << d2.getDia() << "/" << d2.getMes() << "/" << d2.getAno()<< endl;
    cout << d2.isBissexto()<< "\n" << endl;

    cout << "Data: " << d3.getDia() << "/" << d3.getMes() << "/" << d3.getAno()<< endl;
    cout << d3.isBissexto()<< "\n" << endl;


    return 0;
}
