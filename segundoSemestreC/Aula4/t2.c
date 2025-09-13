#include <stdio.h>

int main() {
    int i;
    float notas, media, soma=0;

    for(i = 1; i <= 3; i++) {
        printf(" Digite a nota: ", i);
        scanf("%f", &notas);

        soma += notas;
    }
        media = soma / 3;

        if(notas >= 7) {
            printf("Aluno Aprovado! Media: %2.f", media);
            
        } else {
            printf("Aluno em Recuperacao! Digite nota Extra: ");
            scanf("%f", &media);

            media = (soma + notas) / 4;
            
            if(notas >= 7) {
                printf("Aluno aprovado com a recuperacao da nota extra: %2.f", media);
            } else {
                printf("Aluno Reprovado!\n");
                scanf("%f", &media);
            }
        }
    
    return 0;
}
//Você precisa criar um sistema para cadastrar as notas de um aluno e mostrar a média.
// Se a média for acima de 7, o aluno está aprovado. Senão, peça uma nota extra.