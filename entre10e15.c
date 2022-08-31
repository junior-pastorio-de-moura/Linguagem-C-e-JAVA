#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    if(n>10 && n<15){
        printf("O número está entre 10 e 15.\n");
    }
    else{
        printf("O número não está entre 10 e 15.\n");
    }
    system("pause");
    return 0;
}
