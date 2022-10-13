#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int numero, produto = 1;
    for (int i = 1; i <= 4; i++)
    {
        printf("Digite o %d.o  numero: ", i);
        scanf("%d", &numero);

        if((numero ==2)||(numero ==3)||(numero ==5)||(numero ==7)){
            produto = produto*numero;
        } else if((numero %2 == 0)||(numero %3==0)||(numero %5==0)||(numero %7==0)){
            printf("O numero nao e primo!\n");
        } else{
            produto = produto*numero;
        }   
    }
    printf("Produto dos numeros primos: %d\n", produto);
    system("pause");
    return 0;
}