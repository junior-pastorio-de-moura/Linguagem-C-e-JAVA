#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>
//Balão automatizado
void comandos(){
    printf("---MENU DE COMANDOS---\n");
    printf("S - Subir;\nF - Frente;\nV - Dar a volta;\n");
    printf("D - Descer;\n\n");
}

int main(){
    int subir, frente, dar_a_volta, descer;
    int altura = 0, distancia = 0;
    char x, y = 8;
    while (y == 8)
    {
        comandos();
        printf("Digite um comando: ");
        scanf("%c", &x);
        
        if (x == 'S' || x == 's')
        {
            altura = altura +  10;
        } else if(x == 'f' || x == 'F'){
            distancia = distancia + 10;
        } else{
            printf("Encerrado!\n");
            y = 9;
        }
        setbuf(stdin, NULL);        
    }
    printf("O Seu balão encontra-se a uma altura de %d m do chao!\n", altura);
    printf("O Seu balão encontra-se a uma distancia de %d m do local!\n", distancia);

    system("pause");   
    return 0;
}