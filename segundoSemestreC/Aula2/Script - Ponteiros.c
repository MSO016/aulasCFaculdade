#include<stdio.h>

int main() {
    int numero = 25;
    int *p;
    p = &numero;

    printf("Valor de <numero>: %d \n", numero);
    printf("Endereco de <numero>: %p \n", (void*)&numero);
    printf("Valor de <p>: %p \n", (void*)p);
    printf("Valor de Ponteiro <*p> %d \n", *p);

    return 0;
}