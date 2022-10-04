#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 1, sal[x], reajuste[x], salF[x];
    printf("Quantos salários você irá inserir? ");
    scanf("%i", &n);

    for(int i=1; i<=n; i++){
        printf("Digite o %i.o salário R$;", i);
        scanf("%i", &sal[x]);
        x++;
    }
    printf("Os salários terão um reajuste de 5%%!\n");
    printf("Abaixo segue uma lista dos salários com seus respectivos reajustes!\n");
    x = 1;
    for(int i=1; i<=n; i++){
        reajuste[x] = sal[x]*0.05;
        salF[x] = reajuste[x] + sal[x];
        printf("%i.o salário após seu reajuste R$;%i,00\n", x, salF[x]);
        x++;
    }

    printf("\n");
    system("pause");
    return 0;
}
