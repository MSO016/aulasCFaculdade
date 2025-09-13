#include <stdio.h>

int main() {
    int quantidade, tipo, i;
    float preco, total = 0;

    printf("Quantos ingressos deseja comprar? ");
    scanf("%d", &quantidade);

        for (i = 0; i < quantidade; i++) {
            printf("Digite o tipo 1 ou 2?");
            scanf("%d", &tipo);

                switch (tipo) {

                    case 1:
                        preco=10.0;
                        break;
                    case 2:
                        preco=20.0;
                        break;
                    default:
                        preco=0;
                        printf("Valor invalido");
                }
        total+= preco;
        }
        
        
    

    if (quantidade > 5) {
        total = total * 0.9; //desconto de 10%
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
//Desafio 1: Sistema de Bilhetes
//Descrição:
//Você trabalha em uma bilheteria de cinema. Peça ao usuário o número de ingressos desejados, 
// o tipo de ingresso (1 para meia, 2 para inteira) e calcule o total.

//Se comprar mais de 5 ingressos, aplicar 10% de desconto.

//Conceitos: if, switch, for
