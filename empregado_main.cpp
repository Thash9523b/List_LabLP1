#include "Empregado.cpp"
#include <string>
#include <iostream>
using namespace std;

int main (){

    Empregado emp1 = Empregado("Matheus", "Martins", 3000);
    Empregado emp2 = Empregado("Italo", "Ferreira", 2200);
    Empregado emp3 = Empregado("Arthur", "Martins", -1000);

    cout << "Salario anual de " << emp1.getNome() << " " << emp1.getSobrenome()
     << " " << "eh: " << emp1.getSalario()*12 << endl;
    cout << "Salario anual de " << emp2.getNome() << " " << emp2.getSobrenome()
     << " " << "eh: " << emp2.getSalario()*12 << endl;
    cout << "Salario anual de " << emp3.getNome() << " " << emp3.getSobrenome()
     << " " << "eh: " << emp3.getSalario()*12 << endl;
    cout << "\n";

    cout << "Salario de "<< emp1.getNome() << " " << emp1.getSobrenome()
     << " " << "apos aumeto de 10%: " << emp1.getSalario()*12*1.1 << endl;
    cout << "Salario de "<< emp2.getNome() << " " << emp2.getSobrenome()
     << " " << "apos aumeto de 10%: " << emp2.getSalario()*12*1.1 << endl;
     cout << "Salario de "<< emp3.getNome() << " " << emp3.getSobrenome()
     << " " << "apos aumeto de 10%: " << emp3.getSalario()*12*1.1 << endl;

return 0;
}

