#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int i = 1, z = 5;
    float x[i], soma, M;
    for(; i <= 2; i++){
        for(; z == 5;){
            printf("Digite e nota da %d.a avaliacao: ", i);
            scanf("%f", &x[i]);
            if (x[i] > 10 || x[i] < 0)
            {
                system("cls");
                printf("\nERRO!\n");
                printf("Valor digitado nao corresponde a nenhuma nota!\n");
            } else{
                z = 7;
            }   
        }
        soma = soma + x[i];
        z = 5;
    }
    M = soma/2;
    printf("\nMEDIA: %.1f pontos.\n", M);
    system("pause");
    return 0;
}