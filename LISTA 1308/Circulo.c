#include <stdio.h>
#include <math.h>
#include <string.h>

#define pi 3.14159

int main(){

    double r, area;
    
    printf("Qual o valor do raio do seu circulo?\n");
    scanf("%lf", &r);

    area = (r * r) * pi;

    printf("A área do seu circulo é: %.3lf\n", area);

    return 0;

}
