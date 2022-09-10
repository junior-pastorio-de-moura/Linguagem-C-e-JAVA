#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int V_ou_F(int numero){
    if(numero <0){
        printf("Verdadeiro!\n");
    } else printf("Falso!\n");
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    V_ou_F(n);
    system("pause");
	return 0;
}