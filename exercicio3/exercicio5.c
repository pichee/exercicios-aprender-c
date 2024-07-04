//Faca um programa que peca ao usuario para digitar 10 valores e some-os. 

//make a program the user enter 10 numbers and you show the addition;
#include <stdio.h>
int main(){
    int a=0;
    int n,d;
        while(a <=10){
            printf("Enter a  whole number\n");
            scanf("%i",&d);
            n=n+d;
            a++;
        }
        printf("The addition is %i",n);
}
