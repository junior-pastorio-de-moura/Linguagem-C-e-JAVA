#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

int main(){
    system("clear");
    //Ler uma string
    char frase1[200];
    gets(frase1);

    //Ler uma string limitando o tamanho máximo
    char frase2[201];
    fgets(frase2, 201, stdin);
    //O fgets adiciona mais dois caracteres no buffer ('\n', '\0'), se sobrar
    //apenas 1 espaço no buffer ele adicionará apenas o caractere '\0' e o '\n'
    //será jogado para a próxima leitura havendo a necessidade de então limpar os
    //buffers do teclado para que se possa realizar outra leitura.
    
    return 0;
}