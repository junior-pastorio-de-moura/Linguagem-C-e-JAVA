#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 0, nota[x], y = 1;
    printf("Digite o número de alunos de sua sala de aula: ");
    scanf("%i", &n);
    while(x < n){
        printf("Digite a nota do %i.o aluno: ", y);
        scanf("%d", &nota[x]);
        y++;
        x++;
    }
    system("pause");
    return 0;
}
