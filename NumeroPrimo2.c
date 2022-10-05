#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if((numero ==2)||(numero ==3)||(numero ==5)||(numero ==7)){
        printf("O numero e primo!\n");
    } else if((numero %2 == 0)||(numero %3==0)||(numero %5==0)||(numero %7==0)){
        printf("O numero nao e primo!\n");
    } else printf("O numero e primo!\n");

    system("pause");
    return 0;
}