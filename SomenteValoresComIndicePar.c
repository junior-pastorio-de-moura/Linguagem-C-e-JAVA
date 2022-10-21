#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>
//Exercício e) do livro
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
    //Clocar os valores do array em ordem crescente
    system("pause");
    return 0;
} 