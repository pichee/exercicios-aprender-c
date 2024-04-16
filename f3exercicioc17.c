//Faca um programa que leia um numero inteiro positivo ´ n e calcule a soma dos n primeiros
//numeros naturais.
//Make a program that reads a positive integer number n and calculates the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n,s=0,a=0;
    printf("Enter a number:");
    scanf("%i",&n);
    if(n<0){
        printf("Error");
    }
    else{
        while (a<=n)
        {
            s+=a;
            a++;
        }
        
    }
    printf("The addion of whole numbers is %i",s);
}
