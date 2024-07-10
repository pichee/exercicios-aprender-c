//Faca um programa que leia dois vetores de 10 posicoes e calcule outro vetor contendo,
//nas posicoes pares os valores do primeiro e nas posicoes impares os valores do segundo.

//Make a program read two vetores in the pair possitions the value of the first vectore
//and in the odd the second vectore.

#include <stdio.h>
    int main(){
        int a,v[10],vi[10],s=0,si=0,vp[10];
        for(a=0;a<10;a++){
            printf("Enter a number:");
            scanf("%i",&v[a]);
            s+=v[a];
        }
        for(a=0;a<10;a++){
            printf("Enter a number:");
            scanf("%i",&vi[a]);
            si+=vi[a];
        }
        for(a=0;a<10;a++){
            if(a==0 || a%2==0){
                vp[a]=s;
            }
            else{
                vp[a]=si;
            }
        }
        for(a=0;a<10;a++){
            printf("%i\n",vp[a]);

    }}
