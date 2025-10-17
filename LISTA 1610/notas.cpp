#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double nota1, nota2, media;
    string nome;

    cout <<"Qual o nome do Aluno?"<< endl;
    cin >> nome;
    cout <<"Qual a nota que este aluno tirou no primeiro semestre?"<< endl;
    cin >> nota1;
    cout <<"Qual a nota que este aluno tirou no segundo semestre?"<< endl;
    cin >> nota2;

    media = (nota1 + nota2)/2;
    cout <<"O aluno "<< nome << " ficou com "<< nota1 << " no primeiro semestre e no segundo ficou com " << nota2 << ". Ficando com a média de " << media << endl;
    
    if (media < 6){
        cout <<"Como o aluno ficou com uma média abaixo de 6, ele está reprovado"<< endl;
    }
    if (media >= 6){
        cout <<"Como a média do aluno ficou a cima ou igual a 6, ele está passado de ano."<< endl;
    }

  return 0;
  
}
