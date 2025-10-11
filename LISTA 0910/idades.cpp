#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout <<"Qual o nome da primeira pessoa?"<< endl;
    cin >> nome1;
    cout <<"Qual a idade da primeira pessoa?"<< endl;
    cin >> idade1;
    cout <<"Qual o nome da segunda pessoa?"<< endl;
    cin >> nome2;
    cout <<"Qual a idade da segunda pessoa?"<< endl;
    cin >> idade2;

    media = (idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout <<"O nome da primeira pessoa é "<< nome1 <<" e o da segunda pessoa é"<< nome2 <<". A idade da primeira pessoa é de "<< idade1 <<" e a segunda pessoa tem "<< idade2 << endl;
    cout <<"A média de idade é de: "<< media << endl;

    return 0;
}
