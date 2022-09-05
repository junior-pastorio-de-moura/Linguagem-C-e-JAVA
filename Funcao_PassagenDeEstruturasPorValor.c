#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
//Passagem de estruturas por valor;
struct ponto{
    int x, y;
};

int imprime(struct ponto p){
    printf("X = %d \n ", p . x);
    printf("X = %d \n ", p . y);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    struct ponto p1 = {10, 20};
    imprime(p1);

    system("pause");
    return 0;
}
