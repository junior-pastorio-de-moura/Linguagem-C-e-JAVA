#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n[2];
    n[2] = 88191212;
    printf("Digite uma senha de 8 dígitos!\n");
    scanf("%d", &n[1]);
    if(n[1]==n[2]){
        printf("SENHA CORRETA, ACESSO PERMITIDO!\n");
    } else printf("SENHA INVÁLIDA!\n");

    system("pause");
    return 0;
}
