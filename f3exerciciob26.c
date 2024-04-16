//Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 apos um numero
//dado.

//Make an algorithm that finds the first multiple of 11, 13, or 17 after a given number.
#include <stdio.h>
int main(){
    int n,a=1,d,s=0,d1;
    printf("Enter a number\n");
    scanf("%i",&n);
    
    while(a==1){
        if(n%11==0){
            printf("This  first is multiple of 11 and the number is %i",n);
            a++;
        }else if(n%13==0){
            printf("This  first is multiple of 13 and the number is %i",n);
            a++;
        }else if(n%17==0){
            printf("This  first is multiple of 17 and the number is  %i",n);
            a++;
        }
        n++;
            
        }}
