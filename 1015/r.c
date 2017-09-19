#include <stdio.h>
#include <math.h>

float delta(
    float x1,
    float x2) {
    return x2 - x1;
}

float distanciaEntrePontos(
    float x,
    float y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}


int main() {

    float x1, x2;
    float y1, y2;
    float distancia;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    distancia = distanciaEntrePontos(
        delta(x2, x1),
        delta(y2, y1)
    );

    printf("%.4f", distancia);

    printf("\n");
    return 0;
}
