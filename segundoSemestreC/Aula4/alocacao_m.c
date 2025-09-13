#include <stdio.h>
#include <stdlib.h>

int main () {
    int *vetor = malloc (3 * sizeof(int));

    vetor[0] = 5;
    *(vetor + 1) = 10;
    *(vetor + 2) = 15;

    for (int i = 0; i <3; i++) {
        printf("vetor[%d] = %d \n", i, *(vetor + i));
    }

    free(vetor);
    return 0;
}