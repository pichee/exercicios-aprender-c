//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
//A formula de conversao e:C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
//e F a temperatura em Fahrenheit.
//Read a temperature in Fahrenheit and show in Celsius

#include <stdio.h>

int main()
{
    float fahrenheit,celsius;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&fahrenheit,celsius);
    celsius=5*(fahrenheit-32)/9;
    printf("this temperature is igual %.2f Celsius",celsius);
    return 0;
}