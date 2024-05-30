//Faca uma funcao que dado um caractere qualquer retorne o mesmo caractere sempre
//em maiuscula

//Make a function that receb a caractere and return this same caracter always in capital letter
#include <stdio.h>
int caractere(char c){
    if (c>='a' && c<='z')
    {
        c=c-32;
        printf("This is igual %c capital letter:",c);
        return 0;
    }
    printf("ERROR:");
}
    int main(){
        char c;
        printf("Enter a capital:");
        scanf(" %c",&c);
        caractere(c);
    }
