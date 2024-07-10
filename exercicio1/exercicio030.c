//Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente
//em dolares. 

//Read a value in real and the dolar exchance rate.Next,showing  the value in   corresponding
//in dolar.
#include <stdio.h>
    int main(){
        float r,d,c;
        printf("How many reals do you have ");
        scanf("%f",&r);
        printf("How is current dolar exchance rate ");
        scanf("%f",&d);
        c=r/d;
        printf("You can buy %.2f dollars with your reals",c);
    }
