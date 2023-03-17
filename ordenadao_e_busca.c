#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

//Função que verifica se um vetor está em ordem crescente
int soma(int v[], int n){
    int s = 0;
    int i = 0;
    while(i<n){
        s += v[i];
        i++;
    }
    return s;
}

//Função para ordenação por trocas
#define troca(a,b){
    int x = a;
    a = b;
    b = x;
}

void bubble_sort(int v[], int n){
    for(int i = 1; i<=n-1; i++){
        for(int j = 1; j<=n-1; j++){
            if(v[j]>v[j+1]){
                troca(v[j], v[j+1]);
            }
        }
    }
}

//Função para ordenação por seleção
int seleciona(int v[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(v[i]<v[j]){
            i = j;
        }
    }
    return i;
}

//Função para ordenação por inserção
void insere(int x, int v[], int n){
    while(n<0 && x<v[n-1]){
        v[n] = v[n-1];
        n--;
    }
    v[n] = x;
}
void insertion_sort(int v[], int n){
    for(int i = 0; i<n; i++){
        insere(v[i], v, i);
    }
}

//Função para intercalação
void intercala(int v[], int p, int m, int u){
    int *w = malloc((u-p+1)*sizeof(int));
    if(w==NULL){
        abort();
    }
    int i = p, j = m+1, k = 0;
    while(i<=m && j<=u){
        if(v[i] < v[j]){
            w[k++] = v[i++];
        } else{
            w[k++] = v[j++];
        }
    }
    while (i<=m)
    {
        w[k++] = v[i++];
    }
    while (j<=m)
    {
        w[k++] = v[j++];
    }
    for(k=0; k<=u-p; k++){
        v[p+k] = w[k];
    }
    free(w);
}

//Função para ordenação por intercalação
void merge_sort(int v[], int p, int u){
    if(p == u){
        return;
    }
    int m = (p+u)/2;
    merge_sort(v,p,m);
    merge_sort(v,m+1,u);
    intercala(v,p,m,u);
}

//Função para busca linear
int linear_search(int x, int v[], int n){
    for(int i = 0; i<n; i++){
        if(x == v[i]){
            return 1;
        }
    }
    return 0;
}

//Função para busca binária
int binary_search(int x, int v[], int n){
    int p = 0;
    int u = n - 1;
    while(p<=u){
        int m = (p+u)/2;
        if(x == v[m]){
            return 1;
        }
        if(x < v[m]){
            u = m-1;
        } else{
            p = m+1;
        }
    }
    return 0;
}

//Função que move um item máximo de um vetor para a sua última posição
void empurra(int v[], int n){
    for(int i = 0; i<n; i++){
        if(v[i] > v[i+1]){
            troca(v[i],v[i+1]);
        }
    }
}

int main(void){
    
    return 0;
}