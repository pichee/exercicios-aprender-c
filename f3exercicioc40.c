//Elabore um programa que faca leitura de varios numeros inteiros, ate que se digite um
//numero negativo. O programa tem que retornar o maior e o menor numero lido.
//Develop a program that reads several integer numbers until a negative number is entered. The program should return the largest and smallest numbers entered.
#include <stdio.h>

int main() {
    int n,a=1,m=0,me=0;
        while (a==1){
        printf("Enter a number\n");
        scanf("%i",&n);
        if(n<0){
            a++;
        }
        if(n>m){
            m=n;
        }
        if(n<me)
            me=n;
        }
    
    printf("The bigger is %i and the smaller is %i",m,me);
}
