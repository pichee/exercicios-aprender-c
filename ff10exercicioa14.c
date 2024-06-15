//Construa um programa que leia o numero de linhas e de colunas de uma matriz de
//numeros reais, aloque espaco dinamicamente para esta e a inicialize com valores forne
//cidos pelo usuario. Ao final, o programa devera retornar a matriz na saıda padrao com
//layout apropriado

//Make a matrix but using the alloc memory
#include <stdio.h>
#include <stdlib.h>
int main(){
    int l,c;
    printf("How much colunes do you want in your matrix:");
    scanf("%i",&c);
    printf("How much lines do you want in your matrix:");
    scanf("%i",&l);
    int i=0;
     int **matriz =(int **)malloc(l * sizeof(int *));
     for (i = 0; i < l; i++)
     {
       matriz[i] =(int *)malloc(c *sizeof(int *));
     }
    i=0;
    int b=0;
    for (i = 0; i < l; i++)
    {
        b=0;
        for (b = 0; b < c; b++)
        {
        printf("Enter a number [%i][%i]:",i+1,b+1);
        scanf("%i",&matriz[i][b]);
        }
        
        
    }
    i=0;
    printf("Result the matrix:");
    for (i = 0; i < l; i++)
    {
    b=0;
    for (b = 0; b < c; b++)
    {
    printf("%i",matriz[i][b]);
    }
        }}
