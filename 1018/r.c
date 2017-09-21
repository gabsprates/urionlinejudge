#include <stdio.h>
#define LIMITE 7

int quantidadeNotas(int valor, int nota) {
    int quantidade = 0;

    while ((valor - nota) >= 0) {
        valor -= nota;
        quantidade++;
    }

    return quantidade;
}

int main() {
    const int NOTAS[] = { 100, 50, 20, 10, 5, 2, 1 };
    int i, valorTotal, quantidadeNota;

    scanf("%d", &valorTotal);
    printf("%d", valorTotal);

    for (i = 0; i < LIMITE; i++) {
        quantidadeNota = quantidadeNotas(valorTotal, NOTAS[i]);
        valorTotal -= quantidadeNota * NOTAS[i];
        printf("\n%d nota(s) de R$ %d,00", quantidadeNota, NOTAS[i]);
    }

    printf("\n");
    return 0;
}
