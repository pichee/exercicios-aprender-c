//Faca um programa para armazenar em memoria um vetor de dados contendo 1500 va
//lores do tipo int, usando a funcao de alocacao dinamica de memoria CALLOC:
//(a) Faca um loop e verifique se o vetor contem realmente os 1500 valores inicializados
//com zero (conte os 1500 zeros do vetor).
//(b) Atribua para cada elemento do vetor o valor do seu ındice junto a este vetor.
//(c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor

// Write a program to store in memory a data vector containing 1500 va
//lores of type int, using the dynamic memory allocation function CALLOC:
//(a) Make a loop and check if the vector actually contains the 1500 initialized values
//with zero (count the 1500 zeros in the vector).
//(b) Assign to each element of the vector the value of its index next to this vector.
//(c) Display the first 10 and last 10 elements of the vector on the screen
#include <stdio.h>
#include <stdlib.h>
int main() {
    int vetor[1500], i = 0;
    int *p = (int *)calloc(1500, sizeof(int));
    if (p == NULL) {
        printf("Error with allocate memory\n");
        return 1;
    }
    for (i = 0; i < 1500; i++) {
        if (p[i]!= 0) {
            printf("Something is wrong");
            return 0;
    }}
    printf("all the elements are zero\n");
    i=0;
    for ( i= 0; i < 1500; i++)
    {
        p[i]=i;
    }
    i=0;
    for (i = 0; i < 10; i++)
    {
        printf("%i ",p[i]);

    }
    i=1490;
    printf("\n");
    for (i = 1490; i < 1500; i++)
    {
        printf("%i ",p[i]);

    }
    return 0;
    
    
}
