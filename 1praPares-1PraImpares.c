#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>
//SUBSTITUIR pares por 1 e ímpares por -1
int main(){
    int x = 1, a[10];
    printf("--Digite 10 numeros inteiros--\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d.o valor: ", x);
        scanf("%d", &a[i]);
        x++;
    }
    //Substituindo os valores do array
    for(int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = 1;
        } else{
            a[i] = -1;
        }
    }
    //Mostrando o array
    system("cls");
    printf("\n1 para numeros pares e -1 para numeros impares\n\n");
    x = 1;
    for(int i = 0; i < 10; i++)
    {
        printf("%d.o valor: %d\n", x, a[i]);
        x++;
    }

    system("pause");
    return 0;
} 