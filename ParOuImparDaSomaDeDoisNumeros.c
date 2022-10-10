#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n[2], soma;
    printf("Digite um número: ");
    scanf("%i", &n[1]);
    printf("Digite outro número: ");
    scanf("%i", &n[2]);
    soma = n[1] + n[2];
    if(soma % 2 == 0){
        printf("A soma dos números que você digitou é Par!\n");
    } else printf("A soma dos números que você digitou é Ímpar!\n");

    system("pause");
    return 0;
}
