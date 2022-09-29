#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 0, y = 1, aluno[x], soma = 0;
    float media;
    printf("Quantos alunos voce tem em sua sala de aula? ");
    scanf("%i", &n);
    printf("Numero de alunos = %i\n", n);
    while(x < n){
        printf("Digite a nota do %i.o aluno: ", y);
        scanf("%i", &aluno[x]);
        soma = soma + aluno[x];
        x++;
        y++;
    }
    media = soma/n;
    printf("MEDIA DOS ALUNOS: %.2f", media);
    system("pause");
    return 0;
}
