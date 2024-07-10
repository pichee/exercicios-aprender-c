//Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
//ser impresso o maior e o menor elemento do vetor


//Make a vector with ten positions.And show the bigger
//and the smaller number the vector.

#include <stdio.h>
    int main(){
        int v[10];
        int a,m,me=99999999;
        for(a=0;a<10;a++){
            printf("Enter a number");
            scanf("%i",&v[a]);
            if(m<v[a]){
            m=v[a];
        }
            if(me>v[a]){
            me=v[a];
        }
    }
        printf("The bigger number of this vectore is %i and the smaller is %i",m,me);
    }
        
