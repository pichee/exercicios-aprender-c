//Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII 
//de cada caractere da palavra. Imprima a string resultante.

//Make a program read a word (max 50 leters)and add 1 in value of ASCII
//each caractere from the word

#include <stdio.h>
    int main(){
        char v[51];
        int a=0;
        printf("Enter a word:\n");
        scanf("%50[^\n]",v);
        while(a<50){
            v[a]+=1;
            a++;
        }
        printf("%s",v);}
        
