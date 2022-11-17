#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*O fypedef é uma função utilizada para
definir novos tipos apartir de tipos já existentes.
*/

#define LINHA 5
#define COLUNA 3

typedef int matriz[LINHA][COLUNA];

int matriz_estatica(matriz m){/*...*/}

int main(){
    system("clear");
    matriz x;
    matriz_estatica(x);
    return 0;
}