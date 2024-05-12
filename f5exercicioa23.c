//Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e imprima
//o segmento S[I..J].

//Read a string and showing the segment use the ascii table
#include <stdio.h>
    int main(){
        char c,l,a;
        printf("Whats is the first caractere:");
        scanf(" %c",&c);
        getchar();
        printf("Whats is the last caractere:");
        scanf(" %c",&l);
        if(c>l){
            a=c;
            c=l;
            l=a;

        }
        while(c!=l){
            printf("%c\n",c);
            c++;
        }
         printf("%c",c);
    }
