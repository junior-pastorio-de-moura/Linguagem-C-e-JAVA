#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(void){
    system("clear");

    int i, *v = malloc(20*sizeof(int));
    //Cria um vetor dinâmico com valores inteiros
    for (i = 0; i < 20; i++)
    {
        v[i] = i+1;   
    }
    
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}