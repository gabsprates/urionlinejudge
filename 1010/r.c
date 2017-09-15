#include <stdio.h>
#define LIMITE 2

int main() {
    int codigos[LIMITE], quantidade[LIMITE], i;
    double valorUnitario[LIMITE], total = 0;

    for (i = 0; i < LIMITE; i++) {
        scanf("%d %d %lf",
            &codigos[i],
            &quantidade[i],
            &valorUnitario[i]
        );

        total += quantidade[i] * valorUnitario[i];
    }

    printf("VALOR A PAGAR: R$ %.2lf", total);

    printf("\n");
    return 0;
}
