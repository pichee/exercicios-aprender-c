//Faca um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
//coluna de cada elemento. Em seguida,imprima na tela a matriz.

//make a matrix 4 x 4 and show the porduct the line by the colune


#include <stdio.h>
    int main(){
        int matrix[4][4];
        int linha;
        int pula_pula=0;
        for (int coluna = 0;coluna <4; coluna++)
        {
            for(linha=0;linha<4;linha++){
               matrix[coluna][linha]=linha*coluna;
               printf("%i ",matrix[coluna][linha]);
                if (pula_pula>=3)
                {
                    printf("\n");
                    pula_pula=0;
                }
                else
                {
                    pula_pula++;
                }
                
            }}}