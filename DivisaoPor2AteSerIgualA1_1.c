#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
//Divisão por 2 até ser igual a 1, de apenas um numero.
int main(){
    int n, x = 0;
    printf("Digite um numero par: ");
    scanf("%d", &n);
    while (n != 1)
    {
        n = n/2;
        x++;
    }
    printf("Quantidade de divisoes: %d\n", x);
    system("pause");
    return 0;
}