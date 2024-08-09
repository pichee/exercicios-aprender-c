//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
//formula de conversao e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
//temperatura em Kelvin.
//Read a temperature in Celsius and show in kelvin:
#include <stdio.h>
int conversao_temperaturas(float a){
    float result=0;
    result=a+273.15;
    return result;
}
int main(){
    float celsius,resultado;
    printf("Enter a temperature in Celsius:");
    scanf("%f",&celsius);
    resultado=conversao_temperaturas(celsius);
    printf("this temperature is igual %.2f Kelvin",resultado);
}
