//Leia um valor de area em metros quadrados m2 e apresente-o convertido em acres. A
//formula de convers ´ ao˜ e: ´ A = M ∗ 0, 000247, sendo M a area em metros quadrados e ´ A
//a area em acres.
#include <stdio.h>
    int main(){
        float m,a;
        printf("digite o valor em metros quadrados ");
        scanf("%f",&m);
        a= m*0.000247;
        printf("esse valor convertido para acres e igual a %f",a);
    }
