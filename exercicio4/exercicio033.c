//Faca um programa que leia um vetor de 15 posicoes e o compacte, ou seja, elimine as 
//posicoes com valor zero. Para isso, todos os elementos a frente do valor zero, devem ser 
//movidos uma posicao para tras no vetor.

//make a vectore and dont show the zeros.

#include <stdio.h>

int main() {
    int a, v[15],t=15,p=0,vo[15];
    for (a = 0; a < 15 ;a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
    }
    for(a=0; a<15 ;a++){
        if(v[a]==0){

        }
        else{
            vo[p]=v[a];
            p++;
        }

    }
    for(a=0; a<p; a++){
        printf("%i\n",vo[a]);

    }}
