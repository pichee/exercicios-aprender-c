//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao acima da
//diagonal principal.

//Read a matrix 3x3 and calculate the elements on top principal diagonal
#include <stdio.h>
int main(){
    int v[3][3];
    int j,i,s;
        for ( i = 0; i < 3; i++)
        {
            for (j= 0; j<3; j++)
            {      
                printf("Enter a number:");
                scanf("%i",&v[i][j]);
                if(i == 0 && j>0){
                s+=v[i][j];}
                if(i == 1 && j==2){
                s+=v[i][j];
                    }}}
        printf("The add the elements on top principal diagonal is %i",s);
}
