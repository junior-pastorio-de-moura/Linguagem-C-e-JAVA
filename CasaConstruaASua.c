#include<stdlib.h>
#include<stdio.h>

#define Q '*'

void parede (int altura){
    int i;
    for(i = 0; i<altura; i++){
        printf("%c", Q);
    }
    printf("\n");
}

void casa(int altura_casa){
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    parede(altura_casa - 2);
    parede(altura_casa);
    parede(altura_casa);
    parede(altura_casa - 2);
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    printf("\n");
}

int main(){
    int alt;
    printf("Digite a altura de sua casa: ");
    scanf("%d", &alt);
    printf("\n");
    casa(alt);
    system("pause");
    return 0;
}