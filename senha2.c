#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int senha, x = 88912744, y = 1, z = 3;
    int U = 3, o = 3;
    while(y <= z){
        printf("\t\tTentativa: %d/%d\n", U, o);
        printf("Digite a senha de 8 dígitos: ");
        scanf("%i", &senha);
        if(senha == x){
            printf("BEM-VINDO USUÁRIO!\n");
            y = 10;
        } else{
            system("cls");
            printf("\tSenha inválida!\n");
            U--;
        }
        y++;
    }
    if(y >= 3 && y <=5){
        printf("Conta bloqueada!\n");
    }
    system("pause");
    return 0;
}
