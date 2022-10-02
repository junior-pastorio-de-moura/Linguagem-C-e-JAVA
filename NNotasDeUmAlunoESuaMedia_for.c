#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int i = 1, x;
    float n[i], soma, M;
    printf("Digite o numero de avaliacoes\nque o aluno realizara: ");
    scanf("%d", &x);
    for (; i <= x; i++)
    {
        system("cls");
        printf("%d.a avaliacao:\n", i);
        printf("NOTA: ");
        scanf("%f", &n[i]);
        soma = soma+n[i];
    }
    M = soma/x;
    printf("MEDIA: %.1f pontos\n", M);
    system("pause");
    return 0;
}