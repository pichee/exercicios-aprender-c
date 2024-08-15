//Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ao (linha e a coluna) do 
//maior valor

//Read a matrix 4x4 and show the bigger value

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int matrix[4][4];
        srand(time(NULL));
        int maior=matrix[0][0];
        int coluna_maior_numero=0;
        int linha_maior_numero =0;
        int pula_pula=0;
        printf("-----------Matrix----------\n");
        for(int coluna=0;coluna<4;coluna++){
        
            for (int linha= 0; linha < 4; linha++)
            {
                matrix[coluna][linha]=rand()%1000;
                if(maior<matrix[coluna][linha]){
                    maior=matrix[coluna][linha];
                    linha_maior_numero=linha;
                    coluna_maior_numero=coluna;
                }
                if (pula_pula>3){
                printf("\n");
                pula_pula=1;
                }
                else{
                pula_pula++;
                }
                printf("%i ",matrix[coluna][linha]);

            }

        }
        printf("\n---------------------------");
        
        printf("\nThe bigger value is %i in line %i and in %i colune",maior,linha_maior_numero+1,coluna_maior_numero+1);
    }