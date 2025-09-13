#include<stdio.h>

int main () {
    char opc;
    int a, b;

    printf ("Digite um numero: ");
    scanf("%d", &a);
    printf ("Digite outro numero: ");
    scanf("%d", &b);
    printf ("Digite a operacao: ");
    scanf(" %c", &opc);

    switch(opc) {
        case '+':
            printf("A soma eh: %d", a + b);
            break;
        case '-':
            printf("A subtracao eh: %d", a - b);
            break;
        case '*':
            printf("A multiplicacao eh: %d", a * b);
            break;
        case '/':
            printf("A divisao eh: %d", a / b);
            break;
        default:
            printf("Operacao invalida!");
    }

    return 0;

}