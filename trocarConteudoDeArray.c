#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
    system("clear");
    int a[5] = {10, 20, 30, 40, 50};
    int auxiliar;
    int x = 1;
    //Mostrando os valores do array antes da troca:
    for (int i = 0; i < 5; i++)
    {
        printf("%d - %d\n", x, a[i]);
        x++;
    }
    x = 1;

    //Trocar os valores de a[0] e a[4]:
    auxiliar = a[0];
    a[0] = a[4];
    a[4] = auxiliar;

    printf("\nTrocando os valores de duas posicoes do array...\n");

    //Mostrando os valores do array depois da troca:
    for (int i = 0; i < 5; i++)
    {
        printf("%d - %d\n", x, a[i]);
        x++;
    }

    return 0;
}