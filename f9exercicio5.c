//Faca um programa que leia dois valores inteiros e chame uma func¸ao que receba estes
//2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
//segunda variavel. Escreva o conteudo das 2 variaveis na tela


//Make a function that receb two numbers after chance the bigger and the smaller value.
#include <stdio.h>
int funcao(int *ponteiro,int *ponteiro1){
    if (*ponteiro>*ponteiro1)
    {
        printf("The bigger number is %i\nAnd the smaller is %i",*ponteiro,*ponteiro1);
    }
    else
    {
        printf("The bigger number is %i\nAnd the smaller is %i",*ponteiro1,*ponteiro);
    }
    
}
int main(){
    int n1,n2;
    printf("Enter a number:");
    scanf("%i",&n1);
    printf("Enter a second number:");
    scanf("%i",&n2);
    funcao(&n1,&n2); 
    }
