#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

#define PESSOAS 10

int main(){
    system("clear");
    int idade, contador, i;
    contador = 0;
    for (i = 0; i < PESSOAS; i++)
    {
        scanf("%d", &idade);
        if (idade >= 18)
        {
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}