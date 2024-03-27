//Leia um valor de volume em litros e apresente-o convertido em metros cubicos  m3 A
//formula de convers ´ ao˜ e: ´ M =L1000 , sendo L o volume em litros e M o volume em metros cubicos. 
#include <stdio.h>
int main(){
    float m,l;
    printf("digite o volume em litros ");
    scanf("%f",&l);
    m=l/1000;
    printf("Essa quantidade de livros equivale a %f metros cubicos",m);
}
