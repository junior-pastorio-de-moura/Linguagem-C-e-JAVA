#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    if(a<b){
        while(a!=b){
            printf("%i\n", a);
            a++;
        }
    } else if(a>b){
        while(b!=a){
            printf("%i\n", b);
            b++;
        }
    } else printf("Os valores são iguais!\n");

    system("pause");
    return 0;
}
