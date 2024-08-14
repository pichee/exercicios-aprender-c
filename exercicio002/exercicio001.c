//Make a program to receb two values in show the bigger.
//Faca um programa que receba dois numeros e mostre qual deles e o maior
#include <stdio.h>
int maior(float numero1, float numero2){
   if (numero1>numero2){
            return printf("The number %.2f is bigger than %.2f",numero1,numero2);
        }else{
            return printf("The number %.2f is bigger than %.2f",numero2,numero1);
        }}

    int main(){
        float numero1,numero2;
        printf("Enter  a number:");
        scanf("%f",&numero1);
        printf("Enter other number:");
        scanf("%f",&numero2);
        maior(numero1,numero2);
        }