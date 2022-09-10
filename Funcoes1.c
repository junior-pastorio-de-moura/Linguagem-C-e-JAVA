#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int R = 7;

int Soma(int x){
    int soma;
    soma = x + R;
    return soma;
}

void digito(){
    printf("Digite um número: ");
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, BD;
    digito();
    scanf("%d", &n);
    BD = Soma(n);
    printf("Valor: %d + %d = %d. \n", n, R, BD);

    system("pause");
    return 0;
}
