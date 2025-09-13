#include <stdio.h>

int main () {
    int i, quantidade, tipo;
    float preco, total;
    
    printf("insira a quantidade de ingressos: ");
    scanf("%d", &quantidade);

    for(i=0; i < quantidade; i++) {
        do {
        printf("Escolha entre os tipos 1 ou 2: ");
        scanf("%d", &tipo);

        switch (tipo){
            case 1:
            preco=10.0;
            break;

            case 2:
            preco=20.0;
            break;

            default:
            
            printf("Valor invalido!\n");
            }
        }
        while (tipo !=1 && tipo !=2);

        total+=preco;
        }

    if(quantidade > 5) {
        total = total * 0.9;
        
    }
    printf("Total a pagar e: R$ %.2f\n", total);
    return 0;
}

//Desafio 1: Sistema de Bilhetes
//Descrição:
//Você trabalha em uma bilheteria de cinema. Peça ao usuário o número de ingressos desejados, 
// o tipo de ingresso (1 para meia, 2 para inteira) e calcule o total.

//Se comprar mais de 5 ingressos, aplicar 10% de desconto.

//Conceitos: if, switch, for
