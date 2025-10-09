#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double largura, comprimento, valor_terreno, area, valor_total_terreno;

    cout <<"Qual a largura do seu terreno?"<< endl;
    cin >> largura;
    cout <<"Qual o comprimento do seu terreno?"<< endl;
    cin >> comprimento;
    cout <<"Qual o valor da área do terreno?"<< endl;
    cin >> valor_terreno;
    
    area = largura*comprimento;
    valor_total_terreno = area*valor_terreno;

    cout <<"A área do seu terreno é de "<< area <<" e o valor do terreno é de"<< valor_total_terreno<< endl;
    cout << fixed << setprecision(2);
    
    return 0;

}
