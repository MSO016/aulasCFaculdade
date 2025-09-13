#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int v [5] = {10, 20, 30, 40, 50};
    int i;
    float s;

    for(i=0; i<5; i++){
        s += v[i];
    }

    printf("%2.f", s/5);

}
