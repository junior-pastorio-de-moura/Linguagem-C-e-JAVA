#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    //V�rias opera��es com os n�meros digitados
    int n[2], soma, sub, Mult, Div;
    printf("Digite um n�mero: ");
    scanf("%i", &n[1]);
    printf("Digite outro n�mero: ");
    scanf("%i", &n[2]);

    soma = n[1]+n[2];
    printf("Soma: %i\n", soma);
    sub = n[1]-n[2];
    printf("Subtra��o: %i\n", sub);
    Mult = n[1]*n[2];
    printf("Multiplica��o: %i\n", Mult);
    Div = n[1]/n[2];
    printf("Divis�o: %i\n", Div);

    system("pause");
    return 0;
}
