#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //Exibir dois valores de forma crescente.
    int i, x;
    printf("Digite um valor: ");
    scanf("%i", &i);
    printf("Digite um valor maior: ");
    scanf("%i", &x);
    for(; i <= x; i++){
        if(i % 2 == 0){
            printf("%i\n", i);
        }
    }
    system("pause");
    return 0;
}
