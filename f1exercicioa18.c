//Leia um valor de volume em metros cubicos m3 e apresente-o convertido em litros. A
//formula de conversao  e: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
//metros cubicos
//Read a value in cubic meters abd show in liters
#include <stdio.h>
    int main(){
        float mc,l;
        printf("How much cubics meters do you have ");
        scanf("%f",&mc);
        l=mc*1000;
        printf("this is igual %.2f liters",l);
        
    }
