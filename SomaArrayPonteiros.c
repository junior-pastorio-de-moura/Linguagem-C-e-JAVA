#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int somar(int *a, int n){
    int i;
    int soma = 0;
    for (i = 0; i < n; ++i)
    {
        soma += a[i];
    }
    return soma;
}

int main(){    
    system("clear");
    int x[] = {6, 7, 8};
    printf("A soma é %d\n", somar(x, 3));
    return 0;
}