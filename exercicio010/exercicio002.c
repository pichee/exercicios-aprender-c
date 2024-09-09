/*Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao dinamica de memoria. 
Em seguida, leia do usuario seus valores e imprima o vetor lido.*/
/*Make a program that Read a value informed to the user and make a vector with the value after make locations memory
and showing the results*/
#include <stdio.h>
int main(){
    int size;
    printf("How many numbers do you want: ");
    scanf("%i",&size);
    int *ponteiro;
    ponteiro=(int*)malloc(size*sizeof(int));
    int bytes=size*sizeof(int);
    for(int i=0;i<size;i++){
    printf("Enter a number of the position [%i]:",i+1);
    scanf("%i",&ponteiro[i]);
}
printf("Vector\n");
    for(int i=0;i<size;i++){
printf("%i ",ponteiro[i]);
}
printf("\n\nThis vector there is %i numbers so he has %i bytes",size,bytes);
printf("\nMemory Locations\n\n");
for(int i=0;i<size;i++){
printf("number %i location %i \n ",ponteiro[i],&ponteiro[i]);
}
free(ponteiro);
}