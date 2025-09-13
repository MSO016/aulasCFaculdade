#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;

    for(i=1; i <= 10; i++){
        printf("%d\n", i);

        if(i == 5){
            //break;
            continue;
        }
    printf("Valor não atingido\n");
    }
}