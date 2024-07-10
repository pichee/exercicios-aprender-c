//Faca um algoritmo que calcule o IMC de uma pessoa e mostre sua classificacao de
//acordo com a tabela abaixo:
//Just make the imc
#include <stdio.h>
    int main(){
        float t,w;
        printf("What is your tall?\n");
        scanf("%f",&t);
        printf("What is your weight?\n");
        scanf("%f",&w);
        t=w/(t*t);
        if(t<=18.5){
            printf("under weight");
        }else if(t>18.5&&t<=24.9){
            printf("healthy");
        }else if(t>25&&t<=29.9){
            printf("excess weight");
        }else if(t>30&&t<=34.9){
            printf("obesity dee grade 1");
        }else if(t>35&&t<=39.9){
            printf("obesity dee grade 2");
        }else{
            printf("obesity dee grade 3");
        }
    }
