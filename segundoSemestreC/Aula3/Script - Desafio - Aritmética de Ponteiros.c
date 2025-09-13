#include <stdio.h>

int main () {
    int nums[5] = {2, 4, 6, 8, 10};
    int *p = nums;

    // Mostre na tela os valores usando aritmetica de
    // ponteiros em no maximo 3 linhas

    for(int i = 0; i < 5; i++) {
        printf("Valor de %d: %d \n", i, *(p + i));
    }

    return 0;
}