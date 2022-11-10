#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

#define MAX_ELEMENTOS 2
#define NUM_CARACTERES 3
#define TAM_ARRAY NUM_CARACTERES + 1

void remover_final_linha (char *string){

    //Verifica se a string tem \n no final
    size_t ln = strlen(string) - 1;
    if (string[ln] == '\n')
    {
        string[ln] = '\0';
    }

    //Verifica se a stdin tem um \n sobrando
    char buffer[BUFSIZ] = {-1};
    setbuf(stdin, buffer);
    char c = buffer[0];
    if (c == '\n')
    {
        getc(stdin);
    } 
}

int main(){
    system("clear");
    char nomes[MAX_ELEMENTOS][TAM_ARRAY], indice;

    for (indice = 0; indice < MAX_ELEMENTOS; indice++)
    {
        fgets(nomes[indice], TAM_ARRAY, stdin);
        //Jogar fora os \n
        remover_final_linha(nomes[indice]);
    }
    puts("As strings lidas foram: ");
    for (indice = 0; indice < MAX_ELEMENTOS; indice++)
    {
        puts(nomes[indice]);
    }

    return 0;
}