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
        printf("N�o forma um tri�ngulo!\n");
    } else if(v[1]+v[3]>v[2]){
        printf("N�o forma um tri�ngulo!\n");
    } else if(v[3]+v[2]>v[1]){
        printf("N�o forma um tri�ngulo!\n");
    }
    else{
        printf("Forma um tri�ngulo!\n");
    }
    system("pause");
    return 0;
}
