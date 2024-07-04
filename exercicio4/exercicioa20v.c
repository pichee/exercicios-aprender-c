//Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um
//vetor com 10 posicoes. Preencha um segundo vetor apenas com os numeros ımpares
//do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

//read a vetor by ten numbers and in ohter vector show the first odd number there


 

#include <stdio.h>
    int main(){
        int a=0,v[10],vi[10];
        while (a<10)
        {
            printf("Enter a number:");
            scanf("%i",&v[a]);
            if(v[a]>50 || v[a]<0){
                printf("Trying again\n");
            }
            else{
                a++;
            }
        }
        for (a=0;a<10;a++)
        {
            if(v[a]%2==0){
                vi[a]=v[a]+1;
            }
            else{
                vi[a]=v[a]+2;
            }
        }
            for (a=0;a<10;a++)
        {   
            printf("%i %i\n",v[a],vi[a]);
        
    }}
