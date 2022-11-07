#include<stab.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>

int main(){
    system("clear");
    printf("Valores aleatorios \n");
    int x;
    for (int i = 0; i <= 10; i++)
    {
        x = rand () % 30;
        printf("%i ", x);
    }
    
    return 0;
}