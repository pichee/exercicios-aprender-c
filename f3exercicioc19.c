//Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saıda
//cada um dos algarismos que compoem o numero 
//Read a number between 100 and 999 and show the numerals the participate about the number
#include <stdio.h>
    int main(){
        int n,a,a1;
        printf("Enter a number between 100 and 999\n");
        scanf("%i",&n);
        a=n;
        a1=n;
        if(n<100){
            printf("Error");
        }else{
            n=(n/100);
            printf("%i\n",n);
            a=(a/10)%10;
            printf("%i\n",a);
            a1=a1%10;
            printf("%i\n",a1);
        
    }}
