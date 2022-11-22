#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    float nota, soma;
    int contador;
    soma = 0;

    for (contador = 0; contador < 10; contador++)
    {
        scanf("%f", &nota);
        soma += nota;
    }
    printf("%.1f\n", soma);
    return 0;
}