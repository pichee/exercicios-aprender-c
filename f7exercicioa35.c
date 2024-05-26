//Faca uma funcao nao-recursiva que receba um numero inteiro positivo  n e retorne o fatorial quadruplo
//desse numero. O fatorial quadruplo de um numero n e dado por:

//Make a function don't recursivaand show the four factorial this number:

#include <stdio.h>
    int recurso(float n){
        float s=n;
        float a=1;
        float a1=n;
        float n1=0;
        float s1=1;
        while(a<n){
            s=s*a;
            a++;
           }
         n1=n*2;
        while(a1<=n1){
            s1=s1*a1;
            a1++;
           }
         s=s1/s;
         printf("%.2f",s);   
        }
        
    
    int main(){
        float a;
        printf("Enter a number:");
        scanf("%f",&a);
        recurso(a);
        
    }
