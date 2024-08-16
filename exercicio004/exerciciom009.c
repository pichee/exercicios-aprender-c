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
int somartopodiagonal(int *matrix,int coluna,int linha){
    int soma=0;
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = linha + 1; coluna < 3; coluna++) {
            soma += *(matrix + linha * 3 + coluna);
        }
    }
    return soma;
}
int main(){
    int matrix[3][3];
    int linha=0,coluna=0,soma=0,pula_pula=1;
    int *ponteiro=(int *)matrix;
    printf("------------MATRIX------------\n");
        for ( coluna = 0; coluna < 3; coluna++)
        {
            for (linha= 0; linha<3; linha++)
            {      
                matrix[coluna][linha]=numero_aleatorio_matrix();
               
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
        soma+=somartopodiagonal(ponteiro,coluna,linha);
         printf("------------------------------\n");
        printf("The add the elements on top principal diagonal is %i",soma);
}
