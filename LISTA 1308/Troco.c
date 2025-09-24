#include <stdio.h>

int main() {

    double preco_unitario, dinheiro, troco;
    int quant;

    printf("Bem-vindo à Mercearia!\n");

    printf("Qual o preço da unidade do produto que você quer comprar?\n");
    scanf("%lf", &preco_unitario);

    printf("Qual a quantidade do produto?\n");
    scanf("%d", &quant);

    printf("Quanto de dinheiro você tem?\n");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco_unitario * quant);

    if (troco>0){
        printf("Seu troco é: %.2lf\n", troco);
    }
    
    if (troco<0){
        printf("Seu dinheiro nao é suficiente!");
    }

    if (troco == 0){
        printf("Seu dinheiro esta exato com o valor da compra, nao ha troco.");
    }

    return 0;

}
