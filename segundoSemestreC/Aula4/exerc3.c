#include <stdio.h>
#include <string.h>

#define MAX 20

struct Carro {
    char placa[9];
    char motorista[51];
    int entrada;
    int ocupado;
};

int main() {
    struct Carro vagas[MAX];
    int i, opcao, horaSaida;
    char placaBusca[9];

    for (i = 0; i < MAX; i++) {
        vagas[i].ocupado = 0;
    }

    while (1) {
        printf("\n--- Estacionamento ---\n");
        printf("1 - Registrar entrada\n");
        printf("2 - Registrar saida\n");
        printf("3 - Listar carros\n");
        printf("4 - Encerrar\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (i = 0; i < MAX; i++) {
                    if (!vagas[i].ocupado) {
                        printf("Placa: ");
                        scanf("%s", vagas[i].placa);
                        printf("Nome do motorista: ");
                        scanf(" %[^\n]", vagas[i].motorista);
                        printf("Hora de entrada (0-23): ");
                        scanf("%d", &vagas[i].entrada);
                        vagas[i].ocupado = 1;
                        printf("Entrada registrada!\n");
                        break;
                    }
                }
                if (i == MAX) printf("Estacionamento cheio!\n");
                break;

            case 2:
                printf("Digite a placa: ");
                scanf("%s", placaBusca);
                for (i = 0; i < MAX; i++) {
                    if (vagas[i].ocupado && strcmp(vagas[i].placa, placaBusca) == 0) {
                        printf("Hora de saida: ");
                        scanf("%d", &horaSaida);
                        int horas = horaSaida - vagas[i].entrada;
                        if (horas < 1) horas = 1;
                        printf("Valor a pagar: R$%d\n", horas * 5);
                        vagas[i].ocupado = 0;
                        break;
                    }
                }
                if (i == MAX) printf("Carro nao encontrado!\n");
                break;

            case 3:
                printf("\nCarros estacionados:\n");
                for (i = 0; i < MAX; i++) {
                    if (vagas[i].ocupado) {
                        printf("Placa: %s | Motorista: %s | Entrada: %dh\n",
                               vagas[i].placa, vagas[i].motorista, vagas[i].entrada);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Opcao invalida!\n");
        }
    }
}
