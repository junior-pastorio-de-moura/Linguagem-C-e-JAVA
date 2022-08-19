#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    //Lendo e escrevendo caracteres
    setlocale(LC_ALL, "portuguese");
    char letra1;

    printf("Digite uma letra: ");
    scanf("%c", &letra1);
    printf("%c\n", letra1);

    system("pause");
    return 0;
}
