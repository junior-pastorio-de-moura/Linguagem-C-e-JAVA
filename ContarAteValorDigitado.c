#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, i=1;
    int z=12;
    while (z==12)
    {
        printf("Digite um numero maior que zero: ");
        scanf("%d", &n);
        if(n < 1){
            printf("ERRO!\n");
            printf("O valor digitado deve ser maior que zero!\n");
        } else{
            z = 6;
        }
    }
    while (i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    system("pause");
    return 0;
}