//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao acima da
//diagonal principal.

//Read a matrix 3x3 and calculate the elements on top principal diagonal
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int numero_aleatorio_matrix(){
    int numero=rand()%100;
    return numero;
}
int main(){
    int matrix[3][3];
    int linha=0,coluna=0,soma,pula_pula=1;
    printf("------------MATRIX------------\n");
        for ( coluna = 0; coluna < 3; coluna++)
        {
            for (linha= 0; linha<3; linha++)
            {      
                matrix[coluna][linha]=numero_aleatorio_matrix();
                if(coluna == 0 && linha>0){
                soma+=matrix[coluna][linha];}
                if(coluna == 1 && linha==2){
                soma+=matrix[coluna][linha];
                    }
                printf("%i ",matrix[coluna][linha]);
                if (pula_pula>2)
                {
                    printf("\n");
                    pula_pula=1;
                }
                else{
                    pula_pula++;
                }
                    }
        }
         printf("\n------------------------------\n");
        printf("The add the elements on top principal diagonal is %i",soma);
