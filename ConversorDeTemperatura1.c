#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int c;
    float f;
    printf("Digite uma temperatura em graus célcius: ");
    scanf("%i", &c);
    f = (1.8*c+32);
    printf("Essa temperatura que você digitou em graus ");
    printf("célcius é %.0f fahrenheit\n\n", f);

    system("pause");
    return 0;
}
