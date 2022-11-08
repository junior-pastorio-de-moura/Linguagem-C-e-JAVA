#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Utilizando a função calloc para alocar um array
//de inteiros dinamicamente
int main(){
    system("clear");
    int i;
    int *a;
    a = (int *) calloc (10, sizeof (int));
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    
    return 0;
}