//Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
//numeros forem iguais, imprima a mensagem Numeros iguais.

//Make a program show the bigger number and if they ate igual show "this numbers are igual"
#include <stdio.h>
    int main(){
        float n,n1;
        printf("Enter a number ");
        scanf("%f",&n);
        printf("Enter other number ");
        scanf("%f",&n1);
        if((n > n1) && (n != n1)){
            printf("%.2f is bigger than %.2f",n,n1);
            }
        if((n1 > n) && (n != n1)){
            printf("%.2f is bigger than %.2f",n1,n);
            }
        if(n1==n){
            printf("This numbers are igual");
         }
    }
