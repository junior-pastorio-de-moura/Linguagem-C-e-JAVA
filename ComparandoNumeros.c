#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n[2];
    printf("Digite um número: ");
    scanf("%i", &n[1]);
    printf("Digite um número: ");
    scanf("%i", &n[2]);
    if(n[1]>n[2]){
        printf("O número %d é o maior.\n", n[1]);
    }
    else if(n[1]<n[2]){
        printf("O número %d é o maior.\n", n[2]);
    } else printf("Os números são iguais.\n");

    system("pause");
    return 0;
}
