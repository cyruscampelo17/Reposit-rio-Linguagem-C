#include <stdio.h>

int main(){

    double lancamento_1, lancamento_2, lancamento_3;

    printf("Qual foi a distância, em Metros, do seu primeiro lançamento?\n");
    scanf("%lf", &lancamento_1);

    printf("Qual foi a distância, em Metros, do seu segundo lançamento?\n");
    scanf("%lf", &lancamento_2);

    printf("Qual foi a distância, em Metros, do seu terceiro lançamento?\n");
    scanf("%lf", &lancamento_3);

    if (lancamento_1>lancamento_2 && lancamento_1>lancamento_3){
        printf("O seu primeiro lançamento foi o que chegou mais longe!");
    }
    if (lancamento_2>lancamento_1 && lancamento_2>lancamento_3){
        printf("O seu segundo lançamento foi o que chegou mais longe!\n");
    }
    if (lancamento_3>lancamento_1 && lancamento_3>lancamento_2){
        printf("O seu terceiro lançamento foi o que chegou mais longe!\n");
    }

    return 0;

}
