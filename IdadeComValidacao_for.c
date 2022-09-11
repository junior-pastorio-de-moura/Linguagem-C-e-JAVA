#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int x, i = 5;
    for (; i == 5;)
    {
        printf("Digite uma idade: \n", i);
        scanf("%d", &x);
        if (x > 110 || x <= 0)
        {
            system("cls");
            printf("ERRO!\nO valor digitado nao a nenhume idade valida!\n");
        } else{
            i = 8;
        }
    }
    
    system("pause");
    return 0;
}
