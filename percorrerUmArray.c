#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void imprimir_array(int a[], int tamanho){
    int indice;
    for (indice = 0; indice < tamanho; indice++)
    {
        printf("%d\n", a[indice]);
    }
}

int main(){
    system("clear");
    int numeros[] = {3, 6, 23, 53, 5, 46, 7, 8, 9, 2};

    imprimir_array(numeros, 10);

    return 0;
}