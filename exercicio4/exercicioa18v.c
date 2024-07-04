//Faca um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os
//multiplos de um numero inteiro  x num vetor e mostre-os na tela.


//Make a vectore with ten numbers and read a value x
//Next show the multiples of x

#include <stdio.h>
    int main(){
        int a,v[10],m,c=0;
        for (a=0;a<10;a++)
        {
            printf("Enter a number:");
            scanf("%i",&v[a]);
        
        }
            printf("What is your x number?\n");
            scanf("%i",&m);
        for (a=0;a<10;a++)
        {
            if(v[a]%m==0){
                c+=1;
            }
         }
         printf("In this vectore x have %i multiples",c);
    }
