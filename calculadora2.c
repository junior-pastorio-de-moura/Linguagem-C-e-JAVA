#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[2], x;
    char op[1];
    printf("Digite um valor: ");
    scanf("%d", &v[1]);
    printf("Digite outro valor: ");
    scanf("%d", &v[2]);
    printf("Digite uma opera��o b�sica: ");
    scanf("%s", &op[1]);
    switch(op[1]){
        case '+':{
            x = v[1] + v[2];
            printf("SOMA: %i\n", x);
        } break;
        case '-':{
            x = v[1] - v[2];
            printf("SUBTRA��O: %i\n", x);
        } break;
        case '*':{
            x = v[1] * v[2];
            printf("MULTIPLICA��O: %i\n", x);
        } break;
        case '/':{
            x = v[1] / v[2];
            printf("DIVIS�O: %i\n", x);
        } break;
        default : printf("ERRO!\n");
    }

    system("pause");
    return 0;
}
