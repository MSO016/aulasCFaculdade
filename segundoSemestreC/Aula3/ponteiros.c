#include <stdio.h>
#include <string.h>

int main() {
    int numero = 25;
    int *p = &numero;
    p = &numero;

    printf("numero de <numero>: %d\n", numero);
    printf("Endereco de <numero>: %p\n",(void*)&numero);
    printf("Valor de <p>: %p \n",(void*)p);
    printf("Valor de ponteiro <*p> %d \n", *p);

    return 0;
}
