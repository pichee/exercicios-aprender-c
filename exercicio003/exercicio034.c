//Faca um programa que calcule o menor numero divisıvel por cada um dos numeros de 1
//a 20? Ex: 2520 e o menor numero que pode ser dividido por cada um dos numeros de 1
//a 10, sem sobrar resto.

//Make a program show the multiple the a number in 1 between a 20.
#include <stdio.h>
int main(){
    int a=1,n;
    printf("enter a whole positive whole number");
    scanf("%i",&n);
    while(a<=20){
        if(n%a==0){
            printf("this number is division by %i\n",a);
        }
        a++;
    }
}
