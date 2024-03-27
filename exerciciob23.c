//Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula ´
//de conversao˜ e: ´ J =M/0,91 , sendo J o comprimento em jardas e M o comprimento em metros.
#include <stdio.h>
 int main(){
    float j,m;
    printf("Qual e o valor em metros");
    scanf("%f",&m);
    j=m/0.91;
    printf("Esse valor convertido em jardas e igual a %.2f",j);
 }
