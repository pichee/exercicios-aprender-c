//Leia um valor de area em hectares e apresente-o convertido em metros quadrados m2
//A formula de conversao e:  M = H ∗ 10000, sendo M a area em metros quadrados e H
//a area em hectares. 
//Read a value from area in hectares and show convert in square meters
//the recipe formula the  use is :M = H ∗ 10000, be M the area in square meter and
//H a area in hectares.
#include <stdio.h>
int main(){
    float m,h;
    printf("How is the value in hectares");
    scanf("%f",&h);
    m=h* 10000;
    printf("This value equivalent a %.2f m",m);
}
