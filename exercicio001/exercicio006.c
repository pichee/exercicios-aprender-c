//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
//A formula de conversao e:F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
//e C a temperatura em Celsius.
//Read a temperature in Celsius and show in Fahrenheit

#include <stdio.h>

int main()
{
    float f,c;
    printf("Enter the temperature in Celsius ");
    scanf("%f",&c);
    f=c*(9.0/5.0)+32.0;
    printf("This temperature is igual %.2f Fahrenheit",f);

    return 0;
}
