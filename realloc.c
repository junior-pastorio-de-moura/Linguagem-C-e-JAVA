#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Verificando se a memória foi alocada
int main(){
    system("clear");
    int i;
    int *a;
    a = (int *) calloc (10, sizeof(int));
    if (a == NULL)
    {
        printf("Não foi possível alocar a memória!");
        return -1;
    }
    //Preenche o array
    for (i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    //Aumenta o array para 20 elementos em vez de 10
    a = (int *) realloc (a, 20 * sizeof(int));
    //Preenche as novas posições
    for (i = 10; i < 20; ++i)
    {
        a[i] = i;
    }
    //Imprime todo o array
    for (i = 0; i < 20; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}