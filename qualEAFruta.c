#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*STRCMP = Compara duas strings.*/
int main(){
    system("clear");
    char key[] = "manga";
    char buffer[80];

    do
    {
        printf("Qual minha fruta favorita? ");
        fflush(stdout);
        scanf("%79s", buffer);    
        system("clear");
    } while (strcmp(key, buffer) != 0);
    puts("Acertou!");
    return 0;
}