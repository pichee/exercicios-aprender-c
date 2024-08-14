//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

//Read a matrix 4x4 and show how many values there is bigger than 10.
#include <stdio.h>
    int main(){
        int matrix[4][4];
        int linha,coluna,contador_maior_que_10,pular=0;
        for(linha=0;linha<4;linha++){
            for (coluna = 0;coluna<4;coluna++)
            {
                printf("Enter a number:");
                scanf("%i",&matrix[linha][coluna]);
                if(matrix[linha][coluna]>10){
                    contador_maior_que_10++;
                }
            }
            
        }
        printf("----Matrix----\n");
        for (linha= 0;linha < 4; linha++)
        {
            for (coluna= 0; coluna < 4; coluna++)
            {
                printf("%i ",matrix[linha][coluna]);
                if (pular==3){
                    printf("\n");
                    pular=0;
                }
                else{
                    pular++;
                }
            }
            
        }
        
        printf("-----------------\n %i values bigger than 10 in the matrix\n-----------------",contador_maior_que_10);
    }
