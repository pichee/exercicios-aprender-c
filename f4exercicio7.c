//Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima 
//o vetor, o maior elemento e a posicao que ele se encontra

//Make a vector with ten whole numbers and showing the bigger element;

#include <stdio.h>
    int main(){
        int v[10];
        int m,a,e;
            printf("Enter a number:");
            scanf("%i",&v[0]);
            m=v[0];
            for(a=1;a<10;a++){
            printf("Enter a number:");
            scanf("%i",&v[a]);
            if (m<v[a])
            m=v[a];
        }
        printf("the bigger number is %i",m);
    }
