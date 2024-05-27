//Faca uma funcao nao-recursiva que receba um numero inteiro positivo  n e retorne o fatorial exponencial desse numero. 
//Um fatorial exponencial  e um inteiro positivo  n elevado a potencia de n − 1, que por sua vez e elevado  a potencia de n − 2 e
// assim em diante.

//Make a function theat recebed a int numbers and show your exponencial factorial
#include <stdio.h>
#include <math.h>
    int hiperfatorial(int n){
       int aux=1,auxjr=1,r=1;
        while (aux<=n-1)
        {
            auxjr=pow(aux,aux-1);
            r=pow(aux+1,auxjr);
            aux++;
        }

        printf("the hiperfatorial is %i",r);
    }
    int main(){
        int a;
        printf("Enter a number:");
        scanf("%i",&a);
        hiperfatorial(a);
    }
