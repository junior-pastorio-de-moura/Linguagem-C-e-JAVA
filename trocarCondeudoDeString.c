#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
    system("clear");

    char a[50] = "Eu gosto";
    char b[50] = "de programar";
    char auxiliar[50] = "";

    puts(a);
    puts(b);
        
    printf("\nTrocando os valores das variaveis...\n");
    //Trocar os valores de a e b
    strcpy(auxiliar, a);
    strcpy(a, b);
    strcpy(b, auxiliar);

    puts(a);
    puts(b);

    return 0;
}