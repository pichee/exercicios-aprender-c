//Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula ´
//de conversao˜ e: ´ M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
//em metros
#include <stdio.h>
    int main(){
        float m,j;
        printf("qual o comprimento em jardas ");
        scanf("%f",&j);
        m=0.91*j;
        printf("essa quantida de jardas equivale a %.2f metros",m);
    }
