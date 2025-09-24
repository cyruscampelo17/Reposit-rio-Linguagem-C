#include <stdio.h>
#include <math.h>

int main(){

    double km, combustivel, consumoM;

    printf("Quantos Km você percorreu com o código?\n");
    scanf("%lf", &km);

    printf("Quanto de combustível foi gasto em L?\n");
    scanf("%lf", &combustivel);

    consumoM = km/combustivel;

    printf("O consumo médio de combustível foi de: %.3lf\n", consumoM);

}
