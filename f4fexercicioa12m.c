//Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

//Read a matrix 3x3 and calculate and show your transpósed
#include <stdio.h>
int main(){
    int v[3][3];
    int j,i;
        for ( i = 0; i < 3; i++)
        {
            for (j= 0; j<3; j++)
            {      
                printf("Enter a number:");
                    scanf("%i",&v[i][j]);
                }
        }
        j=0;
        printf("Your transposed is\n");
        for ( i = 0; i < 3; i++)
        { printf("%i ",v[i][j]);
                }
            printf("\n");
            j=1;
          for ( i = 0; i < 3; i++)
        { printf("%i ",v[i][j]);
                }
            printf("\n");
            j=2;
             for ( i = 0; i < 3; i++)
        { printf("%i ",v[i][j]);
                }     
                
                }
