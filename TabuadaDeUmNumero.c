#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //Tabuada completa de um n�mero qualquer
    int numero, x = 1, resultado;
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    while(x <= 10){
        resultado = x*numero;
        printf("%i x %i = %i\n", x, numero, resultado);
        x++;
    }
    system("pause");
    return 0;
}
