//Leia um valor de volume em litros e apresente-o convertido em metros cubicos  m3 A
//formula de conversao e: M =L1000 , sendo L o volume em litros e M o volume em metros cubicos. 
#include <stdio.h>
int main(){
    float m,l;
    printf("Enter a value in liters");
    scanf("%f",&l);
    m=l/1000;
    printf("This is igual %.2f cubic meters",m);
}
