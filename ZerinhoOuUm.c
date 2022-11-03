#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
//Jogo: Zero ou um - que pra mim é Jogo: dois ou um
int main(){
    int n[3];
    /*
    jogador 1 = Alice(A)
    jogador 2 = Beto(B)
    jogador 3 = Clara(C)
    */
    scanf("%d", &n[1]);
    scanf("%d", &n[2]);
    scanf("%d", &n[3]);
    if((n[1] != n[2])&&((n[1] != n[3]))){
        printf("A\n");
    } else if((n[2] != n[1])&&(n[2] != n[3])){
        printf("B\n");
    } else{
        printf("C\n");
    }
    system("pause");
    return 0;
}
