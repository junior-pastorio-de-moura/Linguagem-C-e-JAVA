#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int a[] = {5, 6, 7};
    int i;
    int *p;
    p = a; //p passa a apontar para o primeiro elemento do array

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", *p);
        ++p;
    }
    printf("%d\n", *p); //p mostrando um lixo de memória, pois terminou os elementos do array.
    
    return 0;
}