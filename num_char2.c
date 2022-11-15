#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
//Solução com máscara no scanf
/*
Umas das soluções para resolver o problema
da leitura alternada de números e caracteres
*/
int main(){
    system("clear");

    int x;
    char frase[200];
    scanf("%d\n", &x); //Ignora o '\n'
    gets(frase);

    return 0;
}