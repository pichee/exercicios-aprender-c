//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posicao
//das matrizes lidas.

//Read two matrix and show the bigger value.
#include <stdio.h>
int main(){
    int v[4][4];
    int j=0,c=0;
    int vm[4][4];
    int v1[4][4];
    printf("Matrix 1\n");
    for (j= 0; j < 4; j++)
    {
        for (c=0; c < 4; c++)
        {
            printf("Enter a number:");
            scanf("%i",&v[j][c]);
        }
        
    }
        printf("Matrix 2\n");
    for (j= 0; j < 4; j++)
    {
        for (c=0; c < 4; c++)
        {
            printf("Enter a number:");
            scanf("%i",&v1[j][c]);
        }
        
    }
        for (j= 0; j < 4; j++)
    {
        for (c=0; c < 4; c++)
        {
            if(v[j][c]>v1[j][c])
            {
                vm[j][c]=v[j][c];
            }
            else if(v[j][c]==v1[j][c]){
                vm[j][c]=v[j][c];
            }
            else{
                vm[j][c]=v1[j][c];
            }
            
}}
        for (j= 0; j < 4; j++)
        {
        for (c=0; c < 4; c++)
        {
            printf("%i\n",vm[j][c]);
        }}}
