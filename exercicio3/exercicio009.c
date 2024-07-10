//Faca um programa que leia um numero inteiro N e depois imprima os N primeiros
//numeros naturais ´ ´ımpares.
//Make a program read a number and show the firsts odd numbers
#include <stdio.h>
int main(){
    int c=1;
    int n,a;

    printf("Enter a  whole number");
    scanf("%i",&n);
    while(a<n){
        printf("\n%i",c);
        c=c+2;
        a++;
    }

}
