#include <stdio.h>

int main(){

    int escolha;
    double FpC, CpF, Celsius, Fahrenheit;

    printf("Olá, você está no conversor de medida de temperatura! Qual a medida que você quer converter?\n");
    printf("Digite 1 para Celsius e Digite 2 para Fahrenheit\n");
    scanf("%d", &escolha);

    if(escolha == 1){

        printf("Você escolheu converter Fahrenheit para Celsius!\n");
        printf("Qual a temperatura em °F você quer converter?\n");
        scanf("%lf", &Fahrenheit);

        FpC = (Fahrenheit - 32.0) * 5.0 / 9.0;;

        printf("A sua temperatura em °F para °C é de: %.2lf\n", FpC);

    }

    if (escolha == 2){

        printf("Você escolheu converter Celsius para Fahrenheit!\n");
        printf("Qual a temperatura em °C você quer converter?\n");
        scanf("%lf", &Celsius);

        CpF = (Celsius * 9.0 / 5.0) + 32.0;

        printf("A sua temperatura em °C para °F é de: %.2lf\n", CpF);

    }

    return 0;

}
