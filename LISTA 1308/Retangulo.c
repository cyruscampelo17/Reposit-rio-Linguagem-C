#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    double base, altura;
    double area, perimetro, diagonal;

    printf("Qual o valor da base do seu retângulo?\n");
    scanf("%lf", &base);

    printf("Qual o valor da altura do seu retângulo?\n");
    scanf("%lf", &altura);

    area = base*altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt((base*base) + (altura*altura));

    printf("A sua área é de = %.2lf\n", area);
    printf("O perímetro do retângulo é de = %.2lf\n", perimetro);
    printf("O valor da diagonal do retângulo é de = %.2lf\n", diagonal);

    return 0;
    
}
