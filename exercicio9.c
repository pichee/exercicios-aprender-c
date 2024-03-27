//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
//formula de conversao e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
//temperatura em Kelvin.
#include <stdio.h>
int main(){
    float c,k;
    printf("digite a temperatura em Celsius");
    scanf("%f",&c);
    k= c+273.15;
    printf("essa temperatura em graus Kelvin é igual a %.2f",k);
}
