//Leia uma matriz 5 x 5. Leia tambem um valor  X. O programa devera fazer uma busca 
//desse valor na matriz e, ao final, escrever a localizacao (linha e coluna) ou uma mensa
//gem de “nao encontrado”

//Read a matrix 5 x 5 and show how is the x value
#include <stdio.h>
    int main(){
        int v[4][4],vco[25],vl[25],a=0;
        int i,c,x;
        printf("Enter of x value:");
        scanf("%i",&x);
        for(i=0;i<4;i++){
            for ( c = 0; c < 4; c++)
            {
                printf("Enter a value:");
                scanf("%i",&v[i][c]);
                }
            }
            for(i=0;i<4;i++){
            for ( c = 0; c < 4; c++)
            {
                if(v[i][c]==x){
                    vco[a]=c;
                    vl[a]=i;
                    a++;
                }
                }
            }
        if(a>0){
            printf("X found %i times and the positions is\n",a);
            for(i=0;i<a;i++){
                    printf("[%i,%i]\n",vl[i],vco[i]);
            }
            
        }
        else{
            printf("X not found");
        }
    }
