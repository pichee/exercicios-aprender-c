//Escreva uma funcao recursiva SomaSerie(i,j,k). Esta funcao devolve a soma da serie de
//valores do intervalo [i,j], com incremento k.

//Read a function somaserie(i,j,k).This function return the value i+j with k.
//eu nao vi diferença dessa pra outra
#include <stdio.h>
    int somaserie(int i,int j,int k){
        int r=0;
        r=i+j+k;
        printf("the aswer is %i",r);
    }
    int main(){
        printf("What is the value i:");
        scanf("%i",&i);
        printf("What is the value j:");
        scanf("%i",&j);
        printf("What is the value k:");
        scanf("%i",&k);
        somaserie(i,j,k);
    }
