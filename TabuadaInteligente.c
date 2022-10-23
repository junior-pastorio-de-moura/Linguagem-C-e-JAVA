#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //Tabuada
    int n, i = 1, v[2], y = 2;

    printf("---TABUADA---\n");
    while(y == 2){
        printf("Digite um número: ");
    scanf("%d", &n);
    do{
        v[1] = n*i;
        printf("%i x %i = %i\n", n, i, v[1]);
        i++;
    }while(i <= 10);
    printf("Deseja continuar[2] ou encerrar[qualquer valor]?: ");
    scanf("%d", &y);
    i = 1;
    }
    system("pause");
    return 0;
}
