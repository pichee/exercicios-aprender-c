//Crie uma funcao recursiva que receba um numero inteiro positivo N e calcule o somatorio
//dos numeros de 1 a N.

//Make a function recursive that receb a int number positive N and calcule the somatory
//the 1 between N

#include <stdio.h>
    int function(int n,int *result){
        int aux=0,i;
        while(i<=n){
           aux=i+aux; 
           i++;
        }
        *result=aux;
       
    }
    int main(){
        int n,r;
        printf("Enter a positive number:");
        scanf("%i",&n);
        function(n,&r);
         printf("The add 1 between %i is %i",n,r);
    }
