#include<stdio.h>
#include<string.h>

typedef struct {
    int ra;
    char nome[50];
    float nota;
} Aluno;

int main () {
    Aluno a;

    printf("Digite o RA do aluno: ");
    scanf("%d", &a.ra);

    printf("Digite o Nome do aluno: ");
    scanf(" %s[^\n]", &a.nome);

    printf("Digite a Nota do aluno: ");
    scanf("%f", &a.nota);

    printf(" ===== Dados do Aluno ===== \n");
    printf("RA: %d \nNome: %s \nNota: %.2f \n", a.ra, a.nome, a.nota);

    return 0;
}