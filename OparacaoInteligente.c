#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int x[2], op, y = 2, soma;

    while(y != 9){
    printf("Digite um número: ");
    scanf("%i", &x[1]);printf("Digite um número: ");
    scanf("%i", &x[2]);
    soma = x[1] + x[2];
    printf("SOMA: %i\n", soma);
    printf("Deseja realizar outra oparação?[sim - 1/ não - qualquer valor]");
    scanf("%i", &op);
        if(op == 1){

        } else {
            y = 9;
        }
    }
    system("pause");
    return 0;
}
