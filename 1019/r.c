#include <stdio.h>
#define DIVISOR 60

int divide(int fator) {
    return fator / DIVISOR;
}
int resto(int fator) {
    return fator % DIVISOR;
}

int main() {

    int horas = 0, minutos = 0, segundos = 0;
    int input;

    scanf("%d", &input);

    segundos    = resto(input);
    minutos     = resto(divide(input));
    horas       = divide(divide(input));

    printf("%d:%d:%d", horas, minutos, segundos);

    printf("\n");
    return 0;
}
