#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, i=1, valor;
    int soma=0;
    float media=0;
    printf("Quantas mercadorias voce tem em estoque: ");
    scanf("%i", &n);
    while (i<=n)
    {
        printf("Digite o valor da %i.a mercadoria: ", i);
        scanf("%i", &valor);
        soma = soma + valor;
        i++;
    }
    media = soma/n;
    printf("\n Voce tem R$;%i,00 de mercadorias em estoque!\n", soma);
    printf("A media de valor das suas mercadorias e R$;%.2f\n", media);
    system("pause");
    return 0;
}