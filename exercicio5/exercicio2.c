//Crie um programa que calcula o comprimento de uma string (nao use a funcao strlen). 

//Make a program that calculate the how many caracteres have the string
#include <stdio.h>
int main(){
    char v[100];
    int c=0,i;
    printf("Enter something\n");
    scanf("%100[^\n]",v);
    fflush(stdin);
    printf("%s\n",v);
 for (i = 0; v[i] != '\0'; i++)
{
    c++;
}

    printf("The string have %i caracteres",c);
}
