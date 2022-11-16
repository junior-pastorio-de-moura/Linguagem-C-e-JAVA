#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int a, b, aux;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    //Sempre imprimirá na tela o valor menor e depois o valor maior.
    printf("%d - %d\n", a, b);
    
    return 0;
}