// /Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario,imprima o numero ao quadrado.
//Read a number if is posivite show your square if is negative show your double
#include <stdio.h>
#include <math.h>
    int main(){
        float n;
        printf("Enter a number");
        scanf("%f",&n);
        if (n>0){
            n=sqrt(n);
            printf("Your square is %.2f",n);
        }else{
            n=n*n;
            printf("the double of this number is %.2f",n);
            
        }
    }
