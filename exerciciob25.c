//Leia um valor de area em acres e apresente-o convertido em metros quadrados ´ m2 A
//formula de conversao e: ´ M = A ∗ 4048, 58, sendo M a area em metros quadrados e ´ A a
//area em acres
#include <stdio.h>
int main(){
    float a,m;
    printf("Digite seu valor em acres ");
    scanf("%f",&a);
    m= a*4048, 58;
    printf("esse valor convertido em metros quadrados é aproximadamente igual a %.2f",m);
}
