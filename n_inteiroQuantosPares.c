#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int n, pares = 0;
    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);
    int x[n], y = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d.o numero: ", ++y);
        scanf("%d", &x[i]);
        if (x[i] % 2 == 0)
        {
            //Então o número é par
            pares++;
        }
        system("clear");
    }
    system("clear");
    printf("Dos numero que voce digitou %d sao pares!\n", pares);

    return 0;
}