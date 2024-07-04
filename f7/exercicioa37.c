//Faca uma funcao que receba um numero inteiro positivo  n e retorne o 
//hiperfatorial desse numero. O hiperfatorial de um numero n, escrito H(n), e definido por:

//Make a function theat rebeb a int numbers and show your hiperfatorial
#include <stdio.h>
#include <math.h>
    int hiperfatorial(int n){
        int aux=1,auxjr,r=1;
        while (aux<=n)
        {
            r=r*pow(aux,aux);
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
