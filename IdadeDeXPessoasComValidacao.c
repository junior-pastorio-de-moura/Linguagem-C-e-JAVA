#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, x = 1, idade[x], z = 1;
    printf("Digite o numero de pessoas: ");
    scanf("%i", &n);
    while(x <= n){

        while(z < 5){
            printf("Digite a idade da %i.a pessoa: ", x);
            scanf("%i", &idade[x]);
            if(idade[x] <= 0 || idade[x] > 110){
                printf("Idade invalida!\n");
            } else{
                z = 10;
            }
        }
        x++;
        z = 1;
    }
    system("pause");
    return 0;
}
