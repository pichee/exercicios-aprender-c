//Faca um programa que entao leia uma string e a imprima.

//Make a program read a string and show
#include <stdio.h>
int main(){
    char s[999];
    printf("Enter something\n");
    scanf("%999[^\n]s", s);
    printf("%s",s);
}
