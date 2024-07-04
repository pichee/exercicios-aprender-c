//Faca um programa que receba duas frases distintas e imprima de maneira invertida,
//trocando as letras A por *.

//Make a program read two phrases and showing inverted way and chance the A for *
#include <stdio.h>
int main(){
    char v[40],v1[40];
    int a=0;
    printf("Enter a phrase:");
    scanf("%39[^\n]",v);
    getchar();
    printf("Enter other phrase:");
    scanf("%39[^\n]",v1);
    for (a = 0; a < 40; a++)
    {
        if (v[a]=='A')
        {
            v[a]='*';
        }
        if (v1[a]=='A')
        {
            v1[a]='*';
        }
        
    }
    printf("%s\n",v1);
    printf("%s",v);
    

    

}
