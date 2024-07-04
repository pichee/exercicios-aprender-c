//Escreva um programa que declare um array de inteiros e um ponteiro para inteiros.
//Associe o ponteiro ao array. Agora, some mais um (+1) a cada posicao do array usando o
//ponteiro (use*).

//Make a arrat that use a pointer for add more 1 each.

#include <stdio.h>
    int main(){
        int v[5],i=0;
        for (i = 0; i < 5; i++)
        {
            printf("Enter a number:");
            scanf("%i",&v[i]);
        }
        int um=1,*use=&um;
        i=0;
        for (i = 0; i < 5; i++)
        {
            printf("%i\n",v[i]+*use);
        }
        
                }
