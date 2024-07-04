//faca um programa que leia um nome e imprima as 4 primeiras letras do nome.

//Make a program read just the firsts for letter the name

#include <stdio.h>
    int main(){
        char v[5];
        printf("Enter the name\n");
        scanf("%5[^\n]",v);
        printf("%s",v);
    }
