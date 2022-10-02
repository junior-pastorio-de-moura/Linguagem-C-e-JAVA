#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int x, y;
    printf("Digite dois numeros para um intervalo: ");
    scanf("%d %d", &x, &y);

    for (; x <= y; x++)
    {
        if (x % 5 == 0)
        {
            printf("%d ", x);
            printf("| ");
        }
    }
    printf("\n");
    system("pause");   
    return 0;
}