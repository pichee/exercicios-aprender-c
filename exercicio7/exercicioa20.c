//Faca um algoritmo que receba um numero inteiro positivo n e calcule o seu fatorial, n!.

//Make a program make a number in factorial
#include <stdio.h>
    int funcao(int n1,int re){
        re=n1;
        while (n1>1)
        {
            n1--;
            re=n1*re;
        }
        printf("The factorial this number is:%i",re);
    
        
    }int main(){
        int n,r;
        printf("Enter a number:");
        scanf("%i",&n);
        funcao(n,r);
    }
