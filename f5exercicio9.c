//Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
//outro caractere ‘1’.

//Make a program that replace tgee zero in a string and show other caractere.

#include <stdio.h>
    int main(){
        char v[100];
        int a=0;
        printf("Enter something:\n");
        scanf("%99[^\n]",v);
        while(a<100){
            if(v[a]=='0'){
                v[a]='1';
            }
            a++;
        }
        printf("%s\n",v);
    }
