//Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula ´
//de conversao˜ e:  K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
#include <stdio.h>
    int main(){
    float k,l;
        printf("digite o valor massa em libras ");
        scanf("%f",&l);
        k=l*0.45;
        printf("Esse valor em quilogramas é igual a %.2f",k);
    }
