//Escreva uma funcao recursiva que determine quantas vezes um dıgito K ocorre em um
//numero natural N. Por exemplo, o dıgito 2 ocorre 3 vezes em 762021192.

//see how many times a number show in a number:

#include <stdio.h>
    int funcao(int number,int tenta){
        int c=0;
        while (number>=10)
        {
            if (number%10==tenta)
            {
                c++;
            }
            number = number/10;
        }
        if (number==tenta)
        {
                c++;
         }
        printf("%i",c);
        
    }
    int main(){
        int n,tenta;
        printf("Enter a number:");
        scanf("%i",&n);
        printf("What number do you want see in this number:");
        scanf("%i",&tenta);
        funcao(n,tenta);
    }
