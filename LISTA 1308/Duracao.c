#include <stdio.h>

int main(){

    int duracao, horas, minutos, segundos;

    printf("Digite a duração em segundos:\n");
    scanf("%d", &duracao);

    horas = duracao/3600;
    minutos  = (duracao % 3600) / 60;
    segundos = duracao % 60;

    printf("Horas: %02d\n", horas);
    printf("Minutos: %02d\n", minutos);
    printf("Segundos: %02d\n", segundos);

    return 0;
    
}
