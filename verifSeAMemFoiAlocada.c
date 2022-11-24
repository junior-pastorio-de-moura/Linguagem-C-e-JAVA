#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Verificando se a memória foi alocada
int main(){
    int i;
    int *a;
    a = (int *) calloc (10, sizeof(int));
    if (a == NULL)
    {
        printf("Não foi possível alocar a memória!");
        return -1;
    }
    for (i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    
    return 0;
}