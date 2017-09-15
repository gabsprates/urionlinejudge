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

double volume(double raio) {
    return (4.0 / 3) * PI * eleva(raio, 3);
}

int main() {
    double raio;

    scanf("%lf", &raio);
    printf("VOLUME = %.3lf", volume(raio));

    printf("\n");
    return 0;
}
