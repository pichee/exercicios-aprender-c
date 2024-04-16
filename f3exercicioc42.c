//Faca um programa que leia um conjunto nao determinado de valores, um de cada vez, e
//escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
//a entrada de dados com um valor negativo ou zero.

//you need calculate two resisturs the program finished when
//the formula is zero
#include <stdio.h>
       int main(){
                int r=1,r1,r2;
                while (r!=0)
                { 
                printf("Enter  the value of r1:");
                scanf("%i",&r1);
                printf("Enter  the value of r2:");
                scanf("%i",&r2);
                    r = (r1*r2)/(r1+r2);
                        if(r!=0){
                        printf("trying again\n");
                    }
                  
                }
                printf("congradulations this can be the result");}
