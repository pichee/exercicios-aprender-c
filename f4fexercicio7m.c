//Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:
//A[i][j] = 2i + 7j − 2 se i < j;
//A[i][j] = 3i² − 1 se i = j;
//A [I][j]= 4i³ − 5j² + 1 se i > j.



//Make a matrix 10 x 10 following the rules:
//A[i][j] = 2i + 7j − 2 se i < j;
//A[i][j] = 3i² − 1 se i = j;
//A [I][j]= 4i³ − 5j² + 1 se i > j.
#include <stdio.h>
int main(){
    int v[10][10];
    int j,i;
        for ( i = 0; i < 10; i++)
        {
            for (j= 0; j<10; j++)
            {
                if(i < j){
                    v[i][j]= (2*i)+(7*j)-2;
                }
                else if(i==j){
                    v[i][j]=3*(i*i)-1;
                }
                else{
                    v[i][j]=4*(i*i*i)-5*(j*j)+1; 
                }
            }
            
        }
        for ( i = 0; i < 10; i++)
        {
            for (j= 0; j<10; j++)
            {
                printf("%i\n",v[i][j]);
        
}}}
