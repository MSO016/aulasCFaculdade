#include <stdio.h>
#define MAX 10   // tamanho fixo da pilha

// Estrutura da pilha
typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

// Inicializa a pilha
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}

// Verifica se a pilha está cheia
int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

// Verifica se a pilha está vazia
int estaVazia(Pilha *p) {
    return p->topo == -1;
}

// Insere elemento na pilha (push)
int push(Pilha *p, int valor) {
    if (estaCheia(p)) return 0;
    p->dados[++(p->topo)] = valor;
    return 1;
}

// Remove elemento da pilha (pop)
int pop(Pilha *p, int *valor) {
    if (estaVazia(p)) return 0;
    *valor = p->dados[(p->topo)--];
    return 1;
}

// Programa principal
int main() {
    Pilha p;
    int valor;

    inicializarPilha(&p);

    // Entrada de 10 números
    for (int i = 0; i < MAX; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &valor);
        push(&p, valor);
    }

    // Saída em ordem inversa
    printf("\nNúmeros em ordem inversa:\n");
    while (pop(&p, &valor)) {
        printf("%d\n", valor);
    }

    return 0;
}
 