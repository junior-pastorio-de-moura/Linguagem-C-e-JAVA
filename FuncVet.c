#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inserir(int a[]){
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o valor de %d: ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[]){
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Número[%d] = %d\n", i, 2 * b[i]);
    }
}

int main (void){ 
    int numeros[3];
    printf("Preenchendo o vetor...\n");
    inserir(numeros); //Manda o array numeros[3] para a função inserir()
    //Essa função manda o usuário digitar valores no array

    printf("Dobro dos valores informados: ");
    imprimir(numeros);//Recebe o array com os novos valores e multiplica eles por 2
    return 0;
}