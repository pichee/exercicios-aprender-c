//Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o fatorial
//quadruplo desse numero. O fatorial quadruplo de um numero Ne dado por: 

//Make a function that receb number and return your quadruple this number:
#include <stdio.h>
    int funcao(float n){
        if (n==0 || n==1)
        {
            printf("1");
            return 0;

                    }
    float i=1,r=1,resposta=1;
    for (i = 1; i <= n; i++)
    {
        r=1;
        for (r = 1; r <= i; r++)
        {
            resposta=resposta*r;
        }
        
    }
    
    printf("The result is %.0f",resposta);
           
    }
    int main(){
        float n=0;
        printf("Enter a number:");
        scanf("%f",&n);
        funcao(n);
    }
