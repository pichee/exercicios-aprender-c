//Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula ´
//de conversao˜ e: ´ M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
//em metros
//Read a value in yards and show in meters
#include <stdio.h>
    int main(){
        float m,j;
        printf("How much yards:");
        scanf("%f",&j);
        m=0.91*j;
        printf("This is igual %.2f meters",m);
    }
