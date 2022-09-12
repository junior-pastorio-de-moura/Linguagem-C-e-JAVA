#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    if(n%2==0){
        printf("O número é par.\n");
    }
    else{
        printf("O número é ímpar.\n");
    }
    system("pause");
    return 0;
}
