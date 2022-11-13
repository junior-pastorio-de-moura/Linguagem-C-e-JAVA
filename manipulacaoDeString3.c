#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*STRCHR = Localiza e retorna um ponteiro para
a primeira ocorrência do caractere passado como
parâmetro na string str.
*/
int main(){
    system("clear");
    char str[] = "This is a sample string";
    char *pch;
    printf("Procurando pelo s em \"%s\"...\n", str);
    pch = strchr(str, 's');
    while (pch != NULL)
    {
        printf("Encontrando em %ld\n", pch-str+1);
        pch = strchr(pch+1, 's');
    }
    
    return 0;
}