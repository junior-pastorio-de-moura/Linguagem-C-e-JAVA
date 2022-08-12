#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    //Lendo e escrevendo caracteres
    setlocale(LC_ALL, "portuguese");
    char letra;
    printf("Digite um caractere: ");
    letra = getchar();    
    printf("O caractere que voce digitou e: ");
    putchar(letra);
    printf("\n\n");

    system("pause");
    return 0;
}
//Função para ler um caractere - getchar(); / EX: variavel = getchar(); 
//Função para escrever um caractere - putchar(variável);
