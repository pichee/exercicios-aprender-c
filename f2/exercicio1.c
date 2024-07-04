//Make a program to receb two values in show the bigger.
//Faca um programa que receba dois numeros e mostre qual deles e o maior
#include <stdio.h>
    int main(){
        float n,n1;
        printf("Put a number");
        scanf("%f",&n);
        printf("Put other number");
        scanf("%f",&n1);
        if (n>n1){
            printf("The number %.2f is bigger than %.2f",n,n1);
        }else{
            printf("The number %.2f is bigger than %.2f",n1,n);
        }
    }
