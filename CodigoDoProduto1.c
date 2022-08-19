#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int d;
    printf("Digite o cÓdigo de um produto: ");
    scanf("%d", &d);
    if(d==1){
        printf("CADERNO!\n");
    } else if(d==2){
        printf("L�PIS!\n");
    } else if(d==3){
        printf("BORRACHA!\n");
    } else printf("DIVERSOS!\n");
    system("pause");
    return 0;
}
