#include <stdio.h>

int main() {
    
    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaidade;

    printf("Qual o nome da primeira pessoa?\n");
    scanf("%49s", nome1);

    printf("Qual a idade da primeira pessoa?\n");
    scanf("%d", &idade1);

    printf("Qual o nome da segunda pessoa?\n");
    scanf("%49s", nome2);

    printf("Qual a idade da segunda pessoa?\n");
    scanf("%d", &idade2);

    mediaidade = (idade1 + idade2) / 2.0;

    printf("O nome da primeira pessoa é: %s, e o nome da segunda pessoa é: %s\n", nome1, nome2);
    printf("A média da idade deles é de: %.2lf\n", mediaidade);

    return 0;
}
