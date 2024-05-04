//Faca um programa que permita ao usuario entrar com uma matriz de 3 x 3 numeros
//inteiros. Em seguida, gere um array unidimensional pela soma dos numeros de cada
//coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
//5 -8 10
//1 2 15
//25 10 7
//Vai gerar um vetor, onde cada posicao e a soma das colunas da matriz. A primeira
//posicao ser a 5 + 1 + 25, e assim por diante:
//31 4 3

//Make a program read a matrix [3][3] and show the add the colune of matrix
#include <stdio.h>
    int main(){
        int tres[3][3],somatres[3][3];
        int i,j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("Enter a number:");
                scanf("%i",&tres[i][j]);
            }
               
        }

        somatres[0][0]=tres[0][0]+tres[1][0]+tres[2][0];
        somatres[1][0]=tres[0][0]+tres[1][0]+tres[2][0];
        somatres[3][0]=tres[0][0]+tres[1][0]+tres[2][0];
        printf("%i %i %i",somatres[0][0],somatres[1][0],somatres[3][0]);
    }
