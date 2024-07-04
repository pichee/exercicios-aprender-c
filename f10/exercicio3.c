//Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
//dinamica de memoria. Em seguida, leia do usuario seus valores e mostre quantos dos
//numeros sao pares e quantos sao ımpares:

//Make a program that calculatte a size a vector enter the alocation memory and showing the pair numbers and the odd numbers:
#include <stdio.h>
#include <stdlib.h>
int main(){
int t,i;
printf("Enter tha size the vector:");
scanf("%i",&t);
int *vetor =(int *) malloc(t*sizeof(int));
if (*vetor==NULL)
{
    printf("ERROR");
}
for (i = 0; i < t; i++)
{
    printf("Enter a value:");
    scanf("%i",&vetor[i]);
}
i=0;
printf("pair numbers:\n");
for (i = 0; i < t; i++){
    if (vetor[i]%2==0)
    {
        printf("%i",vetor[i]);
    }
    
}
i=0;
printf("odd numbers:\n");
for (i = 0; i < t; i++){
    if (vetor[i]%2==1)
    {
        printf("%i",vetor[i]);
    }
    
}
free(vetor);
return 0;
}//Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
//dinamica de memoria. Em seguida, leia do usuario seus valores e mostre quantos dos
//numeros sao pares e quantos sao ımpares:

//Make a program that calculatte a size a vector enter the alocation memory and showing the pair numbers and the odd numbers:
#include <stdio.h>
#include <stdlib.h>
int main(){
int t,i;
printf("Enter tha size the vector:");
scanf("%i",&t);
int *vetor =(int *) malloc(t*sizeof(int));
if (*vetor==NULL)
{
    printf("ERROR");
}
for (i = 0; i < t; i++)
{
    printf("Enter a value:");
    scanf("%i",&vetor[i]);
}
i=0;
printf("pair numbers:\n");
for (i = 0; i < t; i++){
    if (vetor[i]%2==0)
    {
        printf("%i",vetor[i]);
    }
    
}
i=0;
printf("odd numbers:\n");
for (i = 0; i < t; i++){
    if (vetor[i]%2==1)
    {
        printf("%i",vetor[i]);
    }
    
}
free(vetor);
return 0;
}
