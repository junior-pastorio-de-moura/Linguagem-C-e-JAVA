#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //N�meros inteiros entre os n�meros dados
    int inicio, fim;
    printf("Digite um n�mero de in�cio: ");
    scanf("%d", &inicio);
    printf("Digite um n�mero de fim: ");
    scanf("%d", &fim);

    while(inicio < fim){
        inicio++;
        printf("%d\n", inicio);
    }

    system("pause");
    return 0;
}
