#include<stdio.h>

int main() {
    int soma = 0;
    int i = 1;

    while (soma <= 1000) {
        soma += i;
        i++;
        printf("Valor atual: %d \n", soma);
    }

    printf("Soma final: %d \n", soma);

    return 0;
}