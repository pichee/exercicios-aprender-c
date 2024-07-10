//Crie um programa que contenha uma funcao que permita passar por parametro dois
//numeros inteiros A e B. A funcao dever a calcular a soma entre estes dois numeros e
//armazenar o resultado na variavel A. Esta funco n ao dever a possuir retorno, mas devera
//modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.

//Make a program that have a function and add two numbers.
#include <stdio.h>
int funcao(int *ponteiro,int *ponteiro2){
    int aux=*ponteiro+*ponteiro2;
    *ponteiro=aux;
     printf("The aswer is :%i",*ponteiro);
}
int main(){
    int g,h;
    printf("Enter number:");
    scanf("%i",&g);
    printf("Enter number:");
    scanf("%i",&h);
    funcao(&g,&h);
   
}
