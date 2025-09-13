#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int v [5];

    float media;

    v [1] = 50;
    v [2] = 40;
    v [3] = 30;
    v [4] = 20;
    v [5] = 10;

    media = (v[5]+v[1]+v[2]+v[3]+v[4]) /5;

    printf("%2.f", media);

}
