#include <stdio.h>

int main(){

    double n1, n2, soma;

    printf("Qual o primeiro número?\n");
    scanf("%lf", &n1);

    printf("Qual o segundo número?\n");
    scanf("%lf", &n2);

    soma = n1 + n2;

    printf("O valor da soma é: %.2lf\n", soma);

    return 0;

}
