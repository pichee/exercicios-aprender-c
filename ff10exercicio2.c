//Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
//dinamica de memoria. Em seguida, leia do usu ario seus valores e imprima o vetor lido.

//Make a program that the user rrad a vevtoand make the alocation
//Next read the user your values and showing the vector read.

#include <stdio.h>
int main(){
     int s;
    printf("How much is the size the array:");
    scanf("%i",&s);
    int v[s];
    int i=0;
    for(i=0;i<s;i++){
    printf("Enter a number");
    scanf("%i",&v[i]);
}
    i=0;
    for(i=0;i<s;i++){
printf("%u\n is the memory and the value is %i\n",(unsigned int)sizeof(v[i]),v[i]);
}}