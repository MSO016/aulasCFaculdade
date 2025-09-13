// Aula_4
#include <stdio.h>

int main() {
    int vetor[3] = {10, 20, 30};
    int *p = vetor;
    printf("Endereco p: %p \n", p);
    printf("Endereco p+1: %p \n", p + 1);
    printf("Endereco p+2: %p \n", p + 2);

    return 0;
}