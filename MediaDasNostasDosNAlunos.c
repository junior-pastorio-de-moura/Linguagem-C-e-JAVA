#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 1;
    float M[x], nota1[x], nota2[x], NT;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("Digite a primeira nota do %i.o aluno: ", i);
        scanf("%f", &NT);
        nota1[x] = NT;
        printf("Digite a segunda nota do %i.o aluno: ", i);
        scanf("%f", &NT);
        nota2[x] = NT;
        M[x] = (nota2[x]+nota1[x])/2;
        x++;
    }
    x = 1;
    for(int i = 1; i<=n; i++){
        printf("Média do %i.o aluno: %.1f\n", i, M[x]);
        x++;
    }

    system("pause");
    return 0;
}
