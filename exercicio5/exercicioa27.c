//Faca um programa que, dada uma string, diga se ela e um palındromo ou nao. Lem
//brando que um pal´ındromo e uma palavra que tenha a propriedade de poder ser lida
//tanto da direita para a esquerda como da esquerda para a direita.

//Make a program verify if a word is a palındromo or not.
#include <stdio.h>
    int main(){
        char v[100];
        int a=0,l=0;
        printf("Enter a word:");
        scanf("%99[^\n]",v);
        while(v[a]!='\0'){
            a++;
            l++;
        }
        l--;
        a=0;
        while(a!=l){
            if(v[a]==v[l]){
                a++;
                l--;
            }else{
                break;
        }}
        if(a==l){
            printf("This word is a palındromo");
        }else{
            printf("This word isn't a palındromo");
        }
    }
