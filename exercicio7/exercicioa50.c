//Faca uma func¸ao que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma
//dos elementos que estao na diagonal principal.
//Make a function receb a matrix 3x3 and calculate the elements that stayin the principal diagonal
#include <stdio.h>
    int matriz(float aux[3][3]){
        int a=0,b=0;
        float soma;
        for (a = 0; a < 3; a++)
        {
            b=0;
            for (b = 0; b < 3; b++)
            {
                printf("Enter a number for vector [%i][%i]:",a+1,b+1);
                scanf("%f",&aux[a][b]);
            }
        
        }
        soma=aux[0][0]+aux[1][1]+aux[2][2];
        printf("There addition in principal diagonal is %.2f",soma);
        
    }
    int main(){
        float v[3][3];
        matriz(v);
    }
