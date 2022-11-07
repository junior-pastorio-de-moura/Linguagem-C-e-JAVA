#include<stab.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
/*#include<conio.h>*/

/*Gerando valores aleatórios em C*/
int main(){   
    /*Gerando valores aleatórios e armazenando em um vetor*/
    int x, y;
    printf("Quantos valores voce quer: ");
    scanf("%d", &x);
    printf("Qual o maior numero aleatorio que pode ser gerado: ");
    scanf("%d", &y);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", rand() % y);
        if (i % 5 == 0)
        {
            printf("\n");   
        }
    }
    printf("\n");
    getchar();
    return 0;
}