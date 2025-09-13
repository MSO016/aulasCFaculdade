#include <stdio.h>
#include <string.h>
#define MAX 100

// Estrutura da pilha
typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

void inicializarPilha(Pilha *p) {
    p->topo = -1;
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}

int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

int push(Pilha *p, char c) {
    if (estaCheia(p)) return 0;
    p->dados[++(p->topo)] = c;
    return 1;
}

int pop(Pilha *p, char *c) {
    if (estaVazia(p)) return 0;
    *c = p->dados[(p->topo)--];
    return 1;
}

int main() {
    Pilha p;
    char palavra[MAX], c;
    int i, palindromo = 1;

    inicializarPilha(&p);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int n = strlen(palavra);

    // Inserir cada caractere na pilha
    for (i = 0; i < n; i++) {
        push(&p, palavra[i]);
    }

    // Comparar removendo da pilha (ordem inversa)
    for (i = 0; i < n; i++) {
        pop(&p, &c);
        if (c != palavra[i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("'%s' eh um palindromo!\n", palavra);
    else
        printf("'%s' NAO eh um palindromo.\n", palavra);

    return 0;
}
 