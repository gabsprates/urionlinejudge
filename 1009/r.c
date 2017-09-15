#include <stdio.h>
#define PORCENTAGEM 0.15

int main() {
    char nome[60];
    double salario, vendas, total;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    total = salario + (vendas * PORCENTAGEM);

    printf("TOTAL = R$ %.2lf", total);

    printf("\n");
    return 0;
}
