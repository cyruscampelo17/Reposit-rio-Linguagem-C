#include <stdio.h>
#include <math.h>

int main(){

   double a, b, c;
   double area_quadrado, area_triangulo, area_trapezio;

   printf("Qual o valor do lado A?\n");
   scanf("%lf", &a);

   printf("Qual o valor do lado B?\n");
   scanf("%lf", &b);

   printf("Qual o valor do lado B?\n");
   scanf("%lf", &c);

   area_quadrado = a*a;
   area_triangulo = (a*b)/2;
   area_trapezio = ((a+b)*c)/2;

   printf("A área do quadrado com os valores dados é de: %.4lf\n", area_quadrado);
   printf("A área do triângulo com os valores dados é de: %.4lf\n", area_triangulo);
   printf("A área do trapezio com os valores dados é de: %4.lf\n", area_trapezio);

   return 0;

}
