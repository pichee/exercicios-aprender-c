//Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
//alfabetica. Dica: ‘a’ e menor do que ‘b’

//Read a program read two words and tell how star in the alphabetic order: tip(a is smaller than b);
#include <stdio.h>
    int main(){
        char p[100];
        char p1[100];
        int a=0,s=0;
        printf("Enter a word:");
        scanf("%99[^\n]",p);
        getchar();
        printf("Enter a other word:");
        scanf("%99[^\n]",p1);
        while(s==0){
            if(p[a]==p1[a]){
                a++;
            }
            else if(p[a]<p1[a]){
            printf("The first word is %s",p);
            s++;
            }else{
                printf("The first word is %s",p1);
                s++;
            }
        }
        
        
    }
