#include <stdio.h>
#include <locale.h>
#include <string.h>

float maior(float num1, float num2){
        if(num1 > num2)
            return num1;
        else
            return num2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, m;
    printf("Insira um valor: \n");
    scanf("%f", &x);
    printf("Insira outro valor: \n");
    scanf("%f", &y);

    m = maior(x,y);

    printf("O número maior é %.2f\n", m);


}