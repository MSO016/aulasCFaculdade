#include <stdio.h>

int main(int argc, char *argv89[]){

    int i;

    if(argc >1){
        printf("Foram inseridos %d argumentos: ", argc);
        for(i=0; i<argc; i++){
            printf("%s\n", argv[i]);
        }
    }   else {
            printf("Não foram inseridos argumentos no programa. \n");
    }

}