#include <stdio.h>
#define ANO 365
#define MES 30

int divide(int fator, int divisor) {
    return fator / divisor;
}
int resto(int fator, int divisor) {
    return fator % divisor;
}

int main() {

    int anos = 0, meses = 0, dias = 0;
    int input;

    scanf("%d", &input);

    anos    = divide(input, ANO);
    meses   = divide(resto(input, ANO), MES);
    dias    = resto(resto(input, ANO), MES);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", anos, meses, dias);

    printf("\n");
    return 0;
}
