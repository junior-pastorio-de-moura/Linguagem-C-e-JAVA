#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float M, CM;
    printf("Digite um valor em metros: ");
    scanf("%f", &M);
    CM = M*100;
    printf("%.0f centímetros\n", CM);

    system("pause");
    return 0;
}
