#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 1, nota[x], soma=0, media;

    printf("Quantas notas voc� ir� colocar? ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Digite a %i.a nota: ", i);
        scanf("%i", &nota[x]);
        soma = soma + nota[x];
        x++;
    }
    media = soma/n;
    printf("%i pontos � a m�dia das notas dos alunos!\n", media);
    printf("Notas acima da m�dia: \n");
    x = 1;
    for(int i=1; i<=n; i++){
        if(nota[x] > n){
            printf("%i\n", nota[x]);
        }
        x++;
    }

    printf("\n");
    system("pause");
    return 0;
}
