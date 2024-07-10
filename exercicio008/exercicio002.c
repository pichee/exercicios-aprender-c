//Faca uma funcao recursiva que calcule e retorne o fatorial de um numero inteiro N

//Make a function tha return a factorial the a number

#include <stdio.h>
    int function(int n){
        if(n==0){
            printf("1");
            return 0;
        } else if(n>=1){
            int i=1,aux=1;
            for(i=1;i<=n;i++){
                aux=aux*i;
            }
            printf("The factorial is %i",aux);
            return 0;
        }
        else{
            printf("Invalid number");
        }
        
    }
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%i",&n);
        function(n);
    }
