//Make a program that receives two numbers. Calculate and show:
//• the sum of the even numbers in this range of numbers, including the numbers entered;
//• the multiplication of the odd numbers in this range, including the numbers entered;

//Faca um programa que receba dois numeros. Calcule e mostre:
//• a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados;
//• a multiplicac¸ao dos numeros ımpares desse intervalo, incluindo os digitados;
#include <stdio.h>

int main() {
    int n,n1,a=1,s=0;
    printf("Enter a number:");
    scanf("%i",&n);
    printf("Enter a number:");
    scanf("%i",&n1);
    if(n>n1){
        n=a;
        n=n1;
        n1=a;

    }
        while (n<=n1)
        {
            if(n%2==0){
                s+=n;
            }
            else{
                a*=n;
            }
            n++;
        }
        
    
    printf("The addion of whole numbers par is %i and the multiple of the odd is %i",s,a);
}
