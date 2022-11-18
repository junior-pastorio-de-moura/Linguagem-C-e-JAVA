#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    /*
    p aponta para o primeiro elemento de a.
    Você pode acessar o valor 5 usando o operador "*", 
    como abaixo:
    */
    int a[3] = {5, 12, 39};
    int *p = a;

    //Assim:
    printf("Primeiro elemento de a: %d\n", (*p));
    //Ou assim:
    printf("Primero elemento de a: %d\n", (*a));

    /*
    Pode-se utilizar o deslocamento do ponteiro utilizando-o
    como se ele fosse um array. Veja abaixo:
    */
    printf("Terceiro elemento do array: %d\n", p[2]);
    //Outra maneira de se efetuar a mesma ação:
    printf("Terceiro elemento do array: %d\n", *(p+2));
    return 0;
}