#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n, divisor, achou;
    scanf("%d", &n);
    divisor = 2;
    achou = 0; //falso
    /*Repete enquanto o divisor for menor que n E não achou nenhum divisor*/
    while (divisor < n && !achou)
    {
        if(n % divisor == 0){
            achou = 1;
        } else{
            //incrementa e tenta com o próximo
            divisor++;
        }
    }
    if(achou){
        //Se achou um divisor então n não é primo
        printf("N\n");
    }else{
        //Se não encontrou então n é primo
        printf("S\n");
    }

    system("pause");
    return 0;
}