#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
//Diga se o valor é negativo, positivo, par ou ímpar
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("Valor nulo.\n");
    } else if((n > 0)&&(n % 2 == 0)){
        printf("Valor positivo e par!\n");
    } else if((n > 0)&&(n % 2 == 1)){
        printf("Valor positivo e impar!\n");
    } else if((n < 0)&&(n % 2 == 0)){
        printf("Valor negativo e par!\n");
    } else printf("Valor negativo e impar!\n");
    system("pause");
    return 0;
}