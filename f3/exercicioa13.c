//Make a program read the a numbers and show the numbers pair until n in order crescent;
//Faca um programa que leia um numero inteiro positivo par N e imprima todos os numeros
//pares de 0 ate N em ordem crescente.

#include <stdio.h>
int main(){
    int c;
    int n,a,a1;

    printf("Enter a  whole number pair\n");
    scanf("%i",&n);
    c=n%2;
    if(c==0){
    while(a<=n){
        printf("\n%i",a1);
        a1=a1+2;
        a++;
        a++;
    }}else{
        printf("ERROR");
    }}
