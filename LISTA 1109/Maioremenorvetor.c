#include <stdio.h>

int main() {
    int vetor[15], i, maior, menor;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];
    for (i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    printf("Maior: %d, Menor: %d\n", maior, menor);
    return 0;
}
