#include <stdio.h>
#include <string.h>
#include <locale.h>
#define linhas 100
#define colunas 100

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2;
    int mat[linhas][colunas];
    int i,j;

    printf("Insira o tamanho da matriz, começando pelo tamanho de linhas: \n");
    scanf("%d", &valor1);

    printf("Agora insira o tamanho das colunas: \n");
    scanf("%d", &valor2);

    for(i=0; i<valor1; i++){
        for(j=0; j<valor2; j++){
            printf("Insira o elemento da linha %d, coluna %d:\n", i+1, j+1 );
            scanf("%d", &mat [i][j]);
        }
    }

    printf("\n\nImprimindo a matriz toda:\n");
    for(i=0; i<valor1; i++){
        for(j=0; j<valor2; j++){
        printf("%d ", mat [i][j]);
        }
        printf("\n");
    }

}