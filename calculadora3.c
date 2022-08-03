#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[2], x, y;
    char op[1];
    printf("Digite um valor: ");
    scanf("%d", &v[1]);
    printf("Digite outro valor: ");
    scanf("%d", &v[2]);
    printf("Digite uma operação básica: ");
    scanf("%s", &op[1]);
    switch(op[1]){
        case '+':{
            x = v[1] + v[2];
            printf("SOMA: %i\n", x);
        } break;
        case '-':{
            x = v[1] - v[2];
            printf("SUBTRAÇÃO: %i\n", x);
        } break;
        case '*':{
            x = v[1] * v[2];
            printf("MULTIPLICAÇÃO: %i\n", x);
        } break;
        case '/':{
            x = v[1] / v[2];
            printf("DIVISÃO: %i\n", x);
        } break;
        case '^':{
            x = pow(v[1],v[2]);
            printf("POTENCIAÇÃO: %i\n", x);
        } break;
        case '[':{
            x = sqrt(v[1]);
            y = sqrt(v[2]);
            printf("RAIZ QUADRADA: %i - %i\n", x, y);
        } break;
        default : printf("ERRO!\n");
    }

    system("pause");
    return 0;
}
