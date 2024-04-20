//Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
//na ordem inversa.

//Read a vector 6 whole numbers and showing the values reads in order decrescent

#include <stdio.h>
    int main(){
        int v[6];
        int a;
        for(a=0;a<6;a++){
            printf("Enter a number:");
            scanf("%i",&v[a]);
        }
        for(a=5;a>-1;a--){
            printf("%i\n",v[a]);
        }
    }
