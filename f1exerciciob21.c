//Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula
//de conversao e:  K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
//Read a value in lb and show in kilograms
#include <stdio.h>
    int main(){
    float k,l;
        printf("How much lb: ");
        scanf("%f",&l);
        k=l*0.45;
        printf("This is igual %.2f kilograms",k);
    }
