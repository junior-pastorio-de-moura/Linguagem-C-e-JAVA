#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
//Solução com getchar
/*
Umas das soluções para resolver o problema
da leitura alternada de números e caracteres
*/
int main(){
    system("clear");

    int x;
    char frase[200];

    scanf("%d", &x); 
    getchar(); //Joga-se o '\n' fora
    gets(frase);

    printf("A frase que voce digitou e: ");
    puts(frase);//Mostrar a frase na tela
    return 0;
}