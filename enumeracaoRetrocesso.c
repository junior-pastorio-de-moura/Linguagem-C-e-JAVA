#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//Programa para enumeração simples de bandeiras com duas cores
#define max 100

//Função apra exibição de uma solução
void exiba(int v[], int n, char *map[]){
    printf("[");
    for(int j = 0; j<n; j++){
        printf("%s", map[v[j]]);
        if(j<n-1){
            printf(",");
        }
    }
    puts("]");
}

//Teste de viabilidade para enumeração de bandeiras com três cores distintas.
int viavel(int v[], int i){
    for(int j=0; j<i; j++){
        if(v[i]==v[j]){
            return 0;
        }
    }
    return 1;
}

//Teste de viabilidade para enumeração de bandeiras com três cores distintas.
int solucao(int v[], int i){
    return i==2;
}

int main(void){
    char *map[] = {"azul", "verde", "amarelo"};
    int D0[] = {0, 1, 2, -1};
    int *dom[] = {D0};
    enumeref(3, map, dom, 1);
    return 0;
}