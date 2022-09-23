#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include <time.h>

int main(){
    int inicio, fim;
    int i = 5, x = 5, y = 5;
    while (y == 5)
    {
    while (i == 5)
    {
        printf("Digite o valor de inicio: ");
        scanf("%d", &inicio);    
        if(inicio < 0)
        {
            printf("ERRO!\nEste valor nao pode ser negativo!\n");
        } else{
            i = 7;
        }
    }
    while (x == 5)
    {
        printf("Digite o valor de fim: ");
        scanf("%d", &fim);
        if(fim <= 0)
        {
            printf("ERRO!\nEste valor nao pode ser negativo e nem zero!\n");
        } else{
            x = 7;
        }
    }
    if (inicio == fim)
    {
        printf("Os valores nao podem ser iguais!\n");
        break;
    } else if(inicio < fim){
        loop(inicio,fim);
        y = 12;
    } else{
        printf("O valor de inicio deve ser menor que o de fim!\n");
    }
    printf("FIM!\n\n");
    }
    
    system("pause");   
    return 0;
}