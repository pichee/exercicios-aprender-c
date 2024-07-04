//Faca uma funcao que receba um vetor de inteiros e retorne o maior valor.

//Make a program show the bigger number 
#include <stdio.h>
    int bigger(int n[]){
        int a=0,b=n[0];
        while(a<10){
            if(b<n[a]){
                b=n[a];
            }
            a++;
        }
        printf("The bigger number is %i",b);
    }
    int main(){
        int n[10],a;
        while(a<10){
            printf("Enter a number:");
            scanf("%i",&n[a]);
            a++;
        }
        bigger(n);
        }
