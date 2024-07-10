//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
//elementos. Escreva ao final a matriz obtida.

//MAKE a matrix 5x5 and in main diagonally put 1 and the 
//other elements 0;

#include <stdio.h>
    int main(){
        int v[5][5]={{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1},};
        int a;
        int c;
        for (int i = 0; i <5; i++)
        {
            a++;
            c=-1;
            for( a=0; a<5;a++){
                printf("%i",v[i][a]);
                c++;
                if(c==4){
                    printf("\n");
                }
            }
        }
        
    }
