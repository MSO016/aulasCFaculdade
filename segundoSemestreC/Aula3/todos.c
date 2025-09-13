#include <stdio.h>
#include <string.h>

// Função para calcular a média de 3 números
void calcularMedia() {
    float n1, n2, n3, media;
    
    printf("\n=== CALCULADORA DE MÉDIA ===\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    printf("A média é: %.2f\n", media);
}

// Função para calcular a soma de 2 números
void calcularSoma() {
    int a, b;
    
    printf("\n=== CALCULADORA DE SOMA ===\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    printf("A soma de %d + %d = %d\n", a, b, a + b);
}

// Função para exercício com FOR (tabuada)
void exercicioFor() {
    int i, n;
    
    printf("\n=== TABUADA COM FOR ===\n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Função para exercício com IF (sistema de notas)
void exercicioIf() {
    float nota;
    
    printf("\n=== SISTEMA DE NOTAS ===\n");
    printf("Digite a nota final: ");
    scanf("%f", &nota);
    
    if (nota >= 7) {
        printf("Aprovado :)\n");
    } else if (nota >= 5) {
        printf("Recuperacao :|\n");
    } else {
        printf("Reprovado :(\n");
    }
}

// Função para exercício com SWITCH (calculadora)
void exercicioSwitch() {
    char opc;
    int a, b;
    
    printf("\n=== CALCULADORA COM SWITCH ===\n");
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &opc);
    
    switch(opc) {
        case '+':
            printf("A soma eh: %d\n", a + b);
            break;
        case '-':
            printf("A subtracao eh: %d\n", a - b);
            break;
        case '*':
            printf("A multiplicacao eh: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("A divisao eh: %.2f\n", (float)a / b);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }
}

// Função para exercício com WHILE (soma até 1000)
void exercicioWhile() {
    int soma = 0;
    int i = 1;
    
    printf("\n=== SOMA COM WHILE ===\n");
    printf("Somando números até ultrapassar 1000...\n");
    
    while (soma <= 1000) {
        soma += i;
        printf("Valor atual: %d\n", soma);
        i++;
    }
    
    printf("Soma final: %d\n", soma);
}

// Função para exercício com ponteiros
void exercicioPonteiros() {
    int numero = 25;
    int *p = &numero;
    
    printf("\n=== EXERCÍCIO COM PONTEIROS ===\n");
    printf("numero de <numero>: %d\n", numero);
    printf("Endereco de <numero>: %p\n", (void*)&numero);
    printf("Valor de <p>: %p\n", (void*)p);
    printf("Valor de ponteiro <*p>: %d\n", *p);
}

// Função para cadastro com struct
void cadastroStruct() {
    typedef struct {
        int ra;
        char nome[50];
        float nota;
    } Aluno;
    
    Aluno a;
    
    printf("\n=== CADASTRO DE ALUNO ===\n");
    printf("Digite o RA do aluno: ");
    scanf("%d", &a.ra);
    
    printf("Digite o Nome do aluno: ");
    scanf(" %s", a.nome);
    
    printf("Digite a Nota do aluno: ");
    scanf("%f", &a.nota);
    
    printf("\n===== Dados do Aluno =====\n");
    printf("RA: %d\nNome: %s\nNota: %.2f\n", a.ra, a.nome, a.nota);
}

// Função para exibir o menu principal
void exibirMenu() {
    printf("\n========================================\n");
    printf("           MENU PRINCIPAL\n");
    printf("========================================\n");
    printf("1.  Calcular Média\n");
    printf("2.  Calcular Soma\n");
    printf("3.  Tabuada com FOR\n");
    printf("4.  Sistema de Notas com IF\n");
    printf("5.  Calculadora com SWITCH\n");
    printf("6.  Soma com WHILE\n");
    printf("7.  Exercício com Ponteiros\n");
    printf("8.  Cadastro com Struct\n");
    printf("0.  Sair\n");
    printf("========================================\n");
    printf("Escolha uma opção: ");
}

// Função principal
int main() {
    int opcao;
    
    printf("Bem-vindo ao programa com todos os modelos!\n");
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                calcularMedia();
                break;
            case 2:
                calcularSoma();
                break;
            case 3:
                exercicioFor();
                break;
            case 4:
                exercicioIf();
                break;
            case 5:
                exercicioSwitch();
                break;
            case 6:
                exercicioWhile();
                break;
            case 7:
                exercicioPonteiros();
                break;
            case 8:
                cadastroStruct();
                break;
            case 0:
                printf("\nObrigado por usar o programa! Até logo!\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
        
        if (opcao != 0) {
            printf("\nPressione ENTER para continuar...");
            getchar();
            getchar();
        }
        
    } while (opcao != 0);
    
    return 0;
}
