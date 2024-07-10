//Faca um programa que receba uma palavra e a imprima de tras-para-frente

//Make a program read a worth back to front

#include <stdio.h>
    int main(){
        char v[100];
        int a=99;
        printf("Enter a worth:\n");
        scanf("%99[^\n]",v);
        while(a>=0){
            printf("%c",v[a]);
            a--;
        }
        
    }
