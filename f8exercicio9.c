//Faca uma funcao recursiva que receba um numero inteiro positivo par N e imprima todos
//os numeros pares de 0 ate N em ordem crescente.

//Make a function that receb a int number and showing the 0 until N in order but just pair numbers
#include <stdio.h>
    int seque(int n){
        if (n<0)
        {
            printf("ERROR");
            return 0;
        }
        int i=0;
    while (i<n+1)
    {
        if (i%2==0)
        {
           printf("%i ",i);
        }
        i++;
        
        
    }
    
    
    }
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%i",&n);
        seque(n);
    }    
