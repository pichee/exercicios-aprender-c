//Leia um numero real e imprima a quinta parte deste numero;
//Read a float number and show the fifth part this number;
#include <stdio.h>
int main(){
    float numero;
    printf("Enter a number:");
    scanf("%f",&numero);
    if (numero!=0){
    numero=numero/5;
    }
    else{
    printf("the number zero is not division");
    return 0;
    }
    printf("The fifth part is %.2f",numero);
}