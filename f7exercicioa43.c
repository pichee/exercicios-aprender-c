//Faca uma funcao que receba um vetor de inteiros e o preencha com numeros aleatorios
//sem repeticao.

// Make a function that receb a array the int numbers and fill in a random numbers without
//repetition

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n[10]){
    int a=0,b=0;
    srand(time(NULL));
    for ( a = 0; a < 10; a++)
    {
        n[a]=rand()%100;
    for (b = 0; b < a; b++)
    {
        if (n[a]==n[b])
        {
            n[a]=rand()%100;
        }
        
    }
    
    }
    a=0;
     printf("The numbers are:\n");
    for (a = 0; a < 10; a++)
    {
        printf("%d\n ",n[a]);
    }
    
    
    }
    int main(){
        int a[10];
        random(a);
                }
