//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
//formula de conversao e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
//temperatura em Kelvin.
//Read a temperature in Celsius and show in kelvin:
#include <stdio.h>
int main(){
    float c,k;
    printf("Enter a temperature in Celsius");
    scanf("%f",&c);
    k= c+273.15;
    printf("this temperature is igual %.2f Kelvin",k);
}
