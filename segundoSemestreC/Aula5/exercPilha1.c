#include<stdio.h>
#define MAX 10

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void inicializarPilha (Pilha *p) {
    p->topo = -1;
}

int pilhaVazia (Pilha *p) {
    return p->topo == -1;
}

int pilhaCheia (Pilha *p) {
    return p->topo == MAX - 1;
}

int push (Pilha *p, int valor) {
    if (pilhaCheia(p))
       return 0;
    p->dados[++(p->topo)] = valor;
    return 1;
}

int pop (Pilha *p, int *valor) {
    if (pilhaVazia(p))
        return 0;
    *valor = p->dados[(p->topo)--];
    return 1;
}

int peek (Pilha *p, int *valor) {
    if (pilhaVazia(p))
        return 0;
    *valor = p->dados[p->topo];
    return 1;
}

int main () {
    Pilha p;
    int valor;

    inicializarPilha(&p);

    for(int i = 0; i < MAX; i++) { // Pedir os 10  numeros é a partir desta main:
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &valor);
        push(&p, valor);
    }
    printf("\nNumeros em ordem inversa:\n");
    while (!pilhaVazia(&p)) {
        pop(&p, &valor);
        printf("%d", valor); 
    }
    printf("\n");
    return 0;
}