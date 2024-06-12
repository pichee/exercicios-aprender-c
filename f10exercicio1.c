//Crie um programa que:
//(a) Aloque dinamicamente um array de 5 numeros inteiros, 
//(b) Peca para o usuario digitar os 5 numeros no espac¸o alocado
//(c) Mostre na tela os 5 numeros
//(d) Libere a memoria alocada

//Make a program that 
//enter a array with int  five elementos
//the user enter the values you show the values and relase the memory

#include <stdio.h>
int main(){
    int valeu[5],i=0;
    for(i=0;i<5;i++){
    printf("Enter a value:");
    scanf("%i",&valeu[i]);
    }
    i=0;
    int *ponteiro=&valeu[i];
    for(i=0;i<5;i++){
    printf("%i ",valeu[i]);
    }
    free(ponteiro);
    }
    
    