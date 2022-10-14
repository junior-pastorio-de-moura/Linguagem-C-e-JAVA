#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int a[10], x, vezes = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d.o valor: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Digite um valor para X: ");
    scanf("%d", &x);
    for(int i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            vezes++;
        }   
    }
    printf("O valor X aprece %d vezes!\n", vezes);
    system("pause");
    return 0;
} 