#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double base, altura, area, perimetro, diagonal, diagonal_2;

    cout << "Qual o tamanho da base do retângulo em cm?"<< endl;
    cin >> base;
    cout <<"Qual a altura do seu retângulo?"<< endl;
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal_2 = ((base * base) + (altura * altura));
    diagonal = sqrt(diagonal_2);

    cout << fixed << setprecision(4);
    cout <<"o tamanho da base é de: "<< area << ". Com perímetro de: "<< perimetro << ". E com diagonal de: " << diagonal;

    return 0;
}
