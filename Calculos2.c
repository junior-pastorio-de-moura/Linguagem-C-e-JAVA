#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    //Várias operações com os números digitados
    int n[2], soma, sub, Mult, Div;
    printf("Digite um número: ");
    scanf("%i", &n[1]);
    printf("Digite outro número: ");
    scanf("%i", &n[2]);

    soma = n[1]+n[2];
    printf("Soma: %i\n", soma);
    sub = n[1]-n[2];
    printf("Subtração: %i\n", sub);
    Mult = n[1]*n[2];
    printf("Multiplicação: %i\n", Mult);
    Div = n[1]/n[2];
    printf("Divisão: %i\n", Div);

    system("pause");
    return 0;
}
