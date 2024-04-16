//Leia um valor de area em metros quadrados m2 e apresente-o convertido em acres. A
//formula de conversao e:A = M ∗ 0, 000247, sendo M a area em metros quadrados e A
//a area em acres.
//Read a value in squarle meters and show in acres
#include <stdio.h>
    int main(){
        float m,a;
        printf("Enter a value in squarle meters");
        scanf("%f",&m);
        a= m*0.000247;
        printf("This is igual %.2f acres",a);
    }
