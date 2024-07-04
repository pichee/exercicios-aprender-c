//Faca um programa que receba tres numeros e mostre-os em ordem crescente.
//Make a program when you show in crescent order.
#include <stdio.h>
    int main(){
        float n,n1,n2;
        printf("Enter a number\n");
        scanf("%f",&n);
         printf("Enter a number\n");
        scanf("%f",&n1);
         printf("Enter a number\n");
        scanf("%f",&n2);
        if(n1>n&&n>n2){
            printf("The ascending order is %.2f %.2f %.2f",n1,n,n2);
        }
        if(n2>n&&n>n1){
            printf("The ascending order is %.2f %.2f %.2f",n2,n,n1);
        }
        if(n1>n2&&n2>n){
            printf("The ascending order is %.2f %.2f %.2f",n1,n2,n);
        }
        if(n2>n1&&n1>n){
            printf("The ascending order is %.2f %.2f %.2f",n2,n1,n);
        }
        if(n>n1&&n1>n2){
            printf("The ascending order is %.2f %.2f %.2f",n,n1,n2);
        }
        if(n>n2&&n2>n1){
            printf("The ascending order is %f-%f,-%f",n,n2,n1);
        }}
