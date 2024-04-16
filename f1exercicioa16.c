//Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
//A formula de conversao˜ e:´ C = P ∗ 2, 54, sendo C o comprimento em centımetros e P o
//comprimento em polegadas.
//Read a value in inches and show in centimeter
#include <stdio.h>
int main(){
    float p,c;
    printf("Enter how much inches );
    scanf("%f",&p);
    c=p*2.54;
    printf("This is igual %.2f centimeters",c);
}
