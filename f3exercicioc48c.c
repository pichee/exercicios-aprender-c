//Faca um programa que some os termos de valor par da sequencia de Fibonacci, cujos
//valores nao ultrapassem quatro milhoes.

// show the fibonacci sequence until 4000000
#include <stdio.h>
int main(){
    int a=0,n,n1=1,g,c=1;
    while (a<4000000)
    {
        printf("%i ",a);
        if(c==1){
            printf("%i ",c);
           c++; 
        }
        g=n+n1;
        n=n1;
        n1=g;
        a=g;


    }
    
}
