#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um n�mero: ");
    scanf("%i", &n);
    if(n%2==0){
        printf("O n�mero � par.\n");
    }
    else{
        printf("O n�mero � �mpar.\n");
    }
    system("pause");
    return 0;
}
