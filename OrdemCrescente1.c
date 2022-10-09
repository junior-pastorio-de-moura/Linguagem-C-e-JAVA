#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
//Ordem crescente de três números usando if 
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[3];
    printf("Digite o 1.o valor:");
    scanf("%i", &v[1]);
    printf("Digite o 2.o valor:");
    scanf("%i", &v[2]);
    printf("Digite o 3.o valor:");
    scanf("%i", &v[3]);
    if(v[1]>v[2] && v[1]>v[3] && v[2]> v[3]){
        printf("Ordem crescente: %i - %i - %i\n", v[3], v[2], v[1]);
    } else if(v[2]>v[1] && v[2]>v[3] && v[1]> v[3]){
        printf("Ordem crescente: %i - %i - %i\n", v[3], v[1], v[2]);
    } else if(v[3]>v[1] && v[3]>v[2] && v[2]> v[1]){
        printf("Ordem crescente: %i - %i - %i\n", v[1], v[2], v[3]);
    } else if(v[1]>v[2] && v[1]>v[3] && v[3]> v[2]){
        printf("Ordem crescente: %i - %i - %i\n", v[2], v[3], v[1]);
    } else if(v[2]>v[1] && v[2]>v[3] && v[3]> v[1]){
        printf("Ordem crescente: %i - %i - %i\n", v[1], v[3], v[2]);
    } else if(v[3]>v[1] && v[3]>v[2] && v[1]> v[2]){
        printf("Ordem crescente: %i - %i - %i\n", v[2], v[1], v[3]);
    } else if((v[3]>v[1] && v[3]>v[2]) && (v[1]==v[2])) {
        printf("Ordem crecente: %i - %i - %i\n", v[1], v[2], v[3]);
    } else if((v[1]>v[2] && v[1]>v[3]) && (v[3]==v[2])){
        printf("Ordem crecente: %i - %i - %i\n", v[3], v[2], v[1]);
    } else if ((v[2]>v[1] && v[2]>v[3]) && (v[3]==v[1])){
        printf("Ordem crecente: %i - %i - %i\n", v[3], v[1], v[2]);
    } else printf("Os valores sao iguais!\n");
    system("pause");
    return 0;
}
