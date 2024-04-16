//Faca um programa para verificar se um determinado numero inteiro e divisıvel por 3 ou
//5.
//Make a program show if the number is division by three or five;
#include <stdio.h>
    int main(){
        int n,a,a1;
        printf("Enter a whole number");
        scanf("%i",&n);
        a=n%3;
        a1=n%5;
            if(a==0){
                printf("This number is division by 3");
                }
            if(a1==0){
                printf("This number is division by 5");
            }
            if(a==0 && a1==0){
                printf("This number dont divison by 5 or 3 :<");
            }
    }
