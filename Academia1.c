#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    int n, peso, maiorpeso = 0, aluno = 0, numero;
    float altura, maioraltura = 0;
    printf("Digite o numero de alunos da academia: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Digite o peso em Kg do %d.o aluno: ", i);
        scanf("%d", &peso);
        printf("Digite a altura do %d.o aluno: ", i);
        scanf("%f", &altura);
        if(maiorpeso < peso){
            maiorpeso = peso;
            aluno = i;
        }

        if(maioraltura < altura){
            maioraltura = altura;
            numero = i;
        }
    }
    system("cls");
    printf("O aluno %d tem o maior peso, %d Kg. \n", aluno, maiorpeso);
    printf("O aluno %d tem a maior altura, %.2f m. \n", numero, maioraltura);
    system("pause");
    return 0;
}