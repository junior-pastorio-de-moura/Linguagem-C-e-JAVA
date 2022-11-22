#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int soma, numero;
    scanf("%d", &numero);
    soma = 0;
    while (numero != -1)
    {
        soma += numero;
        scanf("%d", &numero);
    }
    printf("A soma dos numeros e: %d\n", soma);
    return 0;
}