#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    /*
    A é um ponteiro constante, ou seja, ele não
    pode apontar para outro lugar como no exemplo abaixo:
    */
    int a[3] = {5, 6, 7};
    int b[2] = {3, 5};
    
    int *p = b;

    a = b; //Não pode
    a = p; //Também não pode
    return 0;
}