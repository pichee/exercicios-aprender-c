//Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
//formula de convers ´ ao˜ e:´ C = K − 273.15, sendo C a temperatura em Celsius e K a
//temperatura em Kelvin.
//Read a temperature in Kelvin and show in Celsius:
#include <stdio.h>
int main(){
    float k,c;
    printf("Enter the temperature in Kelvin: ");
    scanf("%f",&k);
    c= k-273.15;
    printf("This temperature is igual %.2f Celsius",c);
}
