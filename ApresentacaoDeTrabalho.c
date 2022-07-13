#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    int op[5];
    printf("Trabalho aborda interface grafica?(0 - Nao 1 - Sim)");
    scanf("%d", &op[1]);
    printf("Trabalho aborda inteligencia artificial?(0 - Nao 1 - Sim)");
    scanf("%d", &op[2]);
    printf("Trabalho aborda encapsulamento?(0 - Nao 1 - Sim)");
    scanf("%d", &op[3]);
    printf("Trabalho aborda identacao?(0 - Nao 1 - Sim)");
    scanf("%d", &op[4]);
    printf("Trabalho aborda struct?(0 - Nao 1 - Sim)");
    scanf("%d", &op[5]);
    if ((op[1] == 0)&&(op[2] == 0))
    {
        printf("Seu trabalho nao sera avaliado, nota 0.\n");
    } else if((op[3] == 0)||(op[4] == 0))
    {
        printf("Seu trabalho nao sera avaliado, nota 0.\n");
    } else if(op[5] == 0){
        printf("Seu trabalho nao sera avaliado, nota 0.\n");
    } else if((op[1] == 1)&&(op[2] == 1)&&(op[3] == 1)&&(op[4] == 1)&&(op[5] == 1))
    {
        printf("Seu trabalho sera avaliado");
    }
    return 0;
}