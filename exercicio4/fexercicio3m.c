//Faca um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
//coluna de cada elemento. Em seguida, imprima na tela a matriz.

//make a matrix 4 x 4 and show the porduct the line by the colune.


#include <stdio.h>
    int main(){
        int v[4][4];
        int a;
        int c;
        for (int i = 0; i <4; i++)
        {
            for( a=0; a<4;a++){
                printf("Enter a value for the matrix:");
                scanf("%i",&v[i][a]);
                if(i==0){
                    v[i][a]=1*v[i][a];
                }
                if(i==1){
                    v[i][a]=2*v[i][a];
                }
                if(i==2){
                    v[i][a]=3*v[i][a];
                }
                if(i==3){
                    v[i][a]=4*v[i][a];
                
                }
            }}
            for (int i = 0; i <4; i++)
                {
                    c=0;
                    for( a=0; a<4;a++)
                    {c++;
                    printf("%i ",v[i][a]);
                    if(c==4)
                    {
                        printf("\n");
                    }
            }
        }}
        

