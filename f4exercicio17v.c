//Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possoırem
//valores negativos.

//REad a vector and chance any negative number for zero

#include <stdio.h>
    int main(){
        int a,v[10];
        for (a=0;a<10;a++)
        {
            printf("Enter a number");
            scanf("%i",&v[a]);
            if(v[a]<0){
                v[a]=0;
            }
        }
         for (a=0;a<10;a++){
            printf("%i\n",v[a]);
         }
    }
