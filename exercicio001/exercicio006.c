//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
//A formula de conversao e:F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
//e C a temperatura em Celsius.
//Read a temperature in Celsius and show in Fahrenheit

#include <stdio.h>
int convertordetemperaturas(float celsius){
    float fanhereit=0;
 fanhereit=celsius*(9/5)+32;
 return fanhereit;
 }
int main()
{
    float result,temperatura;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&temperatura);
    result=convertordetemperaturas(temperatura);
    printf("This temperature is igual %.2f Fahrenheit",result);

    return 0;
}