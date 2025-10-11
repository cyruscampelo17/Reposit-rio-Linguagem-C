#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double preco, dinheiro, troco, negativo, valor_compra;
    int unidade;

    cout <<"Qual a quantidade do produto que quer comprar?"<< endl;
    cin >> unidade;
    cout <<"Quanto custa uma unidade desse produto?"<< endl;
    cin >> preco;
    cout <<"Quanto de dinheiro você tem?"<< endl;
    cin >> dinheiro;

    valor_compra = (preco * unidade);
    troco = valor_compra - dinheiro;

    if (dinheiro > troco){
        cout <<"O seu troco vai ser de: "<< troco << endl;
    }
    if (valor_compra > dinheiro){
        negativo = valor_compra - dinheiro;
        cout <<"Você não contém dinheiro o suficiente, está faltando: "<< negativo << endl;
    }
    else{
        cout <<"O seu dinheiro está certinho, não haverá troco."<< endl;
    }

    return 0;
}
