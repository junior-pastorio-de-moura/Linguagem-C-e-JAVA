#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int codigo;
    printf("Digite o código de destino do produto: ");
    scanf("%i", &codigo);
    if(codigo>=1 && codigo<=5){
        printf("O destino do seu produto é o BRAZIL!\n");
    } else if(codigo>=6 && codigo<=9){
        printf("O destino do seu produto é o EUA!\n");
    } else if(codigo>=10 && codigo<=12){
        printf("O destino do seu produto é a Rússia!\n");
    } else if(codigo>=15 && codigo<=20){
        printf("O destino do seu produto é a Suíça!\n");
    } else if(codigo>=13 && codigo<=14){
        printf("O destino do seu produto é o Afeganistão!\n");
    } else if(codigo>=21 && codigo<=29){
        printf("O destino do seu produto é a França!\n");
    } else printf("Código inválido!\n");
    system("pause");
    return 0;
}
