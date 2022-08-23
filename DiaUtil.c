#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int d;
    printf("Digite um dia da semana: ");
    scanf("%d", &d);
    if(d == 1 || d == 7){
        printf("FIM DE SEMANA!\n");
    } else if(d>1 && d<7){
        printf("DIA ÚTIL!\n");
    } else printf("INVÁLIDO!\n");

    system("pause");
    return 0;
}
