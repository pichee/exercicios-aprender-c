//Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
//vez deve usar a estrutura de repetic¸ao˜ for, a segunda while, e a terceira do while.

//Use the three looping options and make they show the sequence 1 between 100;
#include <stdio.h>
    int main(){
        int t,t1,t2;
        int a=1;
        int a1=1;
        int a2=1;
        for(;a<=100;){
            t=t+1;
            printf("\n%i",t);
            a++;
           
        }
        printf("\n\n\n");
        while(a1<=100){
            t1=t1+1;
            printf("\n%i",t1);
            a1++;
           
        }
        printf("\n\n\n");
        do{
            t2++;
            printf("\n%i",t2);
            a2++;
        }while(a2<=100);
    }
    
