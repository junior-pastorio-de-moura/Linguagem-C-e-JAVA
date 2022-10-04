#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //Números inteiros entre os números dados
    int inicio, fim;
    printf("Digite um número de início: ");
    scanf("%d", &inicio);
    printf("Digite um número de fim: ");
    scanf("%d", &fim);

    while(inicio < fim){
        inicio++;
        printf("%d\n", inicio);
    }

    system("pause");
    return 0;
}
