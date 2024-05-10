//Faca um programa que receba do usuario uma string. O programa imprime a string sem 
//suas vogais.

//Make a program reeceb a string and show the string without your vowel
#include <stdio.h>
    int main(){
        char v[100];
        int a=0;
        printf("Enter something:");
        scanf("%99[^\n]", v);
        while(a<99){
            if(v[a]=='a' || v[a]=='e' || v[a]=='i' || v[a]=='o' || v[a]=='u' ){
                v[a]="/0";
            }
            a++;
        }
        printf("%s",v);
    }
