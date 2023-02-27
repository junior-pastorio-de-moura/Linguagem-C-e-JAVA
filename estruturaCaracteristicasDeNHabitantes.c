#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>

struct habitante
{
    char sexo[10];
    char corDosOlhos[25];
    char nome[45];
    char cabelos[45];
    int idade;
};

int main(){
    system("clear");
    int n, i;
    printf("Digite a quantidade de habitantes que deseja descrever: ");
    scanf("%d", &n);

    struct habitante h[n];

    for (i = 0; i < n; i++)
    {   
        system("clear");
        getchar();
        printf("Habitante %d\n", i+1);
        printf("Digite o nome: ");
        fgets(h[i].nome, 45, stdin);
        setbuf(stdin, NULL);
        printf("Digite o sexo: ");
        fgets(h[i].sexo, 10, stdin);
        setbuf(stdin, NULL);
        printf("Digite a cor dos olhos: ");
        fgets(h[i].corDosOlhos, 25, stdin);
        setbuf(stdin, NULL);
        printf("Digite a cor e o tipo de cabelo: ");
        fgets(h[i].cabelos, 45, stdin);
        setbuf(stdin, NULL);
        printf("Digite a idade: ");
        scanf("%d", &h[i].idade); 
    }
    
    return 0;
}