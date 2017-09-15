#include <stdio.h>

int main() {
    int km;
    float litros;

    scanf("%d", &km);
    scanf("%f", &litros);

    printf("%.3f km/l", (km / litros));

    printf("\n");
    return 0;
}
