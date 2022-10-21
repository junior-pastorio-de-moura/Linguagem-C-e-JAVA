#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //Tabuada
    int x = 1, n , resultado;
    printf("Digite um valor inteiro maior que 1: ");
    scanf("%i", &n);
    for(int i =1; i<=10; i++){
        resultado = n*i;
        printf("%i x %i = %i\n", n, i, resultado);
    }
}
