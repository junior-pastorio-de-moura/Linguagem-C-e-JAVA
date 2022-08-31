#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    int anoN, anoA, anoC;
    printf("Digite o ano de seu nascimento: ");
    scanf("%i", &anoN);
    printf("Digite o ano atual: ");
    scanf("%i", &anoA);
    anoC = anoA - anoN;
    printf("Você completa esse ano, ");
    printf("%i anos de idade!\n\n", anoC);

    system("pause");
    return 0;
}
