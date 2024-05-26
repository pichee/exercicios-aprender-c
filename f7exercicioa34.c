//Faca uma funcao nao recursiva que receba um numero inteiro positivo impar N e retorne 
//o fatorial duplo desse numero. O fatorial duplo  e definido como o produto de todos os 
//numeros naturais ımpares de 1 ate algum numero natural ımpar N. Assim, o fatorial duplo
//de 5 e: 5!! = 1 * 3 * 5 = 15

//Make a function receb a int number but just put odd number:

#include <stdio.h>
    int recurso(int n){
        int s=1;
        int a=0;
        while(a<=n){
            if(a%2==1){
                s=s*a;
                
            }
            a++;
        }
        printf("%i",s);
    }
    int main(){
        int a;
        printf("Enter a odd number:");
        scanf("%i",&a);
        recurso(a);
    }
