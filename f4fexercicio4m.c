//Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ao (linha e a coluna) do 
//maior valor

//Read a matrix 4x4 and show the bigger value

#include <stdio.h>
    int main(){
        int v[4][4];
        int i,c,m,ac,al,ia;
        printf("Enter a value:");
        scanf("%i",&v[0][0]);
        m=v[0][0];
        ac=0;
        al=0;
        ia=0;
        for(i=0;i<4;i++){
            c=0;
            ia=i;
            for ( c = 0; c < 4; c++)
            {
                printf("Enter a value:");
                if(ia==0){
                    c=1;
                    ia++;
                }
                scanf("%i",&v[i][c]);
                if(v[i][c]>m){
                    m=v[i][c];
                    ac=c;
                    al=i;
                }

            }
            
        }
        printf("The bigger value is %i in line %i and in %i colune",m,al,ac);
    }
