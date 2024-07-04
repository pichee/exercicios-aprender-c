//Faca um programa que leia um numero N e:
//Crie dinamicamente e leia um vetor de inteiro de N posicoes;
//Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem
//no vetor.

//Make a program read a number n and showing the multiples the a number the x
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,n;
    printf("Enter how many numbers there is in vector:");
    scanf("%i",&n);
    printf("Enter the value the X:");
    scanf("%i",&x);
    int *vetor=(int *)malloc(n*sizeof(int));
    int i=0,c=0;
    for (i = 0; i < n; i++)
    {
        printf("Enter a number:");
        scanf("%i",&vetor[i]);
        if (vetor[i]%x==0)
        {
            c++;
        }
        
    }
    printf("There is %i numbers multiplos of x.",c);
}
