#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int n, i = 1, op, x = 1;
    float v[i];
    printf("Quantos valores voce quer digitar? ");
    scanf("%d", &n);
    for(; i <= n; i++){
        printf("Digite o %i.o valor: ", i);
        scanf("%f", &v[i]);
    }
    system("cls");
    printf("Deseja ver os valores que voce digitou(1 - sim/ 0 - nao)? ");
    scanf("%d", &op);
    if (op == 1)
    {
        for(; x <= n; x++){
            printf("%d.o valor: %.2f\n", x, v[x]);
        }   
    } else if(op == 0){
        printf("ENCERRADO!\n");
    } else printf("ENCERRADO!\n");
    
    system("pause");
    return 0;
}