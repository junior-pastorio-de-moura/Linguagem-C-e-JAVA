#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//Programa para enumeração simples de bandeiras com duas cores
#define max 100

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

void enumere(int n, char *map[], int *dom[], int m){
    static int v[max], i = -1;
    if(i==n-1){
        exiba(v, i+1, map);
    } else{
        for(int *d = dom[(i+1)%m]; *d>=0; d++){
            v[++i] = *d;
            enumere(n, map, dom, m);
            i--;
        }
    }
}

int main(void){
    char *map[] = {"azul", "verde", "amarelo"};
    int D0[] = {0, 1, 2, -1};
    int *dom[] = {D0};
    enumere(2, map, dom, 1);
    return 0;
}

/*
    char *map[] = {"pao", "salada", "peixe", "carne", "frango", "fruta", "pudim"};
    int D0[] = {0, 1, -1};
    int D1[] = {2, 3, 4, -1};
    int D2[] = {5, 6, -1};

    int *dom[] = {D0, D1, D2};
    */