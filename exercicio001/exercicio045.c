//Faca um programa para converter uma letra maiuscula em letra minuscula. Use a tabela
//ASCII para resolver o problema.

// Make  a program for converter  a  capital letter in lower letter.Use the 
//ASCII table  for resolv this problem.
#include <stdio.h>
int main(){
    char m,n;
    printf("put a capital letter ");
    scanf("%c",&m);
    n = (m >= 'A' && m <= 'Z') ? m + 32 : m;
    printf("This letter is  %c in lower letter",n);
    
}
