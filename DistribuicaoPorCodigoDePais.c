#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int codigo;
    printf("Digite o c�digo de destino do produto: ");
    scanf("%i", &codigo);
    if(codigo>=1 && codigo<=5){
        printf("O destino do seu produto � o BRAZIL!\n");
    } else if(codigo>=6 && codigo<=9){
        printf("O destino do seu produto � o EUA!\n");
    } else if(codigo>=10 && codigo<=12){
        printf("O destino do seu produto � a R�ssia!\n");
    } else if(codigo>=15 && codigo<=20){
        printf("O destino do seu produto � a Su��a!\n");
    } else if(codigo>=13 && codigo<=14){
        printf("O destino do seu produto � o Afeganist�o!\n");
    } else if(codigo>=21 && codigo<=29){
        printf("O destino do seu produto � a Fran�a!\n");
    } else printf("C�digo inv�lido!\n");
    system("pause");
    return 0;
}
