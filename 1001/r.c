#include <stdio.h>
#define NUMEROS 2
 
int main() {
    int nums[NUMEROS], soma = 0, i;
    
    for (i = 0; i<NUMEROS; i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    printf("X = %d", soma);
    
    printf("\n");
    return 0;
}
