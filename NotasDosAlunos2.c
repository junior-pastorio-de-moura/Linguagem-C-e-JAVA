#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int z = 1, y = 1, x = 1, nota1[x], nota2[y], M[z];
    for(int i = 1; i<=6; i++){
        printf("Digite a primeira nota do %i.o aluno: ", i);
        scanf("%i", &nota1[x]);
        printf("Digite a segunda nota do %i.o aluno: ", i);
        scanf("%i", &nota2[y]);
        M[z] = (nota1[x]+nota2[y])/2;
        x++;
        y++;
        z++;
    }
    z = 1;
    for(int vm = 1; vm<=6; vm++){
        printf("Média do %i.o aluno: ", vm);
        printf("%i\n", M[z]);
        z++;
    }

    system("pause");
    return 0;
}
