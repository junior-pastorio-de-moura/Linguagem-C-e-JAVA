#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de b: ");
    scanf("%i", &b);
    if(a < b){
        for(c = a; c <= b; c++){
        printf("%i \n", c);
    }
    } else if(a > b){
        for(c = b; c <= a; c++){
        printf("%i \n", c);
    }
    } else printf("Os valores de A e de B são iguais!\n");

    system("pause");
    return 0;
}
