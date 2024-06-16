//Escreva um programa para fazer a alocacao dinamica dos blocos de dados conforme
//solicitado abaixo:
//(a) Vetor de 1024 Bytes (1 Kbyte).
//(b) Matriz de inteiros de dimensao 10 x 10. 
//(c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres),
//codigo do produto (inteiro) e preco em reais.
//(d) Texto de ate 100 linhas com ate 80 caracteres em cada linha.

//make a Lot things to alocated the memory
#include <stdio.h>
#include <stdlib.h>
int main(){
int *vetorkbyte=(int *)malloc(254*sizeof(int));
int **matrix=(int **)malloc(10 * sizeof(int*));
    int i=0;
    for(i=0;i<10;i++){
    matrix[i]=(int *)malloc(10 *sizeof(int));
    }
    int *vetor50codigo=(int *)malloc(50*sizeof(int));
    float *vetor50preco=(float *)malloc(50*sizeof(float));
    char *vetor50price=(char *)malloc(50*sizeof(char));
    char *texto=(char *)malloc(800*sizeof(char));
    }
    
    