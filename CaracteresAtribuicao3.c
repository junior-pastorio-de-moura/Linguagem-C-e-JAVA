#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    char nome[26] = "Yoshito yrushitochi kagawa";
    char nome1[28];
    fflush(stdin);
    printf("\n%s\n", nome); 
    printf("DICA: Siga o exemplo acima!\n");

    printf("Digite seu nome completo: ");
    scanf("%s", &nome1);
    printf("\n%s\n", nome1);
    
    system("pause");
    return 0;
}   