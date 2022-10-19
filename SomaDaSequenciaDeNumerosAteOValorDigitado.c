#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);    
    for (int i = 1; i <= num; i++)
    {
        soma = soma+i;
        printf("%d + ", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }   
    }
    printf(" = %d\n\n", soma);

    system("pause");
    return 0;
}