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
    if(a > b){
        for(int z = b; z <= a; z++){
                if(z % 2 == 1){
                    printf("%i\n", z);
                }
        }
    } else if(a < b){
            for(int z = a; z <= b; z++){
                if(z % 2 == 1){
                    printf("%i\n", z);
                }
            }
    } else printf("Os valores de A e B são iguais!\n");
    system("pause");
    return 0;
}
