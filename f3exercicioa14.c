//Faca um programa que leia um numero inteiro positivo par N e imprima todos os numeros
//pares de 0 ate N em ordem decrescente.
//Make a program show descending order of the a number;
#include <stdio.h>
int main(){
    int c;
    int n,a;

    printf("Enter a  whole number\n");
    scanf("%i",&n);
    c=n;
    while(a<=n){
        printf("\n%i",c);
        c=c-1;
        a++;
    }
}
