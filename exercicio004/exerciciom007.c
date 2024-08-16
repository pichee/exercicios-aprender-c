//Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:
//A[i][j] = 2i + 7j − 2 se i < j;
//A[i][j] = 3i² − 1 se i = j;
//A [I][j]= 4i³ − 5j² + 1 se i > j.
//Make a matrix 10 x 10 following the rules:
//A[i][j] = 2i + 7j − 2 se i < j;
//A[i][j] = 3i² − 1 se i = j;
//A [I][j]= 4i³ − 5j² + 1 se i > j.
#include <stdio.h>
int main(){
    int matrix[10][10];
    int coluna=0,linha=0,pula_pula=1;
        for ( linha = 0; linha < 9; linha++)
        {
            for (coluna= 0; coluna<9; coluna++)
            {
                if(linha < coluna){
                    matrix[linha][coluna]= (2*linha)+(7*coluna)-2;
                }
                else if(linha==coluna){
                    matrix[linha][coluna]=3*(linha*linha)-1;
                }
                else{
                    matrix[linha][coluna]=4*(linha*linha*linha)-5*(coluna*coluna)+1; 
                }
                if(matrix[linha][coluna]!=191){
                printf("%i ",matrix[linha][coluna]);
                if (pula_pula>9){
                printf("\n");
                pula_pula=1;
                                    }
                else{
                pula_pula++;
                }
                }
                

            }
            
            
        }
        
                
        
}
