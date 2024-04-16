//Leia um valor de comprimento em centımetros e apresente-o convertido em polegadas.
//A formula de conversao e:  P =C/2,54 , sendo C o comprimento em centımetros e P o comprimento em polegadas.
//Read a value in centimeters and show in inches
#include <stdio.h>
int main(){
    float c,p;
    printf("How much centimeters");
    scanf("%f",&c);
    p=c/2.54;
    printf("This value is igual %.2f inches",p);
}
