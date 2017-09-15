#include <stdio.h>
#include <stdlib.h>

int maiorAB(int A, int B) {
    return (A + B + abs(A - B)) / 2;
}

int main() {
    int A, B, C, maior;

    scanf("%d %d %d", &A, &B, &C);

    maior = maiorAB(A, B);
    maior = maiorAB(maior, C);

    printf("%d eh o maior", maior);

    printf("\n");
    return 0;
}
