//Crie uma funcao que recebe como parametro um numero inteiro e devolve o seu dobro.

//Make a function show the doble a inter number
#include <stdio.h>
    int dobro(int num){
        return num * 2;
    }
    int main(){
        int x=0,t;
        printf("Enter a number:");
        scanf("%i",&x);
        t =dobro(x);
        printf("The double is %i",t);
        
    }
