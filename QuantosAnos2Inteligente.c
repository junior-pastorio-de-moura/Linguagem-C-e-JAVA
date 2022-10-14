#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int dia, mes, ano, diaA, mesA, anoA, x[3];
    printf("Digite a data de seu nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Digite o ano, o mês e o dia atual: ");
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);

    if(anoA < ano){
        printf("Data inválida!\n");
        printf("Então quer dizer que você ainda não naceu?\n");
    } else if(anoA == ano){
        printf("Você não completou nenhum ano de idade e já sabe ler e escrever?\n");
        printf(" Você é um prodígio heim!!!\n");
    } else {
        x[1] =  anoA - ano;
        x[2] = diaA +  mesA*30;
        x[3] = dia + mes*30;
        if(x[2] > x[3]){
            printf("Você completou %d anos de idade!\n", x[1]);
            } else if(x[2]==x[3]){
                printf("Feliz aniversario!! %d anos de idade já? Parabens!!\n", x[1]);
            } else {
                x[1]--;
                printf("Você completou %d anos de idade!\n", x[1]);
                }
        } 

    system("pause");
    return 0;
}