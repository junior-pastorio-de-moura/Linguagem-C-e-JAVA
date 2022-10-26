#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int num, v[3];
    printf("Adicione um valor: ");
    scanf("%d", &v[1]);
    printf("Adicione um valor: ");
    scanf("%d", &v[2]);
    printf("Adicione um valor: ");
    scanf("%d", &v[3]);
    if(v[1]+v[2]>v[3]){
        printf("Não forma um triângulo!\n");
    } else if(v[1]+v[3]>v[2]){
        printf("Não forma um triângulo!\n");
    } else if(v[3]+v[2]>v[1]){
        printf("Não forma um triângulo!\n");
    }
    else{
        printf("Forma um triângulo!\n");
    }
    system("pause");
    return 0;
}
