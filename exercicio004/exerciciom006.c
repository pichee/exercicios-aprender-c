//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posicao
//das matrizes lidas.

//Read two matrix and show the bigger value.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matrix1[4][4],matrix2[4][4],matrix_maiorvalores[4][4];
    int linha=0,coluna=0,pula_pula=1;
    printf("Matrix 1\n");
    for (linha= 0; linha < 4; linha++)
    {
        for (coluna=0; coluna < 4; coluna++)
        {
            matrix1[linha][coluna]=rand()%100;
            printf("%i ",matrix1[linha][coluna]);
            if(pula_pula>3){
                printf("\n");
                pula_pula=1;
            }
            else{
                pula_pula++;
            }
        }

    }
    linha=0;
    coluna=0;
        printf("Matrix 2\n");
        pula_pula=1;
    for (linha= 0; linha < 4; linha++)
    {
        for (coluna=0; coluna < 4; coluna++)
        {
            matrix2[linha][coluna]=rand()%100;
            printf("%i ",matrix2[linha][coluna]);
            if(pula_pula>3){
                printf("\n");
                pula_pula=1;}
            else{
            pula_pula++;}    
        }

    }
    printf("\nMatrix 3:\n");
        for (linha= 0; linha < 4; linha++)
    {
        for (coluna=0;coluna< 4; coluna++)
        {
            if(matrix1[linha][coluna]>matrix2[linha][coluna])
            {
                matrix_maiorvalores[linha][coluna]=matrix1[linha][coluna];
}
else{
matrix_maiorvalores[linha][coluna]=matrix2[linha][coluna];
}
printf("%i ",matrix_maiorvalores[linha][coluna]);
if(pula_pula>3){
                printf("\n");
                pula_pula=1;}
            else{
            pula_pula++;}    
        }

}}
