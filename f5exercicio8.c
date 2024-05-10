//Faca um programa que conte o numero de 1’s que aparecem em um string. Exemplo: 
//0011001 -> 3

//Make a program that cont how many numbers one the string have;

#include <stdio.h>
    int main(){
        char v[100];
        int a=0,um=0;
        printf("Enter Something:");
        scanf("%99[^\n]",v);
        while(a<100){
            if(v[a]=='1'){
                um++;
            }
            a++;
        }
        printf("In this string the number one it's found %i times",um);
    }
