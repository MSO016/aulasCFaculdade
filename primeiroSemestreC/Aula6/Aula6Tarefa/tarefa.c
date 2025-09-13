#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Digite a quantidade do vetor: ");
    scanf("%d", &N);

    int vetor[N];
    printf("Digite os %d elementos:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("N%d: ", i);
        scanf("%d", &vetor[i]);
    }

    int somaPares = 0, menor = vetor[0], qtdImpares = 0;
    int somaMult3 = 0, contMult3 = 0;
    double somaPonderada = 0, somaPesos = 0;
    double produtoMult5ou7 = 1;
    int maiorPar = -1, qtd20 = 0, qtdMaior20 = 0, qtdMenor20 = 0;
    int somaIndiceImpar = 0;
    int qtdImparesGeo = 0;
    double multImpares = 1;

    for (int i = 0; i < N; i++) {
        int val = vetor[i];

        if (val % 2 == 0) {
            somaPares += val;
        }

        if (val < menor) {
            menor = val;
        }

        if (val % 2 != 0) {
            qtdImpares++;
            multImpares *= val;
            qtdImparesGeo++;
        }

        if (val % 3 == 0) {
            somaMult3 += val;
            contMult3++;
        }

        somaPonderada += val * (i + 1);
        somaPesos += (i + 1);

        if (val % 5 == 0 || val % 7 == 0) {
            produtoMult5ou7 *= val;
        }

        if (val % 2 == 0 && (val > maiorPar || maiorPar == -1)) {
            maiorPar = val;
        }

        if (val > 20) qtdMaior20++;
        else if (val == 20) qtd20++;
        else qtdMenor20++;

        if (i % 2 != 0) {
            somaIndiceImpar += val;
        }
    }

    printf("\nResultados:\n");
    printf("a) Soma dos pares: %d\n", somaPares);
    printf("b) Menor elemento: %d\n", menor);
    printf("c) Porcentagem de impares: %.2f%%\n", (qtdImpares * 100.0) / N);
    if (contMult3 > 0)
        printf("d) Media dos multiplos de 3: %.2f\n", somaMult3 / (double)contMult3);
    else
        printf("d) Nenhum multiplo de 3.\n");

    printf("e) Media ponderada: %.2f\n", somaPonderada / somaPesos);

    if (qtdImparesGeo > 0)
        printf("f) Media geometrica dos impares: %.2f\n", pow(multImpares, 1.0 / qtdImparesGeo));
    else
        printf("f) Nenhum numero impar para media geometrica.\n");

    printf("g) Produto dos multiplos de 5 ou 7: %.0f\n", produtoMult5ou7);
    printf("h) Maior elemento par: %d\n", maiorPar);
    printf("i) Porcentagem >20: %.2f%%, =20: %.2f%%, <20: %.2f%%\n",
           (qtdMaior20 * 100.0) / N, (qtd20 * 100.0) / N, (qtdMenor20 * 100.0) / N);
    printf("j) Soma dos elementos com indice impar: %d\n", somaIndiceImpar);

    return 0;
}
