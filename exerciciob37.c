//Make  a program that read value the a produc and show the value with descont,have
//a descont from 12%  in cash
#include <stdio.h>
int main(){
    float p;
    printf("put the price of the product ");
    scanf("%f",&p);
    p=p-(p*0.12);
    printf("the final price is %.2f",p);
}
