#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int DobroDoMaior(int a, int b){
    int DDM;
    if(a > b){
        DDM = a + a;
    } else if(a < b){
        DDM = b + b;
    } else printf("ERRO!\n Os valores sao iguais!\n");
    return DDM;
}

int main(){
    int x, y;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite outro valor: ");
    scanf("%d", &y);
    DobroDoMaior(x, y);
    printf("Dobro do maior: %i\n", DobroDoMaior(x, y));
    system("pause");
    return 0;
}