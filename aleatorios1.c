#include<stab.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
#include<conio.h>

/*Gerando valores aleatórios em C*/
int main(){
    int x;
    printf("Geando 15 valores aleatorios\nentre 0 e 25: \n");
    for (int i = 1; i <= 15; i++)
    {
        printf("%d.o valor: %d\n", i, rand() % 25);        
    }
    printf("Quantos valores aleatorios voce quer gerar: ");
    scanf("%d", &x);
    printf("\n");
    for (int g = 0; g < x; g++)
    {
        printf("%d ", rand() % 9);
    }
    printf("\n");
    getchar();
    return 0;
}