//Leia um numero real e imprima a quinta parte deste numero;
//Read a float number and show the fifth part this number;
#include <stdio.h>
int main(){
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    n=n/5;
    printf("The fifth part is %.2f",n);
}
