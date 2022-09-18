#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    if(nota>=7 && nota<=10){
        printf("Aluno APROVADO!\n");
    } else if(nota<7 && nota>=5){
        printf("Aluno em RECUPERAÇÃO!\n");
    } else if(nota<5){
        printf("Aluno REPROVADO!\n");
    } else{
        printf("Valor inválido!\n");
    }

    system("pause");
    return 0;
}
