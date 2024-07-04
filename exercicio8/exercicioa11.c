//Escreva uma funcao recursiva que exibe todos os elementos em um array de inteiros,
//separados por espaco.

//Make a function show the elements a array
#include <stdio.h>
    int ele(int m,int array[m]){
        int i=0;
        while (i<m)
        {
            printf("Enter number:");
            scanf("%i",&array[i]);
            i++;
        }
        i=0;
    while (i<m)
    {
        printf("%i ",array[i]);
        i++;
    }
    }
    int main(){
        int a;
        printf("Enter how much numbers do you want in array:");
        scanf("%i",&a);
        int m[a];
        ele(a,m);
    }
