#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //area do triângulo = b*h/2
    int area, b, h;
    printf("Área do triângulo\n\n");
    printf("Digite o valor da base: ");
    scanf("%i", &b);
    printf("Digite o valor da altura: ");
    scanf("%i", &h);

    area = (b*h)/2;
    printf("A área do triângulo é %i\n", area);

    system("pause");
    return 0;
}
