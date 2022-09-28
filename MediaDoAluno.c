#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n[3], media;
    printf("Digite a primeira nota do aluno: ");
    scanf("%i", &n[1]);
    printf("Digite a segunda nota do aluno: ");
    scanf("%i", &n[2]);
    printf("Digite a terceira nota do aluno: ");
    scanf("%i", &n[3]);
    media = (n[1]+n[2]+n[3])/3;
    printf("MÉDIA DO ALUNO: %i pontos.\n", media);
    if(media>=7){
        printf("APROVADO!\n");
    } else if(media>=5 && media<7){
        printf("RECUPERAÇÃO!\n");
    } else if(media<5){
        printf("BURRÃO REPROVADO!\n");
    } else printf("ERRO!\n");

    system("pause");
    return 0;
}
