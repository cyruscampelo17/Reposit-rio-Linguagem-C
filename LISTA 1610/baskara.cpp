#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;

    cout <<"Qual o valor de a?"<< endl;
    cin >> a;
    cout <<"Qual o valor de b?"<< endl;
    cin >> b;
    cout <<"Qual o valor de c?"<< endl;
    cin >> c;

    cout <<"De acordo com os dados fornecidos, a equação do segundo grau fica: "<< a << "x² + "<< b << "x + "<< c << endl; 

    delta = b * b - 4 * a *c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout <<"O valor de Delta é de: "<< delta <<". Contendo x1 como: " << x1 << " e x2 como: "<< x2 << endl;

  return 0;

}
