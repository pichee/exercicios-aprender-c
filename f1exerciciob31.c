//Leia um numero inteiro e imprima o seu antecessor e o seu sucessor
//read  a whole number and showing your predecessor and successor.
#include <stdio.h>
    int main(){
        int n,n1,n2;
        printf("type a whole number ");
        scanf("%i",&n);
        n1=n-1;
        n2=n+1;
        printf("The predecessor of this number is %i and successor is %i",n1,n2);
    }
