#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, i=1, soma=0;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &n);

    while (i<=n)
    {
        soma = soma+i;
        printf("%i\n", i);
        i++;
    }
    printf("A soma dos valores que voce digitou e %i\n", soma);
    system("pause");
    return 0;
}