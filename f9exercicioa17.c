//Escreva uma funcao que dado um numero real passado como parametro, retorne a parte 
//inteira e a parte fracionaria deste numero. Escreva um programa que chama esta funcao.
//Prototipo:
//void frac(float num, int* inteiro, float* frac);

//Read a function that receb a float number and return the whole part and the float part the program must following:
//void frac(float num, int* inteiro, float* frac);
#include <stdio.h>
    void frac(float num, int* inteiro, float* frac){
        printf("The whole part is %i\n",*inteiro);
        *frac=*frac-num;
        printf("The odd part is %.3f",*frac);
    }
    int main(){
        float n;
        int inteiro;
        printf("Enter a number:");
        scanf("%f",&n);
        inteiro=n;
        frac(inteiro,&inteiro,&n);
    }
