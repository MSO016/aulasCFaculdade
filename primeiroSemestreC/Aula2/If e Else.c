#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float m;
    
    printf("Informe a média: ");
    scanf("%f", &m);

    if (m >=4 && m < 7){
        printf("Aprovado, parabéns.\n");
    }
    else {
        printf("Reprovado\n");
    }
}