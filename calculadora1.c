#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    char simbolo[1], n[3], x;
    printf("Digite o valor: ");
    scanf("%i", &n[1]);
    printf("Digite outro valor: ");
    scanf("%i", &n[2]);
    printf("Digite a opera��o: ");
    scanf("%s", &simbolo[1]);

    if(simbolo[1] == '+'){
        x = n[1] + n[2];
        printf("SOMA: %i\n", x);
    } else if(simbolo[1] == '-'){
        x = n[1] - n[2];
        printf("SUBTRA��O: %i\n", x);
    } else if(simbolo[1] == '*'){
        x = n[1] * n[2];
        printf("MULTIPLICA��O: %i\n", x);
    } else if(simbolo[1] == '/'){
        x = n[1] / n[2];
        printf("DIVIS�O: %i\n", x);
    } else printf("N�o � nenhuma opera��o b�sica!\n");

    system("pause");
    return 0;
}
