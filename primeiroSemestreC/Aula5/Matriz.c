#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int linhas, colunas;
    int i, j;

    // Usuário define o tamanho da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    // Declara a matriz com tamanho definido pelo usuário
    int matriz[linhas][colunas];  // <- Funciona em C99 ou superior

    // Preencher a matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibir a matriz
    printf("\nMatriz digitada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Somar os elementos
    int soma = 0;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    printf("\nSoma de todos os elementos: %d\n", soma);

    // Mostrar a diagonal principal (se for quadrada)
    if (linhas == colunas) {
        printf("Diagonal principal: ");
        for (i = 0; i < linhas; i++) {
            printf("%d ", matriz[i][i]);
        }
        printf("\n");
    } else {
        printf("A matriz não é quadrada, então não tem diagonal principal.\n");
    }

    return 0;
}
