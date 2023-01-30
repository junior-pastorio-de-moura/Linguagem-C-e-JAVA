#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    int linha, coluna;
    int matriz[3][3];
    int eh_diagonal = 1;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigitar os valores da matriz [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }   
    }
    

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            if (coluna != linha && matriz[linha][coluna] != 0)
            {
                eh_diagonal = 0;
            }
            
        }   
    }

    if (eh_diagonal == 1)
    {
        printf("\n\nSua matrinz é diagonal!\n");
    } else{
        printf("\n\nSua matrinz não é diagonal!\n");
    }
    //Mostrando a matriz na tela
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);   
        }   
        printf("\n");
    }
    return 0;
}