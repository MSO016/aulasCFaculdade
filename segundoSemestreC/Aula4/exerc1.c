#include <stdio.h>

int main() {
    int quantidade, tipo, i;
    float preco, total = 0;

    printf("Quantos ingressos deseja comprar? ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Tipo do ingresso (1 = meia, 2 = inteira): ");
        scanf("%d", &tipo);

        switch (tipo) {
            case 1:
                preco = 10.0; // meia
                break;
            case 2:
                preco = 20.0; // inteira
                break;
            default:
                preco = 0;
                printf("Tipo invalido!\n");
                i - 1;
        }
        total += preco;
    }

    if (quantidade > 5) {
        total = total * 0.9; 
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
