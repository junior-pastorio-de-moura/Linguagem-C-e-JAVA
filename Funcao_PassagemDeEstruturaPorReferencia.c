#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
//Passagem de estruturas por referência;
struct ponto{
    int x, y;
};

int atribui(struct ponto*p){
    (* p ) . x = 10;
    (* p ) . y = 20;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    struct ponto p1;
    atribui(&p1);
    printf("x = %d \n", p1.x);
    printf("y = %d \n", p1.y);

    system("pause");
    return 0;
}
