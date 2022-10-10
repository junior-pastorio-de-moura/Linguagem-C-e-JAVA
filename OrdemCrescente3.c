#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[2];
    printf("Digite um valor: ");
    scanf("%i", &v[1]);
    printf("Digite outro valor: ");
    scanf("%i", &v[2]);
    if(v[1] == v[2]){
        printf("Os valores são iguais!\n");
    } else if(v[1] > v[2]){
        while(v[2] <= v[1]){
            printf("%i\n", v[2]);
            v[2]++;
        }
    } else{
        while(v[1] <= v[2]){
            printf("%i\n", v[1]);
            v[1]++;
        }
    }
    system("pause");
    return 0;
}
