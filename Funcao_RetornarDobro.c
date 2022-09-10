#include<stdio.h>

int RetornaDobro(int y){
    int Db;
    Db = y+y;
    return Db;
}

int main(){
    int x;
    printf("--Funcao dobro--\n\n");
    printf("Digite um valor: ");
    scanf("%d", &x);
    RetornaDobro(x);
    printf("Dobro: %d\n", RetornaDobro(x));
    system("pause");
    return 0;
}