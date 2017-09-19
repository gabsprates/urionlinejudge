#include <stdio.h>
#define MHORA 60

double tempoDeslocamentoHorario(int s0, int s, int v) {
    return (s - s0) / (double) v;
}

int main() {
    double minutos;
    int distancia, vX = 60, vY = 90;

    scanf("%d", &distancia);

    minutos = tempoDeslocamentoHorario(0, distancia, (vY - vX));

    printf("%d minutos", (int) (minutos * MHORA));

    printf("\n");
    return 0;
}
