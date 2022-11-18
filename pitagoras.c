#include<stab.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
/*#include<conio.h>*/

void formula(){
    printf("==========================\n");
    printf("===TEOREMA DE PITÁGORAS===\n");
    printf("==========================\n");
}

int main(){
    /*
    Teorema de Pitágoras
    H² = a² + b²
    */
    /*double x, y;
    double cateto1, cateto2, hipotenusa;
    double potencia = 0;
    formula();
    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &x);
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &y);
    printf("\nH² = %lf² + %lf²\n", x, y);
    cateto1 = pow(x, 2);
    cateto2 = pow(y, 2);
    hipotenusa = sqrt(cateto1 + cateto2);
    printf("Valor da hipotenusa: %lf\n", hipotenusa);*/
    float x, y, po;
    printf("Digite dois valores");
    scanf("%f/%f: ", &x, &y);
    printf("%f %f\n", x, y);
    po = pow(y, 2);
    getchar();
    return 0;
}