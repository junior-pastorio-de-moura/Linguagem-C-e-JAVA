#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%i", &numero);

    if((numero % 5 == 0) || (numero % 2 == 0) || (numero % 7 == 0) || (numero % 3 == 0)){
        printf("Nao eh um numero primo!\n");
    } else printf("O numero que voce digitou eh primo!\n");
    system("pause");
    return 0;
}
