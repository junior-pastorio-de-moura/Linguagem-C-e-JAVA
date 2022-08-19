#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    char letra[5], op;
    for (int i = 0; i <= 5; i++)
    {
        printf("Digite a %i.a letra: ", i+1);
        scanf("%c", &letra[i]);
        fflush(stdin);   
    }
    system("pause");
    printf("Deseja ver a lista de caracteres que voce digitou: ");
    scanf("%c", &op);
    if((op == 'S')||(op == 's')){
        for (int i = 0; i <= 5; i++)
    {
        printf("%c\n", letra[i]);
    }
    }
    system("pause");
    return 0;
}
