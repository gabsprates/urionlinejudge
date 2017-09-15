#include <stdio.h>
#define NUMEROS 2

int main() {
    int nums[NUMEROS], prod = 1, i;

    for (i = 0; i<NUMEROS; i++) {
        scanf("%d", &nums[i]);
        prod *= nums[i];
    }

    printf("PROD = %d", prod);

    printf("\n");
    return 0;
}
