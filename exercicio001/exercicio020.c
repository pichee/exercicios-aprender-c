//Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula
//de conversao e: L =K/0,45 , sendo K a massa em quilogramas e L a massa em libras.
//Read a value in kilogram and show in lb
#include <stdio.h>
int main(){
    float l,q;
    printf("How much in kilogram");
    scanf("%f",&q);
    l=q/0.45;
    printf("This is igual %.2f lb",l);
}
