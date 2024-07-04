//Escreva um programa que recebe do usuario uma string S, um caractere C, e uma
//posicao I e devolve o ındice da primeira posicao da string onde foi encontrado o caractere 
//C. A procura deve comecar a partir da posicao I.

//Read a program what receb the user a string S,a caractere c,and a positon and index where be found a caractere
//C.the found need is the first position

#include <stdio.h>
    int main(){
        char v[100],c;
        int p=0,a;
        printf("Enter a string:");
        scanf("%99[^\n]",v);
        getchar();
        printf("What char you want:");
        scanf(" %c",&c);
        printf("What position  you can star:");
        scanf("%i",&p);
        p=p-1;
        while(a==0){
            if(v[p]==c){
                a++;
            }else{
                p++;
            }
            if(p>100){
                a=2;
            }
        }
        if(a==1){
            printf("This letter is found in %i position",p+1);
            
        }
        else{
            printf("This letter is'nt found ");
        }
        
    }
