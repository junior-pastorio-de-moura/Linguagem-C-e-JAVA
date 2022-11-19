#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Ponteiros e arrays são fortemente relacionados
/*
Quando declaramos um array, o seu indicador é na
verdade um ponteiro constante para o primeiro elemento 
desse array.
*/
int main(){
    system("clear");
    //Atribuinado o array "a" a uma variável do tipo ponteiro
    int a[3] = {5, 6, 7};
    int *p = a;
    /*
    Não é necessário usar o valor "&" para atribuir o valor ao ponteiro
    */
    return 0;
}