#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    //Pós incremento
    int i = 0;
    for (; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    //Pré incremento
    int x = 0;
    for (; x < 10; ++x)
    {
        printf("%d ", x);
    }
    printf("\n");

    return 0;
}