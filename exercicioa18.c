//Leia um valor de volume em metros cubicos ´ m3 e apresente-o convertido em litros. A
//formula de conversao  e:´ L = 1000 ∗ M, sendo L o volume em litros e M o volume em
//metros cubicos
#include <stdio.h>
    int main(){
        float mc,l;
        printf("digite o valor em metros cubicos ");
        scanf("%f",&mc);
        l=mc*1000;
        printf("esse valor corresponde a %.2f litros",l);
        
    }
