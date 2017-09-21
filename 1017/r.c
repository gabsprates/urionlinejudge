#include <stdio.h>
#define KMLITRO 12

int distanciaPercorrida(int velocidade, int tempo) {
    return velocidade * tempo;
}

float litros(int distancia, int kmLitro) {
    return (float) distancia / kmLitro;
}

int main() {
    int velocidade, tempo, distancia;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = distanciaPercorrida(velocidade, tempo);

    printf("%.3f", litros(distancia, KMLITRO));

    printf("\n");
    return 0;
}
