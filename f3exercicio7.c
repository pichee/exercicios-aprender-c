//Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua
//media.
//make a program that shoe the media and ingoring the negatives numbers  
#include <stdio.h>
    int main(){
        int n,a,a1;
        float d,t;
        while(a<10){
        printf("Enter a while number\n");
        scanf("%i",&n);
        if(n>=0){
            d=d+n;
            a1=a1+1;
        }
        a++;
        t=d/a1;
    }
    
    printf("Your media is %.2f",t);
    }
