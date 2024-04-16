//Leia um valor de area em acres e apresente-o convertido em metros quadrados  m2 A
//formula de conversao e:  M = A ∗ 4048, 58, sendo M a area em metros quadrados e  A a
//area em acres
//Read a value in acres and show in squarle meters
#include <stdio.h>
int main(){
    float a,m;
    printf("Enter a value in acres");
    scanf("%f",&a);
    m= a*4048, 58;
    printf("This is igual %.2f meters",m);
}
