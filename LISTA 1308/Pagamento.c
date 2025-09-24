    #include <stdio.h>
    #include <string.h>
    #include <math.h>

    int main(){

        char nomefuncionario[50];
        double valorporhora, quantdhoras, salario;

        printf("Qual o nome do Funcionário que você quer consultar o salário?\n");
        scanf("%49s", nomefuncionario);

        printf("Qual o valor que ele recebe por hora?\n");
        scanf("%lf", &valorporhora);

        printf("Qual a quantidade de horas que ele trabalha?\n");
        scanf("%lf", &quantdhoras);

        salario = valorporhora*quantdhoras;

        printf("O salário que o Funcionário recebe é de: %.3lf\n", salario);

        return 0;
        
    }
