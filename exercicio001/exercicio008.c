//Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
//formula de convers ´ ao˜ e:´ C = K − 273.15, sendo C a temperatura em Celsius e K a
//temperatura em Kelvin.
//Read a temperature in Kelvin and show in Celsius:
#include <stdio.h>
int convertetemperaturas(float a){
    int resultado=0;
 resultado=a-273.15;
 return resultado;
}
int main(){
    float kelvin,resultado=0;
    printf("Enter the temperature in Kelvin: ");
    scanf("%f",&kelvin);
    resultado=convertetemperaturas(kelvin);
    printf("This temperature is igual %.2f Celsius",resultado);
}