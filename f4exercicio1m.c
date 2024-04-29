//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

//Read a matrix 4x4 and show how many values there is bigger than 10.
#include <stdio.h>
    int main(){
        int v[4][4];
        int j,i,c;
        for(j=0;j<4;j++){
            for ( i = 0;i<4;i++)
            {
                printf("Enter a number:");
                scanf("%i",&v[j][i]);
                if(v[j][i]>10){
                    c++;
                }
            }
            
        }
        printf("This matrix have %i values biggert than 10",c);
    }
