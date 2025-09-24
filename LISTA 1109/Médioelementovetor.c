#include <stdio.h>

int main() {
    float vetor[8], soma = 0, media;

    printf("Digite 8 números reais:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 8;
    printf("Média: %.2f\n", media);
    return 0;
}
