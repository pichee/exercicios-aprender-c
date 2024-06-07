//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
//endereco de cada posicao desse array

//Make a program that show the adress the array with ten 

#include <stdio.h>
int main(){
    int i=0,vetor[10];
    for(i=0;i<10;i++){
        int *ponteiro=&vetor[i];
        printf("%i\n",ponteiro);
    }
}
