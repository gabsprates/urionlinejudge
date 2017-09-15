#include <stdio.h>

int main() {
    int funcionario, horas;
    double valorHora, salario;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%lf", &valorHora);

    salario = horas * valorHora;

    printf("NUMBER = %d", funcionario);
    printf("\n");
    printf("SALARY = U$ %.2lf", salario);

    printf("\n");
    return 0;
}
