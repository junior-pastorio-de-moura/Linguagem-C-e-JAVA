#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>
//SUBSTITUIR pares por 1 e ímpares por -1
int main(){
    int x = 1;
    float a[10];
    printf("--Digite 10 numeros inteiros--\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d.o valor: ", x);
        scanf("%f", &a[i]);
        x++;
    }
    //Mostrando somente os valores com índices pares
    system("cls");
    printf("--Somente valores com o indice par--\n");
    for(int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%.2f\n", a[i]);
        }    
    }
    system("pause");
    return 0;
} 