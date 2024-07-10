//Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o hiperfa
//torial desse numero. O hiperfatorial de um numero N, escrito H(n), e definido por 

//Make a function that receb number and show the hiperfatorial:
#include <stdio.h>
#include <math.h>
    int funcao(float n){
        if (n==0 || n==1)
        {
            printf("1");
            return 0;

                    }
    float i=1,r=1,resposta=1;
    for (i = 1; i <= n; i++)
    {
            resposta=resposta*(pow(i,i));
        }
        printf("The result is %.0f",resposta);
    }
    int main(){
        float n=0;
        printf("Enter a number:");
        scanf("%f",&n);
        funcao(n);
    }
