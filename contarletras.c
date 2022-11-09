#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
//Quantas vezes a letra 'a' aparece na frase que o usuario digitou

int main(){
    system("clear");

    char frase[200];
    int nvezes = 0;

    printf("Digite uma frase: ");
    gets(frase);
    for (int i = 0; i < 200; i++)
    {
        if (frase[i] == 'a')
        {
            nvezes++;
        }
    }
    printf("Na frase que voce digitou a letra 'a' aparece %d vezes.\n", nvezes);    

    return 0;
}