//Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
//dinamica de memoria. Em seguida, leia do usuario seus valores e mostre quantos dos
//numeros sao pares e quantos sao ımpares:

//Make a program that calculatte a size a vector enter the alocation memory and showing the pair numbers and the odd numbers:
#include <stdio.h>
#include <stdlib.h>
int main(){
int tamanho;
printf("Enter tha size the vector:");
scanf("%i",&tamanho);
int *vetor=malloc(tamanho*sizeof(int));
if (vetor==NULL)
{
    printf("ERROR");
    return 0;
}
for(int i = 0; i < tamanho; i++)
{
    printf("Enter a value:");
    scanf("%i",&vetor[i]);
}
printf("\npair numbers:\n");
for (int i = 0; i < tamanho; i++){
    if (vetor[i]%2==0)
    {
        printf("%i with the location in memory %i",vetor[i],&vetor[i]);
    }

}
printf("\nodd numbers:\n");
for (int i = 0; i < tamanho; i++){
    if (vetor[i]%2==1)
    {
      printf("%i with the location in memory %i",vetor[i],&vetor[i]);
    }
}
free(vetor);
return 0;
}