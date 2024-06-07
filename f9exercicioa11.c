//Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
//do teclado e imprima o endereco das posicoes contendo valores pares.

//NMake a program that contain 5 elements 5 elements that showing just the elements de adress is pair
#include <stdio.h>
  int main(){
    int vetor[5],i=0;
    for (i = 0; i < 5; i++)
    {
      int *ponteiro=&vetor[i];
      if ((unsigned long)*ponteiro%2==0)
      {
        printf("%i\n",ponteiro);
      }
      
    }
    
  }
