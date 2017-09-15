#include <stdio.h>

int main() {
    int a, b, c, d, diff = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diff = (a * b) - (c * d);

    printf("DIFERENCA = %d", diff);

    printf("\n");
    return 0;
}
