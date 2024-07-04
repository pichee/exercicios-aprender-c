//Faca um algoritmo que receba um numero inteiro positivo  n e calcule o somatorio de 1 
//ate n.

//Make a program tha add the sum in a interval;
        scanf("%i",&n);
#include <stdio.h>
    int f(int n,int n1,int r){
        r=0;
        while (n<=n1)
        {
            r+=n;
            n++;
        }
        printf("The sum is %i",r);
        
    }
    int main(){
        int n,n1,aux;
        printf("Enter a number:");
        scanf("%i",&n);
        printf("Enter a  other number:");
        scanf("%i",&n1);
        if(n1<n){
            aux=n1;
            n1=n;
            n=aux;
        }
        f(n,n1,aux);
    }
