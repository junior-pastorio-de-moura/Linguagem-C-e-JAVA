#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("MENU:\n\n");
    printf("1 - Retirar livro;\n");
    printf("2 - Devolver livro;\n");
    printf("3 - Renovar a retirada do livro;\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &n);
    if(n==1){
        printf("Livro retirado com sucesso!\n");
    } else if(n==2){
        printf("Livro devolvido com sucesso!\n");
    } else if(n==3){
        printf("Livro renovado!\n");
    } else printf("Opção inexistente!\n");

    system("pause");
    return 0;
}
