//Faca uma funcao recursiva que receba um numero inteiro positivo impar N e retorne
//o fatorial duplo desse numero. O fatorial duplo e definido como o produto de todos os
//numeros naturais ımpares de 1 ate algum numero natural  ımpar N. Assim, o fatorial duplo
//de 5 e 5!! = 1 ∗ 3 ∗ 5 = 15

//Make a function that receb a odd N and return your fatoral double
#include <stdio.h>
    int funcao(int n){
        if (n==0 || n==1)
        {
            printf("1");
            return 0;

                    }
    int i=0,r=1;
    while (i<=n)
    {
        if (i%2==1)
        {
            r=r*i;
        }
        i++;
    }
    printf("The result is %i",r);
           
    }
    int main(){
        int n=0;
        printf("Enter a number:");
        scanf("%i",&n);
        funcao(n);
    }
