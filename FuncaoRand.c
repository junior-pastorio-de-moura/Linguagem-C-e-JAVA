#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main (){
    setlocale(LC_ALL, "portuguese");
    //Utilizando a função rand.
    int v, vet[5];

    printf("%d\n", rand() % 14);
    printf("%d\n", rand() % 14);
    printf("%i\n", v = rand() % 5);
    printf("%i\n\n", v);

    printf("Laço de repetição, gerando valores aleatórios \n");
    printf("para a variável VET.\n");
    //Laço for para colocar valores aleatórios  no vetot VET.
    for(int i=0;i<=5;i++){
        vet[i] = rand() % 20;
        printf("%i\n", vet[i]);
    }

    system("pause");
    return 0;
}
