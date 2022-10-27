#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>

void menu(){
    printf("-----URNA-----\n");
    printf("83 - Alibaba;\n");
    printf("93 - Alcapone;\n");
    printf("0 - Nulo;\n\n");
}

int main(){
    int n, x = 9 , alibaba = 0, alcapone = 0, branco = 0, total;
    int a[2], b;
    while(x == 9)
    {
        system("clear");
        menu();
        printf("Digite o numero do seu candidato: ");
        scanf("%d", &n);
        if (n == 83)
        {
            alibaba++;
        } else if(n == 93){
            alcapone++;
        } else if(n == 0){
            branco++;
        } else{
            printf("Eleicao encerrada!\n");
            x = 2;
        }
    }
    total = alibaba + alcapone + branco;
    a[1] = (alibaba*100)/total;
    a[2] = (alcapone*100)/total;
    b = (branco*100)/total;
    printf("\n Alibaba: %d votos %d%%\n", alibaba, a[1]);
    printf("Alcapone: %d votos %d%%\n", alcapone, a[2]);
    printf("Votos em branco: %d %d%%\n", branco, b);
    printf("Total de votos: %d\n", total);
    system("pause");   
    return 0;
}