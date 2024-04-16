//Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a
//soma de todos os seus algarismos. Por exemplo, ao numero 251 correspondera o valor 
//8 (2 + 5 + 1). Se o numero lido nao for maior do que zero, o programa terminar a com a
//mensagem “Numero inv ´ alido”.

//Make a program that soma the numbers exemplo
//987=(9+8+7),if the number is zero show invalid number
#include <stdio.h>

int main()
{
    int n,a,s;
    printf("Enter a number bigger than zero");
    scanf("%i",&n);
    if(n>0){
        while(n>0){
            a=n%10;
            s=s+a;
            n=n/=10;
        }
           printf("The soma is %d\n",s);
    } else {
        printf("invalid number\n");
    }
}
