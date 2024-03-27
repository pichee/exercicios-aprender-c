//Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula ´
//de conversao˜ e:´ L =K/0,45 , sendo K a massa em quilogramas e L a massa em libras.
#include <stdio.h>
int main(){
    float l,q;
    printf("digite o valor em quilogramas ");
    scanf("%f",&q);
    l=q/0.45;
    printf("esse valor convertido em libras é %.2f",l);
}
