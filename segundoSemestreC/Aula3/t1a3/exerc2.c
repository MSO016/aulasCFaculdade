#include <stdio.h>

int main() {
    int i;
    float nota, soma = 0, media;

    for (i = 1; i <= 3; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 3;

    if (media >= 7) {
        printf("Aluno aprovado! Media: %.2f\n", media);
    } else {
        printf("Aluno em recuperacao! Digite nota extra: ");
        scanf("%f", &nota);
        media = (soma + nota) / 4;
        if (media >= 7) {
            printf("Aluno aprovado com nota extra! Media: %.2f\n", media);
        } else {
            printf("Aluno reprovado! Media: %.2f\n", media);
        }
    }

    return 0;
}
