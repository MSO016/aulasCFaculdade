#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int v [5];
    int i;

    for(i=0; i<5; i++){
        printf("Insira um dado: ");
        scanf("%d", &v[i]);
    }

    printf("\nDados Inseridos: ");
    for(i=0; i<5; i++){
        printf("\n%d", v[i]);
    }

}
