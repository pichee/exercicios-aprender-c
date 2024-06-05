//Crie um programa que receba um vetor de numeros reais com 100 elementos. Escreva
//uma funcao recursiva que inverta a ordem dos elementos presentes no vetor.

//Make a program that receb a vector a elementes 100 and read this invert
#include <stdio.h>
int vetor(int vetor[100]){
    int i=0;
    for ( i = 0; i < 100; i++)
    {
        printf("Enter a number:");
        scanf("%i",&vetor[i]);
    }
    for ( i = 99; i !=0 ; i--)
    {
        printf("%i",vetor[i]);
    }
    
    
}
    int main(){
        int v[100];
        vetor(v);
    }
