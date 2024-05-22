//Faca uma funcao que receba uma temperatura em graus Celsius e retorne-a convertida
//em graus Fahrenheit. A formula de conversao e: F = C ∗ (9.0/5.0) + 32.0, sendo Fa
//temperatura em Fahrenheit e C a temperatura em Celsius

//Make a function receb a temper in Celsius and return in Fahrenheit:
#include <stdio.h>
    int conversao(float c,float f){
        f= c*(9/5)+32;
        printf("This is igual %.2f Fahrenheit.",f);
    }
    int main(){
        float a=0,aux=0,ativar=0;
        printf("Enter a temper in Celsius:");
        scanf("%f",&a);
        ativar=conversao(a,aux);
    }
