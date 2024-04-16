//Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula
//de conversao e: J =M/0,91 , sendo J o comprimento em jardas e M o comprimento em metros.
//Read a value in meters and show in yards;
#include <stdio.h>
 int main(){
    float j,m;
    printf("How much meters do have:");
    scanf("%f",&m);
    j=m/0.91;
    printf("This is igual %.2f yards",j);
 }
