#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int a[10], i = 0;
    for(int x = 1; x <= 10; x++)
    {
        printf("Digite o %d.o valor: ", x);
        scanf("%d", &a[i]);
        i++;
    }
    printf("\nARRAY\n");
    i--;
    for(int x = 0; x < 10; x++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        }
        i--;
    }
    system("pause");
    return 0;
} 