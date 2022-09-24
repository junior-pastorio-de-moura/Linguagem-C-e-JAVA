#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[3], media;
    printf("Digite o primeiro valor: ");
    scanf("%i", &v[1]);
    printf("Digite o segundo valor: ");
    scanf("%i", &v[2]);
    printf("Digite o terceiro valor: ");
    scanf("%i", &v[3]);

    media = (v[1]+v[2]+v[3])/3;
    printf("MÉDIA ARITMÉTICA: %i\n", media);

    system("pause");
    return 0;
}
