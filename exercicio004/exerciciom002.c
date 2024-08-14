//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
//elementos. Escreva ao final a matriz obtida.

//MAKE a matrix 5x5 and in main diagonally put 1 and the 
//other elements 0;

#include <stdio.h>
    int main(){
        int matrix[5][5];
        int coluna,pular=0;
        for (int linha = 0; linha <5; linha++)
        {
            for(coluna=0; coluna<5;coluna++){
                if (linha==coluna)
                {
                    matrix[linha][coluna]=1;
                }
                else
                {
                    matrix[linha][coluna]=0;
                }
            }
        }
        printf("\n====================MATRIX====================\n");
        //Codigo para ver ela
        for (int linha = 0; linha <5; linha++)
        {
            for(coluna=0; coluna<5;coluna++){
               printf("       %i",matrix[linha][coluna]);
               if (pular>3)
               {
                printf("\n");
                pular=0;
               }
               else{
                pular+=1;
               }
               
            }
        }
        printf("==============================================\n");
    }
