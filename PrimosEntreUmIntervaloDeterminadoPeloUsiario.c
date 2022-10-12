#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    //PrimosEntreUmIntervaloDeterminadoPeloUsiario
    setlocale(LC_ALL, "portuguese");
    int fim, inicio;
    printf("Digite um número de início: ");
    scanf("%d", &inicio);
    printf("Digite um número de fim: ");
    scanf("%d", &fim);
    for(; inicio<=fim; inicio++){
        if(inicio>=11){
            if((inicio%2==0)||(inicio%3==0)||(inicio%5==0)||(inicio%7==0)){
            //condições para quando ele não for primo.
        } else  printf("%d\n", inicio);
        } else {
            if((inicio==2)||(inicio==3)||(inicio==5)||(inicio==7)){
                printf("%d\n", inicio);
            }
        }
        
    }

    system("pause");
    return 0;
}
