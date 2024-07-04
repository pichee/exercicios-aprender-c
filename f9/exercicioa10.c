//Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
//apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
//valor lido.

//Make a program that have a array tha five elements and utilizing pointer the double
#include <stdio.h>
int main(){
  int vetor[5]={1,2,3,4,5},i=0,a=0;
  int *ponteiro=&a;
  for (i = 0; i < 5; i++)
  {
    a=2*vetor[i];
    *ponteiro=a;
    printf("%i\n",*ponteiro);
  };
  
}
