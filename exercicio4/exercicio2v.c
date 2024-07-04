//Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos

//Make a program read 6 whole numbers and showing.
#include <stdio.h>
int main(){
    int v[6];
    int a;
    for(a=0; a < 6 ;a++){
        printf("Enter a number:");
        scanf("%i",&v[a]);
    }
    a=0;
    while (a<6)
    {
    printf("%i\n",v[a]);
    a++;
    }
    
}
