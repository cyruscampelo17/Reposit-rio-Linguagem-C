#include <string.h>
#include <stdio.h>

int main(){
    
    double largura, comprimento, preco_metro;
    double area, preco;

    printf("Digite a largura do terreno em metros.\n");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno em metros.\n");
    scanf("%lf", &comprimento);

    printf("Digite o valor do m².\n");
    scanf("%lf", &preco_metro);

    area = comprimento*largura;
    preco = area*preco_metro;

    printf("O valor da área vai ser: %.2lf\n", area);
    printf("O preço vai ser: %.2lf\n", preco);
    
    return 0;
}
