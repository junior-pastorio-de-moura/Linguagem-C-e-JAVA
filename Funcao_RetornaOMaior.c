#include<stdio.h>
#include<stdlib.h>

int Retorna_o_maior(int a, int b){
    if(a > b){
        return a;
    } else if(b > a){
        return b;
    } else printf("Valores iguais!\n");
}

int main(){
    int x, y, maior;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    maior = Retorna_o_maior(x, y);
    printf("Se eu nao me engano, o maior valor que voce digitou e %i!\n", maior);
    return 0;
}