//Faca uma funcao que receba um vetor de inteiros e retorne quantos valores pares ele
//possui.

//Make a program that receb a vector than int numbers and return how much pairs numbers


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    void chance(int n1[]){
        int aux=0,c=0;
        while (aux<100)
        {
            if(n1[aux]%2==0){
                c++;
            }
            aux++;
        }
        
        printf("There is %i pairs numbers",c);
        
    }
    int main(){
        srand(time(NULL));
        int s[100],a;
        for (a=0; a<100;a++)
        {
            s[a]=rand();
        }
        chance(s);
        
       
        
    }
