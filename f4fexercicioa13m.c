//Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
//a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

//Manage a matriz 4 x 4 with values in the intervale [1,20]and after trasform a matrix with the values 
//up primary diagonal all the values 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int v[4][4];
int j,i,a;
srand(time(NULL));
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            v[i][j]= rand() % 20 + 1;
        }
    }
        printf("Original Matrix\n");
        for ( i = 0; i < 4; i++)
    {
        a=0;
        for ( j = 0; j < 4; j++)
        {
            printf("%i ",v[i][j]);
            if(a==3){
                printf("\n");
            }
            else{
                a++;
            }
        }
    }


    
        printf("Transform Matrix\n");
        for ( i = 0; i < 4; i++)
    {
        a=0;
        for ( j = 0; j < 4; j++)
        {
             if(i==0 && j>0){
                v[i][j]=0;
            }
            else if(i==1 && j>1){
                v[i][j]=0;
            }
            else if(i==2 && j>2){
                v[i][j]=0;
            }
            else if(3==i && j>3){
                v[i][j]=0;
            }
            printf("%i ",v[i][j]);
            if(a==3){
                printf("\n");
            }
            else{
                a++;
            }
        }
    }
}
