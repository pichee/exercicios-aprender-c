//Faca uma funcao que receba uma matriz 4 x 4 e retorne quantos valores maiores do que
//10 ela possui.

//Make a function receb a matrix 4x4 and show how much numbers are bigger than 10
#include <stdio.h>
    int matriz(float aux[4][4]){
        int a=0,b=0,c=0;
        for (a = 0; a < 4; a++)
        {
            b=0;
            for (b = 0; b < 4; b++)
            {
                printf("Enter a number:");
                scanf("%f",&aux[a][b]);
                if(aux[a][b]>10){
                    c++;
                }
            }
            
        }
        printf("There is %i numbers bigger than 10",c);
        
    }
    int main(){
        float v[4][4];
        matriz(v);
    }
