//Crie um programa que:
//(a) Aloque dinamicamente um array de 5 numeros inteiros, 
//(b) Peca para o usuario digitar os 5 numeros no espac¸o alocado
//(c) Mostre na tela os 5 numeros
//(d) Libere a memoria alocada

// Create a program that:
// (a) Dynamically allocates an array of 5 integers,
// (b) Asks the user to enter the 5 numbers into the allocated space,
// (c) Displays the 5 numbers on the screen,
// (d) Frees the allocated memory
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array;
    array=(int*)malloc(5*sizeof(int));
    
    for(int i=0;i<5;i++){
    printf("Digite um valor para a posição %i:",i+1);
    scanf("%i",&array[i]);
    }
    printf("Valores:\n");
    for(int i=0;i<5;i++){
    printf("%i ",array[i]);
    }
    free(array);
    }
    