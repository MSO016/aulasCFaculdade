#include <stdio.h>

int main() {
    int valor;
    int n100, n50, n20, n10, n5, n2;
   
    printf("Digite um valor entre 10 e 10000: ");
    scanf("%d", &valor);

    if (valor < 10 || valor > 10000) {
        printf("Valor inválido! Deve estar entre 10 e 10000.\n");
        return 0;
    }

    n100 = valor / 100;
    valor %= 100;

    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n2 = valor / 2;
    valor %= 2;

    // Exibe os resultados
    printf("Notas necessarias:\n");
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50 : %d\n", n50);
    printf("Notas de 20 : %d\n", n20);
    printf("Notas de 10 : %d\n", n10);
    printf("Notas de 5  : %d\n", n5);
    printf("Notas de 2  : %d\n", n2);

    if (valor > 0) {
        printf("Valor restante que nao pode ser trocado: %d\n", valor);
    }

    return 0;
}
 