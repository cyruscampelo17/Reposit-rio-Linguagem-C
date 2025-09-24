#include <stdio.h>

int main(){

    double nvl_glicose;

    printf("Qual seu nível de glicose?\n");
    scanf("%lf", &nvl_glicose);

    if (nvl_glicose<100){
        printf("O seu nivel de glicose está normal");
    }
    
    if (nvl_glicose>100 && nvl_glicose<140){
        printf("O nivel da sua glicose está elevada");
    }
    
    if (nvl_glicose>140){
        printf("Você está com diabetes!");
    }

    return 0;

}
