//Leia uma matriz 5 x 5. Leia tambem um valor  X. O programa devera fazer uma busca 
//desse valor na matriz e, ao final, escrever a localizacao (linha e coluna) ou uma mensa
//gem de “nao encontrado”

//Read a matrix 5 x 5 and show how is the x value
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int matrix[5][5],x_esta_na_matrix=0;
        int coluna,linha,x,pula_pula=0;
        printf("Enter value of X:");
        srand(time(NULL));
        scanf("%i",&x);
        srand(time(NULL));
        for(coluna=0;coluna<5;coluna++){
            for ( linha = 0; linha < 5; linha++)
            {
                matrix[coluna][linha]=rand()%100;
                if(x==matrix[coluna][linha]){
                 x_esta_na_matrix=1;
                }
                if(pula_pula>4){
                printf("\n");
                pula_pula=1;
                }
                else{
                pula_pula++;
                }
                printf("%i ",matrix[coluna][linha]);
                
            }}
            if (x_esta_na_matrix==1){
                printf("\nO valor de x está na matrix");
            }
            else{
                printf("\nO valor de x não está na matrix");
            }

    }
            
