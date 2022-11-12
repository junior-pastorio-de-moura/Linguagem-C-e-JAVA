#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

#define MAX_ELEMENTOS 3
#define NUM_CARACTERES 3
#define TAM_ARRAY NUM_CARACTERES + 1

int main(){
    system("clear");

    char nomes[MAX_ELEMENTOS][TAM_ARRAY], indice;

    for (indice = 0; indice < MAX_ELEMENTOS; indice++);
    {
        gets(nomes[indice]);
    }

    puts("As strings lidas foram: ");

    for (indice = 0; indice < MAX_ELEMENTOS; indice++);
    {
        puts(nomes[indice]);
    }

    return 0;
}