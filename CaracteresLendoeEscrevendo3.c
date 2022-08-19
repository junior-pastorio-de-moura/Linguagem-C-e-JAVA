#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main(){
    //Incompleto, precisa-se fazer a limpeza dos bufers do teclado
    // para poder ler mais caracteres.
    setlocale(LC_ALL, "portuguese");
    char letra, letra1, letra2;
    printf("Digite um caractere: ");
    letra = getchar();    
    printf("O caractere que voce digitou e: ");
    putchar(letra);
    printf("\n\n");
    fflush(stdin); 
    printf("Digite uma letra: ");
    scanf("%c", &letra1);
    printf("A letra que voce digitou: %c\n", letra1);
    setbuf(stdin, NULL);
    printf("Digite mais uma letra: ");
    scanf("%c", &letra2);

    system("pause");
    return 0;
}
/*A função - fflush(stdin); ou setbuf(stdin, NULL); - limpa os bufers do teclado 
para que poça ser lido novamente um caractere do teclado. 
Toda vez que for ler um caractere do teclado,  deve ser utilizado esse comando.*/