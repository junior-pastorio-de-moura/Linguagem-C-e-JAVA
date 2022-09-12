#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[2];
    printf("Digite um número: ");
    scanf("%i", &v[1]);
    printf("Digite outro número: ");
    scanf("%i", &v[2]);
    if(v[1] > v[2]){
        for(; v[2] <= v[1]; v[2]++){
            if(v[2] % 2 == 1){
                printf("%i\n", v[2]);
            }
        }
    } else if(v[1] < v[2]){
        for(; v[1] <= v[2]; v[1]++){
            if(v[1] % 2 == 1){
                printf("%i\n", v[1]);
            }

        }
    }
    system("pause");
    return 0;
}
