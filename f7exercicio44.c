//Faca uma funcao que receba como parametro um vetor X de 30 elementos inteiros e
//retorne, tambem por parametro, dois vetores A e B. O vetor A deve conter os elementos
//pares de X e o vetor B, os elementos ımpares.

//Make a function receb a vector with 30 int elements and return what numbers are pairs and how much is odd;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int n[30]){
    int a=0,b=0,pair[30]={0},impar[30]={0},c=0;
    srand(time(NULL));
    for ( a = 0; a < 30; a++)
    {
        n[a]=rand()%99;
        n[a]=n[a]+1;
        if (n[a]%2==1)
        {
            
            impar[b]=n[a];
            b++;
        }else{
            pair[c]=n[a];
            c++;
        }
        
        
    }
    a=0;
     printf("The odd numbers are:\n");
    for (a = 0; a < b; a++)
    {
        printf("%d\n ",impar[a]);
    }
    a=0;
    printf("The pair numbers are:\n");
    for (a = 0; a < c; a++)
    {
        printf("%d\n ",pair[a]);
    }
}
    int main(){
        int a[30];
        random(a);
                }
