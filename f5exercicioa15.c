//Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em
//letras minusculas. Dica: some 32 dos caracteres cujo codigo ASCII esta entre 65 e 90.

//Read a program for converter letters uppercase for letters lowercase.

#include <stdio.h>
    int main(){
        char v[100];
        int a=0;
        printf("Enter something:");
        scanf("%99[^\n]",v);
        while(a<99){
            if(v[a]>='A' && v[a]<='Z'){
                v[a]+=32;
            }
            a++;
        }
        printf("%s",v);
    }
