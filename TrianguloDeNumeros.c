#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
//TRIÂNGULO DE NÚMEROS 
int linhas(int l){
    int i=1;
    for(; i<= l; i++){
        for(int c =1; c<= i; c++){
            printf("%i", i);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Digite um numero de linhas: ");
    scanf("%i", &n);
    linhas(n);
    system("pause");
    return 0;
}
/*
1
22
333
4444
55555
666666
7777777
*/