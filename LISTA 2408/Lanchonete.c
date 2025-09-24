#include <stdio.h>

int main(){

    int cod, quant;
    double valorpagamento;

    printf("Olá, seja bem vindo a lanchonete\n");
    printf("Qual o código do produto que você quer comprar?\n");
    scanf("%d", &cod);
    printf("Qual a quantidade desse produto você quer comprar?\n");
    scanf("%d", &quant);

    if (cod == 1){

        valorpagamento = 5*quant;
        printf("O valor a ser pago é de: %.2lf\n", valorpagamento);

    }
    if (cod == 2){

        valorpagamento = 3.50*quant;
        printf("O valor a ser pago é de: %.2lf\n", valorpagamento);

    }
    if(cod == 3){

        valorpagamento = 4.80*quant;
        printf("O valor a ser pago é de: %.2lf\n", valorpagamento);

    }
    if(cod == 4){
        
        valorpagamento = 8.90*quant;
        printf("O valor a ser pago é de: %.2lf\n", valorpagamento);

    }
    else if(cod == 5){

        valorpagamento = 7.32*quant;
        printf("O valor a ser pago é de: %.2lf\n", valorpagamento);

    }
    if (cod>=6){
        printf("Esse código é inválido!");
    }

    return 0;

}
