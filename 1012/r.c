#include <stdio.h>

#define PI 3.14159

double eleva(double valor, int exp) {
    int i;
    double total = 1;
    for (i = 0; i < exp; i++) {
        total *= valor;
    }

    return total;
}


// Fórmulas

double areaQuadrada(
    double base,
    double altura) {
    return base * altura;
}

double areaTriangulo(
    double base,
    double altura) {
    return (base * altura) / 2;
}

double areaCirculo(double raio) {
    return PI * eleva(raio, 2);
}

double areaTrapezio(
    double baseMaior,
    double baseMenor,
    double altura) {
    return ((baseMaior + baseMenor) * altura) / 2;
}

int main() {
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %.3lf\n", areaTriangulo(A, C));
    printf("CIRCULO: %.3lf\n", areaCirculo(C));
    printf("TRAPEZIO: %.3lf\n", areaTrapezio(A, B, C));
    printf("QUADRADO: %.3lf\n", areaQuadrada(B, B));
    printf("RETANGULO: %.3lf", areaQuadrada(A, B));

    printf("\n");
    return 0;
}
