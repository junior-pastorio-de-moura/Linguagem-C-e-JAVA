#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int valor, im, x;
    printf("Digite o valor do produto: ");
    scanf("%i", &valor);
    if(valor<10){
        im = valor*0.03;
    } else if(valor>10 || valor<=99){
        im = valor*0.05;
    } else if(valor>99 && valor<=299){
        im = valor*0.1;
    } else if(valor>299){
        im = valor*0.3;
    } else printf("Valor inválido!\n");
    x = valor + im;
    printf("IMPOSTO SOBRE O PRODUTO: R$;%i,00\n", im);
    printf("Valor total a ser pago!\n R$;%i,00\n", x);

    system("pause");
    return 0;
}
