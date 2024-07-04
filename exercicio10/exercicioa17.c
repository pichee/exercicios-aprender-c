//Faca um programa que leia numeros do teclado e os armazene em um vetor alocado
//dinamicamente. O usuario ir a digitar uma sequencia de numeros, sem limite de quan
//tidade. Os numeros serao digitados um a um e, sendo que caso ele deseje encerrar a
//entrada de dados, ele ira digitar o numero ZERO. Os dados devem ser armazenados na
//memoria deste modo
//• Inicie com um vetor de tamanho 10 alocado dinamicamente;
//• Apos,caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor
//anterior adicionado espac¸o para mais 10 valores (tamanho N+10, onde N inicia com
//10);
//• Copie os valores ja digitados da area inicial para esta area maior e libere a memoria
//da area inicial;
//• Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
//alocado cada vez que o mesmo estiver cheio. Assim o vetor ira ser expandido de
//10 em 10 valores.
//Ao final, exiba o vetor lido. Nao use a funcao REALLOC.

//Show a vector
#include <stdio.h>
    int main(){
        int decision=1;
        int *vector=(int *)malloc(10*sizeof(int));
        int n=0,c=0;
        while (decision!=0)
        {
            n++;
            *vector=(int *)malloc((n*10*)sizeof(int));
            printf("Enter a number the vector:");
            scanf("%i",&vector[c]);
            c++;
            if (vector[c]==0)
            {
                decision=0;
            }
            
        }   
            }

            for ( i = 0; i < c; i++)
            {
                printf("%i",vector[c]);
            }
            
