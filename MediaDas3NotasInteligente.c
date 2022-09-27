#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int nota1, nota2, nota3, media;
    int x =1, y=1, z=1;
    while (x == 1)
    {
        printf("Digite a primeira nota do aluno: ");
        scanf("%d", &nota1);
        if((nota1 >10)||(nota1 <1)){
            printf("ERRO! \nE permitido somente notas ente 1 e 10!\n");
        } else{
            x = 2;
        }
    }
    
    while (y == 1)
    {
        printf("Digite a segunda nota do aluno: ");
        scanf("%d", &nota2);
        if((nota2 >10)||(nota2 <1)){
            printf("ERRO! \nE permitido somente notas ente 1 e 10!\n");
        } else{
            y = 2;
        }
    }

    while (z == 1)
    {
        printf("Digite a segunda nota do aluno: ");
        scanf("%d", &nota3);
        if((nota3 >10)||(nota3 <1)){
            printf("ERRO! \nE permitido somente notas ente 1 e 10!\n");
        } else{
            z = 2;
        }
    }
    media = (nota1+nota2+nota3)/3;
    printf("Media: %i pontos \n", media);
    system("pause");
    return 0;
}