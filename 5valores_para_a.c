#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 0;
    float v;
    for(int i = 1; i<=5; i++){
        printf("Digite o %i.o valor: ", i);
        scanf("%f", &v);
        if(v < 0){
            n++;
        }
    }
    printf("Foram digitados %i numeros negativos\n", n);
    system("pause");
    return 0;
}