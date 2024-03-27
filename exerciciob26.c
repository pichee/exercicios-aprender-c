//Leia um valor de area em metros quadrados ´ m2 e apresente-o convertido em hectares.
//A formula de conversao e:´ H = M ∗ 0, 0001, sendo M a area em metros quadrados e ´ H
//a area em hectares. 
#include <stdio.h>
int main(){
    float m2,h;
    printf("Put the  value in square meters ");
    scanf("%f",&m2);
    h= m2*0.0001;
    printf("this value is equals  %.2f hectares",m2);
}
