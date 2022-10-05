#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    if(numero % 2 == 0){
        printf("O numero que  voce digitou e par!\n");
    }else printf("O numero que  voce digitou e impar!\n");
    system("pause");
    return 0;
}
