#include<stdio.h>
#define MAX 5

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

    peek(&p, &valor);
    printf("O valor inicial do topo eh: %d \n", valor); 

    push(&p, 10);
    peek(&p, &valor);
    printf("O valor do topo apos 1 item eh: %d \n", valor); 

    push(&p, 20);
    push(&p, 30);

    peek(&p, &valor);
    printf("O valor do topo apos 3 itens eh: %d \n", valor); 

    while (!pilhaVazia(&p)) {
        pop(&p, &valor);
        printf("Removido o elemento: %d \n", valor);
        peek(&p, &valor);
        printf("O valor atual do topo eh: %d \n", valor); 
    }
    return 0;
}