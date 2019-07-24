#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice
{
    public:
        Invoice(int num_item, int quant, double preco, string descricao);

        void setDescricao(string descricao);
        void setNum_item(int num_item);
        void setQuant(int quant);
        void setPreco(double preco);

        string getDescricao();
        int getNum_item();
        int getQuant();
        double getPreco();

        double getInvoiceAmount();


    protected:

    private:
        string descricao;
        int num_item, quant;
        double preco;

};

#endif // INVOICE_H
