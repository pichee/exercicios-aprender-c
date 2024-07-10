//Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o fatorial
//exponencial desse numero. Um fatorial exponencial  e um inteiro positivo N elevado  a
//potencia de N-1, que por sua vez  e elevado a potencia de N-2 e assim em diante. Ou 
//seja,

//Make a function that receb a positive number and return the exponincial fatorial
#include <stdio.h>
#include <math.h>
    int funcao(float n){
        if (n==0 || n==1)
        {
            printf("1");
            return 0;
                    }
    float i=1,r=1,aux=n;
    for (i = 1; i <= n; i++)
    {
           r = pow(r, aux) * pow(aux, n - i);
        }
        printf("The result is %.0f",r);
    }
    int main(){
        float n=0;
        printf("Enter a number:");
        scanf("%f",&n);
        funcao(n);
    }
